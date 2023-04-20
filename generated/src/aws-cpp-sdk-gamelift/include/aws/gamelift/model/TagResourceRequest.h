/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/GameLiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/gamelift/model/Tag.h>
#include <utility>

namespace Aws
{
namespace GameLift
{
namespace Model
{

  /**
   */
  class TagResourceRequest : public GameLiftRequest
  {
  public:
    AWS_GAMELIFT_API TagResourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "TagResource"; }

    AWS_GAMELIFT_API Aws::String SerializePayload() const override;

    AWS_GAMELIFT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that uniquely identifies the Amazon GameLift resource that you want to assign
     * tags to. Amazon GameLift includes resource ARNs in the data object for the
     * resource. You can retrieve the ARN by calling a <code>List</code> or
     * <code>Describe</code> operation for the resource type. </p>
     */
    inline const Aws::String& GetResourceARN() const{ return m_resourceARN; }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that uniquely identifies the Amazon GameLift resource that you want to assign
     * tags to. Amazon GameLift includes resource ARNs in the data object for the
     * resource. You can retrieve the ARN by calling a <code>List</code> or
     * <code>Describe</code> operation for the resource type. </p>
     */
    inline bool ResourceARNHasBeenSet() const { return m_resourceARNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that uniquely identifies the Amazon GameLift resource that you want to assign
     * tags to. Amazon GameLift includes resource ARNs in the data object for the
     * resource. You can retrieve the ARN by calling a <code>List</code> or
     * <code>Describe</code> operation for the resource type. </p>
     */
    inline void SetResourceARN(const Aws::String& value) { m_resourceARNHasBeenSet = true; m_resourceARN = value; }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that uniquely identifies the Amazon GameLift resource that you want to assign
     * tags to. Amazon GameLift includes resource ARNs in the data object for the
     * resource. You can retrieve the ARN by calling a <code>List</code> or
     * <code>Describe</code> operation for the resource type. </p>
     */
    inline void SetResourceARN(Aws::String&& value) { m_resourceARNHasBeenSet = true; m_resourceARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that uniquely identifies the Amazon GameLift resource that you want to assign
     * tags to. Amazon GameLift includes resource ARNs in the data object for the
     * resource. You can retrieve the ARN by calling a <code>List</code> or
     * <code>Describe</code> operation for the resource type. </p>
     */
    inline void SetResourceARN(const char* value) { m_resourceARNHasBeenSet = true; m_resourceARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that uniquely identifies the Amazon GameLift resource that you want to assign
     * tags to. Amazon GameLift includes resource ARNs in the data object for the
     * resource. You can retrieve the ARN by calling a <code>List</code> or
     * <code>Describe</code> operation for the resource type. </p>
     */
    inline TagResourceRequest& WithResourceARN(const Aws::String& value) { SetResourceARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that uniquely identifies the Amazon GameLift resource that you want to assign
     * tags to. Amazon GameLift includes resource ARNs in the data object for the
     * resource. You can retrieve the ARN by calling a <code>List</code> or
     * <code>Describe</code> operation for the resource type. </p>
     */
    inline TagResourceRequest& WithResourceARN(Aws::String&& value) { SetResourceARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that uniquely identifies the Amazon GameLift resource that you want to assign
     * tags to. Amazon GameLift includes resource ARNs in the data object for the
     * resource. You can retrieve the ARN by calling a <code>List</code> or
     * <code>Describe</code> operation for the resource type. </p>
     */
    inline TagResourceRequest& WithResourceARN(const char* value) { SetResourceARN(value); return *this;}


    /**
     * <p>A list of one or more tags to assign to the specified Amazon GameLift
     * resource. Tags are developer-defined and structured as key-value pairs. The
     * maximum tag limit may be lower than stated. See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html"> Tagging
     * Amazon Web Services Resources</a> for tagging limits.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of one or more tags to assign to the specified Amazon GameLift
     * resource. Tags are developer-defined and structured as key-value pairs. The
     * maximum tag limit may be lower than stated. See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html"> Tagging
     * Amazon Web Services Resources</a> for tagging limits.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of one or more tags to assign to the specified Amazon GameLift
     * resource. Tags are developer-defined and structured as key-value pairs. The
     * maximum tag limit may be lower than stated. See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html"> Tagging
     * Amazon Web Services Resources</a> for tagging limits.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of one or more tags to assign to the specified Amazon GameLift
     * resource. Tags are developer-defined and structured as key-value pairs. The
     * maximum tag limit may be lower than stated. See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html"> Tagging
     * Amazon Web Services Resources</a> for tagging limits.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of one or more tags to assign to the specified Amazon GameLift
     * resource. Tags are developer-defined and structured as key-value pairs. The
     * maximum tag limit may be lower than stated. See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html"> Tagging
     * Amazon Web Services Resources</a> for tagging limits.</p>
     */
    inline TagResourceRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of one or more tags to assign to the specified Amazon GameLift
     * resource. Tags are developer-defined and structured as key-value pairs. The
     * maximum tag limit may be lower than stated. See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html"> Tagging
     * Amazon Web Services Resources</a> for tagging limits.</p>
     */
    inline TagResourceRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of one or more tags to assign to the specified Amazon GameLift
     * resource. Tags are developer-defined and structured as key-value pairs. The
     * maximum tag limit may be lower than stated. See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html"> Tagging
     * Amazon Web Services Resources</a> for tagging limits.</p>
     */
    inline TagResourceRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of one or more tags to assign to the specified Amazon GameLift
     * resource. Tags are developer-defined and structured as key-value pairs. The
     * maximum tag limit may be lower than stated. See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html"> Tagging
     * Amazon Web Services Resources</a> for tagging limits.</p>
     */
    inline TagResourceRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_resourceARN;
    bool m_resourceARNHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
