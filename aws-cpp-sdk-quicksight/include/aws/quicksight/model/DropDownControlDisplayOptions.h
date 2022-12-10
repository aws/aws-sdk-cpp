/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/ListControlSelectAllOptions.h>
#include <aws/quicksight/model/LabelOptions.h>
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
   * <p>The display options of a control.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DropDownControlDisplayOptions">AWS
   * API Reference</a></p>
   */
  class DropDownControlDisplayOptions
  {
  public:
    AWS_QUICKSIGHT_API DropDownControlDisplayOptions();
    AWS_QUICKSIGHT_API DropDownControlDisplayOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DropDownControlDisplayOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The configuration of the <code>Select all</code> options in a dropdown
     * control.</p>
     */
    inline const ListControlSelectAllOptions& GetSelectAllOptions() const{ return m_selectAllOptions; }

    /**
     * <p>The configuration of the <code>Select all</code> options in a dropdown
     * control.</p>
     */
    inline bool SelectAllOptionsHasBeenSet() const { return m_selectAllOptionsHasBeenSet; }

    /**
     * <p>The configuration of the <code>Select all</code> options in a dropdown
     * control.</p>
     */
    inline void SetSelectAllOptions(const ListControlSelectAllOptions& value) { m_selectAllOptionsHasBeenSet = true; m_selectAllOptions = value; }

    /**
     * <p>The configuration of the <code>Select all</code> options in a dropdown
     * control.</p>
     */
    inline void SetSelectAllOptions(ListControlSelectAllOptions&& value) { m_selectAllOptionsHasBeenSet = true; m_selectAllOptions = std::move(value); }

    /**
     * <p>The configuration of the <code>Select all</code> options in a dropdown
     * control.</p>
     */
    inline DropDownControlDisplayOptions& WithSelectAllOptions(const ListControlSelectAllOptions& value) { SetSelectAllOptions(value); return *this;}

    /**
     * <p>The configuration of the <code>Select all</code> options in a dropdown
     * control.</p>
     */
    inline DropDownControlDisplayOptions& WithSelectAllOptions(ListControlSelectAllOptions&& value) { SetSelectAllOptions(std::move(value)); return *this;}


    /**
     * <p>The options to configure the title visibility, name, and font size.</p>
     */
    inline const LabelOptions& GetTitleOptions() const{ return m_titleOptions; }

    /**
     * <p>The options to configure the title visibility, name, and font size.</p>
     */
    inline bool TitleOptionsHasBeenSet() const { return m_titleOptionsHasBeenSet; }

    /**
     * <p>The options to configure the title visibility, name, and font size.</p>
     */
    inline void SetTitleOptions(const LabelOptions& value) { m_titleOptionsHasBeenSet = true; m_titleOptions = value; }

    /**
     * <p>The options to configure the title visibility, name, and font size.</p>
     */
    inline void SetTitleOptions(LabelOptions&& value) { m_titleOptionsHasBeenSet = true; m_titleOptions = std::move(value); }

    /**
     * <p>The options to configure the title visibility, name, and font size.</p>
     */
    inline DropDownControlDisplayOptions& WithTitleOptions(const LabelOptions& value) { SetTitleOptions(value); return *this;}

    /**
     * <p>The options to configure the title visibility, name, and font size.</p>
     */
    inline DropDownControlDisplayOptions& WithTitleOptions(LabelOptions&& value) { SetTitleOptions(std::move(value)); return *this;}

  private:

    ListControlSelectAllOptions m_selectAllOptions;
    bool m_selectAllOptionsHasBeenSet = false;

    LabelOptions m_titleOptions;
    bool m_titleOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
