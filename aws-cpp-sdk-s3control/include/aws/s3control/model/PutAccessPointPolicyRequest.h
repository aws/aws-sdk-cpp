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
  class AWS_S3CONTROL_API PutAccessPointPolicyRequest : public S3ControlRequest
  {
  public:
    PutAccessPointPolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutAccessPointPolicy"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The AWS account ID for owner of the bucket associated with the specified
     * access point.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The AWS account ID for owner of the bucket associated with the specified
     * access point.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The AWS account ID for owner of the bucket associated with the specified
     * access point.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The AWS account ID for owner of the bucket associated with the specified
     * access point.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The AWS account ID for owner of the bucket associated with the specified
     * access point.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The AWS account ID for owner of the bucket associated with the specified
     * access point.</p>
     */
    inline PutAccessPointPolicyRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The AWS account ID for owner of the bucket associated with the specified
     * access point.</p>
     */
    inline PutAccessPointPolicyRequest& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The AWS account ID for owner of the bucket associated with the specified
     * access point.</p>
     */
    inline PutAccessPointPolicyRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The name of the access point that you want to associate with the specified
     * policy.</p> <p>For using this parameter with Amazon S3 on Outposts with the REST
     * API, you must specify the name and the x-amz-outpost-id as well.</p> <p>For
     * using this parameter with S3 on Outposts with the AWS SDK and CLI, you must
     * specify the ARN of the access point accessed in the format
     * <code>arn:aws:s3-outposts:&lt;Region&gt;:&lt;account-id&gt;:outpost/&lt;outpost-id&gt;/accesspoint/&lt;my-accesspoint-name&gt;</code>.
     * For example, to access the access point <code>reports-ap</code> through outpost
     * <code>my-outpost</code> owned by account <code>123456789012</code> in Region
     * <code>us-west-2</code>, use the URL encoding of
     * <code>arn:aws:s3-outposts:us-west-2:123456789012:outpost/my-outpost/accesspoint/reports-ap</code>.
     * The value must be URL encoded. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the access point that you want to associate with the specified
     * policy.</p> <p>For using this parameter with Amazon S3 on Outposts with the REST
     * API, you must specify the name and the x-amz-outpost-id as well.</p> <p>For
     * using this parameter with S3 on Outposts with the AWS SDK and CLI, you must
     * specify the ARN of the access point accessed in the format
     * <code>arn:aws:s3-outposts:&lt;Region&gt;:&lt;account-id&gt;:outpost/&lt;outpost-id&gt;/accesspoint/&lt;my-accesspoint-name&gt;</code>.
     * For example, to access the access point <code>reports-ap</code> through outpost
     * <code>my-outpost</code> owned by account <code>123456789012</code> in Region
     * <code>us-west-2</code>, use the URL encoding of
     * <code>arn:aws:s3-outposts:us-west-2:123456789012:outpost/my-outpost/accesspoint/reports-ap</code>.
     * The value must be URL encoded. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the access point that you want to associate with the specified
     * policy.</p> <p>For using this parameter with Amazon S3 on Outposts with the REST
     * API, you must specify the name and the x-amz-outpost-id as well.</p> <p>For
     * using this parameter with S3 on Outposts with the AWS SDK and CLI, you must
     * specify the ARN of the access point accessed in the format
     * <code>arn:aws:s3-outposts:&lt;Region&gt;:&lt;account-id&gt;:outpost/&lt;outpost-id&gt;/accesspoint/&lt;my-accesspoint-name&gt;</code>.
     * For example, to access the access point <code>reports-ap</code> through outpost
     * <code>my-outpost</code> owned by account <code>123456789012</code> in Region
     * <code>us-west-2</code>, use the URL encoding of
     * <code>arn:aws:s3-outposts:us-west-2:123456789012:outpost/my-outpost/accesspoint/reports-ap</code>.
     * The value must be URL encoded. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the access point that you want to associate with the specified
     * policy.</p> <p>For using this parameter with Amazon S3 on Outposts with the REST
     * API, you must specify the name and the x-amz-outpost-id as well.</p> <p>For
     * using this parameter with S3 on Outposts with the AWS SDK and CLI, you must
     * specify the ARN of the access point accessed in the format
     * <code>arn:aws:s3-outposts:&lt;Region&gt;:&lt;account-id&gt;:outpost/&lt;outpost-id&gt;/accesspoint/&lt;my-accesspoint-name&gt;</code>.
     * For example, to access the access point <code>reports-ap</code> through outpost
     * <code>my-outpost</code> owned by account <code>123456789012</code> in Region
     * <code>us-west-2</code>, use the URL encoding of
     * <code>arn:aws:s3-outposts:us-west-2:123456789012:outpost/my-outpost/accesspoint/reports-ap</code>.
     * The value must be URL encoded. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the access point that you want to associate with the specified
     * policy.</p> <p>For using this parameter with Amazon S3 on Outposts with the REST
     * API, you must specify the name and the x-amz-outpost-id as well.</p> <p>For
     * using this parameter with S3 on Outposts with the AWS SDK and CLI, you must
     * specify the ARN of the access point accessed in the format
     * <code>arn:aws:s3-outposts:&lt;Region&gt;:&lt;account-id&gt;:outpost/&lt;outpost-id&gt;/accesspoint/&lt;my-accesspoint-name&gt;</code>.
     * For example, to access the access point <code>reports-ap</code> through outpost
     * <code>my-outpost</code> owned by account <code>123456789012</code> in Region
     * <code>us-west-2</code>, use the URL encoding of
     * <code>arn:aws:s3-outposts:us-west-2:123456789012:outpost/my-outpost/accesspoint/reports-ap</code>.
     * The value must be URL encoded. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the access point that you want to associate with the specified
     * policy.</p> <p>For using this parameter with Amazon S3 on Outposts with the REST
     * API, you must specify the name and the x-amz-outpost-id as well.</p> <p>For
     * using this parameter with S3 on Outposts with the AWS SDK and CLI, you must
     * specify the ARN of the access point accessed in the format
     * <code>arn:aws:s3-outposts:&lt;Region&gt;:&lt;account-id&gt;:outpost/&lt;outpost-id&gt;/accesspoint/&lt;my-accesspoint-name&gt;</code>.
     * For example, to access the access point <code>reports-ap</code> through outpost
     * <code>my-outpost</code> owned by account <code>123456789012</code> in Region
     * <code>us-west-2</code>, use the URL encoding of
     * <code>arn:aws:s3-outposts:us-west-2:123456789012:outpost/my-outpost/accesspoint/reports-ap</code>.
     * The value must be URL encoded. </p>
     */
    inline PutAccessPointPolicyRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the access point that you want to associate with the specified
     * policy.</p> <p>For using this parameter with Amazon S3 on Outposts with the REST
     * API, you must specify the name and the x-amz-outpost-id as well.</p> <p>For
     * using this parameter with S3 on Outposts with the AWS SDK and CLI, you must
     * specify the ARN of the access point accessed in the format
     * <code>arn:aws:s3-outposts:&lt;Region&gt;:&lt;account-id&gt;:outpost/&lt;outpost-id&gt;/accesspoint/&lt;my-accesspoint-name&gt;</code>.
     * For example, to access the access point <code>reports-ap</code> through outpost
     * <code>my-outpost</code> owned by account <code>123456789012</code> in Region
     * <code>us-west-2</code>, use the URL encoding of
     * <code>arn:aws:s3-outposts:us-west-2:123456789012:outpost/my-outpost/accesspoint/reports-ap</code>.
     * The value must be URL encoded. </p>
     */
    inline PutAccessPointPolicyRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the access point that you want to associate with the specified
     * policy.</p> <p>For using this parameter with Amazon S3 on Outposts with the REST
     * API, you must specify the name and the x-amz-outpost-id as well.</p> <p>For
     * using this parameter with S3 on Outposts with the AWS SDK and CLI, you must
     * specify the ARN of the access point accessed in the format
     * <code>arn:aws:s3-outposts:&lt;Region&gt;:&lt;account-id&gt;:outpost/&lt;outpost-id&gt;/accesspoint/&lt;my-accesspoint-name&gt;</code>.
     * For example, to access the access point <code>reports-ap</code> through outpost
     * <code>my-outpost</code> owned by account <code>123456789012</code> in Region
     * <code>us-west-2</code>, use the URL encoding of
     * <code>arn:aws:s3-outposts:us-west-2:123456789012:outpost/my-outpost/accesspoint/reports-ap</code>.
     * The value must be URL encoded. </p>
     */
    inline PutAccessPointPolicyRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The policy that you want to apply to the specified access point. For more
     * information about access point policies, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/access-points.html">Managing
     * data access with Amazon S3 Access Points</a> in the <i>Amazon Simple Storage
     * Service User Guide</i>.</p>
     */
    inline const Aws::String& GetPolicy() const{ return m_policy; }

    /**
     * <p>The policy that you want to apply to the specified access point. For more
     * information about access point policies, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/access-points.html">Managing
     * data access with Amazon S3 Access Points</a> in the <i>Amazon Simple Storage
     * Service User Guide</i>.</p>
     */
    inline bool PolicyHasBeenSet() const { return m_policyHasBeenSet; }

    /**
     * <p>The policy that you want to apply to the specified access point. For more
     * information about access point policies, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/access-points.html">Managing
     * data access with Amazon S3 Access Points</a> in the <i>Amazon Simple Storage
     * Service User Guide</i>.</p>
     */
    inline void SetPolicy(const Aws::String& value) { m_policyHasBeenSet = true; m_policy = value; }

    /**
     * <p>The policy that you want to apply to the specified access point. For more
     * information about access point policies, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/access-points.html">Managing
     * data access with Amazon S3 Access Points</a> in the <i>Amazon Simple Storage
     * Service User Guide</i>.</p>
     */
    inline void SetPolicy(Aws::String&& value) { m_policyHasBeenSet = true; m_policy = std::move(value); }

    /**
     * <p>The policy that you want to apply to the specified access point. For more
     * information about access point policies, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/access-points.html">Managing
     * data access with Amazon S3 Access Points</a> in the <i>Amazon Simple Storage
     * Service User Guide</i>.</p>
     */
    inline void SetPolicy(const char* value) { m_policyHasBeenSet = true; m_policy.assign(value); }

    /**
     * <p>The policy that you want to apply to the specified access point. For more
     * information about access point policies, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/access-points.html">Managing
     * data access with Amazon S3 Access Points</a> in the <i>Amazon Simple Storage
     * Service User Guide</i>.</p>
     */
    inline PutAccessPointPolicyRequest& WithPolicy(const Aws::String& value) { SetPolicy(value); return *this;}

    /**
     * <p>The policy that you want to apply to the specified access point. For more
     * information about access point policies, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/access-points.html">Managing
     * data access with Amazon S3 Access Points</a> in the <i>Amazon Simple Storage
     * Service User Guide</i>.</p>
     */
    inline PutAccessPointPolicyRequest& WithPolicy(Aws::String&& value) { SetPolicy(std::move(value)); return *this;}

    /**
     * <p>The policy that you want to apply to the specified access point. For more
     * information about access point policies, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/access-points.html">Managing
     * data access with Amazon S3 Access Points</a> in the <i>Amazon Simple Storage
     * Service User Guide</i>.</p>
     */
    inline PutAccessPointPolicyRequest& WithPolicy(const char* value) { SetPolicy(value); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_policy;
    bool m_policyHasBeenSet;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
