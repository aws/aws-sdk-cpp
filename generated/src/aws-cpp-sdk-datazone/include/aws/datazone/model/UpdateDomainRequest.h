/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/DataZoneRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/SingleSignOn.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace DataZone
{
namespace Model
{

  /**
   */
  class UpdateDomainRequest : public DataZoneRequest
  {
  public:
    AWS_DATAZONE_API UpdateDomainRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateDomain"; }

    AWS_DATAZONE_API Aws::String SerializePayload() const override;

    AWS_DATAZONE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


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
    inline UpdateDomainRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that is provided to ensure the
     * idempotency of the request.</p>
     */
    inline UpdateDomainRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that is provided to ensure the
     * idempotency of the request.</p>
     */
    inline UpdateDomainRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The description to be updated as part of the <code>UpdateDomain</code>
     * action.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description to be updated as part of the <code>UpdateDomain</code>
     * action.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description to be updated as part of the <code>UpdateDomain</code>
     * action.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description to be updated as part of the <code>UpdateDomain</code>
     * action.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description to be updated as part of the <code>UpdateDomain</code>
     * action.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description to be updated as part of the <code>UpdateDomain</code>
     * action.</p>
     */
    inline UpdateDomainRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description to be updated as part of the <code>UpdateDomain</code>
     * action.</p>
     */
    inline UpdateDomainRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description to be updated as part of the <code>UpdateDomain</code>
     * action.</p>
     */
    inline UpdateDomainRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The domain execution role to be updated as part of the
     * <code>UpdateDomain</code> action.</p>
     */
    inline const Aws::String& GetDomainExecutionRole() const{ return m_domainExecutionRole; }

    /**
     * <p>The domain execution role to be updated as part of the
     * <code>UpdateDomain</code> action.</p>
     */
    inline bool DomainExecutionRoleHasBeenSet() const { return m_domainExecutionRoleHasBeenSet; }

    /**
     * <p>The domain execution role to be updated as part of the
     * <code>UpdateDomain</code> action.</p>
     */
    inline void SetDomainExecutionRole(const Aws::String& value) { m_domainExecutionRoleHasBeenSet = true; m_domainExecutionRole = value; }

    /**
     * <p>The domain execution role to be updated as part of the
     * <code>UpdateDomain</code> action.</p>
     */
    inline void SetDomainExecutionRole(Aws::String&& value) { m_domainExecutionRoleHasBeenSet = true; m_domainExecutionRole = std::move(value); }

    /**
     * <p>The domain execution role to be updated as part of the
     * <code>UpdateDomain</code> action.</p>
     */
    inline void SetDomainExecutionRole(const char* value) { m_domainExecutionRoleHasBeenSet = true; m_domainExecutionRole.assign(value); }

    /**
     * <p>The domain execution role to be updated as part of the
     * <code>UpdateDomain</code> action.</p>
     */
    inline UpdateDomainRequest& WithDomainExecutionRole(const Aws::String& value) { SetDomainExecutionRole(value); return *this;}

    /**
     * <p>The domain execution role to be updated as part of the
     * <code>UpdateDomain</code> action.</p>
     */
    inline UpdateDomainRequest& WithDomainExecutionRole(Aws::String&& value) { SetDomainExecutionRole(std::move(value)); return *this;}

    /**
     * <p>The domain execution role to be updated as part of the
     * <code>UpdateDomain</code> action.</p>
     */
    inline UpdateDomainRequest& WithDomainExecutionRole(const char* value) { SetDomainExecutionRole(value); return *this;}


    /**
     * <p>The ID of the Amazon Web Services domain that is to be updated.</p>
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }

    /**
     * <p>The ID of the Amazon Web Services domain that is to be updated.</p>
     */
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }

    /**
     * <p>The ID of the Amazon Web Services domain that is to be updated.</p>
     */
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }

    /**
     * <p>The ID of the Amazon Web Services domain that is to be updated.</p>
     */
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }

    /**
     * <p>The ID of the Amazon Web Services domain that is to be updated.</p>
     */
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }

    /**
     * <p>The ID of the Amazon Web Services domain that is to be updated.</p>
     */
    inline UpdateDomainRequest& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}

    /**
     * <p>The ID of the Amazon Web Services domain that is to be updated.</p>
     */
    inline UpdateDomainRequest& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Web Services domain that is to be updated.</p>
     */
    inline UpdateDomainRequest& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}


    /**
     * <p>The name to be updated as part of the <code>UpdateDomain</code> action.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name to be updated as part of the <code>UpdateDomain</code> action.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name to be updated as part of the <code>UpdateDomain</code> action.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name to be updated as part of the <code>UpdateDomain</code> action.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name to be updated as part of the <code>UpdateDomain</code> action.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name to be updated as part of the <code>UpdateDomain</code> action.</p>
     */
    inline UpdateDomainRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name to be updated as part of the <code>UpdateDomain</code> action.</p>
     */
    inline UpdateDomainRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name to be updated as part of the <code>UpdateDomain</code> action.</p>
     */
    inline UpdateDomainRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The single sign-on option to be updated as part of the
     * <code>UpdateDomain</code> action.</p>
     */
    inline const SingleSignOn& GetSingleSignOn() const{ return m_singleSignOn; }

    /**
     * <p>The single sign-on option to be updated as part of the
     * <code>UpdateDomain</code> action.</p>
     */
    inline bool SingleSignOnHasBeenSet() const { return m_singleSignOnHasBeenSet; }

    /**
     * <p>The single sign-on option to be updated as part of the
     * <code>UpdateDomain</code> action.</p>
     */
    inline void SetSingleSignOn(const SingleSignOn& value) { m_singleSignOnHasBeenSet = true; m_singleSignOn = value; }

    /**
     * <p>The single sign-on option to be updated as part of the
     * <code>UpdateDomain</code> action.</p>
     */
    inline void SetSingleSignOn(SingleSignOn&& value) { m_singleSignOnHasBeenSet = true; m_singleSignOn = std::move(value); }

    /**
     * <p>The single sign-on option to be updated as part of the
     * <code>UpdateDomain</code> action.</p>
     */
    inline UpdateDomainRequest& WithSingleSignOn(const SingleSignOn& value) { SetSingleSignOn(value); return *this;}

    /**
     * <p>The single sign-on option to be updated as part of the
     * <code>UpdateDomain</code> action.</p>
     */
    inline UpdateDomainRequest& WithSingleSignOn(SingleSignOn&& value) { SetSingleSignOn(std::move(value)); return *this;}

  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_domainExecutionRole;
    bool m_domainExecutionRoleHasBeenSet = false;

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    SingleSignOn m_singleSignOn;
    bool m_singleSignOnHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
