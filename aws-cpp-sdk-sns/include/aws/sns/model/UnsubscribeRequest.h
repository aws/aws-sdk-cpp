/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

  /*
    <p>Input for Unsubscribe action.</p>
  */
  class AWS_SNS_API UnsubscribeRequest : public SNSRequest
  {
  public:
    UnsubscribeRequest();
    Aws::String SerializePayload() const override;


    /*
     <p>The ARN of the subscription to be deleted.</p>
    */
    inline const Aws::String& GetSubscriptionArn() const{ return m_subscriptionArn; }
    /*
     <p>The ARN of the subscription to be deleted.</p>
    */
    inline void SetSubscriptionArn(const Aws::String& value) { m_subscriptionArn = value; }

    /*
     <p>The ARN of the subscription to be deleted.</p>
    */
    inline void SetSubscriptionArn(const char* value) { m_subscriptionArn.assign(value); }

    /*
     <p>The ARN of the subscription to be deleted.</p>
    */
    inline UnsubscribeRequest&  WithSubscriptionArn(const Aws::String& value) { SetSubscriptionArn(value); return *this;}

    /*
     <p>The ARN of the subscription to be deleted.</p>
    */
    inline UnsubscribeRequest& WithSubscriptionArn(const char* value) { SetSubscriptionArn(value); return *this;}

  private:
    Aws::String m_subscriptionArn;
  };

} // namespace Model
} // namespace SNS
} // namespace Aws
