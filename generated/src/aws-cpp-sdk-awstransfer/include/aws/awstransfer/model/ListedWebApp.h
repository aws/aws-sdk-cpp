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
    AWS_TRANSFER_API ListedWebApp();
    AWS_TRANSFER_API ListedWebApp(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API ListedWebApp& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the web app.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline ListedWebApp& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline ListedWebApp& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline ListedWebApp& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the web app.</p>
     */
    inline const Aws::String& GetWebAppId() const{ return m_webAppId; }
    inline bool WebAppIdHasBeenSet() const { return m_webAppIdHasBeenSet; }
    inline void SetWebAppId(const Aws::String& value) { m_webAppIdHasBeenSet = true; m_webAppId = value; }
    inline void SetWebAppId(Aws::String&& value) { m_webAppIdHasBeenSet = true; m_webAppId = std::move(value); }
    inline void SetWebAppId(const char* value) { m_webAppIdHasBeenSet = true; m_webAppId.assign(value); }
    inline ListedWebApp& WithWebAppId(const Aws::String& value) { SetWebAppId(value); return *this;}
    inline ListedWebApp& WithWebAppId(Aws::String&& value) { SetWebAppId(std::move(value)); return *this;}
    inline ListedWebApp& WithWebAppId(const char* value) { SetWebAppId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>AccessEndpoint</code> is the URL that you provide to your users for
     * them to interact with the Transfer Family web app. You can specify a custom URL
     * or use the default value.</p>
     */
    inline const Aws::String& GetAccessEndpoint() const{ return m_accessEndpoint; }
    inline bool AccessEndpointHasBeenSet() const { return m_accessEndpointHasBeenSet; }
    inline void SetAccessEndpoint(const Aws::String& value) { m_accessEndpointHasBeenSet = true; m_accessEndpoint = value; }
    inline void SetAccessEndpoint(Aws::String&& value) { m_accessEndpointHasBeenSet = true; m_accessEndpoint = std::move(value); }
    inline void SetAccessEndpoint(const char* value) { m_accessEndpointHasBeenSet = true; m_accessEndpoint.assign(value); }
    inline ListedWebApp& WithAccessEndpoint(const Aws::String& value) { SetAccessEndpoint(value); return *this;}
    inline ListedWebApp& WithAccessEndpoint(Aws::String&& value) { SetAccessEndpoint(std::move(value)); return *this;}
    inline ListedWebApp& WithAccessEndpoint(const char* value) { SetAccessEndpoint(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>WebAppEndpoint</code> is the unique URL for your Transfer Family
     * web app. This is the value that you use when you configure <b>Origins</b> on
     * CloudFront.</p>
     */
    inline const Aws::String& GetWebAppEndpoint() const{ return m_webAppEndpoint; }
    inline bool WebAppEndpointHasBeenSet() const { return m_webAppEndpointHasBeenSet; }
    inline void SetWebAppEndpoint(const Aws::String& value) { m_webAppEndpointHasBeenSet = true; m_webAppEndpoint = value; }
    inline void SetWebAppEndpoint(Aws::String&& value) { m_webAppEndpointHasBeenSet = true; m_webAppEndpoint = std::move(value); }
    inline void SetWebAppEndpoint(const char* value) { m_webAppEndpointHasBeenSet = true; m_webAppEndpoint.assign(value); }
    inline ListedWebApp& WithWebAppEndpoint(const Aws::String& value) { SetWebAppEndpoint(value); return *this;}
    inline ListedWebApp& WithWebAppEndpoint(Aws::String&& value) { SetWebAppEndpoint(std::move(value)); return *this;}
    inline ListedWebApp& WithWebAppEndpoint(const char* value) { SetWebAppEndpoint(value); return *this;}
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
