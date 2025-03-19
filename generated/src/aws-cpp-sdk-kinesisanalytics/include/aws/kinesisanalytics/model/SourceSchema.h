/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalytics/KinesisAnalytics_EXPORTS.h>
#include <aws/kinesisanalytics/model/RecordFormat.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kinesisanalytics/model/RecordColumn.h>
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
namespace KinesisAnalytics
{
namespace Model
{

  /**
   * <p>Describes the format of the data in the streaming source, and how each data
   * element maps to corresponding columns created in the in-application
   * stream.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/SourceSchema">AWS
   * API Reference</a></p>
   */
  class SourceSchema
  {
  public:
    AWS_KINESISANALYTICS_API SourceSchema() = default;
    AWS_KINESISANALYTICS_API SourceSchema(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICS_API SourceSchema& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the format of the records on the streaming source.</p>
     */
    inline const RecordFormat& GetRecordFormat() const { return m_recordFormat; }
    inline bool RecordFormatHasBeenSet() const { return m_recordFormatHasBeenSet; }
    template<typename RecordFormatT = RecordFormat>
    void SetRecordFormat(RecordFormatT&& value) { m_recordFormatHasBeenSet = true; m_recordFormat = std::forward<RecordFormatT>(value); }
    template<typename RecordFormatT = RecordFormat>
    SourceSchema& WithRecordFormat(RecordFormatT&& value) { SetRecordFormat(std::forward<RecordFormatT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the encoding of the records in the streaming source. For example,
     * UTF-8.</p>
     */
    inline const Aws::String& GetRecordEncoding() const { return m_recordEncoding; }
    inline bool RecordEncodingHasBeenSet() const { return m_recordEncodingHasBeenSet; }
    template<typename RecordEncodingT = Aws::String>
    void SetRecordEncoding(RecordEncodingT&& value) { m_recordEncodingHasBeenSet = true; m_recordEncoding = std::forward<RecordEncodingT>(value); }
    template<typename RecordEncodingT = Aws::String>
    SourceSchema& WithRecordEncoding(RecordEncodingT&& value) { SetRecordEncoding(std::forward<RecordEncodingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <code>RecordColumn</code> objects.</p>
     */
    inline const Aws::Vector<RecordColumn>& GetRecordColumns() const { return m_recordColumns; }
    inline bool RecordColumnsHasBeenSet() const { return m_recordColumnsHasBeenSet; }
    template<typename RecordColumnsT = Aws::Vector<RecordColumn>>
    void SetRecordColumns(RecordColumnsT&& value) { m_recordColumnsHasBeenSet = true; m_recordColumns = std::forward<RecordColumnsT>(value); }
    template<typename RecordColumnsT = Aws::Vector<RecordColumn>>
    SourceSchema& WithRecordColumns(RecordColumnsT&& value) { SetRecordColumns(std::forward<RecordColumnsT>(value)); return *this;}
    template<typename RecordColumnsT = RecordColumn>
    SourceSchema& AddRecordColumns(RecordColumnsT&& value) { m_recordColumnsHasBeenSet = true; m_recordColumns.emplace_back(std::forward<RecordColumnsT>(value)); return *this; }
    ///@}
  private:

    RecordFormat m_recordFormat;
    bool m_recordFormatHasBeenSet = false;

    Aws::String m_recordEncoding;
    bool m_recordEncodingHasBeenSet = false;

    Aws::Vector<RecordColumn> m_recordColumns;
    bool m_recordColumnsHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws
