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
    AWS_MAINFRAMEMODERNIZATION_API PoAttributes() = default;
    AWS_MAINFRAMEMODERNIZATION_API PoAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAINFRAMEMODERNIZATION_API PoAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAINFRAMEMODERNIZATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The character set encoding of the data set.</p>
     */
    inline const Aws::String& GetEncoding() const { return m_encoding; }
    inline bool EncodingHasBeenSet() const { return m_encodingHasBeenSet; }
    template<typename EncodingT = Aws::String>
    void SetEncoding(EncodingT&& value) { m_encodingHasBeenSet = true; m_encoding = std::forward<EncodingT>(value); }
    template<typename EncodingT = Aws::String>
    PoAttributes& WithEncoding(EncodingT&& value) { SetEncoding(std::forward<EncodingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format of the data set records.</p>
     */
    inline const Aws::String& GetFormat() const { return m_format; }
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
    template<typename FormatT = Aws::String>
    void SetFormat(FormatT&& value) { m_formatHasBeenSet = true; m_format = std::forward<FormatT>(value); }
    template<typename FormatT = Aws::String>
    PoAttributes& WithFormat(FormatT&& value) { SetFormat(std::forward<FormatT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array containing one or more filename extensions, allowing you to specify
     * which files to be included as PDS member.</p>
     */
    inline const Aws::Vector<Aws::String>& GetMemberFileExtensions() const { return m_memberFileExtensions; }
    inline bool MemberFileExtensionsHasBeenSet() const { return m_memberFileExtensionsHasBeenSet; }
    template<typename MemberFileExtensionsT = Aws::Vector<Aws::String>>
    void SetMemberFileExtensions(MemberFileExtensionsT&& value) { m_memberFileExtensionsHasBeenSet = true; m_memberFileExtensions = std::forward<MemberFileExtensionsT>(value); }
    template<typename MemberFileExtensionsT = Aws::Vector<Aws::String>>
    PoAttributes& WithMemberFileExtensions(MemberFileExtensionsT&& value) { SetMemberFileExtensions(std::forward<MemberFileExtensionsT>(value)); return *this;}
    template<typename MemberFileExtensionsT = Aws::String>
    PoAttributes& AddMemberFileExtensions(MemberFileExtensionsT&& value) { m_memberFileExtensionsHasBeenSet = true; m_memberFileExtensions.emplace_back(std::forward<MemberFileExtensionsT>(value)); return *this; }
    ///@}
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
