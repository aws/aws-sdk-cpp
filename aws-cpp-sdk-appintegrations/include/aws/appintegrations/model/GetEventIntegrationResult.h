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


    /**
     * <p>The name of the event integration. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the event integration. </p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the event integration. </p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the event integration. </p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the event integration. </p>
     */
    inline GetEventIntegrationResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the event integration. </p>
     */
    inline GetEventIntegrationResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the event integration. </p>
     */
    inline GetEventIntegrationResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The description of the event integration.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the event integration.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The description of the event integration.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The description of the event integration.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The description of the event integration.</p>
     */
    inline GetEventIntegrationResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the event integration.</p>
     */
    inline GetEventIntegrationResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the event integration.</p>
     */
    inline GetEventIntegrationResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) for the event integration.</p>
     */
    inline const Aws::String& GetEventIntegrationArn() const{ return m_eventIntegrationArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the event integration.</p>
     */
    inline void SetEventIntegrationArn(const Aws::String& value) { m_eventIntegrationArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the event integration.</p>
     */
    inline void SetEventIntegrationArn(Aws::String&& value) { m_eventIntegrationArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the event integration.</p>
     */
    inline void SetEventIntegrationArn(const char* value) { m_eventIntegrationArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the event integration.</p>
     */
    inline GetEventIntegrationResult& WithEventIntegrationArn(const Aws::String& value) { SetEventIntegrationArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the event integration.</p>
     */
    inline GetEventIntegrationResult& WithEventIntegrationArn(Aws::String&& value) { SetEventIntegrationArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the event integration.</p>
     */
    inline GetEventIntegrationResult& WithEventIntegrationArn(const char* value) { SetEventIntegrationArn(value); return *this;}


    /**
     * <p>The EventBridge bus.</p>
     */
    inline const Aws::String& GetEventBridgeBus() const{ return m_eventBridgeBus; }

    /**
     * <p>The EventBridge bus.</p>
     */
    inline void SetEventBridgeBus(const Aws::String& value) { m_eventBridgeBus = value; }

    /**
     * <p>The EventBridge bus.</p>
     */
    inline void SetEventBridgeBus(Aws::String&& value) { m_eventBridgeBus = std::move(value); }

    /**
     * <p>The EventBridge bus.</p>
     */
    inline void SetEventBridgeBus(const char* value) { m_eventBridgeBus.assign(value); }

    /**
     * <p>The EventBridge bus.</p>
     */
    inline GetEventIntegrationResult& WithEventBridgeBus(const Aws::String& value) { SetEventBridgeBus(value); return *this;}

    /**
     * <p>The EventBridge bus.</p>
     */
    inline GetEventIntegrationResult& WithEventBridgeBus(Aws::String&& value) { SetEventBridgeBus(std::move(value)); return *this;}

    /**
     * <p>The EventBridge bus.</p>
     */
    inline GetEventIntegrationResult& WithEventBridgeBus(const char* value) { SetEventBridgeBus(value); return *this;}


    /**
     * <p>The event filter.</p>
     */
    inline const EventFilter& GetEventFilter() const{ return m_eventFilter; }

    /**
     * <p>The event filter.</p>
     */
    inline void SetEventFilter(const EventFilter& value) { m_eventFilter = value; }

    /**
     * <p>The event filter.</p>
     */
    inline void SetEventFilter(EventFilter&& value) { m_eventFilter = std::move(value); }

    /**
     * <p>The event filter.</p>
     */
    inline GetEventIntegrationResult& WithEventFilter(const EventFilter& value) { SetEventFilter(value); return *this;}

    /**
     * <p>The event filter.</p>
     */
    inline GetEventIntegrationResult& WithEventFilter(EventFilter&& value) { SetEventFilter(std::move(value)); return *this;}


    /**
     * <p>One or more tags.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>One or more tags.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>One or more tags.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>One or more tags.</p>
     */
    inline GetEventIntegrationResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>One or more tags.</p>
     */
    inline GetEventIntegrationResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>One or more tags.</p>
     */
    inline GetEventIntegrationResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>One or more tags.</p>
     */
    inline GetEventIntegrationResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>One or more tags.</p>
     */
    inline GetEventIntegrationResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>One or more tags.</p>
     */
    inline GetEventIntegrationResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>One or more tags.</p>
     */
    inline GetEventIntegrationResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>One or more tags.</p>
     */
    inline GetEventIntegrationResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>One or more tags.</p>
     */
    inline GetEventIntegrationResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_name;

    Aws::String m_description;

    Aws::String m_eventIntegrationArn;

    Aws::String m_eventBridgeBus;

    EventFilter m_eventFilter;

    Aws::Map<Aws::String, Aws::String> m_tags;
  };

} // namespace Model
} // namespace AppIntegrationsService
} // namespace Aws
