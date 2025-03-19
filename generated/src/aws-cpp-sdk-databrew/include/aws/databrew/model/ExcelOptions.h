/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/databrew/GlueDataBrew_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Represents a set of options that define how DataBrew will interpret a
   * Microsoft Excel file when creating a dataset from that file.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/ExcelOptions">AWS
   * API Reference</a></p>
   */
  class ExcelOptions
  {
  public:
    AWS_GLUEDATABREW_API ExcelOptions() = default;
    AWS_GLUEDATABREW_API ExcelOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUEDATABREW_API ExcelOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUEDATABREW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>One or more named sheets in the Excel file that will be included in the
     * dataset.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSheetNames() const { return m_sheetNames; }
    inline bool SheetNamesHasBeenSet() const { return m_sheetNamesHasBeenSet; }
    template<typename SheetNamesT = Aws::Vector<Aws::String>>
    void SetSheetNames(SheetNamesT&& value) { m_sheetNamesHasBeenSet = true; m_sheetNames = std::forward<SheetNamesT>(value); }
    template<typename SheetNamesT = Aws::Vector<Aws::String>>
    ExcelOptions& WithSheetNames(SheetNamesT&& value) { SetSheetNames(std::forward<SheetNamesT>(value)); return *this;}
    template<typename SheetNamesT = Aws::String>
    ExcelOptions& AddSheetNames(SheetNamesT&& value) { m_sheetNamesHasBeenSet = true; m_sheetNames.emplace_back(std::forward<SheetNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>One or more sheet numbers in the Excel file that will be included in the
     * dataset.</p>
     */
    inline const Aws::Vector<int>& GetSheetIndexes() const { return m_sheetIndexes; }
    inline bool SheetIndexesHasBeenSet() const { return m_sheetIndexesHasBeenSet; }
    template<typename SheetIndexesT = Aws::Vector<int>>
    void SetSheetIndexes(SheetIndexesT&& value) { m_sheetIndexesHasBeenSet = true; m_sheetIndexes = std::forward<SheetIndexesT>(value); }
    template<typename SheetIndexesT = Aws::Vector<int>>
    ExcelOptions& WithSheetIndexes(SheetIndexesT&& value) { SetSheetIndexes(std::forward<SheetIndexesT>(value)); return *this;}
    inline ExcelOptions& AddSheetIndexes(int value) { m_sheetIndexesHasBeenSet = true; m_sheetIndexes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A variable that specifies whether the first row in the file is parsed as the
     * header. If this value is false, column names are auto-generated.</p>
     */
    inline bool GetHeaderRow() const { return m_headerRow; }
    inline bool HeaderRowHasBeenSet() const { return m_headerRowHasBeenSet; }
    inline void SetHeaderRow(bool value) { m_headerRowHasBeenSet = true; m_headerRow = value; }
    inline ExcelOptions& WithHeaderRow(bool value) { SetHeaderRow(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_sheetNames;
    bool m_sheetNamesHasBeenSet = false;

    Aws::Vector<int> m_sheetIndexes;
    bool m_sheetIndexesHasBeenSet = false;

    bool m_headerRow{false};
    bool m_headerRowHasBeenSet = false;
  };

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
