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
#include <aws/sns/SNS_EXPORTS.h>
#include <aws/sns/SNSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SNS
{
namespace Model
{

  /**
   * <p>Input for ListSubscriptionsByTopic action.</p>
   */
  class AWS_SNS_API ListSubscriptionsByTopicRequest : public SNSRequest
  {
  public:
    ListSubscriptionsByTopicRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The ARN of the topic for which you wish to find subscriptions.</p>
     */
    inline const Aws::String& GetTopicArn() const{ return m_topicArn; }

    /**
     * <p>The ARN of the topic for which you wish to find subscriptions.</p>
     */
    inline void SetTopicArn(const Aws::String& value) { m_topicArnHasBeenSet = true; m_topicArn = value; }

    /**
     * <p>The ARN of the topic for which you wish to find subscriptions.</p>
     */
    inline void SetTopicArn(Aws::String&& value) { m_topicArnHasBeenSet = true; m_topicArn = value; }

    /**
     * <p>The ARN of the topic for which you wish to find subscriptions.</p>
     */
    inline void SetTopicArn(const char* value) { m_topicArnHasBeenSet = true; m_topicArn.assign(value); }

    /**
     * <p>The ARN of the topic for which you wish to find subscriptions.</p>
     */
    inline ListSubscriptionsByTopicRequest& WithTopicArn(const Aws::String& value) { SetTopicArn(value); return *this;}

    /**
     * <p>The ARN of the topic for which you wish to find subscriptions.</p>
     */
    inline ListSubscriptionsByTopicRequest& WithTopicArn(Aws::String&& value) { SetTopicArn(value); return *this;}

    /**
     * <p>The ARN of the topic for which you wish to find subscriptions.</p>
     */
    inline ListSubscriptionsByTopicRequest& WithTopicArn(const char* value) { SetTopicArn(value); return *this;}

    /**
     * <p>Token returned by the previous <code>ListSubscriptionsByTopic</code>
     * request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Token returned by the previous <code>ListSubscriptionsByTopic</code>
     * request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Token returned by the previous <code>ListSubscriptionsByTopic</code>
     * request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Token returned by the previous <code>ListSubscriptionsByTopic</code>
     * request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>Token returned by the previous <code>ListSubscriptionsByTopic</code>
     * request.</p>
     */
    inline ListSubscriptionsByTopicRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Token returned by the previous <code>ListSubscriptionsByTopic</code>
     * request.</p>
     */
    inline ListSubscriptionsByTopicRequest& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>Token returned by the previous <code>ListSubscriptionsByTopic</code>
     * request.</p>
     */
    inline ListSubscriptionsByTopicRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:
    Aws::String m_topicArn;
    bool m_topicArnHasBeenSet;
    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace SNS
} // namespace Aws
