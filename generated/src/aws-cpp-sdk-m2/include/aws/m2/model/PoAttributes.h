/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/m2/MainframeModernization_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/m2-2021-04-28/PoAttributes">AWS
   * API Reference</a></p>
   */
  class PoAttributes
  {
  public:
    AWS_MAINFRAMEMODERNIZATION_API PoAttributes();
    AWS_MAINFRAMEMODERNIZATION_API PoAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAINFRAMEMODERNIZATION_API PoAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline PoAttributes& WithEncoding(const Aws::String& value) { SetEncoding(value); return *this;}

    /**
     * <p>The character set encoding of the data set.</p>
     */
    inline PoAttributes& WithEncoding(Aws::String&& value) { SetEncoding(std::move(value)); return *this;}

    /**
     * <p>The character set encoding of the data set.</p>
     */
    inline PoAttributes& WithEncoding(const char* value) { SetEncoding(value); return *this;}


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
    inline PoAttributes& WithFormat(const Aws::String& value) { SetFormat(value); return *this;}

    /**
     * <p>The format of the data set records.</p>
     */
    inline PoAttributes& WithFormat(Aws::String&& value) { SetFormat(std::move(value)); return *this;}

    /**
     * <p>The format of the data set records.</p>
     */
    inline PoAttributes& WithFormat(const char* value) { SetFormat(value); return *this;}


    /**
     * <p>An array containing one or more filename extensions, allowing you to specify
     * which files to be included as PDS member.</p>
     */
    inline const Aws::Vector<Aws::String>& GetMemberFileExtensions() const{ return m_memberFileExtensions; }

    /**
     * <p>An array containing one or more filename extensions, allowing you to specify
     * which files to be included as PDS member.</p>
     */
    inline bool MemberFileExtensionsHasBeenSet() const { return m_memberFileExtensionsHasBeenSet; }

    /**
     * <p>An array containing one or more filename extensions, allowing you to specify
     * which files to be included as PDS member.</p>
     */
    inline void SetMemberFileExtensions(const Aws::Vector<Aws::String>& value) { m_memberFileExtensionsHasBeenSet = true; m_memberFileExtensions = value; }

    /**
     * <p>An array containing one or more filename extensions, allowing you to specify
     * which files to be included as PDS member.</p>
     */
    inline void SetMemberFileExtensions(Aws::Vector<Aws::String>&& value) { m_memberFileExtensionsHasBeenSet = true; m_memberFileExtensions = std::move(value); }

    /**
     * <p>An array containing one or more filename extensions, allowing you to specify
     * which files to be included as PDS member.</p>
     */
    inline PoAttributes& WithMemberFileExtensions(const Aws::Vector<Aws::String>& value) { SetMemberFileExtensions(value); return *this;}

    /**
     * <p>An array containing one or more filename extensions, allowing you to specify
     * which files to be included as PDS member.</p>
     */
    inline PoAttributes& WithMemberFileExtensions(Aws::Vector<Aws::String>&& value) { SetMemberFileExtensions(std::move(value)); return *this;}

    /**
     * <p>An array containing one or more filename extensions, allowing you to specify
     * which files to be included as PDS member.</p>
     */
    inline PoAttributes& AddMemberFileExtensions(const Aws::String& value) { m_memberFileExtensionsHasBeenSet = true; m_memberFileExtensions.push_back(value); return *this; }

    /**
     * <p>An array containing one or more filename extensions, allowing you to specify
     * which files to be included as PDS member.</p>
     */
    inline PoAttributes& AddMemberFileExtensions(Aws::String&& value) { m_memberFileExtensionsHasBeenSet = true; m_memberFileExtensions.push_back(std::move(value)); return *this; }

    /**
     * <p>An array containing one or more filename extensions, allowing you to specify
     * which files to be included as PDS member.</p>
     */
    inline PoAttributes& AddMemberFileExtensions(const char* value) { m_memberFileExtensionsHasBeenSet = true; m_memberFileExtensions.push_back(value); return *this; }

  private:

    Aws::String m_encoding;
    bool m_encodingHasBeenSet = false;

    Aws::String m_format;
    bool m_formatHasBeenSet = false;

    Aws::Vector<Aws::String> m_memberFileExtensions;
    bool m_memberFileExtensionsHasBeenSet = false;
  };

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
