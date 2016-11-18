/*
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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sns/model/ResponseMetadata.h>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace SNS
{
namespace Model
{
  /**
   * <p>Response for Subscribe action.</p>
   */
  class AWS_SNS_API SubscribeResult
  {
  public:
    SubscribeResult();
    SubscribeResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    SubscribeResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * <p>The ARN of the subscription, if the service was able to create a subscription
     * immediately (without requiring endpoint owner confirmation).</p>
     */
    inline const Aws::String& GetSubscriptionArn() const{ return m_subscriptionArn; }

    /**
     * <p>The ARN of the subscription, if the service was able to create a subscription
     * immediately (without requiring endpoint owner confirmation).</p>
     */
    inline void SetSubscriptionArn(const Aws::String& value) { m_subscriptionArn = value; }

    /**
     * <p>The ARN of the subscription, if the service was able to create a subscription
     * immediately (without requiring endpoint owner confirmation).</p>
     */
    inline void SetSubscriptionArn(Aws::String&& value) { m_subscriptionArn = value; }

    /**
     * <p>The ARN of the subscription, if the service was able to create a subscription
     * immediately (without requiring endpoint owner confirmation).</p>
     */
    inline void SetSubscriptionArn(const char* value) { m_subscriptionArn.assign(value); }

    /**
     * <p>The ARN of the subscription, if the service was able to create a subscription
     * immediately (without requiring endpoint owner confirmation).</p>
     */
    inline SubscribeResult& WithSubscriptionArn(const Aws::String& value) { SetSubscriptionArn(value); return *this;}

    /**
     * <p>The ARN of the subscription, if the service was able to create a subscription
     * immediately (without requiring endpoint owner confirmation).</p>
     */
    inline SubscribeResult& WithSubscriptionArn(Aws::String&& value) { SetSubscriptionArn(value); return *this;}

    /**
     * <p>The ARN of the subscription, if the service was able to create a subscription
     * immediately (without requiring endpoint owner confirmation).</p>
     */
    inline SubscribeResult& WithSubscriptionArn(const char* value) { SetSubscriptionArn(value); return *this;}

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline SubscribeResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline SubscribeResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    Aws::String m_subscriptionArn;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace SNS
} // namespace Aws