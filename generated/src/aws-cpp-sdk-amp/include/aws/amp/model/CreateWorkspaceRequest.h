/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amp/PrometheusService_EXPORTS.h>
#include <aws/amp/PrometheusServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace PrometheusService
{
namespace Model
{

  /**
   * <p>Represents the input of a CreateWorkspace operation.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/CreateWorkspaceRequest">AWS
   * API Reference</a></p>
   */
  class CreateWorkspaceRequest : public PrometheusServiceRequest
  {
  public:
    AWS_PROMETHEUSSERVICE_API CreateWorkspaceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateWorkspace"; }

    AWS_PROMETHEUSSERVICE_API Aws::String SerializePayload() const override;


    /**
     * <p>An optional user-assigned alias for this workspace. This alias is for user
     * reference and does not need to be unique.</p>
     */
    inline const Aws::String& GetAlias() const{ return m_alias; }

    /**
     * <p>An optional user-assigned alias for this workspace. This alias is for user
     * reference and does not need to be unique.</p>
     */
    inline bool AliasHasBeenSet() const { return m_aliasHasBeenSet; }

    /**
     * <p>An optional user-assigned alias for this workspace. This alias is for user
     * reference and does not need to be unique.</p>
     */
    inline void SetAlias(const Aws::String& value) { m_aliasHasBeenSet = true; m_alias = value; }

    /**
     * <p>An optional user-assigned alias for this workspace. This alias is for user
     * reference and does not need to be unique.</p>
     */
    inline void SetAlias(Aws::String&& value) { m_aliasHasBeenSet = true; m_alias = std::move(value); }

    /**
     * <p>An optional user-assigned alias for this workspace. This alias is for user
     * reference and does not need to be unique.</p>
     */
    inline void SetAlias(const char* value) { m_aliasHasBeenSet = true; m_alias.assign(value); }

    /**
     * <p>An optional user-assigned alias for this workspace. This alias is for user
     * reference and does not need to be unique.</p>
     */
    inline CreateWorkspaceRequest& WithAlias(const Aws::String& value) { SetAlias(value); return *this;}

    /**
     * <p>An optional user-assigned alias for this workspace. This alias is for user
     * reference and does not need to be unique.</p>
     */
    inline CreateWorkspaceRequest& WithAlias(Aws::String&& value) { SetAlias(std::move(value)); return *this;}

    /**
     * <p>An optional user-assigned alias for this workspace. This alias is for user
     * reference and does not need to be unique.</p>
     */
    inline CreateWorkspaceRequest& WithAlias(const char* value) { SetAlias(value); return *this;}


    /**
     * <p>Optional, unique, case-sensitive, user-provided identifier to ensure the
     * idempotency of the request.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>Optional, unique, case-sensitive, user-provided identifier to ensure the
     * idempotency of the request.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>Optional, unique, case-sensitive, user-provided identifier to ensure the
     * idempotency of the request.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>Optional, unique, case-sensitive, user-provided identifier to ensure the
     * idempotency of the request.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>Optional, unique, case-sensitive, user-provided identifier to ensure the
     * idempotency of the request.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>Optional, unique, case-sensitive, user-provided identifier to ensure the
     * idempotency of the request.</p>
     */
    inline CreateWorkspaceRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>Optional, unique, case-sensitive, user-provided identifier to ensure the
     * idempotency of the request.</p>
     */
    inline CreateWorkspaceRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>Optional, unique, case-sensitive, user-provided identifier to ensure the
     * idempotency of the request.</p>
     */
    inline CreateWorkspaceRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>Optional, user-provided tags for this workspace.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Optional, user-provided tags for this workspace.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Optional, user-provided tags for this workspace.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Optional, user-provided tags for this workspace.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Optional, user-provided tags for this workspace.</p>
     */
    inline CreateWorkspaceRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Optional, user-provided tags for this workspace.</p>
     */
    inline CreateWorkspaceRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Optional, user-provided tags for this workspace.</p>
     */
    inline CreateWorkspaceRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>Optional, user-provided tags for this workspace.</p>
     */
    inline CreateWorkspaceRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Optional, user-provided tags for this workspace.</p>
     */
    inline CreateWorkspaceRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Optional, user-provided tags for this workspace.</p>
     */
    inline CreateWorkspaceRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Optional, user-provided tags for this workspace.</p>
     */
    inline CreateWorkspaceRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Optional, user-provided tags for this workspace.</p>
     */
    inline CreateWorkspaceRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Optional, user-provided tags for this workspace.</p>
     */
    inline CreateWorkspaceRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_alias;
    bool m_aliasHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace PrometheusService
} // namespace Aws
