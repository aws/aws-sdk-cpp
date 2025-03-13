/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/databrew/GlueDataBrew_EXPORTS.h>
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
namespace GlueDataBrew
{
namespace Model
{

  /**
   * <p>Represents a set of options that define how DataBrew will read a
   * comma-separated value (CSV) file when creating a dataset from that
   * file.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/CsvOptions">AWS
   * API Reference</a></p>
   */
  class CsvOptions
  {
  public:
    AWS_GLUEDATABREW_API CsvOptions() = default;
    AWS_GLUEDATABREW_API CsvOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUEDATABREW_API CsvOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUEDATABREW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A single character that specifies the delimiter being used in the CSV
     * file.</p>
     */
    inline const Aws::String& GetDelimiter() const { return m_delimiter; }
    inline bool DelimiterHasBeenSet() const { return m_delimiterHasBeenSet; }
    template<typename DelimiterT = Aws::String>
    void SetDelimiter(DelimiterT&& value) { m_delimiterHasBeenSet = true; m_delimiter = std::forward<DelimiterT>(value); }
    template<typename DelimiterT = Aws::String>
    CsvOptions& WithDelimiter(DelimiterT&& value) { SetDelimiter(std::forward<DelimiterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A variable that specifies whether the first row in the file is parsed as the
     * header. If this value is false, column names are auto-generated.</p>
     */
    inline bool GetHeaderRow() const { return m_headerRow; }
    inline bool HeaderRowHasBeenSet() const { return m_headerRowHasBeenSet; }
    inline void SetHeaderRow(bool value) { m_headerRowHasBeenSet = true; m_headerRow = value; }
    inline CsvOptions& WithHeaderRow(bool value) { SetHeaderRow(value); return *this;}
    ///@}
  private:

    Aws::String m_delimiter;
    bool m_delimiterHasBeenSet = false;

    bool m_headerRow{false};
    bool m_headerRowHasBeenSet = false;
  };

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
