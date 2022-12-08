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
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace AppIntegrationsService
{
namespace Model
{

  /**
   * <p>The event integration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appintegrations-2020-07-29/EventIntegration">AWS
   * API Reference</a></p>
   */
  class EventIntegration
  {
  public:
    AWS_APPINTEGRATIONSSERVICE_API EventIntegration();
    AWS_APPINTEGRATIONSSERVICE_API EventIntegration(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPINTEGRATIONSSERVICE_API EventIntegration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPINTEGRATIONSSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the event integration.</p>
     */
    inline const Aws::String& GetEventIntegrationArn() const{ return m_eventIntegrationArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the event integration.</p>
     */
    inline bool EventIntegrationArnHasBeenSet() const { return m_eventIntegrationArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the event integration.</p>
     */
    inline void SetEventIntegrationArn(const Aws::String& value) { m_eventIntegrationArnHasBeenSet = true; m_eventIntegrationArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the event integration.</p>
     */
    inline void SetEventIntegrationArn(Aws::String&& value) { m_eventIntegrationArnHasBeenSet = true; m_eventIntegrationArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the event integration.</p>
     */
    inline void SetEventIntegrationArn(const char* value) { m_eventIntegrationArnHasBeenSet = true; m_eventIntegrationArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the event integration.</p>
     */
    inline EventIntegration& WithEventIntegrationArn(const Aws::String& value) { SetEventIntegrationArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the event integration.</p>
     */
    inline EventIntegration& WithEventIntegrationArn(Aws::String&& value) { SetEventIntegrationArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the event integration.</p>
     */
    inline EventIntegration& WithEventIntegrationArn(const char* value) { SetEventIntegrationArn(value); return *this;}


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
    inline EventIntegration& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the event integration.</p>
     */
    inline EventIntegration& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the event integration.</p>
     */
    inline EventIntegration& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The event integration description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The event integration description.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The event integration description.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The event integration description.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The event integration description.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The event integration description.</p>
     */
    inline EventIntegration& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The event integration description.</p>
     */
    inline EventIntegration& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The event integration description.</p>
     */
    inline EventIntegration& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The event integration filter.</p>
     */
    inline const EventFilter& GetEventFilter() const{ return m_eventFilter; }

    /**
     * <p>The event integration filter.</p>
     */
    inline bool EventFilterHasBeenSet() const { return m_eventFilterHasBeenSet; }

    /**
     * <p>The event integration filter.</p>
     */
    inline void SetEventFilter(const EventFilter& value) { m_eventFilterHasBeenSet = true; m_eventFilter = value; }

    /**
     * <p>The event integration filter.</p>
     */
    inline void SetEventFilter(EventFilter&& value) { m_eventFilterHasBeenSet = true; m_eventFilter = std::move(value); }

    /**
     * <p>The event integration filter.</p>
     */
    inline EventIntegration& WithEventFilter(const EventFilter& value) { SetEventFilter(value); return *this;}

    /**
     * <p>The event integration filter.</p>
     */
    inline EventIntegration& WithEventFilter(EventFilter&& value) { SetEventFilter(std::move(value)); return *this;}


    /**
     * <p>The Amazon EventBridge bus for the event integration.</p>
     */
    inline const Aws::String& GetEventBridgeBus() const{ return m_eventBridgeBus; }

    /**
     * <p>The Amazon EventBridge bus for the event integration.</p>
     */
    inline bool EventBridgeBusHasBeenSet() const { return m_eventBridgeBusHasBeenSet; }

    /**
     * <p>The Amazon EventBridge bus for the event integration.</p>
     */
    inline void SetEventBridgeBus(const Aws::String& value) { m_eventBridgeBusHasBeenSet = true; m_eventBridgeBus = value; }

    /**
     * <p>The Amazon EventBridge bus for the event integration.</p>
     */
    inline void SetEventBridgeBus(Aws::String&& value) { m_eventBridgeBusHasBeenSet = true; m_eventBridgeBus = std::move(value); }

    /**
     * <p>The Amazon EventBridge bus for the event integration.</p>
     */
    inline void SetEventBridgeBus(const char* value) { m_eventBridgeBusHasBeenSet = true; m_eventBridgeBus.assign(value); }

    /**
     * <p>The Amazon EventBridge bus for the event integration.</p>
     */
    inline EventIntegration& WithEventBridgeBus(const Aws::String& value) { SetEventBridgeBus(value); return *this;}

    /**
     * <p>The Amazon EventBridge bus for the event integration.</p>
     */
    inline EventIntegration& WithEventBridgeBus(Aws::String&& value) { SetEventBridgeBus(std::move(value)); return *this;}

    /**
     * <p>The Amazon EventBridge bus for the event integration.</p>
     */
    inline EventIntegration& WithEventBridgeBus(const char* value) { SetEventBridgeBus(value); return *this;}


    /**
     * <p>The tags.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags.</p>
     */
    inline EventIntegration& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags.</p>
     */
    inline EventIntegration& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags.</p>
     */
    inline EventIntegration& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags.</p>
     */
    inline EventIntegration& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags.</p>
     */
    inline EventIntegration& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags.</p>
     */
    inline EventIntegration& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags.</p>
     */
    inline EventIntegration& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags.</p>
     */
    inline EventIntegration& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags.</p>
     */
    inline EventIntegration& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_eventIntegrationArn;
    bool m_eventIntegrationArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    EventFilter m_eventFilter;
    bool m_eventFilterHasBeenSet = false;

    Aws::String m_eventBridgeBus;
    bool m_eventBridgeBusHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace AppIntegrationsService
} // namespace Aws
