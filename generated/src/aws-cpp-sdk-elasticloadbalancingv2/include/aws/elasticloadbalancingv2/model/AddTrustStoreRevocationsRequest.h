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
    AWS_ELASTICLOADBALANCINGV2_API AddTrustStoreRevocationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AddTrustStoreRevocations"; }

    AWS_ELASTICLOADBALANCINGV2_API Aws::String SerializePayload() const override;

  protected:
    AWS_ELASTICLOADBALANCINGV2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The Amazon Resource Name (ARN) of the trust store.</p>
     */
    inline const Aws::String& GetTrustStoreArn() const{ return m_trustStoreArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the trust store.</p>
     */
    inline bool TrustStoreArnHasBeenSet() const { return m_trustStoreArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the trust store.</p>
     */
    inline void SetTrustStoreArn(const Aws::String& value) { m_trustStoreArnHasBeenSet = true; m_trustStoreArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the trust store.</p>
     */
    inline void SetTrustStoreArn(Aws::String&& value) { m_trustStoreArnHasBeenSet = true; m_trustStoreArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the trust store.</p>
     */
    inline void SetTrustStoreArn(const char* value) { m_trustStoreArnHasBeenSet = true; m_trustStoreArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the trust store.</p>
     */
    inline AddTrustStoreRevocationsRequest& WithTrustStoreArn(const Aws::String& value) { SetTrustStoreArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the trust store.</p>
     */
    inline AddTrustStoreRevocationsRequest& WithTrustStoreArn(Aws::String&& value) { SetTrustStoreArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the trust store.</p>
     */
    inline AddTrustStoreRevocationsRequest& WithTrustStoreArn(const char* value) { SetTrustStoreArn(value); return *this;}


    /**
     * <p>The revocation file to add.</p>
     */
    inline const Aws::Vector<RevocationContent>& GetRevocationContents() const{ return m_revocationContents; }

    /**
     * <p>The revocation file to add.</p>
     */
    inline bool RevocationContentsHasBeenSet() const { return m_revocationContentsHasBeenSet; }

    /**
     * <p>The revocation file to add.</p>
     */
    inline void SetRevocationContents(const Aws::Vector<RevocationContent>& value) { m_revocationContentsHasBeenSet = true; m_revocationContents = value; }

    /**
     * <p>The revocation file to add.</p>
     */
    inline void SetRevocationContents(Aws::Vector<RevocationContent>&& value) { m_revocationContentsHasBeenSet = true; m_revocationContents = std::move(value); }

    /**
     * <p>The revocation file to add.</p>
     */
    inline AddTrustStoreRevocationsRequest& WithRevocationContents(const Aws::Vector<RevocationContent>& value) { SetRevocationContents(value); return *this;}

    /**
     * <p>The revocation file to add.</p>
     */
    inline AddTrustStoreRevocationsRequest& WithRevocationContents(Aws::Vector<RevocationContent>&& value) { SetRevocationContents(std::move(value)); return *this;}

    /**
     * <p>The revocation file to add.</p>
     */
    inline AddTrustStoreRevocationsRequest& AddRevocationContents(const RevocationContent& value) { m_revocationContentsHasBeenSet = true; m_revocationContents.push_back(value); return *this; }

    /**
     * <p>The revocation file to add.</p>
     */
    inline AddTrustStoreRevocationsRequest& AddRevocationContents(RevocationContent&& value) { m_revocationContentsHasBeenSet = true; m_revocationContents.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_trustStoreArn;
    bool m_trustStoreArnHasBeenSet = false;

    Aws::Vector<RevocationContent> m_revocationContents;
    bool m_revocationContentsHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
