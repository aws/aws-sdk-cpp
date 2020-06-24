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
#include <aws/honeycode/Honeycode_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/honeycode/model/DataItem.h>
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
namespace Honeycode
{
namespace Model
{

  /**
   * <p>A single row in the ResultSet.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/honeycode-2020-03-01/ResultRow">AWS
   * API Reference</a></p>
   */
  class AWS_HONEYCODE_API ResultRow
  {
  public:
    ResultRow();
    ResultRow(Aws::Utils::Json::JsonView jsonValue);
    ResultRow& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID for a particular row.</p>
     */
    inline const Aws::String& GetRowId() const{ return m_rowId; }

    /**
     * <p>The ID for a particular row.</p>
     */
    inline bool RowIdHasBeenSet() const { return m_rowIdHasBeenSet; }

    /**
     * <p>The ID for a particular row.</p>
     */
    inline void SetRowId(const Aws::String& value) { m_rowIdHasBeenSet = true; m_rowId = value; }

    /**
     * <p>The ID for a particular row.</p>
     */
    inline void SetRowId(Aws::String&& value) { m_rowIdHasBeenSet = true; m_rowId = std::move(value); }

    /**
     * <p>The ID for a particular row.</p>
     */
    inline void SetRowId(const char* value) { m_rowIdHasBeenSet = true; m_rowId.assign(value); }

    /**
     * <p>The ID for a particular row.</p>
     */
    inline ResultRow& WithRowId(const Aws::String& value) { SetRowId(value); return *this;}

    /**
     * <p>The ID for a particular row.</p>
     */
    inline ResultRow& WithRowId(Aws::String&& value) { SetRowId(std::move(value)); return *this;}

    /**
     * <p>The ID for a particular row.</p>
     */
    inline ResultRow& WithRowId(const char* value) { SetRowId(value); return *this;}


    /**
     * <p>List of all the data cells in a row.</p>
     */
    inline const Aws::Vector<DataItem>& GetDataItems() const{ return m_dataItems; }

    /**
     * <p>List of all the data cells in a row.</p>
     */
    inline bool DataItemsHasBeenSet() const { return m_dataItemsHasBeenSet; }

    /**
     * <p>List of all the data cells in a row.</p>
     */
    inline void SetDataItems(const Aws::Vector<DataItem>& value) { m_dataItemsHasBeenSet = true; m_dataItems = value; }

    /**
     * <p>List of all the data cells in a row.</p>
     */
    inline void SetDataItems(Aws::Vector<DataItem>&& value) { m_dataItemsHasBeenSet = true; m_dataItems = std::move(value); }

    /**
     * <p>List of all the data cells in a row.</p>
     */
    inline ResultRow& WithDataItems(const Aws::Vector<DataItem>& value) { SetDataItems(value); return *this;}

    /**
     * <p>List of all the data cells in a row.</p>
     */
    inline ResultRow& WithDataItems(Aws::Vector<DataItem>&& value) { SetDataItems(std::move(value)); return *this;}

    /**
     * <p>List of all the data cells in a row.</p>
     */
    inline ResultRow& AddDataItems(const DataItem& value) { m_dataItemsHasBeenSet = true; m_dataItems.push_back(value); return *this; }

    /**
     * <p>List of all the data cells in a row.</p>
     */
    inline ResultRow& AddDataItems(DataItem&& value) { m_dataItemsHasBeenSet = true; m_dataItems.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_rowId;
    bool m_rowIdHasBeenSet;

    Aws::Vector<DataItem> m_dataItems;
    bool m_dataItemsHasBeenSet;
  };

} // namespace Model
} // namespace Honeycode
} // namespace Aws
