/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/DataZoneRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/DataZoneEntityType.h>
#include <aws/datazone/model/OwnerProperties.h>
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
  class AddEntityOwnerRequest : public DataZoneRequest
  {
  public:
    AWS_DATAZONE_API AddEntityOwnerRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AddEntityOwner"; }

    AWS_DATAZONE_API Aws::String SerializePayload() const override;


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
    inline AddEntityOwnerRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline AddEntityOwnerRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline AddEntityOwnerRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the domain in which you want to add the entity owner.</p>
     */
    inline const Aws::String& GetDomainIdentifier() const{ return m_domainIdentifier; }
    inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }
    inline void SetDomainIdentifier(const Aws::String& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = value; }
    inline void SetDomainIdentifier(Aws::String&& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = std::move(value); }
    inline void SetDomainIdentifier(const char* value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier.assign(value); }
    inline AddEntityOwnerRequest& WithDomainIdentifier(const Aws::String& value) { SetDomainIdentifier(value); return *this;}
    inline AddEntityOwnerRequest& WithDomainIdentifier(Aws::String&& value) { SetDomainIdentifier(std::move(value)); return *this;}
    inline AddEntityOwnerRequest& WithDomainIdentifier(const char* value) { SetDomainIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the entity to which you want to add an owner.</p>
     */
    inline const Aws::String& GetEntityIdentifier() const{ return m_entityIdentifier; }
    inline bool EntityIdentifierHasBeenSet() const { return m_entityIdentifierHasBeenSet; }
    inline void SetEntityIdentifier(const Aws::String& value) { m_entityIdentifierHasBeenSet = true; m_entityIdentifier = value; }
    inline void SetEntityIdentifier(Aws::String&& value) { m_entityIdentifierHasBeenSet = true; m_entityIdentifier = std::move(value); }
    inline void SetEntityIdentifier(const char* value) { m_entityIdentifierHasBeenSet = true; m_entityIdentifier.assign(value); }
    inline AddEntityOwnerRequest& WithEntityIdentifier(const Aws::String& value) { SetEntityIdentifier(value); return *this;}
    inline AddEntityOwnerRequest& WithEntityIdentifier(Aws::String&& value) { SetEntityIdentifier(std::move(value)); return *this;}
    inline AddEntityOwnerRequest& WithEntityIdentifier(const char* value) { SetEntityIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of an entity.</p>
     */
    inline const DataZoneEntityType& GetEntityType() const{ return m_entityType; }
    inline bool EntityTypeHasBeenSet() const { return m_entityTypeHasBeenSet; }
    inline void SetEntityType(const DataZoneEntityType& value) { m_entityTypeHasBeenSet = true; m_entityType = value; }
    inline void SetEntityType(DataZoneEntityType&& value) { m_entityTypeHasBeenSet = true; m_entityType = std::move(value); }
    inline AddEntityOwnerRequest& WithEntityType(const DataZoneEntityType& value) { SetEntityType(value); return *this;}
    inline AddEntityOwnerRequest& WithEntityType(DataZoneEntityType&& value) { SetEntityType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The owner that you want to add to the entity.</p>
     */
    inline const OwnerProperties& GetOwner() const{ return m_owner; }
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }
    inline void SetOwner(const OwnerProperties& value) { m_ownerHasBeenSet = true; m_owner = value; }
    inline void SetOwner(OwnerProperties&& value) { m_ownerHasBeenSet = true; m_owner = std::move(value); }
    inline AddEntityOwnerRequest& WithOwner(const OwnerProperties& value) { SetOwner(value); return *this;}
    inline AddEntityOwnerRequest& WithOwner(OwnerProperties&& value) { SetOwner(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_domainIdentifier;
    bool m_domainIdentifierHasBeenSet = false;

    Aws::String m_entityIdentifier;
    bool m_entityIdentifierHasBeenSet = false;

    DataZoneEntityType m_entityType;
    bool m_entityTypeHasBeenSet = false;

    OwnerProperties m_owner;
    bool m_ownerHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
