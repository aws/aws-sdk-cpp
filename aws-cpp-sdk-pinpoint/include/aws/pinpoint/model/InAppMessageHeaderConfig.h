/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/Alignment.h>
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
namespace Pinpoint
{
namespace Model
{

  /**
   * <p>Text config for Message Header.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/InAppMessageHeaderConfig">AWS
   * API Reference</a></p>
   */
  class InAppMessageHeaderConfig
  {
  public:
    AWS_PINPOINT_API InAppMessageHeaderConfig();
    AWS_PINPOINT_API InAppMessageHeaderConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API InAppMessageHeaderConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The alignment of the text. Valid values: LEFT, CENTER, RIGHT.</p>
     */
    inline const Alignment& GetAlignment() const{ return m_alignment; }

    /**
     * <p>The alignment of the text. Valid values: LEFT, CENTER, RIGHT.</p>
     */
    inline bool AlignmentHasBeenSet() const { return m_alignmentHasBeenSet; }

    /**
     * <p>The alignment of the text. Valid values: LEFT, CENTER, RIGHT.</p>
     */
    inline void SetAlignment(const Alignment& value) { m_alignmentHasBeenSet = true; m_alignment = value; }

    /**
     * <p>The alignment of the text. Valid values: LEFT, CENTER, RIGHT.</p>
     */
    inline void SetAlignment(Alignment&& value) { m_alignmentHasBeenSet = true; m_alignment = std::move(value); }

    /**
     * <p>The alignment of the text. Valid values: LEFT, CENTER, RIGHT.</p>
     */
    inline InAppMessageHeaderConfig& WithAlignment(const Alignment& value) { SetAlignment(value); return *this;}

    /**
     * <p>The alignment of the text. Valid values: LEFT, CENTER, RIGHT.</p>
     */
    inline InAppMessageHeaderConfig& WithAlignment(Alignment&& value) { SetAlignment(std::move(value)); return *this;}


    /**
     * <p>Message Header.</p>
     */
    inline const Aws::String& GetHeader() const{ return m_header; }

    /**
     * <p>Message Header.</p>
     */
    inline bool HeaderHasBeenSet() const { return m_headerHasBeenSet; }

    /**
     * <p>Message Header.</p>
     */
    inline void SetHeader(const Aws::String& value) { m_headerHasBeenSet = true; m_header = value; }

    /**
     * <p>Message Header.</p>
     */
    inline void SetHeader(Aws::String&& value) { m_headerHasBeenSet = true; m_header = std::move(value); }

    /**
     * <p>Message Header.</p>
     */
    inline void SetHeader(const char* value) { m_headerHasBeenSet = true; m_header.assign(value); }

    /**
     * <p>Message Header.</p>
     */
    inline InAppMessageHeaderConfig& WithHeader(const Aws::String& value) { SetHeader(value); return *this;}

    /**
     * <p>Message Header.</p>
     */
    inline InAppMessageHeaderConfig& WithHeader(Aws::String&& value) { SetHeader(std::move(value)); return *this;}

    /**
     * <p>Message Header.</p>
     */
    inline InAppMessageHeaderConfig& WithHeader(const char* value) { SetHeader(value); return *this;}


    /**
     * <p>The text color.</p>
     */
    inline const Aws::String& GetTextColor() const{ return m_textColor; }

    /**
     * <p>The text color.</p>
     */
    inline bool TextColorHasBeenSet() const { return m_textColorHasBeenSet; }

    /**
     * <p>The text color.</p>
     */
    inline void SetTextColor(const Aws::String& value) { m_textColorHasBeenSet = true; m_textColor = value; }

    /**
     * <p>The text color.</p>
     */
    inline void SetTextColor(Aws::String&& value) { m_textColorHasBeenSet = true; m_textColor = std::move(value); }

    /**
     * <p>The text color.</p>
     */
    inline void SetTextColor(const char* value) { m_textColorHasBeenSet = true; m_textColor.assign(value); }

    /**
     * <p>The text color.</p>
     */
    inline InAppMessageHeaderConfig& WithTextColor(const Aws::String& value) { SetTextColor(value); return *this;}

    /**
     * <p>The text color.</p>
     */
    inline InAppMessageHeaderConfig& WithTextColor(Aws::String&& value) { SetTextColor(std::move(value)); return *this;}

    /**
     * <p>The text color.</p>
     */
    inline InAppMessageHeaderConfig& WithTextColor(const char* value) { SetTextColor(value); return *this;}

  private:

    Alignment m_alignment;
    bool m_alignmentHasBeenSet = false;

    Aws::String m_header;
    bool m_headerHasBeenSet = false;

    Aws::String m_textColor;
    bool m_textColorHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
