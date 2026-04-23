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
#include <aws/kinesisanalyticsv2/model/RecordFormat.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kinesisanalyticsv2/model/RecordColumn.h>
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
   * <p>For an SQL-based Amazon Kinesis Data Analytics application, describes the
   * format of the data in the streaming source, and how each data element maps to
   * corresponding columns created in the in-application stream. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/SourceSchema">AWS
   * API Reference</a></p>
   */
  class AWS_KINESISANALYTICSV2_API SourceSchema
  {
  public:
    SourceSchema();
    SourceSchema(Aws::Utils::Json::JsonView jsonValue);
    SourceSchema& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the format of the records on the streaming source.</p>
     */
    inline const RecordFormat& GetRecordFormat() const{ return m_recordFormat; }

    /**
     * <p>Specifies the format of the records on the streaming source.</p>
     */
    inline bool RecordFormatHasBeenSet() const { return m_recordFormatHasBeenSet; }

    /**
     * <p>Specifies the format of the records on the streaming source.</p>
     */
    inline void SetRecordFormat(const RecordFormat& value) { m_recordFormatHasBeenSet = true; m_recordFormat = value; }

    /**
     * <p>Specifies the format of the records on the streaming source.</p>
     */
    inline void SetRecordFormat(RecordFormat&& value) { m_recordFormatHasBeenSet = true; m_recordFormat = std::move(value); }

    /**
     * <p>Specifies the format of the records on the streaming source.</p>
     */
    inline SourceSchema& WithRecordFormat(const RecordFormat& value) { SetRecordFormat(value); return *this;}

    /**
     * <p>Specifies the format of the records on the streaming source.</p>
     */
    inline SourceSchema& WithRecordFormat(RecordFormat&& value) { SetRecordFormat(std::move(value)); return *this;}


    /**
     * <p>Specifies the encoding of the records in the streaming source. For example,
     * UTF-8.</p>
     */
    inline const Aws::String& GetRecordEncoding() const{ return m_recordEncoding; }

    /**
     * <p>Specifies the encoding of the records in the streaming source. For example,
     * UTF-8.</p>
     */
    inline bool RecordEncodingHasBeenSet() const { return m_recordEncodingHasBeenSet; }

    /**
     * <p>Specifies the encoding of the records in the streaming source. For example,
     * UTF-8.</p>
     */
    inline void SetRecordEncoding(const Aws::String& value) { m_recordEncodingHasBeenSet = true; m_recordEncoding = value; }

    /**
     * <p>Specifies the encoding of the records in the streaming source. For example,
     * UTF-8.</p>
     */
    inline void SetRecordEncoding(Aws::String&& value) { m_recordEncodingHasBeenSet = true; m_recordEncoding = std::move(value); }

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
    inline SourceSchema& WithRecordEncoding(Aws::String&& value) { SetRecordEncoding(std::move(value)); return *this;}

    /**
     * <p>Specifies the encoding of the records in the streaming source. For example,
     * UTF-8.</p>
     */
    inline SourceSchema& WithRecordEncoding(const char* value) { SetRecordEncoding(value); return *this;}


    /**
     * <p>A list of <code>RecordColumn</code> objects. </p>
     */
    inline const Aws::Vector<RecordColumn>& GetRecordColumns() const{ return m_recordColumns; }

    /**
     * <p>A list of <code>RecordColumn</code> objects. </p>
     */
    inline bool RecordColumnsHasBeenSet() const { return m_recordColumnsHasBeenSet; }

    /**
     * <p>A list of <code>RecordColumn</code> objects. </p>
     */
    inline void SetRecordColumns(const Aws::Vector<RecordColumn>& value) { m_recordColumnsHasBeenSet = true; m_recordColumns = value; }

    /**
     * <p>A list of <code>RecordColumn</code> objects. </p>
     */
    inline void SetRecordColumns(Aws::Vector<RecordColumn>&& value) { m_recordColumnsHasBeenSet = true; m_recordColumns = std::move(value); }

    /**
     * <p>A list of <code>RecordColumn</code> objects. </p>
     */
    inline SourceSchema& WithRecordColumns(const Aws::Vector<RecordColumn>& value) { SetRecordColumns(value); return *this;}

    /**
     * <p>A list of <code>RecordColumn</code> objects. </p>
     */
    inline SourceSchema& WithRecordColumns(Aws::Vector<RecordColumn>&& value) { SetRecordColumns(std::move(value)); return *this;}

    /**
     * <p>A list of <code>RecordColumn</code> objects. </p>
     */
    inline SourceSchema& AddRecordColumns(const RecordColumn& value) { m_recordColumnsHasBeenSet = true; m_recordColumns.push_back(value); return *this; }

    /**
     * <p>A list of <code>RecordColumn</code> objects. </p>
     */
    inline SourceSchema& AddRecordColumns(RecordColumn&& value) { m_recordColumnsHasBeenSet = true; m_recordColumns.push_back(std::move(value)); return *this; }

  private:

    RecordFormat m_recordFormat;
    bool m_recordFormatHasBeenSet;

    Aws::String m_recordEncoding;
    bool m_recordEncodingHasBeenSet;

    Aws::Vector<RecordColumn> m_recordColumns;
    bool m_recordColumnsHasBeenSet;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
