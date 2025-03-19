/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appintegrations/AppIntegrationsService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>The event integration association.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appintegrations-2020-07-29/EventIntegrationAssociation">AWS
   * API Reference</a></p>
   */
  class EventIntegrationAssociation
  {
  public:
    AWS_APPINTEGRATIONSSERVICE_API EventIntegrationAssociation() = default;
    AWS_APPINTEGRATIONSSERVICE_API EventIntegrationAssociation(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPINTEGRATIONSSERVICE_API EventIntegrationAssociation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPINTEGRATIONSSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the event integration association.</p>
     */
    inline const Aws::String& GetEventIntegrationAssociationArn() const { return m_eventIntegrationAssociationArn; }
    inline bool EventIntegrationAssociationArnHasBeenSet() const { return m_eventIntegrationAssociationArnHasBeenSet; }
    template<typename EventIntegrationAssociationArnT = Aws::String>
    void SetEventIntegrationAssociationArn(EventIntegrationAssociationArnT&& value) { m_eventIntegrationAssociationArnHasBeenSet = true; m_eventIntegrationAssociationArn = std::forward<EventIntegrationAssociationArnT>(value); }
    template<typename EventIntegrationAssociationArnT = Aws::String>
    EventIntegrationAssociation& WithEventIntegrationAssociationArn(EventIntegrationAssociationArnT&& value) { SetEventIntegrationAssociationArn(std::forward<EventIntegrationAssociationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the event integration association.</p>
     */
    inline const Aws::String& GetEventIntegrationAssociationId() const { return m_eventIntegrationAssociationId; }
    inline bool EventIntegrationAssociationIdHasBeenSet() const { return m_eventIntegrationAssociationIdHasBeenSet; }
    template<typename EventIntegrationAssociationIdT = Aws::String>
    void SetEventIntegrationAssociationId(EventIntegrationAssociationIdT&& value) { m_eventIntegrationAssociationIdHasBeenSet = true; m_eventIntegrationAssociationId = std::forward<EventIntegrationAssociationIdT>(value); }
    template<typename EventIntegrationAssociationIdT = Aws::String>
    EventIntegrationAssociation& WithEventIntegrationAssociationId(EventIntegrationAssociationIdT&& value) { SetEventIntegrationAssociationId(std::forward<EventIntegrationAssociationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the event integration.</p>
     */
    inline const Aws::String& GetEventIntegrationName() const { return m_eventIntegrationName; }
    inline bool EventIntegrationNameHasBeenSet() const { return m_eventIntegrationNameHasBeenSet; }
    template<typename EventIntegrationNameT = Aws::String>
    void SetEventIntegrationName(EventIntegrationNameT&& value) { m_eventIntegrationNameHasBeenSet = true; m_eventIntegrationName = std::forward<EventIntegrationNameT>(value); }
    template<typename EventIntegrationNameT = Aws::String>
    EventIntegrationAssociation& WithEventIntegrationName(EventIntegrationNameT&& value) { SetEventIntegrationName(std::forward<EventIntegrationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the client that is associated with the event
     * integration.</p>
     */
    inline const Aws::String& GetClientId() const { return m_clientId; }
    inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }
    template<typename ClientIdT = Aws::String>
    void SetClientId(ClientIdT&& value) { m_clientIdHasBeenSet = true; m_clientId = std::forward<ClientIdT>(value); }
    template<typename ClientIdT = Aws::String>
    EventIntegrationAssociation& WithClientId(ClientIdT&& value) { SetClientId(std::forward<ClientIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the EventBridge rule.</p>
     */
    inline const Aws::String& GetEventBridgeRuleName() const { return m_eventBridgeRuleName; }
    inline bool EventBridgeRuleNameHasBeenSet() const { return m_eventBridgeRuleNameHasBeenSet; }
    template<typename EventBridgeRuleNameT = Aws::String>
    void SetEventBridgeRuleName(EventBridgeRuleNameT&& value) { m_eventBridgeRuleNameHasBeenSet = true; m_eventBridgeRuleName = std::forward<EventBridgeRuleNameT>(value); }
    template<typename EventBridgeRuleNameT = Aws::String>
    EventIntegrationAssociation& WithEventBridgeRuleName(EventBridgeRuleNameT&& value) { SetEventBridgeRuleName(std::forward<EventBridgeRuleNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata associated with the client.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetClientAssociationMetadata() const { return m_clientAssociationMetadata; }
    inline bool ClientAssociationMetadataHasBeenSet() const { return m_clientAssociationMetadataHasBeenSet; }
    template<typename ClientAssociationMetadataT = Aws::Map<Aws::String, Aws::String>>
    void SetClientAssociationMetadata(ClientAssociationMetadataT&& value) { m_clientAssociationMetadataHasBeenSet = true; m_clientAssociationMetadata = std::forward<ClientAssociationMetadataT>(value); }
    template<typename ClientAssociationMetadataT = Aws::Map<Aws::String, Aws::String>>
    EventIntegrationAssociation& WithClientAssociationMetadata(ClientAssociationMetadataT&& value) { SetClientAssociationMetadata(std::forward<ClientAssociationMetadataT>(value)); return *this;}
    template<typename ClientAssociationMetadataKeyT = Aws::String, typename ClientAssociationMetadataValueT = Aws::String>
    EventIntegrationAssociation& AddClientAssociationMetadata(ClientAssociationMetadataKeyT&& key, ClientAssociationMetadataValueT&& value) {
      m_clientAssociationMetadataHasBeenSet = true; m_clientAssociationMetadata.emplace(std::forward<ClientAssociationMetadataKeyT>(key), std::forward<ClientAssociationMetadataValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_eventIntegrationAssociationArn;
    bool m_eventIntegrationAssociationArnHasBeenSet = false;

    Aws::String m_eventIntegrationAssociationId;
    bool m_eventIntegrationAssociationIdHasBeenSet = false;

    Aws::String m_eventIntegrationName;
    bool m_eventIntegrationNameHasBeenSet = false;

    Aws::String m_clientId;
    bool m_clientIdHasBeenSet = false;

    Aws::String m_eventBridgeRuleName;
    bool m_eventBridgeRuleNameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_clientAssociationMetadata;
    bool m_clientAssociationMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace AppIntegrationsService
} // namespace Aws
