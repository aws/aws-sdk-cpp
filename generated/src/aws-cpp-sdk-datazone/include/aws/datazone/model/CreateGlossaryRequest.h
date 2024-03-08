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
  class CreateGlossaryRequest : public DataZoneRequest
  {
  public:
    AWS_DATAZONE_API CreateGlossaryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateGlossary"; }

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
    inline CreateGlossaryRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that is provided to ensure the
     * idempotency of the request.</p>
     */
    inline CreateGlossaryRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that is provided to ensure the
     * idempotency of the request.</p>
     */
    inline CreateGlossaryRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The description of this business glossary.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of this business glossary.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of this business glossary.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of this business glossary.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of this business glossary.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of this business glossary.</p>
     */
    inline CreateGlossaryRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of this business glossary.</p>
     */
    inline CreateGlossaryRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of this business glossary.</p>
     */
    inline CreateGlossaryRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The ID of the Amazon DataZone domain in which this business glossary is
     * created.</p>
     */
    inline const Aws::String& GetDomainIdentifier() const{ return m_domainIdentifier; }

    /**
     * <p>The ID of the Amazon DataZone domain in which this business glossary is
     * created.</p>
     */
    inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }

    /**
     * <p>The ID of the Amazon DataZone domain in which this business glossary is
     * created.</p>
     */
    inline void SetDomainIdentifier(const Aws::String& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = value; }

    /**
     * <p>The ID of the Amazon DataZone domain in which this business glossary is
     * created.</p>
     */
    inline void SetDomainIdentifier(Aws::String&& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = std::move(value); }

    /**
     * <p>The ID of the Amazon DataZone domain in which this business glossary is
     * created.</p>
     */
    inline void SetDomainIdentifier(const char* value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier.assign(value); }

    /**
     * <p>The ID of the Amazon DataZone domain in which this business glossary is
     * created.</p>
     */
    inline CreateGlossaryRequest& WithDomainIdentifier(const Aws::String& value) { SetDomainIdentifier(value); return *this;}

    /**
     * <p>The ID of the Amazon DataZone domain in which this business glossary is
     * created.</p>
     */
    inline CreateGlossaryRequest& WithDomainIdentifier(Aws::String&& value) { SetDomainIdentifier(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon DataZone domain in which this business glossary is
     * created.</p>
     */
    inline CreateGlossaryRequest& WithDomainIdentifier(const char* value) { SetDomainIdentifier(value); return *this;}


    /**
     * <p>The name of this business glossary.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of this business glossary.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of this business glossary.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of this business glossary.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of this business glossary.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of this business glossary.</p>
     */
    inline CreateGlossaryRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of this business glossary.</p>
     */
    inline CreateGlossaryRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of this business glossary.</p>
     */
    inline CreateGlossaryRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The ID of the project that currently owns business glossary.</p>
     */
    inline const Aws::String& GetOwningProjectIdentifier() const{ return m_owningProjectIdentifier; }

    /**
     * <p>The ID of the project that currently owns business glossary.</p>
     */
    inline bool OwningProjectIdentifierHasBeenSet() const { return m_owningProjectIdentifierHasBeenSet; }

    /**
     * <p>The ID of the project that currently owns business glossary.</p>
     */
    inline void SetOwningProjectIdentifier(const Aws::String& value) { m_owningProjectIdentifierHasBeenSet = true; m_owningProjectIdentifier = value; }

    /**
     * <p>The ID of the project that currently owns business glossary.</p>
     */
    inline void SetOwningProjectIdentifier(Aws::String&& value) { m_owningProjectIdentifierHasBeenSet = true; m_owningProjectIdentifier = std::move(value); }

    /**
     * <p>The ID of the project that currently owns business glossary.</p>
     */
    inline void SetOwningProjectIdentifier(const char* value) { m_owningProjectIdentifierHasBeenSet = true; m_owningProjectIdentifier.assign(value); }

    /**
     * <p>The ID of the project that currently owns business glossary.</p>
     */
    inline CreateGlossaryRequest& WithOwningProjectIdentifier(const Aws::String& value) { SetOwningProjectIdentifier(value); return *this;}

    /**
     * <p>The ID of the project that currently owns business glossary.</p>
     */
    inline CreateGlossaryRequest& WithOwningProjectIdentifier(Aws::String&& value) { SetOwningProjectIdentifier(std::move(value)); return *this;}

    /**
     * <p>The ID of the project that currently owns business glossary.</p>
     */
    inline CreateGlossaryRequest& WithOwningProjectIdentifier(const char* value) { SetOwningProjectIdentifier(value); return *this;}


    /**
     * <p>The status of this business glossary.</p>
     */
    inline const GlossaryStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of this business glossary.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of this business glossary.</p>
     */
    inline void SetStatus(const GlossaryStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of this business glossary.</p>
     */
    inline void SetStatus(GlossaryStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of this business glossary.</p>
     */
    inline CreateGlossaryRequest& WithStatus(const GlossaryStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of this business glossary.</p>
     */
    inline CreateGlossaryRequest& WithStatus(GlossaryStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_domainIdentifier;
    bool m_domainIdentifierHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_owningProjectIdentifier;
    bool m_owningProjectIdentifierHasBeenSet = false;

    GlossaryStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
