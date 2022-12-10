/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securitylake/SecurityLake_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SecurityLake
{
namespace Model
{
  class UpdateSubscriptionNotificationConfigurationResult
  {
  public:
    AWS_SECURITYLAKE_API UpdateSubscriptionNotificationConfigurationResult();
    AWS_SECURITYLAKE_API UpdateSubscriptionNotificationConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYLAKE_API UpdateSubscriptionNotificationConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Returns the Amazon resource name (ARN) of the queue.</p>
     */
    inline const Aws::String& GetQueueArn() const{ return m_queueArn; }

    /**
     * <p>Returns the Amazon resource name (ARN) of the queue.</p>
     */
    inline void SetQueueArn(const Aws::String& value) { m_queueArn = value; }

    /**
     * <p>Returns the Amazon resource name (ARN) of the queue.</p>
     */
    inline void SetQueueArn(Aws::String&& value) { m_queueArn = std::move(value); }

    /**
     * <p>Returns the Amazon resource name (ARN) of the queue.</p>
     */
    inline void SetQueueArn(const char* value) { m_queueArn.assign(value); }

    /**
     * <p>Returns the Amazon resource name (ARN) of the queue.</p>
     */
    inline UpdateSubscriptionNotificationConfigurationResult& WithQueueArn(const Aws::String& value) { SetQueueArn(value); return *this;}

    /**
     * <p>Returns the Amazon resource name (ARN) of the queue.</p>
     */
    inline UpdateSubscriptionNotificationConfigurationResult& WithQueueArn(Aws::String&& value) { SetQueueArn(std::move(value)); return *this;}

    /**
     * <p>Returns the Amazon resource name (ARN) of the queue.</p>
     */
    inline UpdateSubscriptionNotificationConfigurationResult& WithQueueArn(const char* value) { SetQueueArn(value); return *this;}

  private:

    Aws::String m_queueArn;
  };

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
