/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appintegrations/AppIntegrationsService_EXPORTS.h>
#include <aws/appintegrations/AppIntegrationsServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appintegrations/model/EventFilter.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace AppIntegrationsService
{
namespace Model
{

  /**
   */
  class CreateEventIntegrationRequest : public AppIntegrationsServiceRequest
  {
  public:
    AWS_APPINTEGRATIONSSERVICE_API CreateEventIntegrationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateEventIntegration"; }

    AWS_APPINTEGRATIONSSERVICE_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the event integration.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the event integration.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the event integration.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the event integration.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the event integration.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the event integration.</p>
     */
    inline CreateEventIntegrationRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the event integration.</p>
     */
    inline CreateEventIntegrationRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the event integration.</p>
     */
    inline CreateEventIntegrationRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The description of the event integration.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the event integration.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the event integration.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the event integration.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the event integration.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the event integration.</p>
     */
    inline CreateEventIntegrationRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the event integration.</p>
     */
    inline CreateEventIntegrationRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the event integration.</p>
     */
    inline CreateEventIntegrationRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The event filter.</p>
     */
    inline const EventFilter& GetEventFilter() const{ return m_eventFilter; }

    /**
     * <p>The event filter.</p>
     */
    inline bool EventFilterHasBeenSet() const { return m_eventFilterHasBeenSet; }

    /**
     * <p>The event filter.</p>
     */
    inline void SetEventFilter(const EventFilter& value) { m_eventFilterHasBeenSet = true; m_eventFilter = value; }

    /**
     * <p>The event filter.</p>
     */
    inline void SetEventFilter(EventFilter&& value) { m_eventFilterHasBeenSet = true; m_eventFilter = std::move(value); }

    /**
     * <p>The event filter.</p>
     */
    inline CreateEventIntegrationRequest& WithEventFilter(const EventFilter& value) { SetEventFilter(value); return *this;}

    /**
     * <p>The event filter.</p>
     */
    inline CreateEventIntegrationRequest& WithEventFilter(EventFilter&& value) { SetEventFilter(std::move(value)); return *this;}


    /**
     * <p>The EventBridge bus.</p>
     */
    inline const Aws::String& GetEventBridgeBus() const{ return m_eventBridgeBus; }

    /**
     * <p>The EventBridge bus.</p>
     */
    inline bool EventBridgeBusHasBeenSet() const { return m_eventBridgeBusHasBeenSet; }

    /**
     * <p>The EventBridge bus.</p>
     */
    inline void SetEventBridgeBus(const Aws::String& value) { m_eventBridgeBusHasBeenSet = true; m_eventBridgeBus = value; }

    /**
     * <p>The EventBridge bus.</p>
     */
    inline void SetEventBridgeBus(Aws::String&& value) { m_eventBridgeBusHasBeenSet = true; m_eventBridgeBus = std::move(value); }

    /**
     * <p>The EventBridge bus.</p>
     */
    inline void SetEventBridgeBus(const char* value) { m_eventBridgeBusHasBeenSet = true; m_eventBridgeBus.assign(value); }

    /**
     * <p>The EventBridge bus.</p>
     */
    inline CreateEventIntegrationRequest& WithEventBridgeBus(const Aws::String& value) { SetEventBridgeBus(value); return *this;}

    /**
     * <p>The EventBridge bus.</p>
     */
    inline CreateEventIntegrationRequest& WithEventBridgeBus(Aws::String&& value) { SetEventBridgeBus(std::move(value)); return *this;}

    /**
     * <p>The EventBridge bus.</p>
     */
    inline CreateEventIntegrationRequest& WithEventBridgeBus(const char* value) { SetEventBridgeBus(value); return *this;}


    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline CreateEventIntegrationRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline CreateEventIntegrationRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline CreateEventIntegrationRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>One or more tags.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>One or more tags.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>One or more tags.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>One or more tags.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>One or more tags.</p>
     */
    inline CreateEventIntegrationRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>One or more tags.</p>
     */
    inline CreateEventIntegrationRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>One or more tags.</p>
     */
    inline CreateEventIntegrationRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>One or more tags.</p>
     */
    inline CreateEventIntegrationRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>One or more tags.</p>
     */
    inline CreateEventIntegrationRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>One or more tags.</p>
     */
    inline CreateEventIntegrationRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>One or more tags.</p>
     */
    inline CreateEventIntegrationRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>One or more tags.</p>
     */
    inline CreateEventIntegrationRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>One or more tags.</p>
     */
    inline CreateEventIntegrationRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    EventFilter m_eventFilter;
    bool m_eventFilterHasBeenSet = false;

    Aws::String m_eventBridgeBus;
    bool m_eventBridgeBusHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace AppIntegrationsService
} // namespace Aws
