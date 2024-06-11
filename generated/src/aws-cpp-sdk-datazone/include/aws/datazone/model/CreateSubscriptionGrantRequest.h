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
    AWS_DATAZONE_API CreateSubscriptionGrantRequest();

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
    inline const Aws::Vector<AssetTargetNameMap>& GetAssetTargetNames() const{ return m_assetTargetNames; }
    inline bool AssetTargetNamesHasBeenSet() const { return m_assetTargetNamesHasBeenSet; }
    inline void SetAssetTargetNames(const Aws::Vector<AssetTargetNameMap>& value) { m_assetTargetNamesHasBeenSet = true; m_assetTargetNames = value; }
    inline void SetAssetTargetNames(Aws::Vector<AssetTargetNameMap>&& value) { m_assetTargetNamesHasBeenSet = true; m_assetTargetNames = std::move(value); }
    inline CreateSubscriptionGrantRequest& WithAssetTargetNames(const Aws::Vector<AssetTargetNameMap>& value) { SetAssetTargetNames(value); return *this;}
    inline CreateSubscriptionGrantRequest& WithAssetTargetNames(Aws::Vector<AssetTargetNameMap>&& value) { SetAssetTargetNames(std::move(value)); return *this;}
    inline CreateSubscriptionGrantRequest& AddAssetTargetNames(const AssetTargetNameMap& value) { m_assetTargetNamesHasBeenSet = true; m_assetTargetNames.push_back(value); return *this; }
    inline CreateSubscriptionGrantRequest& AddAssetTargetNames(AssetTargetNameMap&& value) { m_assetTargetNamesHasBeenSet = true; m_assetTargetNames.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive identifier that is provided to ensure the
     * idempotency of the request.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateSubscriptionGrantRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateSubscriptionGrantRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateSubscriptionGrantRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon DataZone domain in which the subscription grant is
     * created.</p>
     */
    inline const Aws::String& GetDomainIdentifier() const{ return m_domainIdentifier; }
    inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }
    inline void SetDomainIdentifier(const Aws::String& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = value; }
    inline void SetDomainIdentifier(Aws::String&& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = std::move(value); }
    inline void SetDomainIdentifier(const char* value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier.assign(value); }
    inline CreateSubscriptionGrantRequest& WithDomainIdentifier(const Aws::String& value) { SetDomainIdentifier(value); return *this;}
    inline CreateSubscriptionGrantRequest& WithDomainIdentifier(Aws::String&& value) { SetDomainIdentifier(std::move(value)); return *this;}
    inline CreateSubscriptionGrantRequest& WithDomainIdentifier(const char* value) { SetDomainIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the environment in which the subscription grant is created.</p>
     */
    inline const Aws::String& GetEnvironmentIdentifier() const{ return m_environmentIdentifier; }
    inline bool EnvironmentIdentifierHasBeenSet() const { return m_environmentIdentifierHasBeenSet; }
    inline void SetEnvironmentIdentifier(const Aws::String& value) { m_environmentIdentifierHasBeenSet = true; m_environmentIdentifier = value; }
    inline void SetEnvironmentIdentifier(Aws::String&& value) { m_environmentIdentifierHasBeenSet = true; m_environmentIdentifier = std::move(value); }
    inline void SetEnvironmentIdentifier(const char* value) { m_environmentIdentifierHasBeenSet = true; m_environmentIdentifier.assign(value); }
    inline CreateSubscriptionGrantRequest& WithEnvironmentIdentifier(const Aws::String& value) { SetEnvironmentIdentifier(value); return *this;}
    inline CreateSubscriptionGrantRequest& WithEnvironmentIdentifier(Aws::String&& value) { SetEnvironmentIdentifier(std::move(value)); return *this;}
    inline CreateSubscriptionGrantRequest& WithEnvironmentIdentifier(const char* value) { SetEnvironmentIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The entity to which the subscription is to be granted.</p>
     */
    inline const GrantedEntityInput& GetGrantedEntity() const{ return m_grantedEntity; }
    inline bool GrantedEntityHasBeenSet() const { return m_grantedEntityHasBeenSet; }
    inline void SetGrantedEntity(const GrantedEntityInput& value) { m_grantedEntityHasBeenSet = true; m_grantedEntity = value; }
    inline void SetGrantedEntity(GrantedEntityInput&& value) { m_grantedEntityHasBeenSet = true; m_grantedEntity = std::move(value); }
    inline CreateSubscriptionGrantRequest& WithGrantedEntity(const GrantedEntityInput& value) { SetGrantedEntity(value); return *this;}
    inline CreateSubscriptionGrantRequest& WithGrantedEntity(GrantedEntityInput&& value) { SetGrantedEntity(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the subscription target for which the subscription grant is
     * created.</p>
     */
    inline const Aws::String& GetSubscriptionTargetIdentifier() const{ return m_subscriptionTargetIdentifier; }
    inline bool SubscriptionTargetIdentifierHasBeenSet() const { return m_subscriptionTargetIdentifierHasBeenSet; }
    inline void SetSubscriptionTargetIdentifier(const Aws::String& value) { m_subscriptionTargetIdentifierHasBeenSet = true; m_subscriptionTargetIdentifier = value; }
    inline void SetSubscriptionTargetIdentifier(Aws::String&& value) { m_subscriptionTargetIdentifierHasBeenSet = true; m_subscriptionTargetIdentifier = std::move(value); }
    inline void SetSubscriptionTargetIdentifier(const char* value) { m_subscriptionTargetIdentifierHasBeenSet = true; m_subscriptionTargetIdentifier.assign(value); }
    inline CreateSubscriptionGrantRequest& WithSubscriptionTargetIdentifier(const Aws::String& value) { SetSubscriptionTargetIdentifier(value); return *this;}
    inline CreateSubscriptionGrantRequest& WithSubscriptionTargetIdentifier(Aws::String&& value) { SetSubscriptionTargetIdentifier(std::move(value)); return *this;}
    inline CreateSubscriptionGrantRequest& WithSubscriptionTargetIdentifier(const char* value) { SetSubscriptionTargetIdentifier(value); return *this;}
    ///@}
  private:

    Aws::Vector<AssetTargetNameMap> m_assetTargetNames;
    bool m_assetTargetNamesHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

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
