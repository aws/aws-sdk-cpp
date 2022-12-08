/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/Spacing.h>
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
   * <p>The options that style a section.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/SectionStyle">AWS
   * API Reference</a></p>
   */
  class SectionStyle
  {
  public:
    AWS_QUICKSIGHT_API SectionStyle();
    AWS_QUICKSIGHT_API SectionStyle(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API SectionStyle& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The height of a section.</p> <p>Heights can only be defined for header and
     * footer sections. The default height margin is 0.5 inches. </p>
     */
    inline const Aws::String& GetHeight() const{ return m_height; }

    /**
     * <p>The height of a section.</p> <p>Heights can only be defined for header and
     * footer sections. The default height margin is 0.5 inches. </p>
     */
    inline bool HeightHasBeenSet() const { return m_heightHasBeenSet; }

    /**
     * <p>The height of a section.</p> <p>Heights can only be defined for header and
     * footer sections. The default height margin is 0.5 inches. </p>
     */
    inline void SetHeight(const Aws::String& value) { m_heightHasBeenSet = true; m_height = value; }

    /**
     * <p>The height of a section.</p> <p>Heights can only be defined for header and
     * footer sections. The default height margin is 0.5 inches. </p>
     */
    inline void SetHeight(Aws::String&& value) { m_heightHasBeenSet = true; m_height = std::move(value); }

    /**
     * <p>The height of a section.</p> <p>Heights can only be defined for header and
     * footer sections. The default height margin is 0.5 inches. </p>
     */
    inline void SetHeight(const char* value) { m_heightHasBeenSet = true; m_height.assign(value); }

    /**
     * <p>The height of a section.</p> <p>Heights can only be defined for header and
     * footer sections. The default height margin is 0.5 inches. </p>
     */
    inline SectionStyle& WithHeight(const Aws::String& value) { SetHeight(value); return *this;}

    /**
     * <p>The height of a section.</p> <p>Heights can only be defined for header and
     * footer sections. The default height margin is 0.5 inches. </p>
     */
    inline SectionStyle& WithHeight(Aws::String&& value) { SetHeight(std::move(value)); return *this;}

    /**
     * <p>The height of a section.</p> <p>Heights can only be defined for header and
     * footer sections. The default height margin is 0.5 inches. </p>
     */
    inline SectionStyle& WithHeight(const char* value) { SetHeight(value); return *this;}


    /**
     * <p>The spacing between section content and its top, bottom, left, and right
     * edges.</p> <p>There is no padding by default.</p>
     */
    inline const Spacing& GetPadding() const{ return m_padding; }

    /**
     * <p>The spacing between section content and its top, bottom, left, and right
     * edges.</p> <p>There is no padding by default.</p>
     */
    inline bool PaddingHasBeenSet() const { return m_paddingHasBeenSet; }

    /**
     * <p>The spacing between section content and its top, bottom, left, and right
     * edges.</p> <p>There is no padding by default.</p>
     */
    inline void SetPadding(const Spacing& value) { m_paddingHasBeenSet = true; m_padding = value; }

    /**
     * <p>The spacing between section content and its top, bottom, left, and right
     * edges.</p> <p>There is no padding by default.</p>
     */
    inline void SetPadding(Spacing&& value) { m_paddingHasBeenSet = true; m_padding = std::move(value); }

    /**
     * <p>The spacing between section content and its top, bottom, left, and right
     * edges.</p> <p>There is no padding by default.</p>
     */
    inline SectionStyle& WithPadding(const Spacing& value) { SetPadding(value); return *this;}

    /**
     * <p>The spacing between section content and its top, bottom, left, and right
     * edges.</p> <p>There is no padding by default.</p>
     */
    inline SectionStyle& WithPadding(Spacing&& value) { SetPadding(std::move(value)); return *this;}

  private:

    Aws::String m_height;
    bool m_heightHasBeenSet = false;

    Spacing m_padding;
    bool m_paddingHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
