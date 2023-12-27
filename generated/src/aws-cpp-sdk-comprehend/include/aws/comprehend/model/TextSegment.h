/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
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
namespace Comprehend
{
namespace Model
{

  /**
   * <p>One of the of text strings. Each string has a size limit of
   * 1KB.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/TextSegment">AWS
   * API Reference</a></p>
   */
  class TextSegment
  {
  public:
    AWS_COMPREHEND_API TextSegment();
    AWS_COMPREHEND_API TextSegment(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API TextSegment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The text content.</p>
     */
    inline const Aws::String& GetText() const{ return m_text; }

    /**
     * <p>The text content.</p>
     */
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }

    /**
     * <p>The text content.</p>
     */
    inline void SetText(const Aws::String& value) { m_textHasBeenSet = true; m_text = value; }

    /**
     * <p>The text content.</p>
     */
    inline void SetText(Aws::String&& value) { m_textHasBeenSet = true; m_text = std::move(value); }

    /**
     * <p>The text content.</p>
     */
    inline void SetText(const char* value) { m_textHasBeenSet = true; m_text.assign(value); }

    /**
     * <p>The text content.</p>
     */
    inline TextSegment& WithText(const Aws::String& value) { SetText(value); return *this;}

    /**
     * <p>The text content.</p>
     */
    inline TextSegment& WithText(Aws::String&& value) { SetText(std::move(value)); return *this;}

    /**
     * <p>The text content.</p>
     */
    inline TextSegment& WithText(const char* value) { SetText(value); return *this;}

  private:

    Aws::String m_text;
    bool m_textHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
