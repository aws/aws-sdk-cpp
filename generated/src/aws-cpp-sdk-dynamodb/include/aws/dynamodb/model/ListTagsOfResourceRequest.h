﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/DynamoDBRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace DynamoDB
{
namespace Model
{

  /**
   */
  class ListTagsOfResourceRequest : public DynamoDBRequest
  {
  public:
    AWS_DYNAMODB_API ListTagsOfResourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListTagsOfResource"; }

    AWS_DYNAMODB_API Aws::String SerializePayload() const override;

    AWS_DYNAMODB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon DynamoDB resource with tags to be listed. This value is an Amazon
     * Resource Name (ARN).</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The Amazon DynamoDB resource with tags to be listed. This value is an Amazon
     * Resource Name (ARN).</p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>The Amazon DynamoDB resource with tags to be listed. This value is an Amazon
     * Resource Name (ARN).</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>The Amazon DynamoDB resource with tags to be listed. This value is an Amazon
     * Resource Name (ARN).</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>The Amazon DynamoDB resource with tags to be listed. This value is an Amazon
     * Resource Name (ARN).</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>The Amazon DynamoDB resource with tags to be listed. This value is an Amazon
     * Resource Name (ARN).</p>
     */
    inline ListTagsOfResourceRequest& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The Amazon DynamoDB resource with tags to be listed. This value is an Amazon
     * Resource Name (ARN).</p>
     */
    inline ListTagsOfResourceRequest& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon DynamoDB resource with tags to be listed. This value is an Amazon
     * Resource Name (ARN).</p>
     */
    inline ListTagsOfResourceRequest& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>An optional string that, if supplied, must be copied from the output of a
     * previous call to ListTagOfResource. When provided in this manner, this API
     * fetches the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>An optional string that, if supplied, must be copied from the output of a
     * previous call to ListTagOfResource. When provided in this manner, this API
     * fetches the next page of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>An optional string that, if supplied, must be copied from the output of a
     * previous call to ListTagOfResource. When provided in this manner, this API
     * fetches the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>An optional string that, if supplied, must be copied from the output of a
     * previous call to ListTagOfResource. When provided in this manner, this API
     * fetches the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>An optional string that, if supplied, must be copied from the output of a
     * previous call to ListTagOfResource. When provided in this manner, this API
     * fetches the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>An optional string that, if supplied, must be copied from the output of a
     * previous call to ListTagOfResource. When provided in this manner, this API
     * fetches the next page of results.</p>
     */
    inline ListTagsOfResourceRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>An optional string that, if supplied, must be copied from the output of a
     * previous call to ListTagOfResource. When provided in this manner, this API
     * fetches the next page of results.</p>
     */
    inline ListTagsOfResourceRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>An optional string that, if supplied, must be copied from the output of a
     * previous call to ListTagOfResource. When provided in this manner, this API
     * fetches the next page of results.</p>
     */
    inline ListTagsOfResourceRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
