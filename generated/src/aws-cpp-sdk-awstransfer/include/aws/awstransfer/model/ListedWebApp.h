/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
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
namespace Transfer
{
namespace Model
{

  /**
   * <p> a structure that contains details for the web app.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/ListedWebApp">AWS
   * API Reference</a></p>
   */
  class ListedWebApp
  {
  public:
    AWS_TRANSFER_API ListedWebApp() = default;
    AWS_TRANSFER_API ListedWebApp(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API ListedWebApp& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the web app.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    ListedWebApp& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the web app.</p>
     */
    inline const Aws::String& GetWebAppId() const { return m_webAppId; }
    inline bool WebAppIdHasBeenSet() const { return m_webAppIdHasBeenSet; }
    template<typename WebAppIdT = Aws::String>
    void SetWebAppId(WebAppIdT&& value) { m_webAppIdHasBeenSet = true; m_webAppId = std::forward<WebAppIdT>(value); }
    template<typename WebAppIdT = Aws::String>
    ListedWebApp& WithWebAppId(WebAppIdT&& value) { SetWebAppId(std::forward<WebAppIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>AccessEndpoint</code> is the URL that you provide to your users for
     * them to interact with the Transfer Family web app. You can specify a custom URL
     * or use the default value.</p>
     */
    inline const Aws::String& GetAccessEndpoint() const { return m_accessEndpoint; }
    inline bool AccessEndpointHasBeenSet() const { return m_accessEndpointHasBeenSet; }
    template<typename AccessEndpointT = Aws::String>
    void SetAccessEndpoint(AccessEndpointT&& value) { m_accessEndpointHasBeenSet = true; m_accessEndpoint = std::forward<AccessEndpointT>(value); }
    template<typename AccessEndpointT = Aws::String>
    ListedWebApp& WithAccessEndpoint(AccessEndpointT&& value) { SetAccessEndpoint(std::forward<AccessEndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>WebAppEndpoint</code> is the unique URL for your Transfer Family
     * web app. This is the value that you use when you configure <b>Origins</b> on
     * CloudFront.</p>
     */
    inline const Aws::String& GetWebAppEndpoint() const { return m_webAppEndpoint; }
    inline bool WebAppEndpointHasBeenSet() const { return m_webAppEndpointHasBeenSet; }
    template<typename WebAppEndpointT = Aws::String>
    void SetWebAppEndpoint(WebAppEndpointT&& value) { m_webAppEndpointHasBeenSet = true; m_webAppEndpoint = std::forward<WebAppEndpointT>(value); }
    template<typename WebAppEndpointT = Aws::String>
    ListedWebApp& WithWebAppEndpoint(WebAppEndpointT&& value) { SetWebAppEndpoint(std::forward<WebAppEndpointT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_webAppId;
    bool m_webAppIdHasBeenSet = false;

    Aws::String m_accessEndpoint;
    bool m_accessEndpointHasBeenSet = false;

    Aws::String m_webAppEndpoint;
    bool m_webAppEndpointHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
