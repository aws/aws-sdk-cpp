/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/DataPathValue.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The data path options for the pivot table field options.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/PivotTableDataPathOption">AWS
   * API Reference</a></p>
   */
  class PivotTableDataPathOption
  {
  public:
    AWS_QUICKSIGHT_API PivotTableDataPathOption();
    AWS_QUICKSIGHT_API PivotTableDataPathOption(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API PivotTableDataPathOption& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The list of data path values for the data path options.</p>
     */
    inline const Aws::Vector<DataPathValue>& GetDataPathList() const{ return m_dataPathList; }

    /**
     * <p>The list of data path values for the data path options.</p>
     */
    inline bool DataPathListHasBeenSet() const { return m_dataPathListHasBeenSet; }

    /**
     * <p>The list of data path values for the data path options.</p>
     */
    inline void SetDataPathList(const Aws::Vector<DataPathValue>& value) { m_dataPathListHasBeenSet = true; m_dataPathList = value; }

    /**
     * <p>The list of data path values for the data path options.</p>
     */
    inline void SetDataPathList(Aws::Vector<DataPathValue>&& value) { m_dataPathListHasBeenSet = true; m_dataPathList = std::move(value); }

    /**
     * <p>The list of data path values for the data path options.</p>
     */
    inline PivotTableDataPathOption& WithDataPathList(const Aws::Vector<DataPathValue>& value) { SetDataPathList(value); return *this;}

    /**
     * <p>The list of data path values for the data path options.</p>
     */
    inline PivotTableDataPathOption& WithDataPathList(Aws::Vector<DataPathValue>&& value) { SetDataPathList(std::move(value)); return *this;}

    /**
     * <p>The list of data path values for the data path options.</p>
     */
    inline PivotTableDataPathOption& AddDataPathList(const DataPathValue& value) { m_dataPathListHasBeenSet = true; m_dataPathList.push_back(value); return *this; }

    /**
     * <p>The list of data path values for the data path options.</p>
     */
    inline PivotTableDataPathOption& AddDataPathList(DataPathValue&& value) { m_dataPathListHasBeenSet = true; m_dataPathList.push_back(std::move(value)); return *this; }


    /**
     * <p>The width of the data path option.</p>
     */
    inline const Aws::String& GetWidth() const{ return m_width; }

    /**
     * <p>The width of the data path option.</p>
     */
    inline bool WidthHasBeenSet() const { return m_widthHasBeenSet; }

    /**
     * <p>The width of the data path option.</p>
     */
    inline void SetWidth(const Aws::String& value) { m_widthHasBeenSet = true; m_width = value; }

    /**
     * <p>The width of the data path option.</p>
     */
    inline void SetWidth(Aws::String&& value) { m_widthHasBeenSet = true; m_width = std::move(value); }

    /**
     * <p>The width of the data path option.</p>
     */
    inline void SetWidth(const char* value) { m_widthHasBeenSet = true; m_width.assign(value); }

    /**
     * <p>The width of the data path option.</p>
     */
    inline PivotTableDataPathOption& WithWidth(const Aws::String& value) { SetWidth(value); return *this;}

    /**
     * <p>The width of the data path option.</p>
     */
    inline PivotTableDataPathOption& WithWidth(Aws::String&& value) { SetWidth(std::move(value)); return *this;}

    /**
     * <p>The width of the data path option.</p>
     */
    inline PivotTableDataPathOption& WithWidth(const char* value) { SetWidth(value); return *this;}

  private:

    Aws::Vector<DataPathValue> m_dataPathList;
    bool m_dataPathListHasBeenSet = false;

    Aws::String m_width;
    bool m_widthHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
