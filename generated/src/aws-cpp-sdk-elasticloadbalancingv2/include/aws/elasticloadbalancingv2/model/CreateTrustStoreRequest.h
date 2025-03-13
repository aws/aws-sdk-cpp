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
    AWS_ELASTICLOADBALANCINGV2_API CreateTrustStoreRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateTrustStore"; }

    AWS_ELASTICLOADBALANCINGV2_API Aws::String SerializePayload() const override;

  protected:
    AWS_ELASTICLOADBALANCINGV2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The name of the trust store.</p> <p>This name must be unique per region and
     * can't be changed after creation.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateTrustStoreRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
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
    CreateTrustStoreRequest& WithCaCertificatesBundleS3Bucket(CaCertificatesBundleS3BucketT&& value) { SetCaCertificatesBundleS3Bucket(std::forward<CaCertificatesBundleS3BucketT>(value)); return *this;}
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
    CreateTrustStoreRequest& WithCaCertificatesBundleS3Key(CaCertificatesBundleS3KeyT&& value) { SetCaCertificatesBundleS3Key(std::forward<CaCertificatesBundleS3KeyT>(value)); return *this;}
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
    CreateTrustStoreRequest& WithCaCertificatesBundleS3ObjectVersion(CaCertificatesBundleS3ObjectVersionT&& value) { SetCaCertificatesBundleS3ObjectVersion(std::forward<CaCertificatesBundleS3ObjectVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to assign to the trust store.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateTrustStoreRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateTrustStoreRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
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
