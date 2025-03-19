/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalytics/KinesisAnalytics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Provides additional mapping information when the record format uses
   * delimiters, such as CSV. For example, the following sample records use CSV
   * format, where the records use the <i>'\n'</i> as the row delimiter and a comma
   * (",") as the column delimiter: </p> <p> <code>"name1", "address1"</code> </p>
   * <p> <code>"name2", "address2"</code> </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/CSVMappingParameters">AWS
   * API Reference</a></p>
   */
  class CSVMappingParameters
  {
  public:
    AWS_KINESISANALYTICS_API CSVMappingParameters() = default;
    AWS_KINESISANALYTICS_API CSVMappingParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICS_API CSVMappingParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Row delimiter. For example, in a CSV format, <i>'\n'</i> is the typical row
     * delimiter.</p>
     */
    inline const Aws::String& GetRecordRowDelimiter() const { return m_recordRowDelimiter; }
    inline bool RecordRowDelimiterHasBeenSet() const { return m_recordRowDelimiterHasBeenSet; }
    template<typename RecordRowDelimiterT = Aws::String>
    void SetRecordRowDelimiter(RecordRowDelimiterT&& value) { m_recordRowDelimiterHasBeenSet = true; m_recordRowDelimiter = std::forward<RecordRowDelimiterT>(value); }
    template<typename RecordRowDelimiterT = Aws::String>
    CSVMappingParameters& WithRecordRowDelimiter(RecordRowDelimiterT&& value) { SetRecordRowDelimiter(std::forward<RecordRowDelimiterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Column delimiter. For example, in a CSV format, a comma (",") is the typical
     * column delimiter.</p>
     */
    inline const Aws::String& GetRecordColumnDelimiter() const { return m_recordColumnDelimiter; }
    inline bool RecordColumnDelimiterHasBeenSet() const { return m_recordColumnDelimiterHasBeenSet; }
    template<typename RecordColumnDelimiterT = Aws::String>
    void SetRecordColumnDelimiter(RecordColumnDelimiterT&& value) { m_recordColumnDelimiterHasBeenSet = true; m_recordColumnDelimiter = std::forward<RecordColumnDelimiterT>(value); }
    template<typename RecordColumnDelimiterT = Aws::String>
    CSVMappingParameters& WithRecordColumnDelimiter(RecordColumnDelimiterT&& value) { SetRecordColumnDelimiter(std::forward<RecordColumnDelimiterT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_recordRowDelimiter;
    bool m_recordRowDelimiterHasBeenSet = false;

    Aws::String m_recordColumnDelimiter;
    bool m_recordColumnDelimiterHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws
