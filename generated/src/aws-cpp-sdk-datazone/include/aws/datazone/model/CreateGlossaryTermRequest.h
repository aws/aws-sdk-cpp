/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/DataZoneRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/GlossaryTermStatus.h>
#include <aws/datazone/model/TermRelations.h>
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
  class CreateGlossaryTermRequest : public DataZoneRequest
  {
  public:
    AWS_DATAZONE_API CreateGlossaryTermRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateGlossaryTerm"; }

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
    CreateGlossaryTermRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon DataZone domain in which this business glossary term is
     * created.</p>
     */
    inline const Aws::String& GetDomainIdentifier() const { return m_domainIdentifier; }
    inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }
    template<typename DomainIdentifierT = Aws::String>
    void SetDomainIdentifier(DomainIdentifierT&& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = std::forward<DomainIdentifierT>(value); }
    template<typename DomainIdentifierT = Aws::String>
    CreateGlossaryTermRequest& WithDomainIdentifier(DomainIdentifierT&& value) { SetDomainIdentifier(std::forward<DomainIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the business glossary in which this term is created.</p>
     */
    inline const Aws::String& GetGlossaryIdentifier() const { return m_glossaryIdentifier; }
    inline bool GlossaryIdentifierHasBeenSet() const { return m_glossaryIdentifierHasBeenSet; }
    template<typename GlossaryIdentifierT = Aws::String>
    void SetGlossaryIdentifier(GlossaryIdentifierT&& value) { m_glossaryIdentifierHasBeenSet = true; m_glossaryIdentifier = std::forward<GlossaryIdentifierT>(value); }
    template<typename GlossaryIdentifierT = Aws::String>
    CreateGlossaryTermRequest& WithGlossaryIdentifier(GlossaryIdentifierT&& value) { SetGlossaryIdentifier(std::forward<GlossaryIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The long description of this business glossary term.</p>
     */
    inline const Aws::String& GetLongDescription() const { return m_longDescription; }
    inline bool LongDescriptionHasBeenSet() const { return m_longDescriptionHasBeenSet; }
    template<typename LongDescriptionT = Aws::String>
    void SetLongDescription(LongDescriptionT&& value) { m_longDescriptionHasBeenSet = true; m_longDescription = std::forward<LongDescriptionT>(value); }
    template<typename LongDescriptionT = Aws::String>
    CreateGlossaryTermRequest& WithLongDescription(LongDescriptionT&& value) { SetLongDescription(std::forward<LongDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of this business glossary term.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateGlossaryTermRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The short description of this business glossary term.</p>
     */
    inline const Aws::String& GetShortDescription() const { return m_shortDescription; }
    inline bool ShortDescriptionHasBeenSet() const { return m_shortDescriptionHasBeenSet; }
    template<typename ShortDescriptionT = Aws::String>
    void SetShortDescription(ShortDescriptionT&& value) { m_shortDescriptionHasBeenSet = true; m_shortDescription = std::forward<ShortDescriptionT>(value); }
    template<typename ShortDescriptionT = Aws::String>
    CreateGlossaryTermRequest& WithShortDescription(ShortDescriptionT&& value) { SetShortDescription(std::forward<ShortDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of this business glossary term.</p>
     */
    inline GlossaryTermStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(GlossaryTermStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline CreateGlossaryTermRequest& WithStatus(GlossaryTermStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The term relations of this business glossary term.</p>
     */
    inline const TermRelations& GetTermRelations() const { return m_termRelations; }
    inline bool TermRelationsHasBeenSet() const { return m_termRelationsHasBeenSet; }
    template<typename TermRelationsT = TermRelations>
    void SetTermRelations(TermRelationsT&& value) { m_termRelationsHasBeenSet = true; m_termRelations = std::forward<TermRelationsT>(value); }
    template<typename TermRelationsT = TermRelations>
    CreateGlossaryTermRequest& WithTermRelations(TermRelationsT&& value) { SetTermRelations(std::forward<TermRelationsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    Aws::String m_domainIdentifier;
    bool m_domainIdentifierHasBeenSet = false;

    Aws::String m_glossaryIdentifier;
    bool m_glossaryIdentifierHasBeenSet = false;

    Aws::String m_longDescription;
    bool m_longDescriptionHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_shortDescription;
    bool m_shortDescriptionHasBeenSet = false;

    GlossaryTermStatus m_status{GlossaryTermStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    TermRelations m_termRelations;
    bool m_termRelationsHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
