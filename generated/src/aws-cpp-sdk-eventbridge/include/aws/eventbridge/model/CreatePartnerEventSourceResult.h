﻿/**
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


    ///@{
    /**
     * <p>The ARN of the partner event source.</p>
     */
    inline const Aws::String& GetEventSourceArn() const{ return m_eventSourceArn; }
    inline void SetEventSourceArn(const Aws::String& value) { m_eventSourceArn = value; }
    inline void SetEventSourceArn(Aws::String&& value) { m_eventSourceArn = std::move(value); }
    inline void SetEventSourceArn(const char* value) { m_eventSourceArn.assign(value); }
    inline CreatePartnerEventSourceResult& WithEventSourceArn(const Aws::String& value) { SetEventSourceArn(value); return *this;}
    inline CreatePartnerEventSourceResult& WithEventSourceArn(Aws::String&& value) { SetEventSourceArn(std::move(value)); return *this;}
    inline CreatePartnerEventSourceResult& WithEventSourceArn(const char* value) { SetEventSourceArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreatePartnerEventSourceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreatePartnerEventSourceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreatePartnerEventSourceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_eventSourceArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws
