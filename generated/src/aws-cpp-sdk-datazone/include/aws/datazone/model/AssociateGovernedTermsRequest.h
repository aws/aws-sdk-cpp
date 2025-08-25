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
  class AssociateGovernedTermsRequest : public DataZoneRequest
  {
  public:
    AWS_DATAZONE_API AssociateGovernedTermsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateGovernedTerms"; }

    AWS_DATAZONE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the domain where governed terms are to be associated with an
     * asset.</p>
     */
    inline const Aws::String& GetDomainIdentifier() const { return m_domainIdentifier; }
    inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }
    template<typename DomainIdentifierT = Aws::String>
    void SetDomainIdentifier(DomainIdentifierT&& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = std::forward<DomainIdentifierT>(value); }
    template<typename DomainIdentifierT = Aws::String>
    AssociateGovernedTermsRequest& WithDomainIdentifier(DomainIdentifierT&& value) { SetDomainIdentifier(std::forward<DomainIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the asset with which you want to associate a governed term.</p>
     */
    inline const Aws::String& GetEntityIdentifier() const { return m_entityIdentifier; }
    inline bool EntityIdentifierHasBeenSet() const { return m_entityIdentifierHasBeenSet; }
    template<typename EntityIdentifierT = Aws::String>
    void SetEntityIdentifier(EntityIdentifierT&& value) { m_entityIdentifierHasBeenSet = true; m_entityIdentifier = std::forward<EntityIdentifierT>(value); }
    template<typename EntityIdentifierT = Aws::String>
    AssociateGovernedTermsRequest& WithEntityIdentifier(EntityIdentifierT&& value) { SetEntityIdentifier(std::forward<EntityIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the asset with which you want to associate a governed term.</p>
     */
    inline GovernedEntityType GetEntityType() const { return m_entityType; }
    inline bool EntityTypeHasBeenSet() const { return m_entityTypeHasBeenSet; }
    inline void SetEntityType(GovernedEntityType value) { m_entityTypeHasBeenSet = true; m_entityType = value; }
    inline AssociateGovernedTermsRequest& WithEntityType(GovernedEntityType value) { SetEntityType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The glossary terms in a restricted glossary.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGovernedGlossaryTerms() const { return m_governedGlossaryTerms; }
    inline bool GovernedGlossaryTermsHasBeenSet() const { return m_governedGlossaryTermsHasBeenSet; }
    template<typename GovernedGlossaryTermsT = Aws::Vector<Aws::String>>
    void SetGovernedGlossaryTerms(GovernedGlossaryTermsT&& value) { m_governedGlossaryTermsHasBeenSet = true; m_governedGlossaryTerms = std::forward<GovernedGlossaryTermsT>(value); }
    template<typename GovernedGlossaryTermsT = Aws::Vector<Aws::String>>
    AssociateGovernedTermsRequest& WithGovernedGlossaryTerms(GovernedGlossaryTermsT&& value) { SetGovernedGlossaryTerms(std::forward<GovernedGlossaryTermsT>(value)); return *this;}
    template<typename GovernedGlossaryTermsT = Aws::String>
    AssociateGovernedTermsRequest& AddGovernedGlossaryTerms(GovernedGlossaryTermsT&& value) { m_governedGlossaryTermsHasBeenSet = true; m_governedGlossaryTerms.emplace_back(std::forward<GovernedGlossaryTermsT>(value)); return *this; }
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
