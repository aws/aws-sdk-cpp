/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticloadbalancingv2/model/RevocationContent.h>
#include <utility>

namespace Aws
{
namespace ElasticLoadBalancingv2
{
namespace Model
{

  /**
   */
  class AddTrustStoreRevocationsRequest : public ElasticLoadBalancingv2Request
  {
  public:
    AWS_ELASTICLOADBALANCINGV2_API AddTrustStoreRevocationsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AddTrustStoreRevocations"; }

    AWS_ELASTICLOADBALANCINGV2_API Aws::String SerializePayload() const override;

  protected:
    AWS_ELASTICLOADBALANCINGV2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the trust store.</p>
     */
    inline const Aws::String& GetTrustStoreArn() const { return m_trustStoreArn; }
    inline bool TrustStoreArnHasBeenSet() const { return m_trustStoreArnHasBeenSet; }
    template<typename TrustStoreArnT = Aws::String>
    void SetTrustStoreArn(TrustStoreArnT&& value) { m_trustStoreArnHasBeenSet = true; m_trustStoreArn = std::forward<TrustStoreArnT>(value); }
    template<typename TrustStoreArnT = Aws::String>
    AddTrustStoreRevocationsRequest& WithTrustStoreArn(TrustStoreArnT&& value) { SetTrustStoreArn(std::forward<TrustStoreArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The revocation file to add.</p>
     */
    inline const Aws::Vector<RevocationContent>& GetRevocationContents() const { return m_revocationContents; }
    inline bool RevocationContentsHasBeenSet() const { return m_revocationContentsHasBeenSet; }
    template<typename RevocationContentsT = Aws::Vector<RevocationContent>>
    void SetRevocationContents(RevocationContentsT&& value) { m_revocationContentsHasBeenSet = true; m_revocationContents = std::forward<RevocationContentsT>(value); }
    template<typename RevocationContentsT = Aws::Vector<RevocationContent>>
    AddTrustStoreRevocationsRequest& WithRevocationContents(RevocationContentsT&& value) { SetRevocationContents(std::forward<RevocationContentsT>(value)); return *this;}
    template<typename RevocationContentsT = RevocationContent>
    AddTrustStoreRevocationsRequest& AddRevocationContents(RevocationContentsT&& value) { m_revocationContentsHasBeenSet = true; m_revocationContents.emplace_back(std::forward<RevocationContentsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_trustStoreArn;
    bool m_trustStoreArnHasBeenSet = false;

    Aws::Vector<RevocationContent> m_revocationContents;
    bool m_revocationContentsHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
