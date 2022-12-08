/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>A text box.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/SheetTextBox">AWS
   * API Reference</a></p>
   */
  class SheetTextBox
  {
  public:
    AWS_QUICKSIGHT_API SheetTextBox();
    AWS_QUICKSIGHT_API SheetTextBox(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API SheetTextBox& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier for a text box. This identifier must be unique within
     * the context of a dashboard, template, or analysis. Two dashboards, analyses, or
     * templates can have text boxes that share identifiers.</p>
     */
    inline const Aws::String& GetSheetTextBoxId() const{ return m_sheetTextBoxId; }

    /**
     * <p>The unique identifier for a text box. This identifier must be unique within
     * the context of a dashboard, template, or analysis. Two dashboards, analyses, or
     * templates can have text boxes that share identifiers.</p>
     */
    inline bool SheetTextBoxIdHasBeenSet() const { return m_sheetTextBoxIdHasBeenSet; }

    /**
     * <p>The unique identifier for a text box. This identifier must be unique within
     * the context of a dashboard, template, or analysis. Two dashboards, analyses, or
     * templates can have text boxes that share identifiers.</p>
     */
    inline void SetSheetTextBoxId(const Aws::String& value) { m_sheetTextBoxIdHasBeenSet = true; m_sheetTextBoxId = value; }

    /**
     * <p>The unique identifier for a text box. This identifier must be unique within
     * the context of a dashboard, template, or analysis. Two dashboards, analyses, or
     * templates can have text boxes that share identifiers.</p>
     */
    inline void SetSheetTextBoxId(Aws::String&& value) { m_sheetTextBoxIdHasBeenSet = true; m_sheetTextBoxId = std::move(value); }

    /**
     * <p>The unique identifier for a text box. This identifier must be unique within
     * the context of a dashboard, template, or analysis. Two dashboards, analyses, or
     * templates can have text boxes that share identifiers.</p>
     */
    inline void SetSheetTextBoxId(const char* value) { m_sheetTextBoxIdHasBeenSet = true; m_sheetTextBoxId.assign(value); }

    /**
     * <p>The unique identifier for a text box. This identifier must be unique within
     * the context of a dashboard, template, or analysis. Two dashboards, analyses, or
     * templates can have text boxes that share identifiers.</p>
     */
    inline SheetTextBox& WithSheetTextBoxId(const Aws::String& value) { SetSheetTextBoxId(value); return *this;}

    /**
     * <p>The unique identifier for a text box. This identifier must be unique within
     * the context of a dashboard, template, or analysis. Two dashboards, analyses, or
     * templates can have text boxes that share identifiers.</p>
     */
    inline SheetTextBox& WithSheetTextBoxId(Aws::String&& value) { SetSheetTextBoxId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for a text box. This identifier must be unique within
     * the context of a dashboard, template, or analysis. Two dashboards, analyses, or
     * templates can have text boxes that share identifiers.</p>
     */
    inline SheetTextBox& WithSheetTextBoxId(const char* value) { SetSheetTextBoxId(value); return *this;}


    /**
     * <p>The content that is displayed in the text box.</p>
     */
    inline const Aws::String& GetContent() const{ return m_content; }

    /**
     * <p>The content that is displayed in the text box.</p>
     */
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }

    /**
     * <p>The content that is displayed in the text box.</p>
     */
    inline void SetContent(const Aws::String& value) { m_contentHasBeenSet = true; m_content = value; }

    /**
     * <p>The content that is displayed in the text box.</p>
     */
    inline void SetContent(Aws::String&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }

    /**
     * <p>The content that is displayed in the text box.</p>
     */
    inline void SetContent(const char* value) { m_contentHasBeenSet = true; m_content.assign(value); }

    /**
     * <p>The content that is displayed in the text box.</p>
     */
    inline SheetTextBox& WithContent(const Aws::String& value) { SetContent(value); return *this;}

    /**
     * <p>The content that is displayed in the text box.</p>
     */
    inline SheetTextBox& WithContent(Aws::String&& value) { SetContent(std::move(value)); return *this;}

    /**
     * <p>The content that is displayed in the text box.</p>
     */
    inline SheetTextBox& WithContent(const char* value) { SetContent(value); return *this;}

  private:

    Aws::String m_sheetTextBoxId;
    bool m_sheetTextBoxIdHasBeenSet = false;

    Aws::String m_content;
    bool m_contentHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
