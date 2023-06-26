/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/m2/MainframeModernization_EXPORTS.h>
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
namespace MainframeModernization
{
namespace Model
{

  /**
   * <p>The supported properties for a PO type data set.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/m2-2021-04-28/PoDetailAttributes">AWS
   * API Reference</a></p>
   */
  class PoDetailAttributes
  {
  public:
    AWS_MAINFRAMEMODERNIZATION_API PoDetailAttributes();
    AWS_MAINFRAMEMODERNIZATION_API PoDetailAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAINFRAMEMODERNIZATION_API PoDetailAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAINFRAMEMODERNIZATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The character set encoding of the data set.</p>
     */
    inline const Aws::String& GetEncoding() const{ return m_encoding; }

    /**
     * <p>The character set encoding of the data set.</p>
     */
    inline bool EncodingHasBeenSet() const { return m_encodingHasBeenSet; }

    /**
     * <p>The character set encoding of the data set.</p>
     */
    inline void SetEncoding(const Aws::String& value) { m_encodingHasBeenSet = true; m_encoding = value; }

    /**
     * <p>The character set encoding of the data set.</p>
     */
    inline void SetEncoding(Aws::String&& value) { m_encodingHasBeenSet = true; m_encoding = std::move(value); }

    /**
     * <p>The character set encoding of the data set.</p>
     */
    inline void SetEncoding(const char* value) { m_encodingHasBeenSet = true; m_encoding.assign(value); }

    /**
     * <p>The character set encoding of the data set.</p>
     */
    inline PoDetailAttributes& WithEncoding(const Aws::String& value) { SetEncoding(value); return *this;}

    /**
     * <p>The character set encoding of the data set.</p>
     */
    inline PoDetailAttributes& WithEncoding(Aws::String&& value) { SetEncoding(std::move(value)); return *this;}

    /**
     * <p>The character set encoding of the data set.</p>
     */
    inline PoDetailAttributes& WithEncoding(const char* value) { SetEncoding(value); return *this;}


    /**
     * <p>The format of the data set records.</p>
     */
    inline const Aws::String& GetFormat() const{ return m_format; }

    /**
     * <p>The format of the data set records.</p>
     */
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }

    /**
     * <p>The format of the data set records.</p>
     */
    inline void SetFormat(const Aws::String& value) { m_formatHasBeenSet = true; m_format = value; }

    /**
     * <p>The format of the data set records.</p>
     */
    inline void SetFormat(Aws::String&& value) { m_formatHasBeenSet = true; m_format = std::move(value); }

    /**
     * <p>The format of the data set records.</p>
     */
    inline void SetFormat(const char* value) { m_formatHasBeenSet = true; m_format.assign(value); }

    /**
     * <p>The format of the data set records.</p>
     */
    inline PoDetailAttributes& WithFormat(const Aws::String& value) { SetFormat(value); return *this;}

    /**
     * <p>The format of the data set records.</p>
     */
    inline PoDetailAttributes& WithFormat(Aws::String&& value) { SetFormat(std::move(value)); return *this;}

    /**
     * <p>The format of the data set records.</p>
     */
    inline PoDetailAttributes& WithFormat(const char* value) { SetFormat(value); return *this;}

  private:

    Aws::String m_encoding;
    bool m_encodingHasBeenSet = false;

    Aws::String m_format;
    bool m_formatHasBeenSet = false;
  };

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
