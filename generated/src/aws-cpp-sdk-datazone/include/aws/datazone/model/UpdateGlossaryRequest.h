/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/DataZoneRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/GlossaryStatus.h>
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
  class UpdateGlossaryRequest : public DataZoneRequest
  {
  public:
    AWS_DATAZONE_API UpdateGlossaryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateGlossary"; }

    AWS_DATAZONE_API Aws::String SerializePayload() const override;


    /**
     * <p>A unique, case-sensitive identifier that is provided to ensure the
     * idempotency of the request.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A unique, case-sensitive identifier that is provided to ensure the
     * idempotency of the request.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A unique, case-sensitive identifier that is provided to ensure the
     * idempotency of the request.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A unique, case-sensitive identifier that is provided to ensure the
     * idempotency of the request.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A unique, case-sensitive identifier that is provided to ensure the
     * idempotency of the request.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A unique, case-sensitive identifier that is provided to ensure the
     * idempotency of the request.</p>
     */
    inline UpdateGlossaryRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that is provided to ensure the
     * idempotency of the request.</p>
     */
    inline UpdateGlossaryRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that is provided to ensure the
     * idempotency of the request.</p>
     */
    inline UpdateGlossaryRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The description to be updated as part of the <code>UpdateGlossary</code>
     * action.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description to be updated as part of the <code>UpdateGlossary</code>
     * action.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description to be updated as part of the <code>UpdateGlossary</code>
     * action.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description to be updated as part of the <code>UpdateGlossary</code>
     * action.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description to be updated as part of the <code>UpdateGlossary</code>
     * action.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description to be updated as part of the <code>UpdateGlossary</code>
     * action.</p>
     */
    inline UpdateGlossaryRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description to be updated as part of the <code>UpdateGlossary</code>
     * action.</p>
     */
    inline UpdateGlossaryRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description to be updated as part of the <code>UpdateGlossary</code>
     * action.</p>
     */
    inline UpdateGlossaryRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The identifier of the Amazon DataZone domain in which a business glossary is
     * to be updated.</p>
     */
    inline const Aws::String& GetDomainIdentifier() const{ return m_domainIdentifier; }

    /**
     * <p>The identifier of the Amazon DataZone domain in which a business glossary is
     * to be updated.</p>
     */
    inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }

    /**
     * <p>The identifier of the Amazon DataZone domain in which a business glossary is
     * to be updated.</p>
     */
    inline void SetDomainIdentifier(const Aws::String& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = value; }

    /**
     * <p>The identifier of the Amazon DataZone domain in which a business glossary is
     * to be updated.</p>
     */
    inline void SetDomainIdentifier(Aws::String&& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = std::move(value); }

    /**
     * <p>The identifier of the Amazon DataZone domain in which a business glossary is
     * to be updated.</p>
     */
    inline void SetDomainIdentifier(const char* value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier.assign(value); }

    /**
     * <p>The identifier of the Amazon DataZone domain in which a business glossary is
     * to be updated.</p>
     */
    inline UpdateGlossaryRequest& WithDomainIdentifier(const Aws::String& value) { SetDomainIdentifier(value); return *this;}

    /**
     * <p>The identifier of the Amazon DataZone domain in which a business glossary is
     * to be updated.</p>
     */
    inline UpdateGlossaryRequest& WithDomainIdentifier(Aws::String&& value) { SetDomainIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon DataZone domain in which a business glossary is
     * to be updated.</p>
     */
    inline UpdateGlossaryRequest& WithDomainIdentifier(const char* value) { SetDomainIdentifier(value); return *this;}


    /**
     * <p>The identifier of the business glossary to be updated.</p>
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }

    /**
     * <p>The identifier of the business glossary to be updated.</p>
     */
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }

    /**
     * <p>The identifier of the business glossary to be updated.</p>
     */
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }

    /**
     * <p>The identifier of the business glossary to be updated.</p>
     */
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }

    /**
     * <p>The identifier of the business glossary to be updated.</p>
     */
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }

    /**
     * <p>The identifier of the business glossary to be updated.</p>
     */
    inline UpdateGlossaryRequest& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}

    /**
     * <p>The identifier of the business glossary to be updated.</p>
     */
    inline UpdateGlossaryRequest& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the business glossary to be updated.</p>
     */
    inline UpdateGlossaryRequest& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}


    /**
     * <p>The name to be updated as part of the <code>UpdateGlossary</code> action.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name to be updated as part of the <code>UpdateGlossary</code> action.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name to be updated as part of the <code>UpdateGlossary</code> action.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name to be updated as part of the <code>UpdateGlossary</code> action.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name to be updated as part of the <code>UpdateGlossary</code> action.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name to be updated as part of the <code>UpdateGlossary</code> action.</p>
     */
    inline UpdateGlossaryRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name to be updated as part of the <code>UpdateGlossary</code> action.</p>
     */
    inline UpdateGlossaryRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name to be updated as part of the <code>UpdateGlossary</code> action.</p>
     */
    inline UpdateGlossaryRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The status to be updated as part of the <code>UpdateGlossary</code>
     * action.</p>
     */
    inline const GlossaryStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status to be updated as part of the <code>UpdateGlossary</code>
     * action.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status to be updated as part of the <code>UpdateGlossary</code>
     * action.</p>
     */
    inline void SetStatus(const GlossaryStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status to be updated as part of the <code>UpdateGlossary</code>
     * action.</p>
     */
    inline void SetStatus(GlossaryStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status to be updated as part of the <code>UpdateGlossary</code>
     * action.</p>
     */
    inline UpdateGlossaryRequest& WithStatus(const GlossaryStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status to be updated as part of the <code>UpdateGlossary</code>
     * action.</p>
     */
    inline UpdateGlossaryRequest& WithStatus(GlossaryStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_domainIdentifier;
    bool m_domainIdentifierHasBeenSet = false;

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    GlossaryStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
