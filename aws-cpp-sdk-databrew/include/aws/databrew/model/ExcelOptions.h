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
   * <p>Options that define how DataBrew will interpret a Microsoft Excel file, when
   * creating a dataset from that file.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/ExcelOptions">AWS
   * API Reference</a></p>
   */
  class AWS_GLUEDATABREW_API ExcelOptions
  {
  public:
    ExcelOptions();
    ExcelOptions(Aws::Utils::Json::JsonView jsonValue);
    ExcelOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies one or more named sheets in the Excel file, which will be included
     * in the dataset.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSheetNames() const{ return m_sheetNames; }

    /**
     * <p>Specifies one or more named sheets in the Excel file, which will be included
     * in the dataset.</p>
     */
    inline bool SheetNamesHasBeenSet() const { return m_sheetNamesHasBeenSet; }

    /**
     * <p>Specifies one or more named sheets in the Excel file, which will be included
     * in the dataset.</p>
     */
    inline void SetSheetNames(const Aws::Vector<Aws::String>& value) { m_sheetNamesHasBeenSet = true; m_sheetNames = value; }

    /**
     * <p>Specifies one or more named sheets in the Excel file, which will be included
     * in the dataset.</p>
     */
    inline void SetSheetNames(Aws::Vector<Aws::String>&& value) { m_sheetNamesHasBeenSet = true; m_sheetNames = std::move(value); }

    /**
     * <p>Specifies one or more named sheets in the Excel file, which will be included
     * in the dataset.</p>
     */
    inline ExcelOptions& WithSheetNames(const Aws::Vector<Aws::String>& value) { SetSheetNames(value); return *this;}

    /**
     * <p>Specifies one or more named sheets in the Excel file, which will be included
     * in the dataset.</p>
     */
    inline ExcelOptions& WithSheetNames(Aws::Vector<Aws::String>&& value) { SetSheetNames(std::move(value)); return *this;}

    /**
     * <p>Specifies one or more named sheets in the Excel file, which will be included
     * in the dataset.</p>
     */
    inline ExcelOptions& AddSheetNames(const Aws::String& value) { m_sheetNamesHasBeenSet = true; m_sheetNames.push_back(value); return *this; }

    /**
     * <p>Specifies one or more named sheets in the Excel file, which will be included
     * in the dataset.</p>
     */
    inline ExcelOptions& AddSheetNames(Aws::String&& value) { m_sheetNamesHasBeenSet = true; m_sheetNames.push_back(std::move(value)); return *this; }

    /**
     * <p>Specifies one or more named sheets in the Excel file, which will be included
     * in the dataset.</p>
     */
    inline ExcelOptions& AddSheetNames(const char* value) { m_sheetNamesHasBeenSet = true; m_sheetNames.push_back(value); return *this; }


    /**
     * <p>Specifies one or more sheet numbers in the Excel file, which will be included
     * in the dataset.</p>
     */
    inline const Aws::Vector<int>& GetSheetIndexes() const{ return m_sheetIndexes; }

    /**
     * <p>Specifies one or more sheet numbers in the Excel file, which will be included
     * in the dataset.</p>
     */
    inline bool SheetIndexesHasBeenSet() const { return m_sheetIndexesHasBeenSet; }

    /**
     * <p>Specifies one or more sheet numbers in the Excel file, which will be included
     * in the dataset.</p>
     */
    inline void SetSheetIndexes(const Aws::Vector<int>& value) { m_sheetIndexesHasBeenSet = true; m_sheetIndexes = value; }

    /**
     * <p>Specifies one or more sheet numbers in the Excel file, which will be included
     * in the dataset.</p>
     */
    inline void SetSheetIndexes(Aws::Vector<int>&& value) { m_sheetIndexesHasBeenSet = true; m_sheetIndexes = std::move(value); }

    /**
     * <p>Specifies one or more sheet numbers in the Excel file, which will be included
     * in the dataset.</p>
     */
    inline ExcelOptions& WithSheetIndexes(const Aws::Vector<int>& value) { SetSheetIndexes(value); return *this;}

    /**
     * <p>Specifies one or more sheet numbers in the Excel file, which will be included
     * in the dataset.</p>
     */
    inline ExcelOptions& WithSheetIndexes(Aws::Vector<int>&& value) { SetSheetIndexes(std::move(value)); return *this;}

    /**
     * <p>Specifies one or more sheet numbers in the Excel file, which will be included
     * in the dataset.</p>
     */
    inline ExcelOptions& AddSheetIndexes(int value) { m_sheetIndexesHasBeenSet = true; m_sheetIndexes.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_sheetNames;
    bool m_sheetNamesHasBeenSet;

    Aws::Vector<int> m_sheetIndexes;
    bool m_sheetIndexesHasBeenSet;
  };

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
