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
    AWS_GLUEDATABREW_API ExcelOptions();
    AWS_GLUEDATABREW_API ExcelOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUEDATABREW_API ExcelOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUEDATABREW_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>One or more named sheets in the Excel file that will be included in the
     * dataset.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSheetNames() const{ return m_sheetNames; }

    /**
     * <p>One or more named sheets in the Excel file that will be included in the
     * dataset.</p>
     */
    inline bool SheetNamesHasBeenSet() const { return m_sheetNamesHasBeenSet; }

    /**
     * <p>One or more named sheets in the Excel file that will be included in the
     * dataset.</p>
     */
    inline void SetSheetNames(const Aws::Vector<Aws::String>& value) { m_sheetNamesHasBeenSet = true; m_sheetNames = value; }

    /**
     * <p>One or more named sheets in the Excel file that will be included in the
     * dataset.</p>
     */
    inline void SetSheetNames(Aws::Vector<Aws::String>&& value) { m_sheetNamesHasBeenSet = true; m_sheetNames = std::move(value); }

    /**
     * <p>One or more named sheets in the Excel file that will be included in the
     * dataset.</p>
     */
    inline ExcelOptions& WithSheetNames(const Aws::Vector<Aws::String>& value) { SetSheetNames(value); return *this;}

    /**
     * <p>One or more named sheets in the Excel file that will be included in the
     * dataset.</p>
     */
    inline ExcelOptions& WithSheetNames(Aws::Vector<Aws::String>&& value) { SetSheetNames(std::move(value)); return *this;}

    /**
     * <p>One or more named sheets in the Excel file that will be included in the
     * dataset.</p>
     */
    inline ExcelOptions& AddSheetNames(const Aws::String& value) { m_sheetNamesHasBeenSet = true; m_sheetNames.push_back(value); return *this; }

    /**
     * <p>One or more named sheets in the Excel file that will be included in the
     * dataset.</p>
     */
    inline ExcelOptions& AddSheetNames(Aws::String&& value) { m_sheetNamesHasBeenSet = true; m_sheetNames.push_back(std::move(value)); return *this; }

    /**
     * <p>One or more named sheets in the Excel file that will be included in the
     * dataset.</p>
     */
    inline ExcelOptions& AddSheetNames(const char* value) { m_sheetNamesHasBeenSet = true; m_sheetNames.push_back(value); return *this; }


    /**
     * <p>One or more sheet numbers in the Excel file that will be included in the
     * dataset.</p>
     */
    inline const Aws::Vector<int>& GetSheetIndexes() const{ return m_sheetIndexes; }

    /**
     * <p>One or more sheet numbers in the Excel file that will be included in the
     * dataset.</p>
     */
    inline bool SheetIndexesHasBeenSet() const { return m_sheetIndexesHasBeenSet; }

    /**
     * <p>One or more sheet numbers in the Excel file that will be included in the
     * dataset.</p>
     */
    inline void SetSheetIndexes(const Aws::Vector<int>& value) { m_sheetIndexesHasBeenSet = true; m_sheetIndexes = value; }

    /**
     * <p>One or more sheet numbers in the Excel file that will be included in the
     * dataset.</p>
     */
    inline void SetSheetIndexes(Aws::Vector<int>&& value) { m_sheetIndexesHasBeenSet = true; m_sheetIndexes = std::move(value); }

    /**
     * <p>One or more sheet numbers in the Excel file that will be included in the
     * dataset.</p>
     */
    inline ExcelOptions& WithSheetIndexes(const Aws::Vector<int>& value) { SetSheetIndexes(value); return *this;}

    /**
     * <p>One or more sheet numbers in the Excel file that will be included in the
     * dataset.</p>
     */
    inline ExcelOptions& WithSheetIndexes(Aws::Vector<int>&& value) { SetSheetIndexes(std::move(value)); return *this;}

    /**
     * <p>One or more sheet numbers in the Excel file that will be included in the
     * dataset.</p>
     */
    inline ExcelOptions& AddSheetIndexes(int value) { m_sheetIndexesHasBeenSet = true; m_sheetIndexes.push_back(value); return *this; }


    /**
     * <p>A variable that specifies whether the first row in the file is parsed as the
     * header. If this value is false, column names are auto-generated.</p>
     */
    inline bool GetHeaderRow() const{ return m_headerRow; }

    /**
     * <p>A variable that specifies whether the first row in the file is parsed as the
     * header. If this value is false, column names are auto-generated.</p>
     */
    inline bool HeaderRowHasBeenSet() const { return m_headerRowHasBeenSet; }

    /**
     * <p>A variable that specifies whether the first row in the file is parsed as the
     * header. If this value is false, column names are auto-generated.</p>
     */
    inline void SetHeaderRow(bool value) { m_headerRowHasBeenSet = true; m_headerRow = value; }

    /**
     * <p>A variable that specifies whether the first row in the file is parsed as the
     * header. If this value is false, column names are auto-generated.</p>
     */
    inline ExcelOptions& WithHeaderRow(bool value) { SetHeaderRow(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_sheetNames;
    bool m_sheetNamesHasBeenSet = false;

    Aws::Vector<int> m_sheetIndexes;
    bool m_sheetIndexesHasBeenSet = false;

    bool m_headerRow;
    bool m_headerRowHasBeenSet = false;
  };

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
