/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/TextConditionalFormat.h>
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
   * <p>The cell conditional formatting option for a table.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TableCellConditionalFormatting">AWS
   * API Reference</a></p>
   */
  class TableCellConditionalFormatting
  {
  public:
    AWS_QUICKSIGHT_API TableCellConditionalFormatting();
    AWS_QUICKSIGHT_API TableCellConditionalFormatting(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TableCellConditionalFormatting& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The field ID of the cell for conditional formatting.</p>
     */
    inline const Aws::String& GetFieldId() const{ return m_fieldId; }

    /**
     * <p>The field ID of the cell for conditional formatting.</p>
     */
    inline bool FieldIdHasBeenSet() const { return m_fieldIdHasBeenSet; }

    /**
     * <p>The field ID of the cell for conditional formatting.</p>
     */
    inline void SetFieldId(const Aws::String& value) { m_fieldIdHasBeenSet = true; m_fieldId = value; }

    /**
     * <p>The field ID of the cell for conditional formatting.</p>
     */
    inline void SetFieldId(Aws::String&& value) { m_fieldIdHasBeenSet = true; m_fieldId = std::move(value); }

    /**
     * <p>The field ID of the cell for conditional formatting.</p>
     */
    inline void SetFieldId(const char* value) { m_fieldIdHasBeenSet = true; m_fieldId.assign(value); }

    /**
     * <p>The field ID of the cell for conditional formatting.</p>
     */
    inline TableCellConditionalFormatting& WithFieldId(const Aws::String& value) { SetFieldId(value); return *this;}

    /**
     * <p>The field ID of the cell for conditional formatting.</p>
     */
    inline TableCellConditionalFormatting& WithFieldId(Aws::String&& value) { SetFieldId(std::move(value)); return *this;}

    /**
     * <p>The field ID of the cell for conditional formatting.</p>
     */
    inline TableCellConditionalFormatting& WithFieldId(const char* value) { SetFieldId(value); return *this;}


    /**
     * <p>The text format of the cell for conditional formatting.</p>
     */
    inline const TextConditionalFormat& GetTextFormat() const{ return m_textFormat; }

    /**
     * <p>The text format of the cell for conditional formatting.</p>
     */
    inline bool TextFormatHasBeenSet() const { return m_textFormatHasBeenSet; }

    /**
     * <p>The text format of the cell for conditional formatting.</p>
     */
    inline void SetTextFormat(const TextConditionalFormat& value) { m_textFormatHasBeenSet = true; m_textFormat = value; }

    /**
     * <p>The text format of the cell for conditional formatting.</p>
     */
    inline void SetTextFormat(TextConditionalFormat&& value) { m_textFormatHasBeenSet = true; m_textFormat = std::move(value); }

    /**
     * <p>The text format of the cell for conditional formatting.</p>
     */
    inline TableCellConditionalFormatting& WithTextFormat(const TextConditionalFormat& value) { SetTextFormat(value); return *this;}

    /**
     * <p>The text format of the cell for conditional formatting.</p>
     */
    inline TableCellConditionalFormatting& WithTextFormat(TextConditionalFormat&& value) { SetTextFormat(std::move(value)); return *this;}

  private:

    Aws::String m_fieldId;
    bool m_fieldIdHasBeenSet = false;

    TextConditionalFormat m_textFormat;
    bool m_textFormatHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
