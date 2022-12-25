/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/DirectoryType.h>
#include <utility>

namespace Aws
{
namespace Connect
{
namespace Model
{

  /**
   */
  class CreateInstanceRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API CreateInstanceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateInstance"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;


    /**
     * <p>The idempotency token.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>The idempotency token.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>The idempotency token.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>The idempotency token.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>The idempotency token.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>The idempotency token.</p>
     */
    inline CreateInstanceRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>The idempotency token.</p>
     */
    inline CreateInstanceRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>The idempotency token.</p>
     */
    inline CreateInstanceRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The type of identity management for your Amazon Connect users.</p>
     */
    inline const DirectoryType& GetIdentityManagementType() const{ return m_identityManagementType; }

    /**
     * <p>The type of identity management for your Amazon Connect users.</p>
     */
    inline bool IdentityManagementTypeHasBeenSet() const { return m_identityManagementTypeHasBeenSet; }

    /**
     * <p>The type of identity management for your Amazon Connect users.</p>
     */
    inline void SetIdentityManagementType(const DirectoryType& value) { m_identityManagementTypeHasBeenSet = true; m_identityManagementType = value; }

    /**
     * <p>The type of identity management for your Amazon Connect users.</p>
     */
    inline void SetIdentityManagementType(DirectoryType&& value) { m_identityManagementTypeHasBeenSet = true; m_identityManagementType = std::move(value); }

    /**
     * <p>The type of identity management for your Amazon Connect users.</p>
     */
    inline CreateInstanceRequest& WithIdentityManagementType(const DirectoryType& value) { SetIdentityManagementType(value); return *this;}

    /**
     * <p>The type of identity management for your Amazon Connect users.</p>
     */
    inline CreateInstanceRequest& WithIdentityManagementType(DirectoryType&& value) { SetIdentityManagementType(std::move(value)); return *this;}


    /**
     * <p>The name for your instance.</p>
     */
    inline const Aws::String& GetInstanceAlias() const{ return m_instanceAlias; }

    /**
     * <p>The name for your instance.</p>
     */
    inline bool InstanceAliasHasBeenSet() const { return m_instanceAliasHasBeenSet; }

    /**
     * <p>The name for your instance.</p>
     */
    inline void SetInstanceAlias(const Aws::String& value) { m_instanceAliasHasBeenSet = true; m_instanceAlias = value; }

    /**
     * <p>The name for your instance.</p>
     */
    inline void SetInstanceAlias(Aws::String&& value) { m_instanceAliasHasBeenSet = true; m_instanceAlias = std::move(value); }

    /**
     * <p>The name for your instance.</p>
     */
    inline void SetInstanceAlias(const char* value) { m_instanceAliasHasBeenSet = true; m_instanceAlias.assign(value); }

    /**
     * <p>The name for your instance.</p>
     */
    inline CreateInstanceRequest& WithInstanceAlias(const Aws::String& value) { SetInstanceAlias(value); return *this;}

    /**
     * <p>The name for your instance.</p>
     */
    inline CreateInstanceRequest& WithInstanceAlias(Aws::String&& value) { SetInstanceAlias(std::move(value)); return *this;}

    /**
     * <p>The name for your instance.</p>
     */
    inline CreateInstanceRequest& WithInstanceAlias(const char* value) { SetInstanceAlias(value); return *this;}


    /**
     * <p>The identifier for the directory.</p>
     */
    inline const Aws::String& GetDirectoryId() const{ return m_directoryId; }

    /**
     * <p>The identifier for the directory.</p>
     */
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }

    /**
     * <p>The identifier for the directory.</p>
     */
    inline void SetDirectoryId(const Aws::String& value) { m_directoryIdHasBeenSet = true; m_directoryId = value; }

    /**
     * <p>The identifier for the directory.</p>
     */
    inline void SetDirectoryId(Aws::String&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::move(value); }

    /**
     * <p>The identifier for the directory.</p>
     */
    inline void SetDirectoryId(const char* value) { m_directoryIdHasBeenSet = true; m_directoryId.assign(value); }

    /**
     * <p>The identifier for the directory.</p>
     */
    inline CreateInstanceRequest& WithDirectoryId(const Aws::String& value) { SetDirectoryId(value); return *this;}

    /**
     * <p>The identifier for the directory.</p>
     */
    inline CreateInstanceRequest& WithDirectoryId(Aws::String&& value) { SetDirectoryId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the directory.</p>
     */
    inline CreateInstanceRequest& WithDirectoryId(const char* value) { SetDirectoryId(value); return *this;}


    /**
     * <p>Your contact center handles incoming contacts.</p>
     */
    inline bool GetInboundCallsEnabled() const{ return m_inboundCallsEnabled; }

    /**
     * <p>Your contact center handles incoming contacts.</p>
     */
    inline bool InboundCallsEnabledHasBeenSet() const { return m_inboundCallsEnabledHasBeenSet; }

    /**
     * <p>Your contact center handles incoming contacts.</p>
     */
    inline void SetInboundCallsEnabled(bool value) { m_inboundCallsEnabledHasBeenSet = true; m_inboundCallsEnabled = value; }

    /**
     * <p>Your contact center handles incoming contacts.</p>
     */
    inline CreateInstanceRequest& WithInboundCallsEnabled(bool value) { SetInboundCallsEnabled(value); return *this;}


    /**
     * <p>Your contact center allows outbound calls.</p>
     */
    inline bool GetOutboundCallsEnabled() const{ return m_outboundCallsEnabled; }

    /**
     * <p>Your contact center allows outbound calls.</p>
     */
    inline bool OutboundCallsEnabledHasBeenSet() const { return m_outboundCallsEnabledHasBeenSet; }

    /**
     * <p>Your contact center allows outbound calls.</p>
     */
    inline void SetOutboundCallsEnabled(bool value) { m_outboundCallsEnabledHasBeenSet = true; m_outboundCallsEnabled = value; }

    /**
     * <p>Your contact center allows outbound calls.</p>
     */
    inline CreateInstanceRequest& WithOutboundCallsEnabled(bool value) { SetOutboundCallsEnabled(value); return *this;}

  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    DirectoryType m_identityManagementType;
    bool m_identityManagementTypeHasBeenSet = false;

    Aws::String m_instanceAlias;
    bool m_instanceAliasHasBeenSet = false;

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet = false;

    bool m_inboundCallsEnabled;
    bool m_inboundCallsEnabledHasBeenSet = false;

    bool m_outboundCallsEnabled;
    bool m_outboundCallsEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
