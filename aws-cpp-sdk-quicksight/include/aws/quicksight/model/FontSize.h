/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/RelativeFontSize.h>
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
   * <p>The option that determines the text display size.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/FontSize">AWS
   * API Reference</a></p>
   */
  class FontSize
  {
  public:
    AWS_QUICKSIGHT_API FontSize();
    AWS_QUICKSIGHT_API FontSize(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API FontSize& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The lexical name for the text size, proportional to its surrounding
     * context.</p>
     */
    inline const RelativeFontSize& GetRelative() const{ return m_relative; }

    /**
     * <p>The lexical name for the text size, proportional to its surrounding
     * context.</p>
     */
    inline bool RelativeHasBeenSet() const { return m_relativeHasBeenSet; }

    /**
     * <p>The lexical name for the text size, proportional to its surrounding
     * context.</p>
     */
    inline void SetRelative(const RelativeFontSize& value) { m_relativeHasBeenSet = true; m_relative = value; }

    /**
     * <p>The lexical name for the text size, proportional to its surrounding
     * context.</p>
     */
    inline void SetRelative(RelativeFontSize&& value) { m_relativeHasBeenSet = true; m_relative = std::move(value); }

    /**
     * <p>The lexical name for the text size, proportional to its surrounding
     * context.</p>
     */
    inline FontSize& WithRelative(const RelativeFontSize& value) { SetRelative(value); return *this;}

    /**
     * <p>The lexical name for the text size, proportional to its surrounding
     * context.</p>
     */
    inline FontSize& WithRelative(RelativeFontSize&& value) { SetRelative(std::move(value)); return *this;}

  private:

    RelativeFontSize m_relative;
    bool m_relativeHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
