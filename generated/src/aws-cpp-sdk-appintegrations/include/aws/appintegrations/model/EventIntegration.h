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
    AWS_APPINTEGRATIONSSERVICE_API EventIntegration() = default;
    AWS_APPINTEGRATIONSSERVICE_API EventIntegration(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPINTEGRATIONSSERVICE_API EventIntegration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPINTEGRATIONSSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the event integration.</p>
     */
    inline const Aws::String& GetEventIntegrationArn() const { return m_eventIntegrationArn; }
    inline bool EventIntegrationArnHasBeenSet() const { return m_eventIntegrationArnHasBeenSet; }
    template<typename EventIntegrationArnT = Aws::String>
    void SetEventIntegrationArn(EventIntegrationArnT&& value) { m_eventIntegrationArnHasBeenSet = true; m_eventIntegrationArn = std::forward<EventIntegrationArnT>(value); }
    template<typename EventIntegrationArnT = Aws::String>
    EventIntegration& WithEventIntegrationArn(EventIntegrationArnT&& value) { SetEventIntegrationArn(std::forward<EventIntegrationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the event integration.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    EventIntegration& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The event integration description.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    EventIntegration& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The event integration filter.</p>
     */
    inline const EventFilter& GetEventFilter() const { return m_eventFilter; }
    inline bool EventFilterHasBeenSet() const { return m_eventFilterHasBeenSet; }
    template<typename EventFilterT = EventFilter>
    void SetEventFilter(EventFilterT&& value) { m_eventFilterHasBeenSet = true; m_eventFilter = std::forward<EventFilterT>(value); }
    template<typename EventFilterT = EventFilter>
    EventIntegration& WithEventFilter(EventFilterT&& value) { SetEventFilter(std::forward<EventFilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon EventBridge bus for the event integration.</p>
     */
    inline const Aws::String& GetEventBridgeBus() const { return m_eventBridgeBus; }
    inline bool EventBridgeBusHasBeenSet() const { return m_eventBridgeBusHasBeenSet; }
    template<typename EventBridgeBusT = Aws::String>
    void SetEventBridgeBus(EventBridgeBusT&& value) { m_eventBridgeBusHasBeenSet = true; m_eventBridgeBus = std::forward<EventBridgeBusT>(value); }
    template<typename EventBridgeBusT = Aws::String>
    EventIntegration& WithEventBridgeBus(EventBridgeBusT&& value) { SetEventBridgeBus(std::forward<EventBridgeBusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    EventIntegration& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    EventIntegration& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
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
