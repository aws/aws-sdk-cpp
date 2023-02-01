/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eventbridge/EventBridge_EXPORTS.h>
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
namespace EventBridge
{
namespace Model
{
  class CreatePartnerEventSourceResult
  {
  public:
    AWS_EVENTBRIDGE_API CreatePartnerEventSourceResult();
    AWS_EVENTBRIDGE_API CreatePartnerEventSourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EVENTBRIDGE_API CreatePartnerEventSourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the partner event source.</p>
     */
    inline const Aws::String& GetEventSourceArn() const{ return m_eventSourceArn; }

    /**
     * <p>The ARN of the partner event source.</p>
     */
    inline void SetEventSourceArn(const Aws::String& value) { m_eventSourceArn = value; }

    /**
     * <p>The ARN of the partner event source.</p>
     */
    inline void SetEventSourceArn(Aws::String&& value) { m_eventSourceArn = std::move(value); }

    /**
     * <p>The ARN of the partner event source.</p>
     */
    inline void SetEventSourceArn(const char* value) { m_eventSourceArn.assign(value); }

    /**
     * <p>The ARN of the partner event source.</p>
     */
    inline CreatePartnerEventSourceResult& WithEventSourceArn(const Aws::String& value) { SetEventSourceArn(value); return *this;}

    /**
     * <p>The ARN of the partner event source.</p>
     */
    inline CreatePartnerEventSourceResult& WithEventSourceArn(Aws::String&& value) { SetEventSourceArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the partner event source.</p>
     */
    inline CreatePartnerEventSourceResult& WithEventSourceArn(const char* value) { SetEventSourceArn(value); return *this;}

  private:

    Aws::String m_eventSourceArn;
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws
