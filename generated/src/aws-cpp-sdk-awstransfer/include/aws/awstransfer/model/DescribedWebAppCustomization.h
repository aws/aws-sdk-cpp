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
    AWS_TRANSFER_API DescribedWebAppCustomization() = default;
    AWS_TRANSFER_API DescribedWebAppCustomization(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API DescribedWebAppCustomization& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Returns the Amazon Resource Name (ARN) for the web app.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    DescribedWebAppCustomization& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the unique identifier for your web app.</p>
     */
    inline const Aws::String& GetWebAppId() const { return m_webAppId; }
    inline bool WebAppIdHasBeenSet() const { return m_webAppIdHasBeenSet; }
    template<typename WebAppIdT = Aws::String>
    void SetWebAppId(WebAppIdT&& value) { m_webAppIdHasBeenSet = true; m_webAppId = std::forward<WebAppIdT>(value); }
    template<typename WebAppIdT = Aws::String>
    DescribedWebAppCustomization& WithWebAppId(WebAppIdT&& value) { SetWebAppId(std::forward<WebAppIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the page title that you defined for your web app.</p>
     */
    inline const Aws::String& GetTitle() const { return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    template<typename TitleT = Aws::String>
    void SetTitle(TitleT&& value) { m_titleHasBeenSet = true; m_title = std::forward<TitleT>(value); }
    template<typename TitleT = Aws::String>
    DescribedWebAppCustomization& WithTitle(TitleT&& value) { SetTitle(std::forward<TitleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns a logo file data string (in base64 encoding).</p>
     */
    inline const Aws::Utils::CryptoBuffer& GetLogoFile() const { return m_logoFile; }
    inline bool LogoFileHasBeenSet() const { return m_logoFileHasBeenSet; }
    template<typename LogoFileT = Aws::Utils::CryptoBuffer>
    void SetLogoFile(LogoFileT&& value) { m_logoFileHasBeenSet = true; m_logoFile = std::forward<LogoFileT>(value); }
    template<typename LogoFileT = Aws::Utils::CryptoBuffer>
    DescribedWebAppCustomization& WithLogoFile(LogoFileT&& value) { SetLogoFile(std::forward<LogoFileT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns an icon file data string (in base64 encoding).</p>
     */
    inline const Aws::Utils::CryptoBuffer& GetFaviconFile() const { return m_faviconFile; }
    inline bool FaviconFileHasBeenSet() const { return m_faviconFileHasBeenSet; }
    template<typename FaviconFileT = Aws::Utils::CryptoBuffer>
    void SetFaviconFile(FaviconFileT&& value) { m_faviconFileHasBeenSet = true; m_faviconFile = std::forward<FaviconFileT>(value); }
    template<typename FaviconFileT = Aws::Utils::CryptoBuffer>
    DescribedWebAppCustomization& WithFaviconFile(FaviconFileT&& value) { SetFaviconFile(std::forward<FaviconFileT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

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
