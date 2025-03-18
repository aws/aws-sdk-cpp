/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
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
namespace AppStream
{
namespace Model
{

  /**
   * <p>The website links that display in the catalog page footer.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/ThemeFooterLink">AWS
   * API Reference</a></p>
   */
  class ThemeFooterLink
  {
  public:
    AWS_APPSTREAM_API ThemeFooterLink() = default;
    AWS_APPSTREAM_API ThemeFooterLink(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API ThemeFooterLink& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the websites that display in the catalog page footer.</p>
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    ThemeFooterLink& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL of the websites that display in the catalog page footer.</p>
     */
    inline const Aws::String& GetFooterLinkURL() const { return m_footerLinkURL; }
    inline bool FooterLinkURLHasBeenSet() const { return m_footerLinkURLHasBeenSet; }
    template<typename FooterLinkURLT = Aws::String>
    void SetFooterLinkURL(FooterLinkURLT&& value) { m_footerLinkURLHasBeenSet = true; m_footerLinkURL = std::forward<FooterLinkURLT>(value); }
    template<typename FooterLinkURLT = Aws::String>
    ThemeFooterLink& WithFooterLinkURL(FooterLinkURLT&& value) { SetFooterLinkURL(std::forward<FooterLinkURLT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::String m_footerLinkURL;
    bool m_footerLinkURLHasBeenSet = false;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
