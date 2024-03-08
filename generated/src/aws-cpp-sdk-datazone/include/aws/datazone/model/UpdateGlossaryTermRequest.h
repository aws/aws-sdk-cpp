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

namespace Aws
{
namespace DataZone
{
namespace Model
{

  /**
   */
  class UpdateGlossaryTermRequest : public DataZoneRequest
  {
  public:
    AWS_DATAZONE_API UpdateGlossaryTermRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateGlossaryTerm"; }

    AWS_DATAZONE_API Aws::String SerializePayload() const override;


    /**
     * <p>The identifier of the Amazon DataZone domain in which a business glossary
     * term is to be updated.</p>
     */
    inline const Aws::String& GetDomainIdentifier() const{ return m_domainIdentifier; }

    /**
     * <p>The identifier of the Amazon DataZone domain in which a business glossary
     * term is to be updated.</p>
     */
    inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }

    /**
     * <p>The identifier of the Amazon DataZone domain in which a business glossary
     * term is to be updated.</p>
     */
    inline void SetDomainIdentifier(const Aws::String& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = value; }

    /**
     * <p>The identifier of the Amazon DataZone domain in which a business glossary
     * term is to be updated.</p>
     */
    inline void SetDomainIdentifier(Aws::String&& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = std::move(value); }

    /**
     * <p>The identifier of the Amazon DataZone domain in which a business glossary
     * term is to be updated.</p>
     */
    inline void SetDomainIdentifier(const char* value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier.assign(value); }

    /**
     * <p>The identifier of the Amazon DataZone domain in which a business glossary
     * term is to be updated.</p>
     */
    inline UpdateGlossaryTermRequest& WithDomainIdentifier(const Aws::String& value) { SetDomainIdentifier(value); return *this;}

    /**
     * <p>The identifier of the Amazon DataZone domain in which a business glossary
     * term is to be updated.</p>
     */
    inline UpdateGlossaryTermRequest& WithDomainIdentifier(Aws::String&& value) { SetDomainIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon DataZone domain in which a business glossary
     * term is to be updated.</p>
     */
    inline UpdateGlossaryTermRequest& WithDomainIdentifier(const char* value) { SetDomainIdentifier(value); return *this;}


    /**
     * <p>The identifier of the business glossary in which a term is to be updated.</p>
     */
    inline const Aws::String& GetGlossaryIdentifier() const{ return m_glossaryIdentifier; }

    /**
     * <p>The identifier of the business glossary in which a term is to be updated.</p>
     */
    inline bool GlossaryIdentifierHasBeenSet() const { return m_glossaryIdentifierHasBeenSet; }

    /**
     * <p>The identifier of the business glossary in which a term is to be updated.</p>
     */
    inline void SetGlossaryIdentifier(const Aws::String& value) { m_glossaryIdentifierHasBeenSet = true; m_glossaryIdentifier = value; }

    /**
     * <p>The identifier of the business glossary in which a term is to be updated.</p>
     */
    inline void SetGlossaryIdentifier(Aws::String&& value) { m_glossaryIdentifierHasBeenSet = true; m_glossaryIdentifier = std::move(value); }

    /**
     * <p>The identifier of the business glossary in which a term is to be updated.</p>
     */
    inline void SetGlossaryIdentifier(const char* value) { m_glossaryIdentifierHasBeenSet = true; m_glossaryIdentifier.assign(value); }

    /**
     * <p>The identifier of the business glossary in which a term is to be updated.</p>
     */
    inline UpdateGlossaryTermRequest& WithGlossaryIdentifier(const Aws::String& value) { SetGlossaryIdentifier(value); return *this;}

    /**
     * <p>The identifier of the business glossary in which a term is to be updated.</p>
     */
    inline UpdateGlossaryTermRequest& WithGlossaryIdentifier(Aws::String&& value) { SetGlossaryIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the business glossary in which a term is to be updated.</p>
     */
    inline UpdateGlossaryTermRequest& WithGlossaryIdentifier(const char* value) { SetGlossaryIdentifier(value); return *this;}


    /**
     * <p>The identifier of the business glossary term that is to be updated.</p>
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }

    /**
     * <p>The identifier of the business glossary term that is to be updated.</p>
     */
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }

    /**
     * <p>The identifier of the business glossary term that is to be updated.</p>
     */
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }

    /**
     * <p>The identifier of the business glossary term that is to be updated.</p>
     */
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }

    /**
     * <p>The identifier of the business glossary term that is to be updated.</p>
     */
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }

    /**
     * <p>The identifier of the business glossary term that is to be updated.</p>
     */
    inline UpdateGlossaryTermRequest& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}

    /**
     * <p>The identifier of the business glossary term that is to be updated.</p>
     */
    inline UpdateGlossaryTermRequest& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the business glossary term that is to be updated.</p>
     */
    inline UpdateGlossaryTermRequest& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}


    /**
     * <p>The long description to be updated as part of the
     * <code>UpdateGlossaryTerm</code> action.</p>
     */
    inline const Aws::String& GetLongDescription() const{ return m_longDescription; }

    /**
     * <p>The long description to be updated as part of the
     * <code>UpdateGlossaryTerm</code> action.</p>
     */
    inline bool LongDescriptionHasBeenSet() const { return m_longDescriptionHasBeenSet; }

    /**
     * <p>The long description to be updated as part of the
     * <code>UpdateGlossaryTerm</code> action.</p>
     */
    inline void SetLongDescription(const Aws::String& value) { m_longDescriptionHasBeenSet = true; m_longDescription = value; }

    /**
     * <p>The long description to be updated as part of the
     * <code>UpdateGlossaryTerm</code> action.</p>
     */
    inline void SetLongDescription(Aws::String&& value) { m_longDescriptionHasBeenSet = true; m_longDescription = std::move(value); }

    /**
     * <p>The long description to be updated as part of the
     * <code>UpdateGlossaryTerm</code> action.</p>
     */
    inline void SetLongDescription(const char* value) { m_longDescriptionHasBeenSet = true; m_longDescription.assign(value); }

    /**
     * <p>The long description to be updated as part of the
     * <code>UpdateGlossaryTerm</code> action.</p>
     */
    inline UpdateGlossaryTermRequest& WithLongDescription(const Aws::String& value) { SetLongDescription(value); return *this;}

    /**
     * <p>The long description to be updated as part of the
     * <code>UpdateGlossaryTerm</code> action.</p>
     */
    inline UpdateGlossaryTermRequest& WithLongDescription(Aws::String&& value) { SetLongDescription(std::move(value)); return *this;}

    /**
     * <p>The long description to be updated as part of the
     * <code>UpdateGlossaryTerm</code> action.</p>
     */
    inline UpdateGlossaryTermRequest& WithLongDescription(const char* value) { SetLongDescription(value); return *this;}


    /**
     * <p>The name to be updated as part of the <code>UpdateGlossaryTerm</code>
     * action.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name to be updated as part of the <code>UpdateGlossaryTerm</code>
     * action.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name to be updated as part of the <code>UpdateGlossaryTerm</code>
     * action.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name to be updated as part of the <code>UpdateGlossaryTerm</code>
     * action.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name to be updated as part of the <code>UpdateGlossaryTerm</code>
     * action.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name to be updated as part of the <code>UpdateGlossaryTerm</code>
     * action.</p>
     */
    inline UpdateGlossaryTermRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name to be updated as part of the <code>UpdateGlossaryTerm</code>
     * action.</p>
     */
    inline UpdateGlossaryTermRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name to be updated as part of the <code>UpdateGlossaryTerm</code>
     * action.</p>
     */
    inline UpdateGlossaryTermRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The short description to be updated as part of the
     * <code>UpdateGlossaryTerm</code> action.</p>
     */
    inline const Aws::String& GetShortDescription() const{ return m_shortDescription; }

    /**
     * <p>The short description to be updated as part of the
     * <code>UpdateGlossaryTerm</code> action.</p>
     */
    inline bool ShortDescriptionHasBeenSet() const { return m_shortDescriptionHasBeenSet; }

    /**
     * <p>The short description to be updated as part of the
     * <code>UpdateGlossaryTerm</code> action.</p>
     */
    inline void SetShortDescription(const Aws::String& value) { m_shortDescriptionHasBeenSet = true; m_shortDescription = value; }

    /**
     * <p>The short description to be updated as part of the
     * <code>UpdateGlossaryTerm</code> action.</p>
     */
    inline void SetShortDescription(Aws::String&& value) { m_shortDescriptionHasBeenSet = true; m_shortDescription = std::move(value); }

    /**
     * <p>The short description to be updated as part of the
     * <code>UpdateGlossaryTerm</code> action.</p>
     */
    inline void SetShortDescription(const char* value) { m_shortDescriptionHasBeenSet = true; m_shortDescription.assign(value); }

    /**
     * <p>The short description to be updated as part of the
     * <code>UpdateGlossaryTerm</code> action.</p>
     */
    inline UpdateGlossaryTermRequest& WithShortDescription(const Aws::String& value) { SetShortDescription(value); return *this;}

    /**
     * <p>The short description to be updated as part of the
     * <code>UpdateGlossaryTerm</code> action.</p>
     */
    inline UpdateGlossaryTermRequest& WithShortDescription(Aws::String&& value) { SetShortDescription(std::move(value)); return *this;}

    /**
     * <p>The short description to be updated as part of the
     * <code>UpdateGlossaryTerm</code> action.</p>
     */
    inline UpdateGlossaryTermRequest& WithShortDescription(const char* value) { SetShortDescription(value); return *this;}


    /**
     * <p>The status to be updated as part of the <code>UpdateGlossaryTerm</code>
     * action.</p>
     */
    inline const GlossaryTermStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status to be updated as part of the <code>UpdateGlossaryTerm</code>
     * action.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status to be updated as part of the <code>UpdateGlossaryTerm</code>
     * action.</p>
     */
    inline void SetStatus(const GlossaryTermStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status to be updated as part of the <code>UpdateGlossaryTerm</code>
     * action.</p>
     */
    inline void SetStatus(GlossaryTermStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status to be updated as part of the <code>UpdateGlossaryTerm</code>
     * action.</p>
     */
    inline UpdateGlossaryTermRequest& WithStatus(const GlossaryTermStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status to be updated as part of the <code>UpdateGlossaryTerm</code>
     * action.</p>
     */
    inline UpdateGlossaryTermRequest& WithStatus(GlossaryTermStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The term relations to be updated as part of the
     * <code>UpdateGlossaryTerm</code> action.</p>
     */
    inline const TermRelations& GetTermRelations() const{ return m_termRelations; }

    /**
     * <p>The term relations to be updated as part of the
     * <code>UpdateGlossaryTerm</code> action.</p>
     */
    inline bool TermRelationsHasBeenSet() const { return m_termRelationsHasBeenSet; }

    /**
     * <p>The term relations to be updated as part of the
     * <code>UpdateGlossaryTerm</code> action.</p>
     */
    inline void SetTermRelations(const TermRelations& value) { m_termRelationsHasBeenSet = true; m_termRelations = value; }

    /**
     * <p>The term relations to be updated as part of the
     * <code>UpdateGlossaryTerm</code> action.</p>
     */
    inline void SetTermRelations(TermRelations&& value) { m_termRelationsHasBeenSet = true; m_termRelations = std::move(value); }

    /**
     * <p>The term relations to be updated as part of the
     * <code>UpdateGlossaryTerm</code> action.</p>
     */
    inline UpdateGlossaryTermRequest& WithTermRelations(const TermRelations& value) { SetTermRelations(value); return *this;}

    /**
     * <p>The term relations to be updated as part of the
     * <code>UpdateGlossaryTerm</code> action.</p>
     */
    inline UpdateGlossaryTermRequest& WithTermRelations(TermRelations&& value) { SetTermRelations(std::move(value)); return *this;}

  private:

    Aws::String m_domainIdentifier;
    bool m_domainIdentifierHasBeenSet = false;

    Aws::String m_glossaryIdentifier;
    bool m_glossaryIdentifierHasBeenSet = false;

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

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
