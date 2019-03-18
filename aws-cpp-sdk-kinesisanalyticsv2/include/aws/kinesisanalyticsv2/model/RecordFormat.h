/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/kinesisanalyticsv2/model/RecordFormatType.h>
#include <aws/kinesisanalyticsv2/model/MappingParameters.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace KinesisAnalyticsV2
{
namespace Model
{

  /**
   * <p> For an SQL-based Amazon Kinesis Data Analytics application, describes the
   * record format and relevant mapping information that should be applied to
   * schematize the records on the stream. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/RecordFormat">AWS
   * API Reference</a></p>
   */
  class AWS_KINESISANALYTICSV2_API RecordFormat
  {
  public:
    RecordFormat();
    RecordFormat(Aws::Utils::Json::JsonView jsonValue);
    RecordFormat& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of record format.</p>
     */
    inline const RecordFormatType& GetRecordFormatType() const{ return m_recordFormatType; }

    /**
     * <p>The type of record format.</p>
     */
    inline bool RecordFormatTypeHasBeenSet() const { return m_recordFormatTypeHasBeenSet; }

    /**
     * <p>The type of record format.</p>
     */
    inline void SetRecordFormatType(const RecordFormatType& value) { m_recordFormatTypeHasBeenSet = true; m_recordFormatType = value; }

    /**
     * <p>The type of record format.</p>
     */
    inline void SetRecordFormatType(RecordFormatType&& value) { m_recordFormatTypeHasBeenSet = true; m_recordFormatType = std::move(value); }

    /**
     * <p>The type of record format.</p>
     */
    inline RecordFormat& WithRecordFormatType(const RecordFormatType& value) { SetRecordFormatType(value); return *this;}

    /**
     * <p>The type of record format.</p>
     */
    inline RecordFormat& WithRecordFormatType(RecordFormatType&& value) { SetRecordFormatType(std::move(value)); return *this;}


    /**
     * <p>When you configure application input at the time of creating or updating an
     * application, provides additional mapping information specific to the record
     * format (such as JSON, CSV, or record fields delimited by some delimiter) on the
     * streaming source.</p>
     */
    inline const MappingParameters& GetMappingParameters() const{ return m_mappingParameters; }

    /**
     * <p>When you configure application input at the time of creating or updating an
     * application, provides additional mapping information specific to the record
     * format (such as JSON, CSV, or record fields delimited by some delimiter) on the
     * streaming source.</p>
     */
    inline bool MappingParametersHasBeenSet() const { return m_mappingParametersHasBeenSet; }

    /**
     * <p>When you configure application input at the time of creating or updating an
     * application, provides additional mapping information specific to the record
     * format (such as JSON, CSV, or record fields delimited by some delimiter) on the
     * streaming source.</p>
     */
    inline void SetMappingParameters(const MappingParameters& value) { m_mappingParametersHasBeenSet = true; m_mappingParameters = value; }

    /**
     * <p>When you configure application input at the time of creating or updating an
     * application, provides additional mapping information specific to the record
     * format (such as JSON, CSV, or record fields delimited by some delimiter) on the
     * streaming source.</p>
     */
    inline void SetMappingParameters(MappingParameters&& value) { m_mappingParametersHasBeenSet = true; m_mappingParameters = std::move(value); }

    /**
     * <p>When you configure application input at the time of creating or updating an
     * application, provides additional mapping information specific to the record
     * format (such as JSON, CSV, or record fields delimited by some delimiter) on the
     * streaming source.</p>
     */
    inline RecordFormat& WithMappingParameters(const MappingParameters& value) { SetMappingParameters(value); return *this;}

    /**
     * <p>When you configure application input at the time of creating or updating an
     * application, provides additional mapping information specific to the record
     * format (such as JSON, CSV, or record fields delimited by some delimiter) on the
     * streaming source.</p>
     */
    inline RecordFormat& WithMappingParameters(MappingParameters&& value) { SetMappingParameters(std::move(value)); return *this;}

  private:

    RecordFormatType m_recordFormatType;
    bool m_recordFormatTypeHasBeenSet;

    MappingParameters m_mappingParameters;
    bool m_mappingParametersHasBeenSet;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
