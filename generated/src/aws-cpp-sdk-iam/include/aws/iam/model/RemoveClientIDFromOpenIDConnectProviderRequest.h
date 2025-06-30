/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/iam/IAMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace IAM
{
namespace Model
{

  /**
   */
  class RemoveClientIDFromOpenIDConnectProviderRequest : public IAMRequest
  {
  public:
    AWS_IAM_API RemoveClientIDFromOpenIDConnectProviderRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RemoveClientIDFromOpenIDConnectProvider"; }

    AWS_IAM_API Aws::String SerializePayload() const override;

  protected:
    AWS_IAM_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM OIDC provider resource to remove
     * the client ID from. You can get a list of OIDC provider ARNs by using the <a
     * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_ListOpenIDConnectProviders.html">ListOpenIDConnectProviders</a>
     * operation.</p> <p>For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline const Aws::String& GetOpenIDConnectProviderArn() const { return m_openIDConnectProviderArn; }
    inline bool OpenIDConnectProviderArnHasBeenSet() const { return m_openIDConnectProviderArnHasBeenSet; }
    template<typename OpenIDConnectProviderArnT = Aws::String>
    void SetOpenIDConnectProviderArn(OpenIDConnectProviderArnT&& value) { m_openIDConnectProviderArnHasBeenSet = true; m_openIDConnectProviderArn = std::forward<OpenIDConnectProviderArnT>(value); }
    template<typename OpenIDConnectProviderArnT = Aws::String>
    RemoveClientIDFromOpenIDConnectProviderRequest& WithOpenIDConnectProviderArn(OpenIDConnectProviderArnT&& value) { SetOpenIDConnectProviderArn(std::forward<OpenIDConnectProviderArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The client ID (also known as audience) to remove from the IAM OIDC provider
     * resource. For more information about client IDs, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_CreateOpenIDConnectProvider.html">CreateOpenIDConnectProvider</a>.</p>
     */
    inline const Aws::String& GetClientID() const { return m_clientID; }
    inline bool ClientIDHasBeenSet() const { return m_clientIDHasBeenSet; }
    template<typename ClientIDT = Aws::String>
    void SetClientID(ClientIDT&& value) { m_clientIDHasBeenSet = true; m_clientID = std::forward<ClientIDT>(value); }
    template<typename ClientIDT = Aws::String>
    RemoveClientIDFromOpenIDConnectProviderRequest& WithClientID(ClientIDT&& value) { SetClientID(std::forward<ClientIDT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_openIDConnectProviderArn;
    bool m_openIDConnectProviderArnHasBeenSet = false;

    Aws::String m_clientID;
    bool m_clientIDHasBeenSet = false;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
