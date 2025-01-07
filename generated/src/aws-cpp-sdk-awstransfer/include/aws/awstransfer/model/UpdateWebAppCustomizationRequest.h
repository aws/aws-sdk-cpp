/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/awstransfer/TransferRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Array.h>
#include <utility>

namespace Aws
{
namespace Transfer
{
namespace Model
{

  /**
   */
  class UpdateWebAppCustomizationRequest : public TransferRequest
  {
  public:
    AWS_TRANSFER_API UpdateWebAppCustomizationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateWebAppCustomization"; }

    AWS_TRANSFER_API Aws::String SerializePayload() const override;

    AWS_TRANSFER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Provide the identifier of the web app that you are updating.</p>
     */
    inline const Aws::String& GetWebAppId() const{ return m_webAppId; }
    inline bool WebAppIdHasBeenSet() const { return m_webAppIdHasBeenSet; }
    inline void SetWebAppId(const Aws::String& value) { m_webAppIdHasBeenSet = true; m_webAppId = value; }
    inline void SetWebAppId(Aws::String&& value) { m_webAppIdHasBeenSet = true; m_webAppId = std::move(value); }
    inline void SetWebAppId(const char* value) { m_webAppIdHasBeenSet = true; m_webAppId.assign(value); }
    inline UpdateWebAppCustomizationRequest& WithWebAppId(const Aws::String& value) { SetWebAppId(value); return *this;}
    inline UpdateWebAppCustomizationRequest& WithWebAppId(Aws::String&& value) { SetWebAppId(std::move(value)); return *this;}
    inline UpdateWebAppCustomizationRequest& WithWebAppId(const char* value) { SetWebAppId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provide an updated title.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }
    inline UpdateWebAppCustomizationRequest& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}
    inline UpdateWebAppCustomizationRequest& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}
    inline UpdateWebAppCustomizationRequest& WithTitle(const char* value) { SetTitle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify logo file data string (in base64 encoding).</p>
     */
    inline const Aws::Utils::CryptoBuffer& GetLogoFile() const{ return m_logoFile; }
    inline bool LogoFileHasBeenSet() const { return m_logoFileHasBeenSet; }
    inline void SetLogoFile(const Aws::Utils::CryptoBuffer& value) { m_logoFileHasBeenSet = true; m_logoFile = value; }
    inline void SetLogoFile(Aws::Utils::CryptoBuffer&& value) { m_logoFileHasBeenSet = true; m_logoFile = std::move(value); }
    inline UpdateWebAppCustomizationRequest& WithLogoFile(const Aws::Utils::CryptoBuffer& value) { SetLogoFile(value); return *this;}
    inline UpdateWebAppCustomizationRequest& WithLogoFile(Aws::Utils::CryptoBuffer&& value) { SetLogoFile(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify icon file data string (in base64 encoding).</p>
     */
    inline const Aws::Utils::CryptoBuffer& GetFaviconFile() const{ return m_faviconFile; }
    inline bool FaviconFileHasBeenSet() const { return m_faviconFileHasBeenSet; }
    inline void SetFaviconFile(const Aws::Utils::CryptoBuffer& value) { m_faviconFileHasBeenSet = true; m_faviconFile = value; }
    inline void SetFaviconFile(Aws::Utils::CryptoBuffer&& value) { m_faviconFileHasBeenSet = true; m_faviconFile = std::move(value); }
    inline UpdateWebAppCustomizationRequest& WithFaviconFile(const Aws::Utils::CryptoBuffer& value) { SetFaviconFile(value); return *this;}
    inline UpdateWebAppCustomizationRequest& WithFaviconFile(Aws::Utils::CryptoBuffer&& value) { SetFaviconFile(std::move(value)); return *this;}
    ///@}
  private:

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
