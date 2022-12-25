﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/GameLiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace GameLift
{
namespace Model
{

  /**
   */
  class UntagResourceRequest : public GameLiftRequest
  {
  public:
    AWS_GAMELIFT_API UntagResourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UntagResource"; }

    AWS_GAMELIFT_API Aws::String SerializePayload() const override;

    AWS_GAMELIFT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to and uniquely identifies the GameLift resource that you want
     * to remove tags from. GameLift resource ARNs are included in the data object for
     * the resource, which can be retrieved by calling a List or Describe operation for
     * the resource type. </p>
     */
    inline const Aws::String& GetResourceARN() const{ return m_resourceARN; }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to and uniquely identifies the GameLift resource that you want
     * to remove tags from. GameLift resource ARNs are included in the data object for
     * the resource, which can be retrieved by calling a List or Describe operation for
     * the resource type. </p>
     */
    inline bool ResourceARNHasBeenSet() const { return m_resourceARNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to and uniquely identifies the GameLift resource that you want
     * to remove tags from. GameLift resource ARNs are included in the data object for
     * the resource, which can be retrieved by calling a List or Describe operation for
     * the resource type. </p>
     */
    inline void SetResourceARN(const Aws::String& value) { m_resourceARNHasBeenSet = true; m_resourceARN = value; }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to and uniquely identifies the GameLift resource that you want
     * to remove tags from. GameLift resource ARNs are included in the data object for
     * the resource, which can be retrieved by calling a List or Describe operation for
     * the resource type. </p>
     */
    inline void SetResourceARN(Aws::String&& value) { m_resourceARNHasBeenSet = true; m_resourceARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to and uniquely identifies the GameLift resource that you want
     * to remove tags from. GameLift resource ARNs are included in the data object for
     * the resource, which can be retrieved by calling a List or Describe operation for
     * the resource type. </p>
     */
    inline void SetResourceARN(const char* value) { m_resourceARNHasBeenSet = true; m_resourceARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to and uniquely identifies the GameLift resource that you want
     * to remove tags from. GameLift resource ARNs are included in the data object for
     * the resource, which can be retrieved by calling a List or Describe operation for
     * the resource type. </p>
     */
    inline UntagResourceRequest& WithResourceARN(const Aws::String& value) { SetResourceARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to and uniquely identifies the GameLift resource that you want
     * to remove tags from. GameLift resource ARNs are included in the data object for
     * the resource, which can be retrieved by calling a List or Describe operation for
     * the resource type. </p>
     */
    inline UntagResourceRequest& WithResourceARN(Aws::String&& value) { SetResourceARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to and uniquely identifies the GameLift resource that you want
     * to remove tags from. GameLift resource ARNs are included in the data object for
     * the resource, which can be retrieved by calling a List or Describe operation for
     * the resource type. </p>
     */
    inline UntagResourceRequest& WithResourceARN(const char* value) { SetResourceARN(value); return *this;}


    /**
     * <p>A list of one or more tag keys to remove from the specified GameLift
     * resource. An Amazon Web Services resource can have only one tag with a specific
     * tag key, so specifying the tag key identifies which tag to remove. </p>
     */
    inline const Aws::Vector<Aws::String>& GetTagKeys() const{ return m_tagKeys; }

    /**
     * <p>A list of one or more tag keys to remove from the specified GameLift
     * resource. An Amazon Web Services resource can have only one tag with a specific
     * tag key, so specifying the tag key identifies which tag to remove. </p>
     */
    inline bool TagKeysHasBeenSet() const { return m_tagKeysHasBeenSet; }

    /**
     * <p>A list of one or more tag keys to remove from the specified GameLift
     * resource. An Amazon Web Services resource can have only one tag with a specific
     * tag key, so specifying the tag key identifies which tag to remove. </p>
     */
    inline void SetTagKeys(const Aws::Vector<Aws::String>& value) { m_tagKeysHasBeenSet = true; m_tagKeys = value; }

    /**
     * <p>A list of one or more tag keys to remove from the specified GameLift
     * resource. An Amazon Web Services resource can have only one tag with a specific
     * tag key, so specifying the tag key identifies which tag to remove. </p>
     */
    inline void SetTagKeys(Aws::Vector<Aws::String>&& value) { m_tagKeysHasBeenSet = true; m_tagKeys = std::move(value); }

    /**
     * <p>A list of one or more tag keys to remove from the specified GameLift
     * resource. An Amazon Web Services resource can have only one tag with a specific
     * tag key, so specifying the tag key identifies which tag to remove. </p>
     */
    inline UntagResourceRequest& WithTagKeys(const Aws::Vector<Aws::String>& value) { SetTagKeys(value); return *this;}

    /**
     * <p>A list of one or more tag keys to remove from the specified GameLift
     * resource. An Amazon Web Services resource can have only one tag with a specific
     * tag key, so specifying the tag key identifies which tag to remove. </p>
     */
    inline UntagResourceRequest& WithTagKeys(Aws::Vector<Aws::String>&& value) { SetTagKeys(std::move(value)); return *this;}

    /**
     * <p>A list of one or more tag keys to remove from the specified GameLift
     * resource. An Amazon Web Services resource can have only one tag with a specific
     * tag key, so specifying the tag key identifies which tag to remove. </p>
     */
    inline UntagResourceRequest& AddTagKeys(const Aws::String& value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(value); return *this; }

    /**
     * <p>A list of one or more tag keys to remove from the specified GameLift
     * resource. An Amazon Web Services resource can have only one tag with a specific
     * tag key, so specifying the tag key identifies which tag to remove. </p>
     */
    inline UntagResourceRequest& AddTagKeys(Aws::String&& value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of one or more tag keys to remove from the specified GameLift
     * resource. An Amazon Web Services resource can have only one tag with a specific
     * tag key, so specifying the tag key identifies which tag to remove. </p>
     */
    inline UntagResourceRequest& AddTagKeys(const char* value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(value); return *this; }

  private:

    Aws::String m_resourceARN;
    bool m_resourceARNHasBeenSet = false;

    Aws::Vector<Aws::String> m_tagKeys;
    bool m_tagKeysHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
