/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/S3ControlRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace S3Control
{
namespace Model
{

  /**
   */
  class PutBucketPolicyRequest : public S3ControlRequest
  {
  public:
    AWS_S3CONTROL_API PutBucketPolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutBucketPolicy"; }

    AWS_S3CONTROL_API Aws::String SerializePayload() const override;

    AWS_S3CONTROL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    AWS_S3CONTROL_API inline bool ShouldComputeContentMd5() const override { return true; }

    /**
     * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
     */
    AWS_S3CONTROL_API EndpointParameters GetEndpointContextParams() const override;

    /**
     * <p>The Amazon Web Services account ID of the Outposts bucket.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The Amazon Web Services account ID of the Outposts bucket.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services account ID of the Outposts bucket.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The Amazon Web Services account ID of the Outposts bucket.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID of the Outposts bucket.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The Amazon Web Services account ID of the Outposts bucket.</p>
     */
    inline PutBucketPolicyRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID of the Outposts bucket.</p>
     */
    inline PutBucketPolicyRequest& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID of the Outposts bucket.</p>
     */
    inline PutBucketPolicyRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>Specifies the bucket.</p> <p>For using this parameter with Amazon S3 on
     * Outposts with the REST API, you must specify the name and the x-amz-outpost-id
     * as well.</p> <p>For using this parameter with S3 on Outposts with the Amazon Web
     * Services SDK and CLI, you must specify the ARN of the bucket accessed in the
     * format
     * <code>arn:aws:s3-outposts:&lt;Region&gt;:&lt;account-id&gt;:outpost/&lt;outpost-id&gt;/bucket/&lt;my-bucket-name&gt;</code>.
     * For example, to access the bucket <code>reports</code> through outpost
     * <code>my-outpost</code> owned by account <code>123456789012</code> in Region
     * <code>us-west-2</code>, use the URL encoding of
     * <code>arn:aws:s3-outposts:us-west-2:123456789012:outpost/my-outpost/bucket/reports</code>.
     * The value must be URL encoded. </p>
     */
    inline const Aws::String& GetBucket() const{ return m_bucket; }

    /**
     * <p>Specifies the bucket.</p> <p>For using this parameter with Amazon S3 on
     * Outposts with the REST API, you must specify the name and the x-amz-outpost-id
     * as well.</p> <p>For using this parameter with S3 on Outposts with the Amazon Web
     * Services SDK and CLI, you must specify the ARN of the bucket accessed in the
     * format
     * <code>arn:aws:s3-outposts:&lt;Region&gt;:&lt;account-id&gt;:outpost/&lt;outpost-id&gt;/bucket/&lt;my-bucket-name&gt;</code>.
     * For example, to access the bucket <code>reports</code> through outpost
     * <code>my-outpost</code> owned by account <code>123456789012</code> in Region
     * <code>us-west-2</code>, use the URL encoding of
     * <code>arn:aws:s3-outposts:us-west-2:123456789012:outpost/my-outpost/bucket/reports</code>.
     * The value must be URL encoded. </p>
     */
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }

    /**
     * <p>Specifies the bucket.</p> <p>For using this parameter with Amazon S3 on
     * Outposts with the REST API, you must specify the name and the x-amz-outpost-id
     * as well.</p> <p>For using this parameter with S3 on Outposts with the Amazon Web
     * Services SDK and CLI, you must specify the ARN of the bucket accessed in the
     * format
     * <code>arn:aws:s3-outposts:&lt;Region&gt;:&lt;account-id&gt;:outpost/&lt;outpost-id&gt;/bucket/&lt;my-bucket-name&gt;</code>.
     * For example, to access the bucket <code>reports</code> through outpost
     * <code>my-outpost</code> owned by account <code>123456789012</code> in Region
     * <code>us-west-2</code>, use the URL encoding of
     * <code>arn:aws:s3-outposts:us-west-2:123456789012:outpost/my-outpost/bucket/reports</code>.
     * The value must be URL encoded. </p>
     */
    inline void SetBucket(const Aws::String& value) { m_bucketHasBeenSet = true; m_bucket = value; }

    /**
     * <p>Specifies the bucket.</p> <p>For using this parameter with Amazon S3 on
     * Outposts with the REST API, you must specify the name and the x-amz-outpost-id
     * as well.</p> <p>For using this parameter with S3 on Outposts with the Amazon Web
     * Services SDK and CLI, you must specify the ARN of the bucket accessed in the
     * format
     * <code>arn:aws:s3-outposts:&lt;Region&gt;:&lt;account-id&gt;:outpost/&lt;outpost-id&gt;/bucket/&lt;my-bucket-name&gt;</code>.
     * For example, to access the bucket <code>reports</code> through outpost
     * <code>my-outpost</code> owned by account <code>123456789012</code> in Region
     * <code>us-west-2</code>, use the URL encoding of
     * <code>arn:aws:s3-outposts:us-west-2:123456789012:outpost/my-outpost/bucket/reports</code>.
     * The value must be URL encoded. </p>
     */
    inline void SetBucket(Aws::String&& value) { m_bucketHasBeenSet = true; m_bucket = std::move(value); }

    /**
     * <p>Specifies the bucket.</p> <p>For using this parameter with Amazon S3 on
     * Outposts with the REST API, you must specify the name and the x-amz-outpost-id
     * as well.</p> <p>For using this parameter with S3 on Outposts with the Amazon Web
     * Services SDK and CLI, you must specify the ARN of the bucket accessed in the
     * format
     * <code>arn:aws:s3-outposts:&lt;Region&gt;:&lt;account-id&gt;:outpost/&lt;outpost-id&gt;/bucket/&lt;my-bucket-name&gt;</code>.
     * For example, to access the bucket <code>reports</code> through outpost
     * <code>my-outpost</code> owned by account <code>123456789012</code> in Region
     * <code>us-west-2</code>, use the URL encoding of
     * <code>arn:aws:s3-outposts:us-west-2:123456789012:outpost/my-outpost/bucket/reports</code>.
     * The value must be URL encoded. </p>
     */
    inline void SetBucket(const char* value) { m_bucketHasBeenSet = true; m_bucket.assign(value); }

    /**
     * <p>Specifies the bucket.</p> <p>For using this parameter with Amazon S3 on
     * Outposts with the REST API, you must specify the name and the x-amz-outpost-id
     * as well.</p> <p>For using this parameter with S3 on Outposts with the Amazon Web
     * Services SDK and CLI, you must specify the ARN of the bucket accessed in the
     * format
     * <code>arn:aws:s3-outposts:&lt;Region&gt;:&lt;account-id&gt;:outpost/&lt;outpost-id&gt;/bucket/&lt;my-bucket-name&gt;</code>.
     * For example, to access the bucket <code>reports</code> through outpost
     * <code>my-outpost</code> owned by account <code>123456789012</code> in Region
     * <code>us-west-2</code>, use the URL encoding of
     * <code>arn:aws:s3-outposts:us-west-2:123456789012:outpost/my-outpost/bucket/reports</code>.
     * The value must be URL encoded. </p>
     */
    inline PutBucketPolicyRequest& WithBucket(const Aws::String& value) { SetBucket(value); return *this;}

    /**
     * <p>Specifies the bucket.</p> <p>For using this parameter with Amazon S3 on
     * Outposts with the REST API, you must specify the name and the x-amz-outpost-id
     * as well.</p> <p>For using this parameter with S3 on Outposts with the Amazon Web
     * Services SDK and CLI, you must specify the ARN of the bucket accessed in the
     * format
     * <code>arn:aws:s3-outposts:&lt;Region&gt;:&lt;account-id&gt;:outpost/&lt;outpost-id&gt;/bucket/&lt;my-bucket-name&gt;</code>.
     * For example, to access the bucket <code>reports</code> through outpost
     * <code>my-outpost</code> owned by account <code>123456789012</code> in Region
     * <code>us-west-2</code>, use the URL encoding of
     * <code>arn:aws:s3-outposts:us-west-2:123456789012:outpost/my-outpost/bucket/reports</code>.
     * The value must be URL encoded. </p>
     */
    inline PutBucketPolicyRequest& WithBucket(Aws::String&& value) { SetBucket(std::move(value)); return *this;}

    /**
     * <p>Specifies the bucket.</p> <p>For using this parameter with Amazon S3 on
     * Outposts with the REST API, you must specify the name and the x-amz-outpost-id
     * as well.</p> <p>For using this parameter with S3 on Outposts with the Amazon Web
     * Services SDK and CLI, you must specify the ARN of the bucket accessed in the
     * format
     * <code>arn:aws:s3-outposts:&lt;Region&gt;:&lt;account-id&gt;:outpost/&lt;outpost-id&gt;/bucket/&lt;my-bucket-name&gt;</code>.
     * For example, to access the bucket <code>reports</code> through outpost
     * <code>my-outpost</code> owned by account <code>123456789012</code> in Region
     * <code>us-west-2</code>, use the URL encoding of
     * <code>arn:aws:s3-outposts:us-west-2:123456789012:outpost/my-outpost/bucket/reports</code>.
     * The value must be URL encoded. </p>
     */
    inline PutBucketPolicyRequest& WithBucket(const char* value) { SetBucket(value); return *this;}


    /**
     * <p>Set this parameter to true to confirm that you want to remove your
     * permissions to change this bucket policy in the future.</p>  <p>This is
     * not supported by Amazon S3 on Outposts buckets.</p> 
     */
    inline bool GetConfirmRemoveSelfBucketAccess() const{ return m_confirmRemoveSelfBucketAccess; }

    /**
     * <p>Set this parameter to true to confirm that you want to remove your
     * permissions to change this bucket policy in the future.</p>  <p>This is
     * not supported by Amazon S3 on Outposts buckets.</p> 
     */
    inline bool ConfirmRemoveSelfBucketAccessHasBeenSet() const { return m_confirmRemoveSelfBucketAccessHasBeenSet; }

    /**
     * <p>Set this parameter to true to confirm that you want to remove your
     * permissions to change this bucket policy in the future.</p>  <p>This is
     * not supported by Amazon S3 on Outposts buckets.</p> 
     */
    inline void SetConfirmRemoveSelfBucketAccess(bool value) { m_confirmRemoveSelfBucketAccessHasBeenSet = true; m_confirmRemoveSelfBucketAccess = value; }

    /**
     * <p>Set this parameter to true to confirm that you want to remove your
     * permissions to change this bucket policy in the future.</p>  <p>This is
     * not supported by Amazon S3 on Outposts buckets.</p> 
     */
    inline PutBucketPolicyRequest& WithConfirmRemoveSelfBucketAccess(bool value) { SetConfirmRemoveSelfBucketAccess(value); return *this;}


    /**
     * <p>The bucket policy as a JSON document.</p>
     */
    inline const Aws::String& GetPolicy() const{ return m_policy; }

    /**
     * <p>The bucket policy as a JSON document.</p>
     */
    inline bool PolicyHasBeenSet() const { return m_policyHasBeenSet; }

    /**
     * <p>The bucket policy as a JSON document.</p>
     */
    inline void SetPolicy(const Aws::String& value) { m_policyHasBeenSet = true; m_policy = value; }

    /**
     * <p>The bucket policy as a JSON document.</p>
     */
    inline void SetPolicy(Aws::String&& value) { m_policyHasBeenSet = true; m_policy = std::move(value); }

    /**
     * <p>The bucket policy as a JSON document.</p>
     */
    inline void SetPolicy(const char* value) { m_policyHasBeenSet = true; m_policy.assign(value); }

    /**
     * <p>The bucket policy as a JSON document.</p>
     */
    inline PutBucketPolicyRequest& WithPolicy(const Aws::String& value) { SetPolicy(value); return *this;}

    /**
     * <p>The bucket policy as a JSON document.</p>
     */
    inline PutBucketPolicyRequest& WithPolicy(Aws::String&& value) { SetPolicy(std::move(value)); return *this;}

    /**
     * <p>The bucket policy as a JSON document.</p>
     */
    inline PutBucketPolicyRequest& WithPolicy(const char* value) { SetPolicy(value); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_bucket;
    bool m_bucketHasBeenSet = false;

    bool m_confirmRemoveSelfBucketAccess;
    bool m_confirmRemoveSelfBucketAccessHasBeenSet = false;

    Aws::String m_policy;
    bool m_policyHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
