/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/FilledMapConditionalFormattingOption.h>
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
   * <p>The conditional formatting of a <code>FilledMapVisual</code>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/FilledMapConditionalFormatting">AWS
   * API Reference</a></p>
   */
  class FilledMapConditionalFormatting
  {
  public:
    AWS_QUICKSIGHT_API FilledMapConditionalFormatting();
    AWS_QUICKSIGHT_API FilledMapConditionalFormatting(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API FilledMapConditionalFormatting& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Conditional formatting options of a <code>FilledMapVisual</code>.</p>
     */
    inline const Aws::Vector<FilledMapConditionalFormattingOption>& GetConditionalFormattingOptions() const{ return m_conditionalFormattingOptions; }

    /**
     * <p>Conditional formatting options of a <code>FilledMapVisual</code>.</p>
     */
    inline bool ConditionalFormattingOptionsHasBeenSet() const { return m_conditionalFormattingOptionsHasBeenSet; }

    /**
     * <p>Conditional formatting options of a <code>FilledMapVisual</code>.</p>
     */
    inline void SetConditionalFormattingOptions(const Aws::Vector<FilledMapConditionalFormattingOption>& value) { m_conditionalFormattingOptionsHasBeenSet = true; m_conditionalFormattingOptions = value; }

    /**
     * <p>Conditional formatting options of a <code>FilledMapVisual</code>.</p>
     */
    inline void SetConditionalFormattingOptions(Aws::Vector<FilledMapConditionalFormattingOption>&& value) { m_conditionalFormattingOptionsHasBeenSet = true; m_conditionalFormattingOptions = std::move(value); }

    /**
     * <p>Conditional formatting options of a <code>FilledMapVisual</code>.</p>
     */
    inline FilledMapConditionalFormatting& WithConditionalFormattingOptions(const Aws::Vector<FilledMapConditionalFormattingOption>& value) { SetConditionalFormattingOptions(value); return *this;}

    /**
     * <p>Conditional formatting options of a <code>FilledMapVisual</code>.</p>
     */
    inline FilledMapConditionalFormatting& WithConditionalFormattingOptions(Aws::Vector<FilledMapConditionalFormattingOption>&& value) { SetConditionalFormattingOptions(std::move(value)); return *this;}

    /**
     * <p>Conditional formatting options of a <code>FilledMapVisual</code>.</p>
     */
    inline FilledMapConditionalFormatting& AddConditionalFormattingOptions(const FilledMapConditionalFormattingOption& value) { m_conditionalFormattingOptionsHasBeenSet = true; m_conditionalFormattingOptions.push_back(value); return *this; }

    /**
     * <p>Conditional formatting options of a <code>FilledMapVisual</code>.</p>
     */
    inline FilledMapConditionalFormatting& AddConditionalFormattingOptions(FilledMapConditionalFormattingOption&& value) { m_conditionalFormattingOptionsHasBeenSet = true; m_conditionalFormattingOptions.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<FilledMapConditionalFormattingOption> m_conditionalFormattingOptions;
    bool m_conditionalFormattingOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
