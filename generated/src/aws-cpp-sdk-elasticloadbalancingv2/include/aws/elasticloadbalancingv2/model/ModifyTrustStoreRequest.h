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
    AWS_ELASTICLOADBALANCINGV2_API ModifyTrustStoreRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyTrustStore"; }

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
    inline ModifyTrustStoreRequest& WithTrustStoreArn(const Aws::String& value) { SetTrustStoreArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the trust store.</p>
     */
    inline ModifyTrustStoreRequest& WithTrustStoreArn(Aws::String&& value) { SetTrustStoreArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the trust store.</p>
     */
    inline ModifyTrustStoreRequest& WithTrustStoreArn(const char* value) { SetTrustStoreArn(value); return *this;}


    /**
     * <p>The Amazon S3 bucket for the ca certificates bundle.</p>
     */
    inline const Aws::String& GetCaCertificatesBundleS3Bucket() const{ return m_caCertificatesBundleS3Bucket; }

    /**
     * <p>The Amazon S3 bucket for the ca certificates bundle.</p>
     */
    inline bool CaCertificatesBundleS3BucketHasBeenSet() const { return m_caCertificatesBundleS3BucketHasBeenSet; }

    /**
     * <p>The Amazon S3 bucket for the ca certificates bundle.</p>
     */
    inline void SetCaCertificatesBundleS3Bucket(const Aws::String& value) { m_caCertificatesBundleS3BucketHasBeenSet = true; m_caCertificatesBundleS3Bucket = value; }

    /**
     * <p>The Amazon S3 bucket for the ca certificates bundle.</p>
     */
    inline void SetCaCertificatesBundleS3Bucket(Aws::String&& value) { m_caCertificatesBundleS3BucketHasBeenSet = true; m_caCertificatesBundleS3Bucket = std::move(value); }

    /**
     * <p>The Amazon S3 bucket for the ca certificates bundle.</p>
     */
    inline void SetCaCertificatesBundleS3Bucket(const char* value) { m_caCertificatesBundleS3BucketHasBeenSet = true; m_caCertificatesBundleS3Bucket.assign(value); }

    /**
     * <p>The Amazon S3 bucket for the ca certificates bundle.</p>
     */
    inline ModifyTrustStoreRequest& WithCaCertificatesBundleS3Bucket(const Aws::String& value) { SetCaCertificatesBundleS3Bucket(value); return *this;}

    /**
     * <p>The Amazon S3 bucket for the ca certificates bundle.</p>
     */
    inline ModifyTrustStoreRequest& WithCaCertificatesBundleS3Bucket(Aws::String&& value) { SetCaCertificatesBundleS3Bucket(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 bucket for the ca certificates bundle.</p>
     */
    inline ModifyTrustStoreRequest& WithCaCertificatesBundleS3Bucket(const char* value) { SetCaCertificatesBundleS3Bucket(value); return *this;}


    /**
     * <p>The Amazon S3 path for the ca certificates bundle.</p>
     */
    inline const Aws::String& GetCaCertificatesBundleS3Key() const{ return m_caCertificatesBundleS3Key; }

    /**
     * <p>The Amazon S3 path for the ca certificates bundle.</p>
     */
    inline bool CaCertificatesBundleS3KeyHasBeenSet() const { return m_caCertificatesBundleS3KeyHasBeenSet; }

    /**
     * <p>The Amazon S3 path for the ca certificates bundle.</p>
     */
    inline void SetCaCertificatesBundleS3Key(const Aws::String& value) { m_caCertificatesBundleS3KeyHasBeenSet = true; m_caCertificatesBundleS3Key = value; }

    /**
     * <p>The Amazon S3 path for the ca certificates bundle.</p>
     */
    inline void SetCaCertificatesBundleS3Key(Aws::String&& value) { m_caCertificatesBundleS3KeyHasBeenSet = true; m_caCertificatesBundleS3Key = std::move(value); }

    /**
     * <p>The Amazon S3 path for the ca certificates bundle.</p>
     */
    inline void SetCaCertificatesBundleS3Key(const char* value) { m_caCertificatesBundleS3KeyHasBeenSet = true; m_caCertificatesBundleS3Key.assign(value); }

    /**
     * <p>The Amazon S3 path for the ca certificates bundle.</p>
     */
    inline ModifyTrustStoreRequest& WithCaCertificatesBundleS3Key(const Aws::String& value) { SetCaCertificatesBundleS3Key(value); return *this;}

    /**
     * <p>The Amazon S3 path for the ca certificates bundle.</p>
     */
    inline ModifyTrustStoreRequest& WithCaCertificatesBundleS3Key(Aws::String&& value) { SetCaCertificatesBundleS3Key(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 path for the ca certificates bundle.</p>
     */
    inline ModifyTrustStoreRequest& WithCaCertificatesBundleS3Key(const char* value) { SetCaCertificatesBundleS3Key(value); return *this;}


    /**
     * <p>The Amazon S3 object version for the ca certificates bundle. If undefined the
     * current version is used.</p>
     */
    inline const Aws::String& GetCaCertificatesBundleS3ObjectVersion() const{ return m_caCertificatesBundleS3ObjectVersion; }

    /**
     * <p>The Amazon S3 object version for the ca certificates bundle. If undefined the
     * current version is used.</p>
     */
    inline bool CaCertificatesBundleS3ObjectVersionHasBeenSet() const { return m_caCertificatesBundleS3ObjectVersionHasBeenSet; }

    /**
     * <p>The Amazon S3 object version for the ca certificates bundle. If undefined the
     * current version is used.</p>
     */
    inline void SetCaCertificatesBundleS3ObjectVersion(const Aws::String& value) { m_caCertificatesBundleS3ObjectVersionHasBeenSet = true; m_caCertificatesBundleS3ObjectVersion = value; }

    /**
     * <p>The Amazon S3 object version for the ca certificates bundle. If undefined the
     * current version is used.</p>
     */
    inline void SetCaCertificatesBundleS3ObjectVersion(Aws::String&& value) { m_caCertificatesBundleS3ObjectVersionHasBeenSet = true; m_caCertificatesBundleS3ObjectVersion = std::move(value); }

    /**
     * <p>The Amazon S3 object version for the ca certificates bundle. If undefined the
     * current version is used.</p>
     */
    inline void SetCaCertificatesBundleS3ObjectVersion(const char* value) { m_caCertificatesBundleS3ObjectVersionHasBeenSet = true; m_caCertificatesBundleS3ObjectVersion.assign(value); }

    /**
     * <p>The Amazon S3 object version for the ca certificates bundle. If undefined the
     * current version is used.</p>
     */
    inline ModifyTrustStoreRequest& WithCaCertificatesBundleS3ObjectVersion(const Aws::String& value) { SetCaCertificatesBundleS3ObjectVersion(value); return *this;}

    /**
     * <p>The Amazon S3 object version for the ca certificates bundle. If undefined the
     * current version is used.</p>
     */
    inline ModifyTrustStoreRequest& WithCaCertificatesBundleS3ObjectVersion(Aws::String&& value) { SetCaCertificatesBundleS3ObjectVersion(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 object version for the ca certificates bundle. If undefined the
     * current version is used.</p>
     */
    inline ModifyTrustStoreRequest& WithCaCertificatesBundleS3ObjectVersion(const char* value) { SetCaCertificatesBundleS3ObjectVersion(value); return *this;}

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
