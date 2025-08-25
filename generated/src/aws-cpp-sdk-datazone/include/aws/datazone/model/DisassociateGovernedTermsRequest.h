/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/DataZoneRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/GovernedEntityType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace DataZone
{
namespace Model
{

  /**
   */
  class DisassociateGovernedTermsRequest : public DataZoneRequest
  {
  public:
    AWS_DATAZONE_API DisassociateGovernedTermsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisassociateGovernedTerms"; }

    AWS_DATAZONE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the domain where you want to disassociate restricted terms from an
     * asset.</p>
     */
    inline const Aws::String& GetDomainIdentifier() const { return m_domainIdentifier; }
    inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }
    template<typename DomainIdentifierT = Aws::String>
    void SetDomainIdentifier(DomainIdentifierT&& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = std::forward<DomainIdentifierT>(value); }
    template<typename DomainIdentifierT = Aws::String>
    DisassociateGovernedTermsRequest& WithDomainIdentifier(DomainIdentifierT&& value) { SetDomainIdentifier(std::forward<DomainIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of an asset from which you want to disassociate restricted terms.</p>
     */
    inline const Aws::String& GetEntityIdentifier() const { return m_entityIdentifier; }
    inline bool EntityIdentifierHasBeenSet() const { return m_entityIdentifierHasBeenSet; }
    template<typename EntityIdentifierT = Aws::String>
    void SetEntityIdentifier(EntityIdentifierT&& value) { m_entityIdentifierHasBeenSet = true; m_entityIdentifier = std::forward<EntityIdentifierT>(value); }
    template<typename EntityIdentifierT = Aws::String>
    DisassociateGovernedTermsRequest& WithEntityIdentifier(EntityIdentifierT&& value) { SetEntityIdentifier(std::forward<EntityIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the asset from which you want to disassociate restricted
     * terms.</p>
     */
    inline GovernedEntityType GetEntityType() const { return m_entityType; }
    inline bool EntityTypeHasBeenSet() const { return m_entityTypeHasBeenSet; }
    inline void SetEntityType(GovernedEntityType value) { m_entityTypeHasBeenSet = true; m_entityType = value; }
    inline DisassociateGovernedTermsRequest& WithEntityType(GovernedEntityType value) { SetEntityType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The restricted glossary terms that you want to disassociate from an
     * asset.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGovernedGlossaryTerms() const { return m_governedGlossaryTerms; }
    inline bool GovernedGlossaryTermsHasBeenSet() const { return m_governedGlossaryTermsHasBeenSet; }
    template<typename GovernedGlossaryTermsT = Aws::Vector<Aws::String>>
    void SetGovernedGlossaryTerms(GovernedGlossaryTermsT&& value) { m_governedGlossaryTermsHasBeenSet = true; m_governedGlossaryTerms = std::forward<GovernedGlossaryTermsT>(value); }
    template<typename GovernedGlossaryTermsT = Aws::Vector<Aws::String>>
    DisassociateGovernedTermsRequest& WithGovernedGlossaryTerms(GovernedGlossaryTermsT&& value) { SetGovernedGlossaryTerms(std::forward<GovernedGlossaryTermsT>(value)); return *this;}
    template<typename GovernedGlossaryTermsT = Aws::String>
    DisassociateGovernedTermsRequest& AddGovernedGlossaryTerms(GovernedGlossaryTermsT&& value) { m_governedGlossaryTermsHasBeenSet = true; m_governedGlossaryTerms.emplace_back(std::forward<GovernedGlossaryTermsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_domainIdentifier;
    bool m_domainIdentifierHasBeenSet = false;

    Aws::String m_entityIdentifier;
    bool m_entityIdentifierHasBeenSet = false;

    GovernedEntityType m_entityType{GovernedEntityType::NOT_SET};
    bool m_entityTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_governedGlossaryTerms;
    bool m_governedGlossaryTermsHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
