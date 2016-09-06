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
   * <p>Describes the data format when records are written to the destination. For
   * more information, see <a
   * href="http://docs.aws.amazon.com/kinesisanalytics/latest/dev/how-it-works-output.html">Configuring
   * Application Output</a>. </p>
   */
  class AWS_KINESISANALYTICS_API DestinationSchema
  {
  public:
    DestinationSchema();
    DestinationSchema(const Aws::Utils::Json::JsonValue& jsonValue);
    DestinationSchema& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>Specifies the format of the records on the output stream.</p>
     */
    inline const RecordFormatType& GetRecordFormatType() const{ return m_recordFormatType; }

    /**
     * <p>Specifies the format of the records on the output stream.</p>
     */
    inline void SetRecordFormatType(const RecordFormatType& value) { m_recordFormatTypeHasBeenSet = true; m_recordFormatType = value; }

    /**
     * <p>Specifies the format of the records on the output stream.</p>
     */
    inline void SetRecordFormatType(RecordFormatType&& value) { m_recordFormatTypeHasBeenSet = true; m_recordFormatType = value; }

    /**
     * <p>Specifies the format of the records on the output stream.</p>
     */
    inline DestinationSchema& WithRecordFormatType(const RecordFormatType& value) { SetRecordFormatType(value); return *this;}

    /**
     * <p>Specifies the format of the records on the output stream.</p>
     */
    inline DestinationSchema& WithRecordFormatType(RecordFormatType&& value) { SetRecordFormatType(value); return *this;}

  private:
    RecordFormatType m_recordFormatType;
    bool m_recordFormatTypeHasBeenSet;
  };

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws
