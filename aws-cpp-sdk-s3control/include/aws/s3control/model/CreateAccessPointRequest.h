/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/S3ControlRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3control/model/VpcConfiguration.h>
#include <aws/s3control/model/PublicAccessBlockConfiguration.h>
#include <utility>

namespace Aws
{
namespace S3Control
{
namespace Model
{

  /**
   */
  class AWS_S3CONTROL_API CreateAccessPointRequest : public S3ControlRequest
  {
  public:
    CreateAccessPointRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAccessPoint"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The AWS account ID for the owner of the bucket for which you want to create
     * an access point.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The AWS account ID for the owner of the bucket for which you want to create
     * an access point.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The AWS account ID for the owner of the bucket for which you want to create
     * an access point.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The AWS account ID for the owner of the bucket for which you want to create
     * an access point.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The AWS account ID for the owner of the bucket for which you want to create
     * an access point.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The AWS account ID for the owner of the bucket for which you want to create
     * an access point.</p>
     */
    inline CreateAccessPointRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The AWS account ID for the owner of the bucket for which you want to create
     * an access point.</p>
     */
    inline CreateAccessPointRequest& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The AWS account ID for the owner of the bucket for which you want to create
     * an access point.</p>
     */
    inline CreateAccessPointRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The name you want to assign to this access point.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name you want to assign to this access point.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name you want to assign to this access point.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name you want to assign to this access point.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name you want to assign to this access point.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name you want to assign to this access point.</p>
     */
    inline CreateAccessPointRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name you want to assign to this access point.</p>
     */
    inline CreateAccessPointRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name you want to assign to this access point.</p>
     */
    inline CreateAccessPointRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The name of the bucket that you want to associate this access point with.</p>
     * <p>For using this parameter with Amazon S3 on Outposts with the REST API, you
     * must specify the name and the x-amz-outpost-id as well.</p> <p>For using this
     * parameter with S3 on Outposts with the AWS SDK and CLI, you must specify the ARN
     * of the bucket accessed in the format
     * <code>arn:aws:s3-outposts:&lt;Region&gt;:&lt;account-id&gt;:outpost/&lt;outpost-id&gt;/bucket/&lt;my-bucket-name&gt;</code>.
     * For example, to access the bucket <code>reports</code> through outpost
     * <code>my-outpost</code> owned by account <code>123456789012</code> in Region
     * <code>us-west-2</code>, use the URL encoding of
     * <code>arn:aws:s3-outposts:us-west-2:123456789012:outpost/my-outpost/bucket/reports</code>.
     * The value must be URL encoded. </p>
     */
    inline const Aws::String& GetBucket() const{ return m_bucket; }

    /**
     * <p>The name of the bucket that you want to associate this access point with.</p>
     * <p>For using this parameter with Amazon S3 on Outposts with the REST API, you
     * must specify the name and the x-amz-outpost-id as well.</p> <p>For using this
     * parameter with S3 on Outposts with the AWS SDK and CLI, you must specify the ARN
     * of the bucket accessed in the format
     * <code>arn:aws:s3-outposts:&lt;Region&gt;:&lt;account-id&gt;:outpost/&lt;outpost-id&gt;/bucket/&lt;my-bucket-name&gt;</code>.
     * For example, to access the bucket <code>reports</code> through outpost
     * <code>my-outpost</code> owned by account <code>123456789012</code> in Region
     * <code>us-west-2</code>, use the URL encoding of
     * <code>arn:aws:s3-outposts:us-west-2:123456789012:outpost/my-outpost/bucket/reports</code>.
     * The value must be URL encoded. </p>
     */
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }

    /**
     * <p>The name of the bucket that you want to associate this access point with.</p>
     * <p>For using this parameter with Amazon S3 on Outposts with the REST API, you
     * must specify the name and the x-amz-outpost-id as well.</p> <p>For using this
     * parameter with S3 on Outposts with the AWS SDK and CLI, you must specify the ARN
     * of the bucket accessed in the format
     * <code>arn:aws:s3-outposts:&lt;Region&gt;:&lt;account-id&gt;:outpost/&lt;outpost-id&gt;/bucket/&lt;my-bucket-name&gt;</code>.
     * For example, to access the bucket <code>reports</code> through outpost
     * <code>my-outpost</code> owned by account <code>123456789012</code> in Region
     * <code>us-west-2</code>, use the URL encoding of
     * <code>arn:aws:s3-outposts:us-west-2:123456789012:outpost/my-outpost/bucket/reports</code>.
     * The value must be URL encoded. </p>
     */
    inline void SetBucket(const Aws::String& value) { m_bucketHasBeenSet = true; m_bucket = value; }

    /**
     * <p>The name of the bucket that you want to associate this access point with.</p>
     * <p>For using this parameter with Amazon S3 on Outposts with the REST API, you
     * must specify the name and the x-amz-outpost-id as well.</p> <p>For using this
     * parameter with S3 on Outposts with the AWS SDK and CLI, you must specify the ARN
     * of the bucket accessed in the format
     * <code>arn:aws:s3-outposts:&lt;Region&gt;:&lt;account-id&gt;:outpost/&lt;outpost-id&gt;/bucket/&lt;my-bucket-name&gt;</code>.
     * For example, to access the bucket <code>reports</code> through outpost
     * <code>my-outpost</code> owned by account <code>123456789012</code> in Region
     * <code>us-west-2</code>, use the URL encoding of
     * <code>arn:aws:s3-outposts:us-west-2:123456789012:outpost/my-outpost/bucket/reports</code>.
     * The value must be URL encoded. </p>
     */
    inline void SetBucket(Aws::String&& value) { m_bucketHasBeenSet = true; m_bucket = std::move(value); }

    /**
     * <p>The name of the bucket that you want to associate this access point with.</p>
     * <p>For using this parameter with Amazon S3 on Outposts with the REST API, you
     * must specify the name and the x-amz-outpost-id as well.</p> <p>For using this
     * parameter with S3 on Outposts with the AWS SDK and CLI, you must specify the ARN
     * of the bucket accessed in the format
     * <code>arn:aws:s3-outposts:&lt;Region&gt;:&lt;account-id&gt;:outpost/&lt;outpost-id&gt;/bucket/&lt;my-bucket-name&gt;</code>.
     * For example, to access the bucket <code>reports</code> through outpost
     * <code>my-outpost</code> owned by account <code>123456789012</code> in Region
     * <code>us-west-2</code>, use the URL encoding of
     * <code>arn:aws:s3-outposts:us-west-2:123456789012:outpost/my-outpost/bucket/reports</code>.
     * The value must be URL encoded. </p>
     */
    inline void SetBucket(const char* value) { m_bucketHasBeenSet = true; m_bucket.assign(value); }

    /**
     * <p>The name of the bucket that you want to associate this access point with.</p>
     * <p>For using this parameter with Amazon S3 on Outposts with the REST API, you
     * must specify the name and the x-amz-outpost-id as well.</p> <p>For using this
     * parameter with S3 on Outposts with the AWS SDK and CLI, you must specify the ARN
     * of the bucket accessed in the format
     * <code>arn:aws:s3-outposts:&lt;Region&gt;:&lt;account-id&gt;:outpost/&lt;outpost-id&gt;/bucket/&lt;my-bucket-name&gt;</code>.
     * For example, to access the bucket <code>reports</code> through outpost
     * <code>my-outpost</code> owned by account <code>123456789012</code> in Region
     * <code>us-west-2</code>, use the URL encoding of
     * <code>arn:aws:s3-outposts:us-west-2:123456789012:outpost/my-outpost/bucket/reports</code>.
     * The value must be URL encoded. </p>
     */
    inline CreateAccessPointRequest& WithBucket(const Aws::String& value) { SetBucket(value); return *this;}

    /**
     * <p>The name of the bucket that you want to associate this access point with.</p>
     * <p>For using this parameter with Amazon S3 on Outposts with the REST API, you
     * must specify the name and the x-amz-outpost-id as well.</p> <p>For using this
     * parameter with S3 on Outposts with the AWS SDK and CLI, you must specify the ARN
     * of the bucket accessed in the format
     * <code>arn:aws:s3-outposts:&lt;Region&gt;:&lt;account-id&gt;:outpost/&lt;outpost-id&gt;/bucket/&lt;my-bucket-name&gt;</code>.
     * For example, to access the bucket <code>reports</code> through outpost
     * <code>my-outpost</code> owned by account <code>123456789012</code> in Region
     * <code>us-west-2</code>, use the URL encoding of
     * <code>arn:aws:s3-outposts:us-west-2:123456789012:outpost/my-outpost/bucket/reports</code>.
     * The value must be URL encoded. </p>
     */
    inline CreateAccessPointRequest& WithBucket(Aws::String&& value) { SetBucket(std::move(value)); return *this;}

    /**
     * <p>The name of the bucket that you want to associate this access point with.</p>
     * <p>For using this parameter with Amazon S3 on Outposts with the REST API, you
     * must specify the name and the x-amz-outpost-id as well.</p> <p>For using this
     * parameter with S3 on Outposts with the AWS SDK and CLI, you must specify the ARN
     * of the bucket accessed in the format
     * <code>arn:aws:s3-outposts:&lt;Region&gt;:&lt;account-id&gt;:outpost/&lt;outpost-id&gt;/bucket/&lt;my-bucket-name&gt;</code>.
     * For example, to access the bucket <code>reports</code> through outpost
     * <code>my-outpost</code> owned by account <code>123456789012</code> in Region
     * <code>us-west-2</code>, use the URL encoding of
     * <code>arn:aws:s3-outposts:us-west-2:123456789012:outpost/my-outpost/bucket/reports</code>.
     * The value must be URL encoded. </p>
     */
    inline CreateAccessPointRequest& WithBucket(const char* value) { SetBucket(value); return *this;}


    /**
     * <p>If you include this field, Amazon S3 restricts access to this access point to
     * requests from the specified virtual private cloud (VPC).</p>  <p>This is
     * required for creating an access point for Amazon S3 on Outposts buckets.</p>
     * 
     */
    inline const VpcConfiguration& GetVpcConfiguration() const{ return m_vpcConfiguration; }

    /**
     * <p>If you include this field, Amazon S3 restricts access to this access point to
     * requests from the specified virtual private cloud (VPC).</p>  <p>This is
     * required for creating an access point for Amazon S3 on Outposts buckets.</p>
     * 
     */
    inline bool VpcConfigurationHasBeenSet() const { return m_vpcConfigurationHasBeenSet; }

    /**
     * <p>If you include this field, Amazon S3 restricts access to this access point to
     * requests from the specified virtual private cloud (VPC).</p>  <p>This is
     * required for creating an access point for Amazon S3 on Outposts buckets.</p>
     * 
     */
    inline void SetVpcConfiguration(const VpcConfiguration& value) { m_vpcConfigurationHasBeenSet = true; m_vpcConfiguration = value; }

    /**
     * <p>If you include this field, Amazon S3 restricts access to this access point to
     * requests from the specified virtual private cloud (VPC).</p>  <p>This is
     * required for creating an access point for Amazon S3 on Outposts buckets.</p>
     * 
     */
    inline void SetVpcConfiguration(VpcConfiguration&& value) { m_vpcConfigurationHasBeenSet = true; m_vpcConfiguration = std::move(value); }

    /**
     * <p>If you include this field, Amazon S3 restricts access to this access point to
     * requests from the specified virtual private cloud (VPC).</p>  <p>This is
     * required for creating an access point for Amazon S3 on Outposts buckets.</p>
     * 
     */
    inline CreateAccessPointRequest& WithVpcConfiguration(const VpcConfiguration& value) { SetVpcConfiguration(value); return *this;}

    /**
     * <p>If you include this field, Amazon S3 restricts access to this access point to
     * requests from the specified virtual private cloud (VPC).</p>  <p>This is
     * required for creating an access point for Amazon S3 on Outposts buckets.</p>
     * 
     */
    inline CreateAccessPointRequest& WithVpcConfiguration(VpcConfiguration&& value) { SetVpcConfiguration(std::move(value)); return *this;}


    
    inline const PublicAccessBlockConfiguration& GetPublicAccessBlockConfiguration() const{ return m_publicAccessBlockConfiguration; }

    
    inline bool PublicAccessBlockConfigurationHasBeenSet() const { return m_publicAccessBlockConfigurationHasBeenSet; }

    
    inline void SetPublicAccessBlockConfiguration(const PublicAccessBlockConfiguration& value) { m_publicAccessBlockConfigurationHasBeenSet = true; m_publicAccessBlockConfiguration = value; }

    
    inline void SetPublicAccessBlockConfiguration(PublicAccessBlockConfiguration&& value) { m_publicAccessBlockConfigurationHasBeenSet = true; m_publicAccessBlockConfiguration = std::move(value); }

    
    inline CreateAccessPointRequest& WithPublicAccessBlockConfiguration(const PublicAccessBlockConfiguration& value) { SetPublicAccessBlockConfiguration(value); return *this;}

    
    inline CreateAccessPointRequest& WithPublicAccessBlockConfiguration(PublicAccessBlockConfiguration&& value) { SetPublicAccessBlockConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_bucket;
    bool m_bucketHasBeenSet;

    VpcConfiguration m_vpcConfiguration;
    bool m_vpcConfigurationHasBeenSet;

    PublicAccessBlockConfiguration m_publicAccessBlockConfiguration;
    bool m_publicAccessBlockConfigurationHasBeenSet;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
