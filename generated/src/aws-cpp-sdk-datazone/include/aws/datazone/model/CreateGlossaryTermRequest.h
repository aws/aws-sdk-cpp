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
    AWS_DATAZONE_API CreateGlossaryTermRequest();

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
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateGlossaryTermRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateGlossaryTermRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateGlossaryTermRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon DataZone domain in which this business glossary term is
     * created.</p>
     */
    inline const Aws::String& GetDomainIdentifier() const{ return m_domainIdentifier; }
    inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }
    inline void SetDomainIdentifier(const Aws::String& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = value; }
    inline void SetDomainIdentifier(Aws::String&& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = std::move(value); }
    inline void SetDomainIdentifier(const char* value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier.assign(value); }
    inline CreateGlossaryTermRequest& WithDomainIdentifier(const Aws::String& value) { SetDomainIdentifier(value); return *this;}
    inline CreateGlossaryTermRequest& WithDomainIdentifier(Aws::String&& value) { SetDomainIdentifier(std::move(value)); return *this;}
    inline CreateGlossaryTermRequest& WithDomainIdentifier(const char* value) { SetDomainIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the business glossary in which this term is created.</p>
     */
    inline const Aws::String& GetGlossaryIdentifier() const{ return m_glossaryIdentifier; }
    inline bool GlossaryIdentifierHasBeenSet() const { return m_glossaryIdentifierHasBeenSet; }
    inline void SetGlossaryIdentifier(const Aws::String& value) { m_glossaryIdentifierHasBeenSet = true; m_glossaryIdentifier = value; }
    inline void SetGlossaryIdentifier(Aws::String&& value) { m_glossaryIdentifierHasBeenSet = true; m_glossaryIdentifier = std::move(value); }
    inline void SetGlossaryIdentifier(const char* value) { m_glossaryIdentifierHasBeenSet = true; m_glossaryIdentifier.assign(value); }
    inline CreateGlossaryTermRequest& WithGlossaryIdentifier(const Aws::String& value) { SetGlossaryIdentifier(value); return *this;}
    inline CreateGlossaryTermRequest& WithGlossaryIdentifier(Aws::String&& value) { SetGlossaryIdentifier(std::move(value)); return *this;}
    inline CreateGlossaryTermRequest& WithGlossaryIdentifier(const char* value) { SetGlossaryIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The long description of this business glossary term.</p>
     */
    inline const Aws::String& GetLongDescription() const{ return m_longDescription; }
    inline bool LongDescriptionHasBeenSet() const { return m_longDescriptionHasBeenSet; }
    inline void SetLongDescription(const Aws::String& value) { m_longDescriptionHasBeenSet = true; m_longDescription = value; }
    inline void SetLongDescription(Aws::String&& value) { m_longDescriptionHasBeenSet = true; m_longDescription = std::move(value); }
    inline void SetLongDescription(const char* value) { m_longDescriptionHasBeenSet = true; m_longDescription.assign(value); }
    inline CreateGlossaryTermRequest& WithLongDescription(const Aws::String& value) { SetLongDescription(value); return *this;}
    inline CreateGlossaryTermRequest& WithLongDescription(Aws::String&& value) { SetLongDescription(std::move(value)); return *this;}
    inline CreateGlossaryTermRequest& WithLongDescription(const char* value) { SetLongDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of this business glossary term.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateGlossaryTermRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateGlossaryTermRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateGlossaryTermRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The short description of this business glossary term.</p>
     */
    inline const Aws::String& GetShortDescription() const{ return m_shortDescription; }
    inline bool ShortDescriptionHasBeenSet() const { return m_shortDescriptionHasBeenSet; }
    inline void SetShortDescription(const Aws::String& value) { m_shortDescriptionHasBeenSet = true; m_shortDescription = value; }
    inline void SetShortDescription(Aws::String&& value) { m_shortDescriptionHasBeenSet = true; m_shortDescription = std::move(value); }
    inline void SetShortDescription(const char* value) { m_shortDescriptionHasBeenSet = true; m_shortDescription.assign(value); }
    inline CreateGlossaryTermRequest& WithShortDescription(const Aws::String& value) { SetShortDescription(value); return *this;}
    inline CreateGlossaryTermRequest& WithShortDescription(Aws::String&& value) { SetShortDescription(std::move(value)); return *this;}
    inline CreateGlossaryTermRequest& WithShortDescription(const char* value) { SetShortDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of this business glossary term.</p>
     */
    inline const GlossaryTermStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const GlossaryTermStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(GlossaryTermStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline CreateGlossaryTermRequest& WithStatus(const GlossaryTermStatus& value) { SetStatus(value); return *this;}
    inline CreateGlossaryTermRequest& WithStatus(GlossaryTermStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The term relations of this business glossary term.</p>
     */
    inline const TermRelations& GetTermRelations() const{ return m_termRelations; }
    inline bool TermRelationsHasBeenSet() const { return m_termRelationsHasBeenSet; }
    inline void SetTermRelations(const TermRelations& value) { m_termRelationsHasBeenSet = true; m_termRelations = value; }
    inline void SetTermRelations(TermRelations&& value) { m_termRelationsHasBeenSet = true; m_termRelations = std::move(value); }
    inline CreateGlossaryTermRequest& WithTermRelations(const TermRelations& value) { SetTermRelations(value); return *this;}
    inline CreateGlossaryTermRequest& WithTermRelations(TermRelations&& value) { SetTermRelations(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

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

    GlossaryTermStatus m_status;
    bool m_statusHasBeenSet = false;

    TermRelations m_termRelations;
    bool m_termRelationsHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
