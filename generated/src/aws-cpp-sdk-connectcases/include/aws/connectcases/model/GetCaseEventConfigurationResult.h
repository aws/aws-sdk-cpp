/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/connectcases/model/EventBridgeConfiguration.h>
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
namespace ConnectCases
{
namespace Model
{
  class GetCaseEventConfigurationResult
  {
  public:
    AWS_CONNECTCASES_API GetCaseEventConfigurationResult();
    AWS_CONNECTCASES_API GetCaseEventConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECTCASES_API GetCaseEventConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Configuration to enable EventBridge case event delivery and determine what
     * data is delivered.</p>
     */
    inline const EventBridgeConfiguration& GetEventBridge() const{ return m_eventBridge; }

    /**
     * <p>Configuration to enable EventBridge case event delivery and determine what
     * data is delivered.</p>
     */
    inline void SetEventBridge(const EventBridgeConfiguration& value) { m_eventBridge = value; }

    /**
     * <p>Configuration to enable EventBridge case event delivery and determine what
     * data is delivered.</p>
     */
    inline void SetEventBridge(EventBridgeConfiguration&& value) { m_eventBridge = std::move(value); }

    /**
     * <p>Configuration to enable EventBridge case event delivery and determine what
     * data is delivered.</p>
     */
    inline GetCaseEventConfigurationResult& WithEventBridge(const EventBridgeConfiguration& value) { SetEventBridge(value); return *this;}

    /**
     * <p>Configuration to enable EventBridge case event delivery and determine what
     * data is delivered.</p>
     */
    inline GetCaseEventConfigurationResult& WithEventBridge(EventBridgeConfiguration&& value) { SetEventBridge(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetCaseEventConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetCaseEventConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetCaseEventConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    EventBridgeConfiguration m_eventBridge;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
