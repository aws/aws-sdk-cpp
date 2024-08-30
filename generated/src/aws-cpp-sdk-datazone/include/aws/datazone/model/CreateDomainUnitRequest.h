/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/DataZoneRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class CreateDomainUnitRequest : public DataZoneRequest
  {
  public:
    AWS_DATAZONE_API CreateDomainUnitRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDomainUnit"; }

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
    inline CreateDomainUnitRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateDomainUnitRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateDomainUnitRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the domain unit.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateDomainUnitRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateDomainUnitRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateDomainUnitRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the domain where you want to crate a domain unit.</p>
     */
    inline const Aws::String& GetDomainIdentifier() const{ return m_domainIdentifier; }
    inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }
    inline void SetDomainIdentifier(const Aws::String& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = value; }
    inline void SetDomainIdentifier(Aws::String&& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = std::move(value); }
    inline void SetDomainIdentifier(const char* value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier.assign(value); }
    inline CreateDomainUnitRequest& WithDomainIdentifier(const Aws::String& value) { SetDomainIdentifier(value); return *this;}
    inline CreateDomainUnitRequest& WithDomainIdentifier(Aws::String&& value) { SetDomainIdentifier(std::move(value)); return *this;}
    inline CreateDomainUnitRequest& WithDomainIdentifier(const char* value) { SetDomainIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the domain unit.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateDomainUnitRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateDomainUnitRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateDomainUnitRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the parent domain unit.</p>
     */
    inline const Aws::String& GetParentDomainUnitIdentifier() const{ return m_parentDomainUnitIdentifier; }
    inline bool ParentDomainUnitIdentifierHasBeenSet() const { return m_parentDomainUnitIdentifierHasBeenSet; }
    inline void SetParentDomainUnitIdentifier(const Aws::String& value) { m_parentDomainUnitIdentifierHasBeenSet = true; m_parentDomainUnitIdentifier = value; }
    inline void SetParentDomainUnitIdentifier(Aws::String&& value) { m_parentDomainUnitIdentifierHasBeenSet = true; m_parentDomainUnitIdentifier = std::move(value); }
    inline void SetParentDomainUnitIdentifier(const char* value) { m_parentDomainUnitIdentifierHasBeenSet = true; m_parentDomainUnitIdentifier.assign(value); }
    inline CreateDomainUnitRequest& WithParentDomainUnitIdentifier(const Aws::String& value) { SetParentDomainUnitIdentifier(value); return *this;}
    inline CreateDomainUnitRequest& WithParentDomainUnitIdentifier(Aws::String&& value) { SetParentDomainUnitIdentifier(std::move(value)); return *this;}
    inline CreateDomainUnitRequest& WithParentDomainUnitIdentifier(const char* value) { SetParentDomainUnitIdentifier(value); return *this;}
    ///@}
  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_domainIdentifier;
    bool m_domainIdentifierHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_parentDomainUnitIdentifier;
    bool m_parentDomainUnitIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
