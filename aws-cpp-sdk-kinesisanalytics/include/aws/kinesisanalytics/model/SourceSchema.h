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
#include <aws/kinesisanalytics/model/RecordFormat.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kinesisanalytics/model/RecordColumn.h>

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
   * <p>Describes the format of the data in the streaming source, and how each data
   * element maps to corresponding columns created in the in-application stream.</p>
   */
  class AWS_KINESISANALYTICS_API SourceSchema
  {
  public:
    SourceSchema();
    SourceSchema(const Aws::Utils::Json::JsonValue& jsonValue);
    SourceSchema& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>Specifies the format of the records on the streaming source.</p>
     */
    inline const RecordFormat& GetRecordFormat() const{ return m_recordFormat; }

    /**
     * <p>Specifies the format of the records on the streaming source.</p>
     */
    inline void SetRecordFormat(const RecordFormat& value) { m_recordFormatHasBeenSet = true; m_recordFormat = value; }

    /**
     * <p>Specifies the format of the records on the streaming source.</p>
     */
    inline void SetRecordFormat(RecordFormat&& value) { m_recordFormatHasBeenSet = true; m_recordFormat = value; }

    /**
     * <p>Specifies the format of the records on the streaming source.</p>
     */
    inline SourceSchema& WithRecordFormat(const RecordFormat& value) { SetRecordFormat(value); return *this;}

    /**
     * <p>Specifies the format of the records on the streaming source.</p>
     */
    inline SourceSchema& WithRecordFormat(RecordFormat&& value) { SetRecordFormat(value); return *this;}

    /**
     * <p>Specifies the encoding of the records in the streaming source. For example,
     * UTF-8.</p>
     */
    inline const Aws::String& GetRecordEncoding() const{ return m_recordEncoding; }

    /**
     * <p>Specifies the encoding of the records in the streaming source. For example,
     * UTF-8.</p>
     */
    inline void SetRecordEncoding(const Aws::String& value) { m_recordEncodingHasBeenSet = true; m_recordEncoding = value; }

    /**
     * <p>Specifies the encoding of the records in the streaming source. For example,
     * UTF-8.</p>
     */
    inline void SetRecordEncoding(Aws::String&& value) { m_recordEncodingHasBeenSet = true; m_recordEncoding = value; }

    /**
     * <p>Specifies the encoding of the records in the streaming source. For example,
     * UTF-8.</p>
     */
    inline void SetRecordEncoding(const char* value) { m_recordEncodingHasBeenSet = true; m_recordEncoding.assign(value); }

    /**
     * <p>Specifies the encoding of the records in the streaming source. For example,
     * UTF-8.</p>
     */
    inline SourceSchema& WithRecordEncoding(const Aws::String& value) { SetRecordEncoding(value); return *this;}

    /**
     * <p>Specifies the encoding of the records in the streaming source. For example,
     * UTF-8.</p>
     */
    inline SourceSchema& WithRecordEncoding(Aws::String&& value) { SetRecordEncoding(value); return *this;}

    /**
     * <p>Specifies the encoding of the records in the streaming source. For example,
     * UTF-8.</p>
     */
    inline SourceSchema& WithRecordEncoding(const char* value) { SetRecordEncoding(value); return *this;}

    /**
     * <p>A list of <code>RecordColumn</code> objects.</p>
     */
    inline const Aws::Vector<RecordColumn>& GetRecordColumns() const{ return m_recordColumns; }

    /**
     * <p>A list of <code>RecordColumn</code> objects.</p>
     */
    inline void SetRecordColumns(const Aws::Vector<RecordColumn>& value) { m_recordColumnsHasBeenSet = true; m_recordColumns = value; }

    /**
     * <p>A list of <code>RecordColumn</code> objects.</p>
     */
    inline void SetRecordColumns(Aws::Vector<RecordColumn>&& value) { m_recordColumnsHasBeenSet = true; m_recordColumns = value; }

    /**
     * <p>A list of <code>RecordColumn</code> objects.</p>
     */
    inline SourceSchema& WithRecordColumns(const Aws::Vector<RecordColumn>& value) { SetRecordColumns(value); return *this;}

    /**
     * <p>A list of <code>RecordColumn</code> objects.</p>
     */
    inline SourceSchema& WithRecordColumns(Aws::Vector<RecordColumn>&& value) { SetRecordColumns(value); return *this;}

    /**
     * <p>A list of <code>RecordColumn</code> objects.</p>
     */
    inline SourceSchema& AddRecordColumns(const RecordColumn& value) { m_recordColumnsHasBeenSet = true; m_recordColumns.push_back(value); return *this; }

    /**
     * <p>A list of <code>RecordColumn</code> objects.</p>
     */
    inline SourceSchema& AddRecordColumns(RecordColumn&& value) { m_recordColumnsHasBeenSet = true; m_recordColumns.push_back(value); return *this; }

  private:
    RecordFormat m_recordFormat;
    bool m_recordFormatHasBeenSet;
    Aws::String m_recordEncoding;
    bool m_recordEncodingHasBeenSet;
    Aws::Vector<RecordColumn> m_recordColumns;
    bool m_recordColumnsHasBeenSet;
  };

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws
