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
    AWS_TRANSFER_API UpdateWebAppCustomizationRequest() = default;

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
    inline const Aws::String& GetWebAppId() const { return m_webAppId; }
    inline bool WebAppIdHasBeenSet() const { return m_webAppIdHasBeenSet; }
    template<typename WebAppIdT = Aws::String>
    void SetWebAppId(WebAppIdT&& value) { m_webAppIdHasBeenSet = true; m_webAppId = std::forward<WebAppIdT>(value); }
    template<typename WebAppIdT = Aws::String>
    UpdateWebAppCustomizationRequest& WithWebAppId(WebAppIdT&& value) { SetWebAppId(std::forward<WebAppIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provide an updated title.</p>
     */
    inline const Aws::String& GetTitle() const { return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    template<typename TitleT = Aws::String>
    void SetTitle(TitleT&& value) { m_titleHasBeenSet = true; m_title = std::forward<TitleT>(value); }
    template<typename TitleT = Aws::String>
    UpdateWebAppCustomizationRequest& WithTitle(TitleT&& value) { SetTitle(std::forward<TitleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify logo file data string (in base64 encoding).</p>
     */
    inline const Aws::Utils::CryptoBuffer& GetLogoFile() const { return m_logoFile; }
    inline bool LogoFileHasBeenSet() const { return m_logoFileHasBeenSet; }
    template<typename LogoFileT = Aws::Utils::CryptoBuffer>
    void SetLogoFile(LogoFileT&& value) { m_logoFileHasBeenSet = true; m_logoFile = std::forward<LogoFileT>(value); }
    template<typename LogoFileT = Aws::Utils::CryptoBuffer>
    UpdateWebAppCustomizationRequest& WithLogoFile(LogoFileT&& value) { SetLogoFile(std::forward<LogoFileT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify an icon file data string (in base64 encoding).</p>
     */
    inline const Aws::Utils::CryptoBuffer& GetFaviconFile() const { return m_faviconFile; }
    inline bool FaviconFileHasBeenSet() const { return m_faviconFileHasBeenSet; }
    template<typename FaviconFileT = Aws::Utils::CryptoBuffer>
    void SetFaviconFile(FaviconFileT&& value) { m_faviconFileHasBeenSet = true; m_faviconFile = std::forward<FaviconFileT>(value); }
    template<typename FaviconFileT = Aws::Utils::CryptoBuffer>
    UpdateWebAppCustomizationRequest& WithFaviconFile(FaviconFileT&& value) { SetFaviconFile(std::forward<FaviconFileT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_webAppId;
    bool m_webAppIdHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Aws::Utils::CryptoBuffer m_logoFile{};
    bool m_logoFileHasBeenSet = false;

    Aws::Utils::CryptoBuffer m_faviconFile{};
    bool m_faviconFileHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
