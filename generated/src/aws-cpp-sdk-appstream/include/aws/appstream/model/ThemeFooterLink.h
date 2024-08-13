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
    AWS_APPSTREAM_API ThemeFooterLink();
    AWS_APPSTREAM_API ThemeFooterLink(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API ThemeFooterLink& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the websites that display in the catalog page footer.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }
    inline ThemeFooterLink& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}
    inline ThemeFooterLink& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}
    inline ThemeFooterLink& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL of the websites that display in the catalog page footer.</p>
     */
    inline const Aws::String& GetFooterLinkURL() const{ return m_footerLinkURL; }
    inline bool FooterLinkURLHasBeenSet() const { return m_footerLinkURLHasBeenSet; }
    inline void SetFooterLinkURL(const Aws::String& value) { m_footerLinkURLHasBeenSet = true; m_footerLinkURL = value; }
    inline void SetFooterLinkURL(Aws::String&& value) { m_footerLinkURLHasBeenSet = true; m_footerLinkURL = std::move(value); }
    inline void SetFooterLinkURL(const char* value) { m_footerLinkURLHasBeenSet = true; m_footerLinkURL.assign(value); }
    inline ThemeFooterLink& WithFooterLinkURL(const Aws::String& value) { SetFooterLinkURL(value); return *this;}
    inline ThemeFooterLink& WithFooterLinkURL(Aws::String&& value) { SetFooterLinkURL(std::move(value)); return *this;}
    inline ThemeFooterLink& WithFooterLinkURL(const char* value) { SetFooterLinkURL(value); return *this;}
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
