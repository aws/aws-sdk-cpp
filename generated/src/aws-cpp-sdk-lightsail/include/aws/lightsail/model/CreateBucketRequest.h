/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/LightsailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lightsail/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Lightsail
{
namespace Model
{

  /**
   */
  class CreateBucketRequest : public LightsailRequest
  {
  public:
    AWS_LIGHTSAIL_API CreateBucketRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateBucket"; }

    AWS_LIGHTSAIL_API Aws::String SerializePayload() const override;

    AWS_LIGHTSAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name for the bucket.</p> <p>For more information about bucket names, see
     * <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/bucket-naming-rules-in-amazon-lightsail">Bucket
     * naming rules in Amazon Lightsail</a> in the <i>Amazon Lightsail Developer
     * Guide</i>.</p>
     */
    inline const Aws::String& GetBucketName() const{ return m_bucketName; }
    inline bool BucketNameHasBeenSet() const { return m_bucketNameHasBeenSet; }
    inline void SetBucketName(const Aws::String& value) { m_bucketNameHasBeenSet = true; m_bucketName = value; }
    inline void SetBucketName(Aws::String&& value) { m_bucketNameHasBeenSet = true; m_bucketName = std::move(value); }
    inline void SetBucketName(const char* value) { m_bucketNameHasBeenSet = true; m_bucketName.assign(value); }
    inline CreateBucketRequest& WithBucketName(const Aws::String& value) { SetBucketName(value); return *this;}
    inline CreateBucketRequest& WithBucketName(Aws::String&& value) { SetBucketName(std::move(value)); return *this;}
    inline CreateBucketRequest& WithBucketName(const char* value) { SetBucketName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the bundle to use for the bucket.</p> <p>A bucket bundle specifies
     * the monthly cost, storage space, and data transfer quota for a bucket.</p>
     * <p>Use the <a
     * href="https://docs.aws.amazon.com/lightsail/2016-11-28/api-reference/API_GetBucketBundles.html">GetBucketBundles</a>
     * action to get a list of bundle IDs that you can specify.</p> <p>Use the <a
     * href="https://docs.aws.amazon.com/lightsail/2016-11-28/api-reference/API_UpdateBucketBundle.html">UpdateBucketBundle</a>
     * action to change the bundle after the bucket is created.</p>
     */
    inline const Aws::String& GetBundleId() const{ return m_bundleId; }
    inline bool BundleIdHasBeenSet() const { return m_bundleIdHasBeenSet; }
    inline void SetBundleId(const Aws::String& value) { m_bundleIdHasBeenSet = true; m_bundleId = value; }
    inline void SetBundleId(Aws::String&& value) { m_bundleIdHasBeenSet = true; m_bundleId = std::move(value); }
    inline void SetBundleId(const char* value) { m_bundleIdHasBeenSet = true; m_bundleId.assign(value); }
    inline CreateBucketRequest& WithBundleId(const Aws::String& value) { SetBundleId(value); return *this;}
    inline CreateBucketRequest& WithBundleId(Aws::String&& value) { SetBundleId(std::move(value)); return *this;}
    inline CreateBucketRequest& WithBundleId(const char* value) { SetBundleId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tag keys and optional values to add to the bucket during creation.</p>
     * <p>Use the <a
     * href="https://docs.aws.amazon.com/lightsail/2016-11-28/api-reference/API_TagResource.html">TagResource</a>
     * action to tag the bucket after it's created.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateBucketRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateBucketRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateBucketRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateBucketRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A Boolean value that indicates whether to enable versioning of objects in the
     * bucket.</p> <p>For more information about versioning, see <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-managing-bucket-object-versioning">Enabling
     * and suspending object versioning in a bucket in Amazon Lightsail</a> in the
     * <i>Amazon Lightsail Developer Guide</i>.</p>
     */
    inline bool GetEnableObjectVersioning() const{ return m_enableObjectVersioning; }
    inline bool EnableObjectVersioningHasBeenSet() const { return m_enableObjectVersioningHasBeenSet; }
    inline void SetEnableObjectVersioning(bool value) { m_enableObjectVersioningHasBeenSet = true; m_enableObjectVersioning = value; }
    inline CreateBucketRequest& WithEnableObjectVersioning(bool value) { SetEnableObjectVersioning(value); return *this;}
    ///@}
  private:

    Aws::String m_bucketName;
    bool m_bucketNameHasBeenSet = false;

    Aws::String m_bundleId;
    bool m_bundleIdHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    bool m_enableObjectVersioning;
    bool m_enableObjectVersioningHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
