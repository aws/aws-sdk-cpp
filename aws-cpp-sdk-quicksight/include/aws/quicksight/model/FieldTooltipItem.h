/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/Visibility.h>
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
   * <p>The tooltip item for the fields.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/FieldTooltipItem">AWS
   * API Reference</a></p>
   */
  class FieldTooltipItem
  {
  public:
    AWS_QUICKSIGHT_API FieldTooltipItem();
    AWS_QUICKSIGHT_API FieldTooltipItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API FieldTooltipItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique ID of the field that is targeted by the tooltip.</p>
     */
    inline const Aws::String& GetFieldId() const{ return m_fieldId; }

    /**
     * <p>The unique ID of the field that is targeted by the tooltip.</p>
     */
    inline bool FieldIdHasBeenSet() const { return m_fieldIdHasBeenSet; }

    /**
     * <p>The unique ID of the field that is targeted by the tooltip.</p>
     */
    inline void SetFieldId(const Aws::String& value) { m_fieldIdHasBeenSet = true; m_fieldId = value; }

    /**
     * <p>The unique ID of the field that is targeted by the tooltip.</p>
     */
    inline void SetFieldId(Aws::String&& value) { m_fieldIdHasBeenSet = true; m_fieldId = std::move(value); }

    /**
     * <p>The unique ID of the field that is targeted by the tooltip.</p>
     */
    inline void SetFieldId(const char* value) { m_fieldIdHasBeenSet = true; m_fieldId.assign(value); }

    /**
     * <p>The unique ID of the field that is targeted by the tooltip.</p>
     */
    inline FieldTooltipItem& WithFieldId(const Aws::String& value) { SetFieldId(value); return *this;}

    /**
     * <p>The unique ID of the field that is targeted by the tooltip.</p>
     */
    inline FieldTooltipItem& WithFieldId(Aws::String&& value) { SetFieldId(std::move(value)); return *this;}

    /**
     * <p>The unique ID of the field that is targeted by the tooltip.</p>
     */
    inline FieldTooltipItem& WithFieldId(const char* value) { SetFieldId(value); return *this;}


    /**
     * <p>The label of the tooltip item.</p>
     */
    inline const Aws::String& GetLabel() const{ return m_label; }

    /**
     * <p>The label of the tooltip item.</p>
     */
    inline bool LabelHasBeenSet() const { return m_labelHasBeenSet; }

    /**
     * <p>The label of the tooltip item.</p>
     */
    inline void SetLabel(const Aws::String& value) { m_labelHasBeenSet = true; m_label = value; }

    /**
     * <p>The label of the tooltip item.</p>
     */
    inline void SetLabel(Aws::String&& value) { m_labelHasBeenSet = true; m_label = std::move(value); }

    /**
     * <p>The label of the tooltip item.</p>
     */
    inline void SetLabel(const char* value) { m_labelHasBeenSet = true; m_label.assign(value); }

    /**
     * <p>The label of the tooltip item.</p>
     */
    inline FieldTooltipItem& WithLabel(const Aws::String& value) { SetLabel(value); return *this;}

    /**
     * <p>The label of the tooltip item.</p>
     */
    inline FieldTooltipItem& WithLabel(Aws::String&& value) { SetLabel(std::move(value)); return *this;}

    /**
     * <p>The label of the tooltip item.</p>
     */
    inline FieldTooltipItem& WithLabel(const char* value) { SetLabel(value); return *this;}


    /**
     * <p>The visibility of the tooltip item.</p>
     */
    inline const Visibility& GetVisibility() const{ return m_visibility; }

    /**
     * <p>The visibility of the tooltip item.</p>
     */
    inline bool VisibilityHasBeenSet() const { return m_visibilityHasBeenSet; }

    /**
     * <p>The visibility of the tooltip item.</p>
     */
    inline void SetVisibility(const Visibility& value) { m_visibilityHasBeenSet = true; m_visibility = value; }

    /**
     * <p>The visibility of the tooltip item.</p>
     */
    inline void SetVisibility(Visibility&& value) { m_visibilityHasBeenSet = true; m_visibility = std::move(value); }

    /**
     * <p>The visibility of the tooltip item.</p>
     */
    inline FieldTooltipItem& WithVisibility(const Visibility& value) { SetVisibility(value); return *this;}

    /**
     * <p>The visibility of the tooltip item.</p>
     */
    inline FieldTooltipItem& WithVisibility(Visibility&& value) { SetVisibility(std::move(value)); return *this;}

  private:

    Aws::String m_fieldId;
    bool m_fieldIdHasBeenSet = false;

    Aws::String m_label;
    bool m_labelHasBeenSet = false;

    Visibility m_visibility;
    bool m_visibilityHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
