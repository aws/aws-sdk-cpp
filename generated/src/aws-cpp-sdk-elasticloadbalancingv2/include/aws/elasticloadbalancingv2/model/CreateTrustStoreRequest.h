/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticloadbalancingv2/model/Tag.h>
#include <utility>

namespace Aws
{
namespace ElasticLoadBalancingv2
{
namespace Model
{

  /**
   */
  class CreateTrustStoreRequest : public ElasticLoadBalancingv2Request
  {
  public:
    AWS_ELASTICLOADBALANCINGV2_API CreateTrustStoreRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateTrustStore"; }

    AWS_ELASTICLOADBALANCINGV2_API Aws::String SerializePayload() const override;

  protected:
    AWS_ELASTICLOADBALANCINGV2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the trust store.</p> <p>This name must be unique per region and
     * cannot be changed after creation.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the trust store.</p> <p>This name must be unique per region and
     * cannot be changed after creation.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the trust store.</p> <p>This name must be unique per region and
     * cannot be changed after creation.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the trust store.</p> <p>This name must be unique per region and
     * cannot be changed after creation.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the trust store.</p> <p>This name must be unique per region and
     * cannot be changed after creation.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the trust store.</p> <p>This name must be unique per region and
     * cannot be changed after creation.</p>
     */
    inline CreateTrustStoreRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the trust store.</p> <p>This name must be unique per region and
     * cannot be changed after creation.</p>
     */
    inline CreateTrustStoreRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the trust store.</p> <p>This name must be unique per region and
     * cannot be changed after creation.</p>
     */
    inline CreateTrustStoreRequest& WithName(const char* value) { SetName(value); return *this;}


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
    inline CreateTrustStoreRequest& WithCaCertificatesBundleS3Bucket(const Aws::String& value) { SetCaCertificatesBundleS3Bucket(value); return *this;}

    /**
     * <p>The Amazon S3 bucket for the ca certificates bundle.</p>
     */
    inline CreateTrustStoreRequest& WithCaCertificatesBundleS3Bucket(Aws::String&& value) { SetCaCertificatesBundleS3Bucket(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 bucket for the ca certificates bundle.</p>
     */
    inline CreateTrustStoreRequest& WithCaCertificatesBundleS3Bucket(const char* value) { SetCaCertificatesBundleS3Bucket(value); return *this;}


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
    inline CreateTrustStoreRequest& WithCaCertificatesBundleS3Key(const Aws::String& value) { SetCaCertificatesBundleS3Key(value); return *this;}

    /**
     * <p>The Amazon S3 path for the ca certificates bundle.</p>
     */
    inline CreateTrustStoreRequest& WithCaCertificatesBundleS3Key(Aws::String&& value) { SetCaCertificatesBundleS3Key(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 path for the ca certificates bundle.</p>
     */
    inline CreateTrustStoreRequest& WithCaCertificatesBundleS3Key(const char* value) { SetCaCertificatesBundleS3Key(value); return *this;}


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
    inline CreateTrustStoreRequest& WithCaCertificatesBundleS3ObjectVersion(const Aws::String& value) { SetCaCertificatesBundleS3ObjectVersion(value); return *this;}

    /**
     * <p>The Amazon S3 object version for the ca certificates bundle. If undefined the
     * current version is used.</p>
     */
    inline CreateTrustStoreRequest& WithCaCertificatesBundleS3ObjectVersion(Aws::String&& value) { SetCaCertificatesBundleS3ObjectVersion(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 object version for the ca certificates bundle. If undefined the
     * current version is used.</p>
     */
    inline CreateTrustStoreRequest& WithCaCertificatesBundleS3ObjectVersion(const char* value) { SetCaCertificatesBundleS3ObjectVersion(value); return *this;}


    /**
     * <p>The tags to assign to the trust store.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags to assign to the trust store.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags to assign to the trust store.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags to assign to the trust store.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags to assign to the trust store.</p>
     */
    inline CreateTrustStoreRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags to assign to the trust store.</p>
     */
    inline CreateTrustStoreRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags to assign to the trust store.</p>
     */
    inline CreateTrustStoreRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags to assign to the trust store.</p>
     */
    inline CreateTrustStoreRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_caCertificatesBundleS3Bucket;
    bool m_caCertificatesBundleS3BucketHasBeenSet = false;

    Aws::String m_caCertificatesBundleS3Key;
    bool m_caCertificatesBundleS3KeyHasBeenSet = false;

    Aws::String m_caCertificatesBundleS3ObjectVersion;
    bool m_caCertificatesBundleS3ObjectVersionHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
