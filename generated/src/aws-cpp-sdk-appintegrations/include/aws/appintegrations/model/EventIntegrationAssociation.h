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
    AWS_APPINTEGRATIONSSERVICE_API EventIntegrationAssociation();
    AWS_APPINTEGRATIONSSERVICE_API EventIntegrationAssociation(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPINTEGRATIONSSERVICE_API EventIntegrationAssociation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPINTEGRATIONSSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) for the event integration association.</p>
     */
    inline const Aws::String& GetEventIntegrationAssociationArn() const{ return m_eventIntegrationAssociationArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the event integration association.</p>
     */
    inline bool EventIntegrationAssociationArnHasBeenSet() const { return m_eventIntegrationAssociationArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for the event integration association.</p>
     */
    inline void SetEventIntegrationAssociationArn(const Aws::String& value) { m_eventIntegrationAssociationArnHasBeenSet = true; m_eventIntegrationAssociationArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the event integration association.</p>
     */
    inline void SetEventIntegrationAssociationArn(Aws::String&& value) { m_eventIntegrationAssociationArnHasBeenSet = true; m_eventIntegrationAssociationArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the event integration association.</p>
     */
    inline void SetEventIntegrationAssociationArn(const char* value) { m_eventIntegrationAssociationArnHasBeenSet = true; m_eventIntegrationAssociationArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the event integration association.</p>
     */
    inline EventIntegrationAssociation& WithEventIntegrationAssociationArn(const Aws::String& value) { SetEventIntegrationAssociationArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the event integration association.</p>
     */
    inline EventIntegrationAssociation& WithEventIntegrationAssociationArn(Aws::String&& value) { SetEventIntegrationAssociationArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the event integration association.</p>
     */
    inline EventIntegrationAssociation& WithEventIntegrationAssociationArn(const char* value) { SetEventIntegrationAssociationArn(value); return *this;}


    /**
     * <p>The identifier for the event integration association.</p>
     */
    inline const Aws::String& GetEventIntegrationAssociationId() const{ return m_eventIntegrationAssociationId; }

    /**
     * <p>The identifier for the event integration association.</p>
     */
    inline bool EventIntegrationAssociationIdHasBeenSet() const { return m_eventIntegrationAssociationIdHasBeenSet; }

    /**
     * <p>The identifier for the event integration association.</p>
     */
    inline void SetEventIntegrationAssociationId(const Aws::String& value) { m_eventIntegrationAssociationIdHasBeenSet = true; m_eventIntegrationAssociationId = value; }

    /**
     * <p>The identifier for the event integration association.</p>
     */
    inline void SetEventIntegrationAssociationId(Aws::String&& value) { m_eventIntegrationAssociationIdHasBeenSet = true; m_eventIntegrationAssociationId = std::move(value); }

    /**
     * <p>The identifier for the event integration association.</p>
     */
    inline void SetEventIntegrationAssociationId(const char* value) { m_eventIntegrationAssociationIdHasBeenSet = true; m_eventIntegrationAssociationId.assign(value); }

    /**
     * <p>The identifier for the event integration association.</p>
     */
    inline EventIntegrationAssociation& WithEventIntegrationAssociationId(const Aws::String& value) { SetEventIntegrationAssociationId(value); return *this;}

    /**
     * <p>The identifier for the event integration association.</p>
     */
    inline EventIntegrationAssociation& WithEventIntegrationAssociationId(Aws::String&& value) { SetEventIntegrationAssociationId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the event integration association.</p>
     */
    inline EventIntegrationAssociation& WithEventIntegrationAssociationId(const char* value) { SetEventIntegrationAssociationId(value); return *this;}


    /**
     * <p>The name of the event integration.</p>
     */
    inline const Aws::String& GetEventIntegrationName() const{ return m_eventIntegrationName; }

    /**
     * <p>The name of the event integration.</p>
     */
    inline bool EventIntegrationNameHasBeenSet() const { return m_eventIntegrationNameHasBeenSet; }

    /**
     * <p>The name of the event integration.</p>
     */
    inline void SetEventIntegrationName(const Aws::String& value) { m_eventIntegrationNameHasBeenSet = true; m_eventIntegrationName = value; }

    /**
     * <p>The name of the event integration.</p>
     */
    inline void SetEventIntegrationName(Aws::String&& value) { m_eventIntegrationNameHasBeenSet = true; m_eventIntegrationName = std::move(value); }

    /**
     * <p>The name of the event integration.</p>
     */
    inline void SetEventIntegrationName(const char* value) { m_eventIntegrationNameHasBeenSet = true; m_eventIntegrationName.assign(value); }

    /**
     * <p>The name of the event integration.</p>
     */
    inline EventIntegrationAssociation& WithEventIntegrationName(const Aws::String& value) { SetEventIntegrationName(value); return *this;}

    /**
     * <p>The name of the event integration.</p>
     */
    inline EventIntegrationAssociation& WithEventIntegrationName(Aws::String&& value) { SetEventIntegrationName(std::move(value)); return *this;}

    /**
     * <p>The name of the event integration.</p>
     */
    inline EventIntegrationAssociation& WithEventIntegrationName(const char* value) { SetEventIntegrationName(value); return *this;}


    /**
     * <p>The identifier for the client that is associated with the event
     * integration.</p>
     */
    inline const Aws::String& GetClientId() const{ return m_clientId; }

    /**
     * <p>The identifier for the client that is associated with the event
     * integration.</p>
     */
    inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }

    /**
     * <p>The identifier for the client that is associated with the event
     * integration.</p>
     */
    inline void SetClientId(const Aws::String& value) { m_clientIdHasBeenSet = true; m_clientId = value; }

    /**
     * <p>The identifier for the client that is associated with the event
     * integration.</p>
     */
    inline void SetClientId(Aws::String&& value) { m_clientIdHasBeenSet = true; m_clientId = std::move(value); }

    /**
     * <p>The identifier for the client that is associated with the event
     * integration.</p>
     */
    inline void SetClientId(const char* value) { m_clientIdHasBeenSet = true; m_clientId.assign(value); }

    /**
     * <p>The identifier for the client that is associated with the event
     * integration.</p>
     */
    inline EventIntegrationAssociation& WithClientId(const Aws::String& value) { SetClientId(value); return *this;}

    /**
     * <p>The identifier for the client that is associated with the event
     * integration.</p>
     */
    inline EventIntegrationAssociation& WithClientId(Aws::String&& value) { SetClientId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the client that is associated with the event
     * integration.</p>
     */
    inline EventIntegrationAssociation& WithClientId(const char* value) { SetClientId(value); return *this;}


    /**
     * <p>The name of the EventBridge rule.</p>
     */
    inline const Aws::String& GetEventBridgeRuleName() const{ return m_eventBridgeRuleName; }

    /**
     * <p>The name of the EventBridge rule.</p>
     */
    inline bool EventBridgeRuleNameHasBeenSet() const { return m_eventBridgeRuleNameHasBeenSet; }

    /**
     * <p>The name of the EventBridge rule.</p>
     */
    inline void SetEventBridgeRuleName(const Aws::String& value) { m_eventBridgeRuleNameHasBeenSet = true; m_eventBridgeRuleName = value; }

    /**
     * <p>The name of the EventBridge rule.</p>
     */
    inline void SetEventBridgeRuleName(Aws::String&& value) { m_eventBridgeRuleNameHasBeenSet = true; m_eventBridgeRuleName = std::move(value); }

    /**
     * <p>The name of the EventBridge rule.</p>
     */
    inline void SetEventBridgeRuleName(const char* value) { m_eventBridgeRuleNameHasBeenSet = true; m_eventBridgeRuleName.assign(value); }

    /**
     * <p>The name of the EventBridge rule.</p>
     */
    inline EventIntegrationAssociation& WithEventBridgeRuleName(const Aws::String& value) { SetEventBridgeRuleName(value); return *this;}

    /**
     * <p>The name of the EventBridge rule.</p>
     */
    inline EventIntegrationAssociation& WithEventBridgeRuleName(Aws::String&& value) { SetEventBridgeRuleName(std::move(value)); return *this;}

    /**
     * <p>The name of the EventBridge rule.</p>
     */
    inline EventIntegrationAssociation& WithEventBridgeRuleName(const char* value) { SetEventBridgeRuleName(value); return *this;}


    /**
     * <p>The metadata associated with the client.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetClientAssociationMetadata() const{ return m_clientAssociationMetadata; }

    /**
     * <p>The metadata associated with the client.</p>
     */
    inline bool ClientAssociationMetadataHasBeenSet() const { return m_clientAssociationMetadataHasBeenSet; }

    /**
     * <p>The metadata associated with the client.</p>
     */
    inline void SetClientAssociationMetadata(const Aws::Map<Aws::String, Aws::String>& value) { m_clientAssociationMetadataHasBeenSet = true; m_clientAssociationMetadata = value; }

    /**
     * <p>The metadata associated with the client.</p>
     */
    inline void SetClientAssociationMetadata(Aws::Map<Aws::String, Aws::String>&& value) { m_clientAssociationMetadataHasBeenSet = true; m_clientAssociationMetadata = std::move(value); }

    /**
     * <p>The metadata associated with the client.</p>
     */
    inline EventIntegrationAssociation& WithClientAssociationMetadata(const Aws::Map<Aws::String, Aws::String>& value) { SetClientAssociationMetadata(value); return *this;}

    /**
     * <p>The metadata associated with the client.</p>
     */
    inline EventIntegrationAssociation& WithClientAssociationMetadata(Aws::Map<Aws::String, Aws::String>&& value) { SetClientAssociationMetadata(std::move(value)); return *this;}

    /**
     * <p>The metadata associated with the client.</p>
     */
    inline EventIntegrationAssociation& AddClientAssociationMetadata(const Aws::String& key, const Aws::String& value) { m_clientAssociationMetadataHasBeenSet = true; m_clientAssociationMetadata.emplace(key, value); return *this; }

    /**
     * <p>The metadata associated with the client.</p>
     */
    inline EventIntegrationAssociation& AddClientAssociationMetadata(Aws::String&& key, const Aws::String& value) { m_clientAssociationMetadataHasBeenSet = true; m_clientAssociationMetadata.emplace(std::move(key), value); return *this; }

    /**
     * <p>The metadata associated with the client.</p>
     */
    inline EventIntegrationAssociation& AddClientAssociationMetadata(const Aws::String& key, Aws::String&& value) { m_clientAssociationMetadataHasBeenSet = true; m_clientAssociationMetadata.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The metadata associated with the client.</p>
     */
    inline EventIntegrationAssociation& AddClientAssociationMetadata(Aws::String&& key, Aws::String&& value) { m_clientAssociationMetadataHasBeenSet = true; m_clientAssociationMetadata.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The metadata associated with the client.</p>
     */
    inline EventIntegrationAssociation& AddClientAssociationMetadata(const char* key, Aws::String&& value) { m_clientAssociationMetadataHasBeenSet = true; m_clientAssociationMetadata.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The metadata associated with the client.</p>
     */
    inline EventIntegrationAssociation& AddClientAssociationMetadata(Aws::String&& key, const char* value) { m_clientAssociationMetadataHasBeenSet = true; m_clientAssociationMetadata.emplace(std::move(key), value); return *this; }

    /**
     * <p>The metadata associated with the client.</p>
     */
    inline EventIntegrationAssociation& AddClientAssociationMetadata(const char* key, const char* value) { m_clientAssociationMetadataHasBeenSet = true; m_clientAssociationMetadata.emplace(key, value); return *this; }

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
