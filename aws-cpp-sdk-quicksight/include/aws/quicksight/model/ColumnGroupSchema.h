/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/ColumnGroupColumnSchema.h>
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
   * <p>The column group schema.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ColumnGroupSchema">AWS
   * API Reference</a></p>
   */
  class ColumnGroupSchema
  {
  public:
    AWS_QUICKSIGHT_API ColumnGroupSchema();
    AWS_QUICKSIGHT_API ColumnGroupSchema(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ColumnGroupSchema& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the column group schema.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the column group schema.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the column group schema.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the column group schema.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the column group schema.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the column group schema.</p>
     */
    inline ColumnGroupSchema& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the column group schema.</p>
     */
    inline ColumnGroupSchema& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the column group schema.</p>
     */
    inline ColumnGroupSchema& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A structure containing the list of schemas for column group columns.</p>
     */
    inline const Aws::Vector<ColumnGroupColumnSchema>& GetColumnGroupColumnSchemaList() const{ return m_columnGroupColumnSchemaList; }

    /**
     * <p>A structure containing the list of schemas for column group columns.</p>
     */
    inline bool ColumnGroupColumnSchemaListHasBeenSet() const { return m_columnGroupColumnSchemaListHasBeenSet; }

    /**
     * <p>A structure containing the list of schemas for column group columns.</p>
     */
    inline void SetColumnGroupColumnSchemaList(const Aws::Vector<ColumnGroupColumnSchema>& value) { m_columnGroupColumnSchemaListHasBeenSet = true; m_columnGroupColumnSchemaList = value; }

    /**
     * <p>A structure containing the list of schemas for column group columns.</p>
     */
    inline void SetColumnGroupColumnSchemaList(Aws::Vector<ColumnGroupColumnSchema>&& value) { m_columnGroupColumnSchemaListHasBeenSet = true; m_columnGroupColumnSchemaList = std::move(value); }

    /**
     * <p>A structure containing the list of schemas for column group columns.</p>
     */
    inline ColumnGroupSchema& WithColumnGroupColumnSchemaList(const Aws::Vector<ColumnGroupColumnSchema>& value) { SetColumnGroupColumnSchemaList(value); return *this;}

    /**
     * <p>A structure containing the list of schemas for column group columns.</p>
     */
    inline ColumnGroupSchema& WithColumnGroupColumnSchemaList(Aws::Vector<ColumnGroupColumnSchema>&& value) { SetColumnGroupColumnSchemaList(std::move(value)); return *this;}

    /**
     * <p>A structure containing the list of schemas for column group columns.</p>
     */
    inline ColumnGroupSchema& AddColumnGroupColumnSchemaList(const ColumnGroupColumnSchema& value) { m_columnGroupColumnSchemaListHasBeenSet = true; m_columnGroupColumnSchemaList.push_back(value); return *this; }

    /**
     * <p>A structure containing the list of schemas for column group columns.</p>
     */
    inline ColumnGroupSchema& AddColumnGroupColumnSchemaList(ColumnGroupColumnSchema&& value) { m_columnGroupColumnSchemaListHasBeenSet = true; m_columnGroupColumnSchemaList.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<ColumnGroupColumnSchema> m_columnGroupColumnSchemaList;
    bool m_columnGroupColumnSchemaListHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
