/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/DataZoneRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/GrantedEntityInput.h>
#include <aws/datazone/model/AssetTargetNameMap.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace DataZone
{
namespace Model
{

  /**
   */
  class CreateSubscriptionGrantRequest : public DataZoneRequest
  {
  public:
    AWS_DATAZONE_API CreateSubscriptionGrantRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSubscriptionGrant"; }

    AWS_DATAZONE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The names of the assets for which the subscription grant is created.</p>
     */
    inline const Aws::Vector<AssetTargetNameMap>& GetAssetTargetNames() const { return m_assetTargetNames; }
    inline bool AssetTargetNamesHasBeenSet() const { return m_assetTargetNamesHasBeenSet; }
    template<typename AssetTargetNamesT = Aws::Vector<AssetTargetNameMap>>
    void SetAssetTargetNames(AssetTargetNamesT&& value) { m_assetTargetNamesHasBeenSet = true; m_assetTargetNames = std::forward<AssetTargetNamesT>(value); }
    template<typename AssetTargetNamesT = Aws::Vector<AssetTargetNameMap>>
    CreateSubscriptionGrantRequest& WithAssetTargetNames(AssetTargetNamesT&& value) { SetAssetTargetNames(std::forward<AssetTargetNamesT>(value)); return *this;}
    template<typename AssetTargetNamesT = AssetTargetNameMap>
    CreateSubscriptionGrantRequest& AddAssetTargetNames(AssetTargetNamesT&& value) { m_assetTargetNamesHasBeenSet = true; m_assetTargetNames.emplace_back(std::forward<AssetTargetNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive identifier that is provided to ensure the
     * idempotency of the request.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateSubscriptionGrantRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon DataZone domain in which the subscription grant is
     * created.</p>
     */
    inline const Aws::String& GetDomainIdentifier() const { return m_domainIdentifier; }
    inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }
    template<typename DomainIdentifierT = Aws::String>
    void SetDomainIdentifier(DomainIdentifierT&& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = std::forward<DomainIdentifierT>(value); }
    template<typename DomainIdentifierT = Aws::String>
    CreateSubscriptionGrantRequest& WithDomainIdentifier(DomainIdentifierT&& value) { SetDomainIdentifier(std::forward<DomainIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the environment in which the subscription grant is created.</p>
     */
    inline const Aws::String& GetEnvironmentIdentifier() const { return m_environmentIdentifier; }
    inline bool EnvironmentIdentifierHasBeenSet() const { return m_environmentIdentifierHasBeenSet; }
    template<typename EnvironmentIdentifierT = Aws::String>
    void SetEnvironmentIdentifier(EnvironmentIdentifierT&& value) { m_environmentIdentifierHasBeenSet = true; m_environmentIdentifier = std::forward<EnvironmentIdentifierT>(value); }
    template<typename EnvironmentIdentifierT = Aws::String>
    CreateSubscriptionGrantRequest& WithEnvironmentIdentifier(EnvironmentIdentifierT&& value) { SetEnvironmentIdentifier(std::forward<EnvironmentIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The entity to which the subscription is to be granted.</p>
     */
    inline const GrantedEntityInput& GetGrantedEntity() const { return m_grantedEntity; }
    inline bool GrantedEntityHasBeenSet() const { return m_grantedEntityHasBeenSet; }
    template<typename GrantedEntityT = GrantedEntityInput>
    void SetGrantedEntity(GrantedEntityT&& value) { m_grantedEntityHasBeenSet = true; m_grantedEntity = std::forward<GrantedEntityT>(value); }
    template<typename GrantedEntityT = GrantedEntityInput>
    CreateSubscriptionGrantRequest& WithGrantedEntity(GrantedEntityT&& value) { SetGrantedEntity(std::forward<GrantedEntityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the subscription target for which the subscription grant is
     * created.</p>
     */
    inline const Aws::String& GetSubscriptionTargetIdentifier() const { return m_subscriptionTargetIdentifier; }
    inline bool SubscriptionTargetIdentifierHasBeenSet() const { return m_subscriptionTargetIdentifierHasBeenSet; }
    template<typename SubscriptionTargetIdentifierT = Aws::String>
    void SetSubscriptionTargetIdentifier(SubscriptionTargetIdentifierT&& value) { m_subscriptionTargetIdentifierHasBeenSet = true; m_subscriptionTargetIdentifier = std::forward<SubscriptionTargetIdentifierT>(value); }
    template<typename SubscriptionTargetIdentifierT = Aws::String>
    CreateSubscriptionGrantRequest& WithSubscriptionTargetIdentifier(SubscriptionTargetIdentifierT&& value) { SetSubscriptionTargetIdentifier(std::forward<SubscriptionTargetIdentifierT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AssetTargetNameMap> m_assetTargetNames;
    bool m_assetTargetNamesHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    Aws::String m_domainIdentifier;
    bool m_domainIdentifierHasBeenSet = false;

    Aws::String m_environmentIdentifier;
    bool m_environmentIdentifierHasBeenSet = false;

    GrantedEntityInput m_grantedEntity;
    bool m_grantedEntityHasBeenSet = false;

    Aws::String m_subscriptionTargetIdentifier;
    bool m_subscriptionTargetIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
