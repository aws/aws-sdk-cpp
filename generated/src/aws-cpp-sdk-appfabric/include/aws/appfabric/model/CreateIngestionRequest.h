/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appfabric/AppFabric_EXPORTS.h>
#include <aws/appfabric/AppFabricRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appfabric/model/IngestionType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/appfabric/model/Tag.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace AppFabric
{
namespace Model
{

  /**
   */
  class CreateIngestionRequest : public AppFabricRequest
  {
  public:
    AWS_APPFABRIC_API CreateIngestionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateIngestion"; }

    AWS_APPFABRIC_API Aws::String SerializePayload() const override;


    /**
     * <p>The Amazon Resource Name (ARN) or Universal Unique Identifier (UUID) of the
     * app bundle to use for the request.</p>
     */
    inline const Aws::String& GetAppBundleIdentifier() const{ return m_appBundleIdentifier; }

    /**
     * <p>The Amazon Resource Name (ARN) or Universal Unique Identifier (UUID) of the
     * app bundle to use for the request.</p>
     */
    inline bool AppBundleIdentifierHasBeenSet() const { return m_appBundleIdentifierHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) or Universal Unique Identifier (UUID) of the
     * app bundle to use for the request.</p>
     */
    inline void SetAppBundleIdentifier(const Aws::String& value) { m_appBundleIdentifierHasBeenSet = true; m_appBundleIdentifier = value; }

    /**
     * <p>The Amazon Resource Name (ARN) or Universal Unique Identifier (UUID) of the
     * app bundle to use for the request.</p>
     */
    inline void SetAppBundleIdentifier(Aws::String&& value) { m_appBundleIdentifierHasBeenSet = true; m_appBundleIdentifier = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) or Universal Unique Identifier (UUID) of the
     * app bundle to use for the request.</p>
     */
    inline void SetAppBundleIdentifier(const char* value) { m_appBundleIdentifierHasBeenSet = true; m_appBundleIdentifier.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) or Universal Unique Identifier (UUID) of the
     * app bundle to use for the request.</p>
     */
    inline CreateIngestionRequest& WithAppBundleIdentifier(const Aws::String& value) { SetAppBundleIdentifier(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) or Universal Unique Identifier (UUID) of the
     * app bundle to use for the request.</p>
     */
    inline CreateIngestionRequest& WithAppBundleIdentifier(Aws::String&& value) { SetAppBundleIdentifier(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) or Universal Unique Identifier (UUID) of the
     * app bundle to use for the request.</p>
     */
    inline CreateIngestionRequest& WithAppBundleIdentifier(const char* value) { SetAppBundleIdentifier(value); return *this;}


    /**
     * <p>The name of the application.</p> <p>Valid values are:</p> <ul> <li> <p>
     * <code>SLACK</code> </p> </li> <li> <p> <code>ASANA</code> </p> </li> <li> <p>
     * <code>JIRA</code> </p> </li> <li> <p> <code>M365</code> </p> </li> <li> <p>
     * <code>M365AUDITLOGS</code> </p> </li> <li> <p> <code>ZOOM</code> </p> </li> <li>
     * <p> <code>ZENDESK</code> </p> </li> <li> <p> <code>OKTA</code> </p> </li> <li>
     * <p> <code>GOOGLE</code> </p> </li> <li> <p> <code>DROPBOX</code> </p> </li> <li>
     * <p> <code>SMARTSHEET</code> </p> </li> <li> <p> <code>CISCO</code> </p> </li>
     * </ul>
     */
    inline const Aws::String& GetApp() const{ return m_app; }

    /**
     * <p>The name of the application.</p> <p>Valid values are:</p> <ul> <li> <p>
     * <code>SLACK</code> </p> </li> <li> <p> <code>ASANA</code> </p> </li> <li> <p>
     * <code>JIRA</code> </p> </li> <li> <p> <code>M365</code> </p> </li> <li> <p>
     * <code>M365AUDITLOGS</code> </p> </li> <li> <p> <code>ZOOM</code> </p> </li> <li>
     * <p> <code>ZENDESK</code> </p> </li> <li> <p> <code>OKTA</code> </p> </li> <li>
     * <p> <code>GOOGLE</code> </p> </li> <li> <p> <code>DROPBOX</code> </p> </li> <li>
     * <p> <code>SMARTSHEET</code> </p> </li> <li> <p> <code>CISCO</code> </p> </li>
     * </ul>
     */
    inline bool AppHasBeenSet() const { return m_appHasBeenSet; }

    /**
     * <p>The name of the application.</p> <p>Valid values are:</p> <ul> <li> <p>
     * <code>SLACK</code> </p> </li> <li> <p> <code>ASANA</code> </p> </li> <li> <p>
     * <code>JIRA</code> </p> </li> <li> <p> <code>M365</code> </p> </li> <li> <p>
     * <code>M365AUDITLOGS</code> </p> </li> <li> <p> <code>ZOOM</code> </p> </li> <li>
     * <p> <code>ZENDESK</code> </p> </li> <li> <p> <code>OKTA</code> </p> </li> <li>
     * <p> <code>GOOGLE</code> </p> </li> <li> <p> <code>DROPBOX</code> </p> </li> <li>
     * <p> <code>SMARTSHEET</code> </p> </li> <li> <p> <code>CISCO</code> </p> </li>
     * </ul>
     */
    inline void SetApp(const Aws::String& value) { m_appHasBeenSet = true; m_app = value; }

    /**
     * <p>The name of the application.</p> <p>Valid values are:</p> <ul> <li> <p>
     * <code>SLACK</code> </p> </li> <li> <p> <code>ASANA</code> </p> </li> <li> <p>
     * <code>JIRA</code> </p> </li> <li> <p> <code>M365</code> </p> </li> <li> <p>
     * <code>M365AUDITLOGS</code> </p> </li> <li> <p> <code>ZOOM</code> </p> </li> <li>
     * <p> <code>ZENDESK</code> </p> </li> <li> <p> <code>OKTA</code> </p> </li> <li>
     * <p> <code>GOOGLE</code> </p> </li> <li> <p> <code>DROPBOX</code> </p> </li> <li>
     * <p> <code>SMARTSHEET</code> </p> </li> <li> <p> <code>CISCO</code> </p> </li>
     * </ul>
     */
    inline void SetApp(Aws::String&& value) { m_appHasBeenSet = true; m_app = std::move(value); }

    /**
     * <p>The name of the application.</p> <p>Valid values are:</p> <ul> <li> <p>
     * <code>SLACK</code> </p> </li> <li> <p> <code>ASANA</code> </p> </li> <li> <p>
     * <code>JIRA</code> </p> </li> <li> <p> <code>M365</code> </p> </li> <li> <p>
     * <code>M365AUDITLOGS</code> </p> </li> <li> <p> <code>ZOOM</code> </p> </li> <li>
     * <p> <code>ZENDESK</code> </p> </li> <li> <p> <code>OKTA</code> </p> </li> <li>
     * <p> <code>GOOGLE</code> </p> </li> <li> <p> <code>DROPBOX</code> </p> </li> <li>
     * <p> <code>SMARTSHEET</code> </p> </li> <li> <p> <code>CISCO</code> </p> </li>
     * </ul>
     */
    inline void SetApp(const char* value) { m_appHasBeenSet = true; m_app.assign(value); }

    /**
     * <p>The name of the application.</p> <p>Valid values are:</p> <ul> <li> <p>
     * <code>SLACK</code> </p> </li> <li> <p> <code>ASANA</code> </p> </li> <li> <p>
     * <code>JIRA</code> </p> </li> <li> <p> <code>M365</code> </p> </li> <li> <p>
     * <code>M365AUDITLOGS</code> </p> </li> <li> <p> <code>ZOOM</code> </p> </li> <li>
     * <p> <code>ZENDESK</code> </p> </li> <li> <p> <code>OKTA</code> </p> </li> <li>
     * <p> <code>GOOGLE</code> </p> </li> <li> <p> <code>DROPBOX</code> </p> </li> <li>
     * <p> <code>SMARTSHEET</code> </p> </li> <li> <p> <code>CISCO</code> </p> </li>
     * </ul>
     */
    inline CreateIngestionRequest& WithApp(const Aws::String& value) { SetApp(value); return *this;}

    /**
     * <p>The name of the application.</p> <p>Valid values are:</p> <ul> <li> <p>
     * <code>SLACK</code> </p> </li> <li> <p> <code>ASANA</code> </p> </li> <li> <p>
     * <code>JIRA</code> </p> </li> <li> <p> <code>M365</code> </p> </li> <li> <p>
     * <code>M365AUDITLOGS</code> </p> </li> <li> <p> <code>ZOOM</code> </p> </li> <li>
     * <p> <code>ZENDESK</code> </p> </li> <li> <p> <code>OKTA</code> </p> </li> <li>
     * <p> <code>GOOGLE</code> </p> </li> <li> <p> <code>DROPBOX</code> </p> </li> <li>
     * <p> <code>SMARTSHEET</code> </p> </li> <li> <p> <code>CISCO</code> </p> </li>
     * </ul>
     */
    inline CreateIngestionRequest& WithApp(Aws::String&& value) { SetApp(std::move(value)); return *this;}

    /**
     * <p>The name of the application.</p> <p>Valid values are:</p> <ul> <li> <p>
     * <code>SLACK</code> </p> </li> <li> <p> <code>ASANA</code> </p> </li> <li> <p>
     * <code>JIRA</code> </p> </li> <li> <p> <code>M365</code> </p> </li> <li> <p>
     * <code>M365AUDITLOGS</code> </p> </li> <li> <p> <code>ZOOM</code> </p> </li> <li>
     * <p> <code>ZENDESK</code> </p> </li> <li> <p> <code>OKTA</code> </p> </li> <li>
     * <p> <code>GOOGLE</code> </p> </li> <li> <p> <code>DROPBOX</code> </p> </li> <li>
     * <p> <code>SMARTSHEET</code> </p> </li> <li> <p> <code>CISCO</code> </p> </li>
     * </ul>
     */
    inline CreateIngestionRequest& WithApp(const char* value) { SetApp(value); return *this;}


    /**
     * <p>The ID of the application tenant.</p>
     */
    inline const Aws::String& GetTenantId() const{ return m_tenantId; }

    /**
     * <p>The ID of the application tenant.</p>
     */
    inline bool TenantIdHasBeenSet() const { return m_tenantIdHasBeenSet; }

    /**
     * <p>The ID of the application tenant.</p>
     */
    inline void SetTenantId(const Aws::String& value) { m_tenantIdHasBeenSet = true; m_tenantId = value; }

    /**
     * <p>The ID of the application tenant.</p>
     */
    inline void SetTenantId(Aws::String&& value) { m_tenantIdHasBeenSet = true; m_tenantId = std::move(value); }

    /**
     * <p>The ID of the application tenant.</p>
     */
    inline void SetTenantId(const char* value) { m_tenantIdHasBeenSet = true; m_tenantId.assign(value); }

    /**
     * <p>The ID of the application tenant.</p>
     */
    inline CreateIngestionRequest& WithTenantId(const Aws::String& value) { SetTenantId(value); return *this;}

    /**
     * <p>The ID of the application tenant.</p>
     */
    inline CreateIngestionRequest& WithTenantId(Aws::String&& value) { SetTenantId(std::move(value)); return *this;}

    /**
     * <p>The ID of the application tenant.</p>
     */
    inline CreateIngestionRequest& WithTenantId(const char* value) { SetTenantId(value); return *this;}


    /**
     * <p>The ingestion type.</p>
     */
    inline const IngestionType& GetIngestionType() const{ return m_ingestionType; }

    /**
     * <p>The ingestion type.</p>
     */
    inline bool IngestionTypeHasBeenSet() const { return m_ingestionTypeHasBeenSet; }

    /**
     * <p>The ingestion type.</p>
     */
    inline void SetIngestionType(const IngestionType& value) { m_ingestionTypeHasBeenSet = true; m_ingestionType = value; }

    /**
     * <p>The ingestion type.</p>
     */
    inline void SetIngestionType(IngestionType&& value) { m_ingestionTypeHasBeenSet = true; m_ingestionType = std::move(value); }

    /**
     * <p>The ingestion type.</p>
     */
    inline CreateIngestionRequest& WithIngestionType(const IngestionType& value) { SetIngestionType(value); return *this;}

    /**
     * <p>The ingestion type.</p>
     */
    inline CreateIngestionRequest& WithIngestionType(IngestionType&& value) { SetIngestionType(std::move(value)); return *this;}


    /**
     * <p>Specifies a unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. This lets you safely retry the request without
     * accidentally performing the same operation a second time. Passing the same value
     * to a later call to an operation requires that you also pass the same value for
     * all other parameters. We recommend that you use a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID type of
     * value</a>.</p> <p>If you don't provide this value, then Amazon Web Services
     * generates a random one for you.</p> <p>If you retry the operation with the same
     * <code>ClientToken</code>, but with different parameters, the retry fails with an
     * <code>IdempotentParameterMismatch</code> error.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>Specifies a unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. This lets you safely retry the request without
     * accidentally performing the same operation a second time. Passing the same value
     * to a later call to an operation requires that you also pass the same value for
     * all other parameters. We recommend that you use a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID type of
     * value</a>.</p> <p>If you don't provide this value, then Amazon Web Services
     * generates a random one for you.</p> <p>If you retry the operation with the same
     * <code>ClientToken</code>, but with different parameters, the retry fails with an
     * <code>IdempotentParameterMismatch</code> error.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>Specifies a unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. This lets you safely retry the request without
     * accidentally performing the same operation a second time. Passing the same value
     * to a later call to an operation requires that you also pass the same value for
     * all other parameters. We recommend that you use a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID type of
     * value</a>.</p> <p>If you don't provide this value, then Amazon Web Services
     * generates a random one for you.</p> <p>If you retry the operation with the same
     * <code>ClientToken</code>, but with different parameters, the retry fails with an
     * <code>IdempotentParameterMismatch</code> error.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>Specifies a unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. This lets you safely retry the request without
     * accidentally performing the same operation a second time. Passing the same value
     * to a later call to an operation requires that you also pass the same value for
     * all other parameters. We recommend that you use a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID type of
     * value</a>.</p> <p>If you don't provide this value, then Amazon Web Services
     * generates a random one for you.</p> <p>If you retry the operation with the same
     * <code>ClientToken</code>, but with different parameters, the retry fails with an
     * <code>IdempotentParameterMismatch</code> error.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>Specifies a unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. This lets you safely retry the request without
     * accidentally performing the same operation a second time. Passing the same value
     * to a later call to an operation requires that you also pass the same value for
     * all other parameters. We recommend that you use a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID type of
     * value</a>.</p> <p>If you don't provide this value, then Amazon Web Services
     * generates a random one for you.</p> <p>If you retry the operation with the same
     * <code>ClientToken</code>, but with different parameters, the retry fails with an
     * <code>IdempotentParameterMismatch</code> error.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>Specifies a unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. This lets you safely retry the request without
     * accidentally performing the same operation a second time. Passing the same value
     * to a later call to an operation requires that you also pass the same value for
     * all other parameters. We recommend that you use a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID type of
     * value</a>.</p> <p>If you don't provide this value, then Amazon Web Services
     * generates a random one for you.</p> <p>If you retry the operation with the same
     * <code>ClientToken</code>, but with different parameters, the retry fails with an
     * <code>IdempotentParameterMismatch</code> error.</p>
     */
    inline CreateIngestionRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>Specifies a unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. This lets you safely retry the request without
     * accidentally performing the same operation a second time. Passing the same value
     * to a later call to an operation requires that you also pass the same value for
     * all other parameters. We recommend that you use a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID type of
     * value</a>.</p> <p>If you don't provide this value, then Amazon Web Services
     * generates a random one for you.</p> <p>If you retry the operation with the same
     * <code>ClientToken</code>, but with different parameters, the retry fails with an
     * <code>IdempotentParameterMismatch</code> error.</p>
     */
    inline CreateIngestionRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>Specifies a unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. This lets you safely retry the request without
     * accidentally performing the same operation a second time. Passing the same value
     * to a later call to an operation requires that you also pass the same value for
     * all other parameters. We recommend that you use a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID type of
     * value</a>.</p> <p>If you don't provide this value, then Amazon Web Services
     * generates a random one for you.</p> <p>If you retry the operation with the same
     * <code>ClientToken</code>, but with different parameters, the retry fails with an
     * <code>IdempotentParameterMismatch</code> error.</p>
     */
    inline CreateIngestionRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>A map of the key-value pairs of the tag or tags to assign to the
     * resource.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A map of the key-value pairs of the tag or tags to assign to the
     * resource.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A map of the key-value pairs of the tag or tags to assign to the
     * resource.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A map of the key-value pairs of the tag or tags to assign to the
     * resource.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A map of the key-value pairs of the tag or tags to assign to the
     * resource.</p>
     */
    inline CreateIngestionRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A map of the key-value pairs of the tag or tags to assign to the
     * resource.</p>
     */
    inline CreateIngestionRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A map of the key-value pairs of the tag or tags to assign to the
     * resource.</p>
     */
    inline CreateIngestionRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A map of the key-value pairs of the tag or tags to assign to the
     * resource.</p>
     */
    inline CreateIngestionRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_appBundleIdentifier;
    bool m_appBundleIdentifierHasBeenSet = false;

    Aws::String m_app;
    bool m_appHasBeenSet = false;

    Aws::String m_tenantId;
    bool m_tenantIdHasBeenSet = false;

    IngestionType m_ingestionType;
    bool m_ingestionTypeHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace AppFabric
} // namespace Aws
