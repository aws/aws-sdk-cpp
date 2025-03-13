/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ElasticLoadBalancingv2
{
namespace Model
{

  /**
   */
  class ModifyTrustStoreRequest : public ElasticLoadBalancingv2Request
  {
  public:
    AWS_ELASTICLOADBALANCINGV2_API ModifyTrustStoreRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyTrustStore"; }

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
    ModifyTrustStoreRequest& WithTrustStoreArn(TrustStoreArnT&& value) { SetTrustStoreArn(std::forward<TrustStoreArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 bucket for the ca certificates bundle.</p>
     */
    inline const Aws::String& GetCaCertificatesBundleS3Bucket() const { return m_caCertificatesBundleS3Bucket; }
    inline bool CaCertificatesBundleS3BucketHasBeenSet() const { return m_caCertificatesBundleS3BucketHasBeenSet; }
    template<typename CaCertificatesBundleS3BucketT = Aws::String>
    void SetCaCertificatesBundleS3Bucket(CaCertificatesBundleS3BucketT&& value) { m_caCertificatesBundleS3BucketHasBeenSet = true; m_caCertificatesBundleS3Bucket = std::forward<CaCertificatesBundleS3BucketT>(value); }
    template<typename CaCertificatesBundleS3BucketT = Aws::String>
    ModifyTrustStoreRequest& WithCaCertificatesBundleS3Bucket(CaCertificatesBundleS3BucketT&& value) { SetCaCertificatesBundleS3Bucket(std::forward<CaCertificatesBundleS3BucketT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 path for the ca certificates bundle.</p>
     */
    inline const Aws::String& GetCaCertificatesBundleS3Key() const { return m_caCertificatesBundleS3Key; }
    inline bool CaCertificatesBundleS3KeyHasBeenSet() const { return m_caCertificatesBundleS3KeyHasBeenSet; }
    template<typename CaCertificatesBundleS3KeyT = Aws::String>
    void SetCaCertificatesBundleS3Key(CaCertificatesBundleS3KeyT&& value) { m_caCertificatesBundleS3KeyHasBeenSet = true; m_caCertificatesBundleS3Key = std::forward<CaCertificatesBundleS3KeyT>(value); }
    template<typename CaCertificatesBundleS3KeyT = Aws::String>
    ModifyTrustStoreRequest& WithCaCertificatesBundleS3Key(CaCertificatesBundleS3KeyT&& value) { SetCaCertificatesBundleS3Key(std::forward<CaCertificatesBundleS3KeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 object version for the ca certificates bundle. If undefined the
     * current version is used.</p>
     */
    inline const Aws::String& GetCaCertificatesBundleS3ObjectVersion() const { return m_caCertificatesBundleS3ObjectVersion; }
    inline bool CaCertificatesBundleS3ObjectVersionHasBeenSet() const { return m_caCertificatesBundleS3ObjectVersionHasBeenSet; }
    template<typename CaCertificatesBundleS3ObjectVersionT = Aws::String>
    void SetCaCertificatesBundleS3ObjectVersion(CaCertificatesBundleS3ObjectVersionT&& value) { m_caCertificatesBundleS3ObjectVersionHasBeenSet = true; m_caCertificatesBundleS3ObjectVersion = std::forward<CaCertificatesBundleS3ObjectVersionT>(value); }
    template<typename CaCertificatesBundleS3ObjectVersionT = Aws::String>
    ModifyTrustStoreRequest& WithCaCertificatesBundleS3ObjectVersion(CaCertificatesBundleS3ObjectVersionT&& value) { SetCaCertificatesBundleS3ObjectVersion(std::forward<CaCertificatesBundleS3ObjectVersionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_trustStoreArn;
    bool m_trustStoreArnHasBeenSet = false;

    Aws::String m_caCertificatesBundleS3Bucket;
    bool m_caCertificatesBundleS3BucketHasBeenSet = false;

    Aws::String m_caCertificatesBundleS3Key;
    bool m_caCertificatesBundleS3KeyHasBeenSet = false;

    Aws::String m_caCertificatesBundleS3ObjectVersion;
    bool m_caCertificatesBundleS3ObjectVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
