/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>A FieldFolder element is a folder that contains fields and nested
   * subfolders.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/FieldFolder">AWS
   * API Reference</a></p>
   */
  class FieldFolder
  {
  public:
    AWS_QUICKSIGHT_API FieldFolder();
    AWS_QUICKSIGHT_API FieldFolder(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API FieldFolder& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The description for a field folder.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description for a field folder.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description for a field folder.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description for a field folder.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description for a field folder.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description for a field folder.</p>
     */
    inline FieldFolder& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description for a field folder.</p>
     */
    inline FieldFolder& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description for a field folder.</p>
     */
    inline FieldFolder& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>A folder has a list of columns. A column can only be in one folder.</p>
     */
    inline const Aws::Vector<Aws::String>& GetColumns() const{ return m_columns; }

    /**
     * <p>A folder has a list of columns. A column can only be in one folder.</p>
     */
    inline bool ColumnsHasBeenSet() const { return m_columnsHasBeenSet; }

    /**
     * <p>A folder has a list of columns. A column can only be in one folder.</p>
     */
    inline void SetColumns(const Aws::Vector<Aws::String>& value) { m_columnsHasBeenSet = true; m_columns = value; }

    /**
     * <p>A folder has a list of columns. A column can only be in one folder.</p>
     */
    inline void SetColumns(Aws::Vector<Aws::String>&& value) { m_columnsHasBeenSet = true; m_columns = std::move(value); }

    /**
     * <p>A folder has a list of columns. A column can only be in one folder.</p>
     */
    inline FieldFolder& WithColumns(const Aws::Vector<Aws::String>& value) { SetColumns(value); return *this;}

    /**
     * <p>A folder has a list of columns. A column can only be in one folder.</p>
     */
    inline FieldFolder& WithColumns(Aws::Vector<Aws::String>&& value) { SetColumns(std::move(value)); return *this;}

    /**
     * <p>A folder has a list of columns. A column can only be in one folder.</p>
     */
    inline FieldFolder& AddColumns(const Aws::String& value) { m_columnsHasBeenSet = true; m_columns.push_back(value); return *this; }

    /**
     * <p>A folder has a list of columns. A column can only be in one folder.</p>
     */
    inline FieldFolder& AddColumns(Aws::String&& value) { m_columnsHasBeenSet = true; m_columns.push_back(std::move(value)); return *this; }

    /**
     * <p>A folder has a list of columns. A column can only be in one folder.</p>
     */
    inline FieldFolder& AddColumns(const char* value) { m_columnsHasBeenSet = true; m_columns.push_back(value); return *this; }

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Aws::String> m_columns;
    bool m_columnsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
