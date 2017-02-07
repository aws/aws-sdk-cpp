﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/DynamoDBRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DynamoDB
{
namespace Model
{

  /**
   */
  class AWS_DYNAMODB_API ListTagsOfResourceRequest : public DynamoDBRequest
  {
  public:
    ListTagsOfResourceRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The Amazon DynamoDB resource with tags to be listed. This value is an Amazon
     * Resource Name (ARN).</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The Amazon DynamoDB resource with tags to be listed. This value is an Amazon
     * Resource Name (ARN).</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>The Amazon DynamoDB resource with tags to be listed. This value is an Amazon
     * Resource Name (ARN).</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

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
    inline ListTagsOfResourceRequest& WithResourceArn(Aws::String&& value) { SetResourceArn(value); return *this;}

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
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>An optional string that, if supplied, must be copied from the output of a
     * previous call to ListTagOfResource. When provided in this manner, this API
     * fetches the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

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
    inline ListTagsOfResourceRequest& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>An optional string that, if supplied, must be copied from the output of a
     * previous call to ListTagOfResource. When provided in this manner, this API
     * fetches the next page of results.</p>
     */
    inline ListTagsOfResourceRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:
    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet;
    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
