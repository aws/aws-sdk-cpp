/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amp/PrometheusService_EXPORTS.h>
#include <aws/amp/PrometheusServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace PrometheusService
{
namespace Model
{

  /**
   * <p>Represents the input of an <code>UpdateWorkspaceAlias</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/UpdateWorkspaceAliasRequest">AWS
   * API Reference</a></p>
   */
  class UpdateWorkspaceAliasRequest : public PrometheusServiceRequest
  {
  public:
    AWS_PROMETHEUSSERVICE_API UpdateWorkspaceAliasRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateWorkspaceAlias"; }

    AWS_PROMETHEUSSERVICE_API Aws::String SerializePayload() const override;


    /**
     * <p>The new alias for the workspace. It does not need to be unique.</p> <p>Amazon
     * Managed Service for Prometheus will automatically strip any blank spaces from
     * the beginning and end of the alias that you specify.</p>
     */
    inline const Aws::String& GetAlias() const{ return m_alias; }

    /**
     * <p>The new alias for the workspace. It does not need to be unique.</p> <p>Amazon
     * Managed Service for Prometheus will automatically strip any blank spaces from
     * the beginning and end of the alias that you specify.</p>
     */
    inline bool AliasHasBeenSet() const { return m_aliasHasBeenSet; }

    /**
     * <p>The new alias for the workspace. It does not need to be unique.</p> <p>Amazon
     * Managed Service for Prometheus will automatically strip any blank spaces from
     * the beginning and end of the alias that you specify.</p>
     */
    inline void SetAlias(const Aws::String& value) { m_aliasHasBeenSet = true; m_alias = value; }

    /**
     * <p>The new alias for the workspace. It does not need to be unique.</p> <p>Amazon
     * Managed Service for Prometheus will automatically strip any blank spaces from
     * the beginning and end of the alias that you specify.</p>
     */
    inline void SetAlias(Aws::String&& value) { m_aliasHasBeenSet = true; m_alias = std::move(value); }

    /**
     * <p>The new alias for the workspace. It does not need to be unique.</p> <p>Amazon
     * Managed Service for Prometheus will automatically strip any blank spaces from
     * the beginning and end of the alias that you specify.</p>
     */
    inline void SetAlias(const char* value) { m_aliasHasBeenSet = true; m_alias.assign(value); }

    /**
     * <p>The new alias for the workspace. It does not need to be unique.</p> <p>Amazon
     * Managed Service for Prometheus will automatically strip any blank spaces from
     * the beginning and end of the alias that you specify.</p>
     */
    inline UpdateWorkspaceAliasRequest& WithAlias(const Aws::String& value) { SetAlias(value); return *this;}

    /**
     * <p>The new alias for the workspace. It does not need to be unique.</p> <p>Amazon
     * Managed Service for Prometheus will automatically strip any blank spaces from
     * the beginning and end of the alias that you specify.</p>
     */
    inline UpdateWorkspaceAliasRequest& WithAlias(Aws::String&& value) { SetAlias(std::move(value)); return *this;}

    /**
     * <p>The new alias for the workspace. It does not need to be unique.</p> <p>Amazon
     * Managed Service for Prometheus will automatically strip any blank spaces from
     * the beginning and end of the alias that you specify.</p>
     */
    inline UpdateWorkspaceAliasRequest& WithAlias(const char* value) { SetAlias(value); return *this;}


    /**
     * <p>A unique identifier that you can provide to ensure the idempotency of the
     * request. Case-sensitive.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A unique identifier that you can provide to ensure the idempotency of the
     * request. Case-sensitive.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A unique identifier that you can provide to ensure the idempotency of the
     * request. Case-sensitive.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A unique identifier that you can provide to ensure the idempotency of the
     * request. Case-sensitive.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A unique identifier that you can provide to ensure the idempotency of the
     * request. Case-sensitive.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A unique identifier that you can provide to ensure the idempotency of the
     * request. Case-sensitive.</p>
     */
    inline UpdateWorkspaceAliasRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique identifier that you can provide to ensure the idempotency of the
     * request. Case-sensitive.</p>
     */
    inline UpdateWorkspaceAliasRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A unique identifier that you can provide to ensure the idempotency of the
     * request. Case-sensitive.</p>
     */
    inline UpdateWorkspaceAliasRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The ID of the workspace to update.</p>
     */
    inline const Aws::String& GetWorkspaceId() const{ return m_workspaceId; }

    /**
     * <p>The ID of the workspace to update.</p>
     */
    inline bool WorkspaceIdHasBeenSet() const { return m_workspaceIdHasBeenSet; }

    /**
     * <p>The ID of the workspace to update.</p>
     */
    inline void SetWorkspaceId(const Aws::String& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = value; }

    /**
     * <p>The ID of the workspace to update.</p>
     */
    inline void SetWorkspaceId(Aws::String&& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = std::move(value); }

    /**
     * <p>The ID of the workspace to update.</p>
     */
    inline void SetWorkspaceId(const char* value) { m_workspaceIdHasBeenSet = true; m_workspaceId.assign(value); }

    /**
     * <p>The ID of the workspace to update.</p>
     */
    inline UpdateWorkspaceAliasRequest& WithWorkspaceId(const Aws::String& value) { SetWorkspaceId(value); return *this;}

    /**
     * <p>The ID of the workspace to update.</p>
     */
    inline UpdateWorkspaceAliasRequest& WithWorkspaceId(Aws::String&& value) { SetWorkspaceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the workspace to update.</p>
     */
    inline UpdateWorkspaceAliasRequest& WithWorkspaceId(const char* value) { SetWorkspaceId(value); return *this;}

  private:

    Aws::String m_alias;
    bool m_aliasHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_workspaceId;
    bool m_workspaceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PrometheusService
} // namespace Aws
