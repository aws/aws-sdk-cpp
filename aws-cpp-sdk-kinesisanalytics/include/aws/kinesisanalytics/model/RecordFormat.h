/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/kinesisanalytics/KinesisAnalytics_EXPORTS.h>
#include <aws/kinesisanalytics/model/RecordFormatType.h>
#include <aws/kinesisanalytics/model/MappingParameters.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace KinesisAnalytics
{
namespace Model
{

  /**
   * <p> Describes the record format and relevant mapping information that should be
   * applied to schematize the records on the stream. </p>
   */
  class AWS_KINESISANALYTICS_API RecordFormat
  {
  public:
    RecordFormat();
    RecordFormat(const Aws::Utils::Json::JsonValue& jsonValue);
    RecordFormat& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The type of record format.</p>
     */
    inline const RecordFormatType& GetRecordFormatType() const{ return m_recordFormatType; }

    /**
     * <p>The type of record format.</p>
     */
    inline void SetRecordFormatType(const RecordFormatType& value) { m_recordFormatTypeHasBeenSet = true; m_recordFormatType = value; }

    /**
     * <p>The type of record format.</p>
     */
    inline void SetRecordFormatType(RecordFormatType&& value) { m_recordFormatTypeHasBeenSet = true; m_recordFormatType = value; }

    /**
     * <p>The type of record format.</p>
     */
    inline RecordFormat& WithRecordFormatType(const RecordFormatType& value) { SetRecordFormatType(value); return *this;}

    /**
     * <p>The type of record format.</p>
     */
    inline RecordFormat& WithRecordFormatType(RecordFormatType&& value) { SetRecordFormatType(value); return *this;}

    
    inline const MappingParameters& GetMappingParameters() const{ return m_mappingParameters; }

    
    inline void SetMappingParameters(const MappingParameters& value) { m_mappingParametersHasBeenSet = true; m_mappingParameters = value; }

    
    inline void SetMappingParameters(MappingParameters&& value) { m_mappingParametersHasBeenSet = true; m_mappingParameters = value; }

    
    inline RecordFormat& WithMappingParameters(const MappingParameters& value) { SetMappingParameters(value); return *this;}

    
    inline RecordFormat& WithMappingParameters(MappingParameters&& value) { SetMappingParameters(value); return *this;}

  private:
    RecordFormatType m_recordFormatType;
    bool m_recordFormatTypeHasBeenSet;
    MappingParameters m_mappingParameters;
    bool m_mappingParametersHasBeenSet;
  };

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws
