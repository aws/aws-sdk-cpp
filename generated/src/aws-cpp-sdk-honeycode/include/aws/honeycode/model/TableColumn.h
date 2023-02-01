/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/honeycode/Honeycode_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/honeycode/model/Format.h>
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
   * <p>An object that contains attributes about a single column in a
   * table</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/honeycode-2020-03-01/TableColumn">AWS
   * API Reference</a></p>
   */
  class TableColumn
  {
  public:
    AWS_HONEYCODE_API TableColumn();
    AWS_HONEYCODE_API TableColumn(Aws::Utils::Json::JsonView jsonValue);
    AWS_HONEYCODE_API TableColumn& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_HONEYCODE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The id of the column in the table.</p>
     */
    inline const Aws::String& GetTableColumnId() const{ return m_tableColumnId; }

    /**
     * <p>The id of the column in the table.</p>
     */
    inline bool TableColumnIdHasBeenSet() const { return m_tableColumnIdHasBeenSet; }

    /**
     * <p>The id of the column in the table.</p>
     */
    inline void SetTableColumnId(const Aws::String& value) { m_tableColumnIdHasBeenSet = true; m_tableColumnId = value; }

    /**
     * <p>The id of the column in the table.</p>
     */
    inline void SetTableColumnId(Aws::String&& value) { m_tableColumnIdHasBeenSet = true; m_tableColumnId = std::move(value); }

    /**
     * <p>The id of the column in the table.</p>
     */
    inline void SetTableColumnId(const char* value) { m_tableColumnIdHasBeenSet = true; m_tableColumnId.assign(value); }

    /**
     * <p>The id of the column in the table.</p>
     */
    inline TableColumn& WithTableColumnId(const Aws::String& value) { SetTableColumnId(value); return *this;}

    /**
     * <p>The id of the column in the table.</p>
     */
    inline TableColumn& WithTableColumnId(Aws::String&& value) { SetTableColumnId(std::move(value)); return *this;}

    /**
     * <p>The id of the column in the table.</p>
     */
    inline TableColumn& WithTableColumnId(const char* value) { SetTableColumnId(value); return *this;}


    /**
     * <p>The name of the column in the table.</p>
     */
    inline const Aws::String& GetTableColumnName() const{ return m_tableColumnName; }

    /**
     * <p>The name of the column in the table.</p>
     */
    inline bool TableColumnNameHasBeenSet() const { return m_tableColumnNameHasBeenSet; }

    /**
     * <p>The name of the column in the table.</p>
     */
    inline void SetTableColumnName(const Aws::String& value) { m_tableColumnNameHasBeenSet = true; m_tableColumnName = value; }

    /**
     * <p>The name of the column in the table.</p>
     */
    inline void SetTableColumnName(Aws::String&& value) { m_tableColumnNameHasBeenSet = true; m_tableColumnName = std::move(value); }

    /**
     * <p>The name of the column in the table.</p>
     */
    inline void SetTableColumnName(const char* value) { m_tableColumnNameHasBeenSet = true; m_tableColumnName.assign(value); }

    /**
     * <p>The name of the column in the table.</p>
     */
    inline TableColumn& WithTableColumnName(const Aws::String& value) { SetTableColumnName(value); return *this;}

    /**
     * <p>The name of the column in the table.</p>
     */
    inline TableColumn& WithTableColumnName(Aws::String&& value) { SetTableColumnName(std::move(value)); return *this;}

    /**
     * <p>The name of the column in the table.</p>
     */
    inline TableColumn& WithTableColumnName(const char* value) { SetTableColumnName(value); return *this;}


    /**
     * <p> The column level format that is applied in the table. An empty value in this
     * field means that the column format is the default value 'AUTO'. </p>
     */
    inline const Format& GetFormat() const{ return m_format; }

    /**
     * <p> The column level format that is applied in the table. An empty value in this
     * field means that the column format is the default value 'AUTO'. </p>
     */
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }

    /**
     * <p> The column level format that is applied in the table. An empty value in this
     * field means that the column format is the default value 'AUTO'. </p>
     */
    inline void SetFormat(const Format& value) { m_formatHasBeenSet = true; m_format = value; }

    /**
     * <p> The column level format that is applied in the table. An empty value in this
     * field means that the column format is the default value 'AUTO'. </p>
     */
    inline void SetFormat(Format&& value) { m_formatHasBeenSet = true; m_format = std::move(value); }

    /**
     * <p> The column level format that is applied in the table. An empty value in this
     * field means that the column format is the default value 'AUTO'. </p>
     */
    inline TableColumn& WithFormat(const Format& value) { SetFormat(value); return *this;}

    /**
     * <p> The column level format that is applied in the table. An empty value in this
     * field means that the column format is the default value 'AUTO'. </p>
     */
    inline TableColumn& WithFormat(Format&& value) { SetFormat(std::move(value)); return *this;}

  private:

    Aws::String m_tableColumnId;
    bool m_tableColumnIdHasBeenSet = false;

    Aws::String m_tableColumnName;
    bool m_tableColumnNameHasBeenSet = false;

    Format m_format;
    bool m_formatHasBeenSet = false;
  };

} // namespace Model
} // namespace Honeycode
} // namespace Aws
