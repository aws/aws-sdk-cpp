/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appintegrations/AppIntegrationsService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appintegrations/model/EventFilter.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace AppIntegrationsService
{
namespace Model
{
  class GetEventIntegrationResult
  {
  public:
    AWS_APPINTEGRATIONSSERVICE_API GetEventIntegrationResult();
    AWS_APPINTEGRATIONSSERVICE_API GetEventIntegrationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPINTEGRATIONSSERVICE_API GetEventIntegrationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the event integration. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline GetEventIntegrationResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GetEventIntegrationResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GetEventIntegrationResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the event integration.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline GetEventIntegrationResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline GetEventIntegrationResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline GetEventIntegrationResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the event integration.</p>
     */
    inline const Aws::String& GetEventIntegrationArn() const{ return m_eventIntegrationArn; }
    inline void SetEventIntegrationArn(const Aws::String& value) { m_eventIntegrationArn = value; }
    inline void SetEventIntegrationArn(Aws::String&& value) { m_eventIntegrationArn = std::move(value); }
    inline void SetEventIntegrationArn(const char* value) { m_eventIntegrationArn.assign(value); }
    inline GetEventIntegrationResult& WithEventIntegrationArn(const Aws::String& value) { SetEventIntegrationArn(value); return *this;}
    inline GetEventIntegrationResult& WithEventIntegrationArn(Aws::String&& value) { SetEventIntegrationArn(std::move(value)); return *this;}
    inline GetEventIntegrationResult& WithEventIntegrationArn(const char* value) { SetEventIntegrationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The EventBridge bus.</p>
     */
    inline const Aws::String& GetEventBridgeBus() const{ return m_eventBridgeBus; }
    inline void SetEventBridgeBus(const Aws::String& value) { m_eventBridgeBus = value; }
    inline void SetEventBridgeBus(Aws::String&& value) { m_eventBridgeBus = std::move(value); }
    inline void SetEventBridgeBus(const char* value) { m_eventBridgeBus.assign(value); }
    inline GetEventIntegrationResult& WithEventBridgeBus(const Aws::String& value) { SetEventBridgeBus(value); return *this;}
    inline GetEventIntegrationResult& WithEventBridgeBus(Aws::String&& value) { SetEventBridgeBus(std::move(value)); return *this;}
    inline GetEventIntegrationResult& WithEventBridgeBus(const char* value) { SetEventBridgeBus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The event filter.</p>
     */
    inline const EventFilter& GetEventFilter() const{ return m_eventFilter; }
    inline void SetEventFilter(const EventFilter& value) { m_eventFilter = value; }
    inline void SetEventFilter(EventFilter&& value) { m_eventFilter = std::move(value); }
    inline GetEventIntegrationResult& WithEventFilter(const EventFilter& value) { SetEventFilter(value); return *this;}
    inline GetEventIntegrationResult& WithEventFilter(EventFilter&& value) { SetEventFilter(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline GetEventIntegrationResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline GetEventIntegrationResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline GetEventIntegrationResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline GetEventIntegrationResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline GetEventIntegrationResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline GetEventIntegrationResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline GetEventIntegrationResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline GetEventIntegrationResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline GetEventIntegrationResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetEventIntegrationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetEventIntegrationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetEventIntegrationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_name;

    Aws::String m_description;

    Aws::String m_eventIntegrationArn;

    Aws::String m_eventBridgeBus;

    EventFilter m_eventFilter;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AppIntegrationsService
} // namespace Aws
