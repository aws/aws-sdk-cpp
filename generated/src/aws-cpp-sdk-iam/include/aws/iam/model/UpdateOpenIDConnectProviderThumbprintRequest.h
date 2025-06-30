/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/iam/IAMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace IAM
{
namespace Model
{

  /**
   */
  class UpdateOpenIDConnectProviderThumbprintRequest : public IAMRequest
  {
  public:
    AWS_IAM_API UpdateOpenIDConnectProviderThumbprintRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateOpenIDConnectProviderThumbprint"; }

    AWS_IAM_API Aws::String SerializePayload() const override;

  protected:
    AWS_IAM_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM OIDC provider resource object for
     * which you want to update the thumbprint. You can get a list of OIDC provider
     * ARNs by using the <a
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
    UpdateOpenIDConnectProviderThumbprintRequest& WithOpenIDConnectProviderArn(OpenIDConnectProviderArnT&& value) { SetOpenIDConnectProviderArn(std::forward<OpenIDConnectProviderArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of certificate thumbprints that are associated with the specified IAM
     * OpenID Connect provider. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_CreateOpenIDConnectProvider.html">CreateOpenIDConnectProvider</a>.
     * </p>
     */
    inline const Aws::Vector<Aws::String>& GetThumbprintList() const { return m_thumbprintList; }
    inline bool ThumbprintListHasBeenSet() const { return m_thumbprintListHasBeenSet; }
    template<typename ThumbprintListT = Aws::Vector<Aws::String>>
    void SetThumbprintList(ThumbprintListT&& value) { m_thumbprintListHasBeenSet = true; m_thumbprintList = std::forward<ThumbprintListT>(value); }
    template<typename ThumbprintListT = Aws::Vector<Aws::String>>
    UpdateOpenIDConnectProviderThumbprintRequest& WithThumbprintList(ThumbprintListT&& value) { SetThumbprintList(std::forward<ThumbprintListT>(value)); return *this;}
    template<typename ThumbprintListT = Aws::String>
    UpdateOpenIDConnectProviderThumbprintRequest& AddThumbprintList(ThumbprintListT&& value) { m_thumbprintListHasBeenSet = true; m_thumbprintList.emplace_back(std::forward<ThumbprintListT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_openIDConnectProviderArn;
    bool m_openIDConnectProviderArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_thumbprintList;
    bool m_thumbprintListHasBeenSet = false;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
