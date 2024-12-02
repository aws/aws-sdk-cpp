/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Array.h>
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
namespace Transfer
{
namespace Model
{

  /**
   * <p>A structure that contains the customization fields for the web app. You can
   * provide a title, logo, and icon to customize the appearance of your web
   * app.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/DescribedWebAppCustomization">AWS
   * API Reference</a></p>
   */
  class DescribedWebAppCustomization
  {
  public:
    AWS_TRANSFER_API DescribedWebAppCustomization();
    AWS_TRANSFER_API DescribedWebAppCustomization(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API DescribedWebAppCustomization& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Returns the Amazon Resource Name (ARN) for the web app.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline DescribedWebAppCustomization& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline DescribedWebAppCustomization& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline DescribedWebAppCustomization& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the unique identifier for your web app.</p>
     */
    inline const Aws::String& GetWebAppId() const{ return m_webAppId; }
    inline bool WebAppIdHasBeenSet() const { return m_webAppIdHasBeenSet; }
    inline void SetWebAppId(const Aws::String& value) { m_webAppIdHasBeenSet = true; m_webAppId = value; }
    inline void SetWebAppId(Aws::String&& value) { m_webAppIdHasBeenSet = true; m_webAppId = std::move(value); }
    inline void SetWebAppId(const char* value) { m_webAppIdHasBeenSet = true; m_webAppId.assign(value); }
    inline DescribedWebAppCustomization& WithWebAppId(const Aws::String& value) { SetWebAppId(value); return *this;}
    inline DescribedWebAppCustomization& WithWebAppId(Aws::String&& value) { SetWebAppId(std::move(value)); return *this;}
    inline DescribedWebAppCustomization& WithWebAppId(const char* value) { SetWebAppId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the page title that you defined for your web app.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }
    inline DescribedWebAppCustomization& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}
    inline DescribedWebAppCustomization& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}
    inline DescribedWebAppCustomization& WithTitle(const char* value) { SetTitle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns a logo file data string (in base64 encoding).</p>
     */
    inline const Aws::Utils::CryptoBuffer& GetLogoFile() const{ return m_logoFile; }
    inline bool LogoFileHasBeenSet() const { return m_logoFileHasBeenSet; }
    inline void SetLogoFile(const Aws::Utils::CryptoBuffer& value) { m_logoFileHasBeenSet = true; m_logoFile = value; }
    inline void SetLogoFile(Aws::Utils::CryptoBuffer&& value) { m_logoFileHasBeenSet = true; m_logoFile = std::move(value); }
    inline DescribedWebAppCustomization& WithLogoFile(const Aws::Utils::CryptoBuffer& value) { SetLogoFile(value); return *this;}
    inline DescribedWebAppCustomization& WithLogoFile(Aws::Utils::CryptoBuffer&& value) { SetLogoFile(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns a icon file data string (in base64 encoding).</p>
     */
    inline const Aws::Utils::CryptoBuffer& GetFaviconFile() const{ return m_faviconFile; }
    inline bool FaviconFileHasBeenSet() const { return m_faviconFileHasBeenSet; }
    inline void SetFaviconFile(const Aws::Utils::CryptoBuffer& value) { m_faviconFileHasBeenSet = true; m_faviconFile = value; }
    inline void SetFaviconFile(Aws::Utils::CryptoBuffer&& value) { m_faviconFileHasBeenSet = true; m_faviconFile = std::move(value); }
    inline DescribedWebAppCustomization& WithFaviconFile(const Aws::Utils::CryptoBuffer& value) { SetFaviconFile(value); return *this;}
    inline DescribedWebAppCustomization& WithFaviconFile(Aws::Utils::CryptoBuffer&& value) { SetFaviconFile(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_webAppId;
    bool m_webAppIdHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Aws::Utils::CryptoBuffer m_logoFile;
    bool m_logoFileHasBeenSet = false;

    Aws::Utils::CryptoBuffer m_faviconFile;
    bool m_faviconFileHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
