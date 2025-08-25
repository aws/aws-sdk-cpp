/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/DataZoneRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/GlossaryStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datazone/model/GlossaryUsageRestriction.h>
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
  class CreateGlossaryRequest : public DataZoneRequest
  {
  public:
    AWS_DATAZONE_API CreateGlossaryRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateGlossary"; }

    AWS_DATAZONE_API Aws::String SerializePayload() const override;


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
    CreateGlossaryRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of this business glossary.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateGlossaryRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon DataZone domain in which this business glossary is
     * created.</p>
     */
    inline const Aws::String& GetDomainIdentifier() const { return m_domainIdentifier; }
    inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }
    template<typename DomainIdentifierT = Aws::String>
    void SetDomainIdentifier(DomainIdentifierT&& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = std::forward<DomainIdentifierT>(value); }
    template<typename DomainIdentifierT = Aws::String>
    CreateGlossaryRequest& WithDomainIdentifier(DomainIdentifierT&& value) { SetDomainIdentifier(std::forward<DomainIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of this business glossary.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateGlossaryRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the project that currently owns business glossary.</p>
     */
    inline const Aws::String& GetOwningProjectIdentifier() const { return m_owningProjectIdentifier; }
    inline bool OwningProjectIdentifierHasBeenSet() const { return m_owningProjectIdentifierHasBeenSet; }
    template<typename OwningProjectIdentifierT = Aws::String>
    void SetOwningProjectIdentifier(OwningProjectIdentifierT&& value) { m_owningProjectIdentifierHasBeenSet = true; m_owningProjectIdentifier = std::forward<OwningProjectIdentifierT>(value); }
    template<typename OwningProjectIdentifierT = Aws::String>
    CreateGlossaryRequest& WithOwningProjectIdentifier(OwningProjectIdentifierT&& value) { SetOwningProjectIdentifier(std::forward<OwningProjectIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of this business glossary.</p>
     */
    inline GlossaryStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(GlossaryStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline CreateGlossaryRequest& WithStatus(GlossaryStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The usage restriction of the restricted glossary.</p>
     */
    inline const Aws::Vector<GlossaryUsageRestriction>& GetUsageRestrictions() const { return m_usageRestrictions; }
    inline bool UsageRestrictionsHasBeenSet() const { return m_usageRestrictionsHasBeenSet; }
    template<typename UsageRestrictionsT = Aws::Vector<GlossaryUsageRestriction>>
    void SetUsageRestrictions(UsageRestrictionsT&& value) { m_usageRestrictionsHasBeenSet = true; m_usageRestrictions = std::forward<UsageRestrictionsT>(value); }
    template<typename UsageRestrictionsT = Aws::Vector<GlossaryUsageRestriction>>
    CreateGlossaryRequest& WithUsageRestrictions(UsageRestrictionsT&& value) { SetUsageRestrictions(std::forward<UsageRestrictionsT>(value)); return *this;}
    inline CreateGlossaryRequest& AddUsageRestrictions(GlossaryUsageRestriction value) { m_usageRestrictionsHasBeenSet = true; m_usageRestrictions.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_domainIdentifier;
    bool m_domainIdentifierHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_owningProjectIdentifier;
    bool m_owningProjectIdentifierHasBeenSet = false;

    GlossaryStatus m_status{GlossaryStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Vector<GlossaryUsageRestriction> m_usageRestrictions;
    bool m_usageRestrictionsHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
