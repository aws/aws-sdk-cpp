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


    ///@{
    /**
     * <p>The name of the event integration.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateEventIntegrationRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateEventIntegrationRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateEventIntegrationRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the event integration.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateEventIntegrationRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateEventIntegrationRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateEventIntegrationRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The event filter.</p>
     */
    inline const EventFilter& GetEventFilter() const{ return m_eventFilter; }
    inline bool EventFilterHasBeenSet() const { return m_eventFilterHasBeenSet; }
    inline void SetEventFilter(const EventFilter& value) { m_eventFilterHasBeenSet = true; m_eventFilter = value; }
    inline void SetEventFilter(EventFilter&& value) { m_eventFilterHasBeenSet = true; m_eventFilter = std::move(value); }
    inline CreateEventIntegrationRequest& WithEventFilter(const EventFilter& value) { SetEventFilter(value); return *this;}
    inline CreateEventIntegrationRequest& WithEventFilter(EventFilter&& value) { SetEventFilter(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The EventBridge bus.</p>
     */
    inline const Aws::String& GetEventBridgeBus() const{ return m_eventBridgeBus; }
    inline bool EventBridgeBusHasBeenSet() const { return m_eventBridgeBusHasBeenSet; }
    inline void SetEventBridgeBus(const Aws::String& value) { m_eventBridgeBusHasBeenSet = true; m_eventBridgeBus = value; }
    inline void SetEventBridgeBus(Aws::String&& value) { m_eventBridgeBusHasBeenSet = true; m_eventBridgeBus = std::move(value); }
    inline void SetEventBridgeBus(const char* value) { m_eventBridgeBusHasBeenSet = true; m_eventBridgeBus.assign(value); }
    inline CreateEventIntegrationRequest& WithEventBridgeBus(const Aws::String& value) { SetEventBridgeBus(value); return *this;}
    inline CreateEventIntegrationRequest& WithEventBridgeBus(Aws::String&& value) { SetEventBridgeBus(std::move(value)); return *this;}
    inline CreateEventIntegrationRequest& WithEventBridgeBus(const char* value) { SetEventBridgeBus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateEventIntegrationRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateEventIntegrationRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateEventIntegrationRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateEventIntegrationRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateEventIntegrationRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateEventIntegrationRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CreateEventIntegrationRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateEventIntegrationRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateEventIntegrationRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateEventIntegrationRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateEventIntegrationRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateEventIntegrationRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}
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
