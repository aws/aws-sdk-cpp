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


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) or Universal Unique Identifier (UUID) of the
     * app bundle to use for the request.</p>
     */
    inline const Aws::String& GetAppBundleIdentifier() const{ return m_appBundleIdentifier; }
    inline bool AppBundleIdentifierHasBeenSet() const { return m_appBundleIdentifierHasBeenSet; }
    inline void SetAppBundleIdentifier(const Aws::String& value) { m_appBundleIdentifierHasBeenSet = true; m_appBundleIdentifier = value; }
    inline void SetAppBundleIdentifier(Aws::String&& value) { m_appBundleIdentifierHasBeenSet = true; m_appBundleIdentifier = std::move(value); }
    inline void SetAppBundleIdentifier(const char* value) { m_appBundleIdentifierHasBeenSet = true; m_appBundleIdentifier.assign(value); }
    inline CreateIngestionRequest& WithAppBundleIdentifier(const Aws::String& value) { SetAppBundleIdentifier(value); return *this;}
    inline CreateIngestionRequest& WithAppBundleIdentifier(Aws::String&& value) { SetAppBundleIdentifier(std::move(value)); return *this;}
    inline CreateIngestionRequest& WithAppBundleIdentifier(const char* value) { SetAppBundleIdentifier(value); return *this;}
    ///@}

    ///@{
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
    inline bool AppHasBeenSet() const { return m_appHasBeenSet; }
    inline void SetApp(const Aws::String& value) { m_appHasBeenSet = true; m_app = value; }
    inline void SetApp(Aws::String&& value) { m_appHasBeenSet = true; m_app = std::move(value); }
    inline void SetApp(const char* value) { m_appHasBeenSet = true; m_app.assign(value); }
    inline CreateIngestionRequest& WithApp(const Aws::String& value) { SetApp(value); return *this;}
    inline CreateIngestionRequest& WithApp(Aws::String&& value) { SetApp(std::move(value)); return *this;}
    inline CreateIngestionRequest& WithApp(const char* value) { SetApp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the application tenant.</p>
     */
    inline const Aws::String& GetTenantId() const{ return m_tenantId; }
    inline bool TenantIdHasBeenSet() const { return m_tenantIdHasBeenSet; }
    inline void SetTenantId(const Aws::String& value) { m_tenantIdHasBeenSet = true; m_tenantId = value; }
    inline void SetTenantId(Aws::String&& value) { m_tenantIdHasBeenSet = true; m_tenantId = std::move(value); }
    inline void SetTenantId(const char* value) { m_tenantIdHasBeenSet = true; m_tenantId.assign(value); }
    inline CreateIngestionRequest& WithTenantId(const Aws::String& value) { SetTenantId(value); return *this;}
    inline CreateIngestionRequest& WithTenantId(Aws::String&& value) { SetTenantId(std::move(value)); return *this;}
    inline CreateIngestionRequest& WithTenantId(const char* value) { SetTenantId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ingestion type.</p>
     */
    inline const IngestionType& GetIngestionType() const{ return m_ingestionType; }
    inline bool IngestionTypeHasBeenSet() const { return m_ingestionTypeHasBeenSet; }
    inline void SetIngestionType(const IngestionType& value) { m_ingestionTypeHasBeenSet = true; m_ingestionType = value; }
    inline void SetIngestionType(IngestionType&& value) { m_ingestionTypeHasBeenSet = true; m_ingestionType = std::move(value); }
    inline CreateIngestionRequest& WithIngestionType(const IngestionType& value) { SetIngestionType(value); return *this;}
    inline CreateIngestionRequest& WithIngestionType(IngestionType&& value) { SetIngestionType(std::move(value)); return *this;}
    ///@}

    ///@{
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
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateIngestionRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateIngestionRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateIngestionRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map of the key-value pairs of the tag or tags to assign to the
     * resource.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateIngestionRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateIngestionRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateIngestionRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateIngestionRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}
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
