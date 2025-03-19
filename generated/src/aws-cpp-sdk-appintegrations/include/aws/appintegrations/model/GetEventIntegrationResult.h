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
    AWS_APPINTEGRATIONSSERVICE_API GetEventIntegrationResult() = default;
    AWS_APPINTEGRATIONSSERVICE_API GetEventIntegrationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPINTEGRATIONSSERVICE_API GetEventIntegrationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the event integration. </p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    GetEventIntegrationResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the event integration.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    GetEventIntegrationResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the event integration.</p>
     */
    inline const Aws::String& GetEventIntegrationArn() const { return m_eventIntegrationArn; }
    template<typename EventIntegrationArnT = Aws::String>
    void SetEventIntegrationArn(EventIntegrationArnT&& value) { m_eventIntegrationArnHasBeenSet = true; m_eventIntegrationArn = std::forward<EventIntegrationArnT>(value); }
    template<typename EventIntegrationArnT = Aws::String>
    GetEventIntegrationResult& WithEventIntegrationArn(EventIntegrationArnT&& value) { SetEventIntegrationArn(std::forward<EventIntegrationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The EventBridge bus.</p>
     */
    inline const Aws::String& GetEventBridgeBus() const { return m_eventBridgeBus; }
    template<typename EventBridgeBusT = Aws::String>
    void SetEventBridgeBus(EventBridgeBusT&& value) { m_eventBridgeBusHasBeenSet = true; m_eventBridgeBus = std::forward<EventBridgeBusT>(value); }
    template<typename EventBridgeBusT = Aws::String>
    GetEventIntegrationResult& WithEventBridgeBus(EventBridgeBusT&& value) { SetEventBridgeBus(std::forward<EventBridgeBusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The event filter.</p>
     */
    inline const EventFilter& GetEventFilter() const { return m_eventFilter; }
    template<typename EventFilterT = EventFilter>
    void SetEventFilter(EventFilterT&& value) { m_eventFilterHasBeenSet = true; m_eventFilter = std::forward<EventFilterT>(value); }
    template<typename EventFilterT = EventFilter>
    GetEventIntegrationResult& WithEventFilter(EventFilterT&& value) { SetEventFilter(std::forward<EventFilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    GetEventIntegrationResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    GetEventIntegrationResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetEventIntegrationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_eventIntegrationArn;
    bool m_eventIntegrationArnHasBeenSet = false;

    Aws::String m_eventBridgeBus;
    bool m_eventBridgeBusHasBeenSet = false;

    EventFilter m_eventFilter;
    bool m_eventFilterHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppIntegrationsService
} // namespace Aws
