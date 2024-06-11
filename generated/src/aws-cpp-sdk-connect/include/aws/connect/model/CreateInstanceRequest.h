/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/DirectoryType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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


    ///@{
    /**
     * <p>The idempotency token.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateInstanceRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateInstanceRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateInstanceRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of identity management for your Amazon Connect users.</p>
     */
    inline const DirectoryType& GetIdentityManagementType() const{ return m_identityManagementType; }
    inline bool IdentityManagementTypeHasBeenSet() const { return m_identityManagementTypeHasBeenSet; }
    inline void SetIdentityManagementType(const DirectoryType& value) { m_identityManagementTypeHasBeenSet = true; m_identityManagementType = value; }
    inline void SetIdentityManagementType(DirectoryType&& value) { m_identityManagementTypeHasBeenSet = true; m_identityManagementType = std::move(value); }
    inline CreateInstanceRequest& WithIdentityManagementType(const DirectoryType& value) { SetIdentityManagementType(value); return *this;}
    inline CreateInstanceRequest& WithIdentityManagementType(DirectoryType&& value) { SetIdentityManagementType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name for your instance.</p>
     */
    inline const Aws::String& GetInstanceAlias() const{ return m_instanceAlias; }
    inline bool InstanceAliasHasBeenSet() const { return m_instanceAliasHasBeenSet; }
    inline void SetInstanceAlias(const Aws::String& value) { m_instanceAliasHasBeenSet = true; m_instanceAlias = value; }
    inline void SetInstanceAlias(Aws::String&& value) { m_instanceAliasHasBeenSet = true; m_instanceAlias = std::move(value); }
    inline void SetInstanceAlias(const char* value) { m_instanceAliasHasBeenSet = true; m_instanceAlias.assign(value); }
    inline CreateInstanceRequest& WithInstanceAlias(const Aws::String& value) { SetInstanceAlias(value); return *this;}
    inline CreateInstanceRequest& WithInstanceAlias(Aws::String&& value) { SetInstanceAlias(std::move(value)); return *this;}
    inline CreateInstanceRequest& WithInstanceAlias(const char* value) { SetInstanceAlias(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the directory.</p>
     */
    inline const Aws::String& GetDirectoryId() const{ return m_directoryId; }
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }
    inline void SetDirectoryId(const Aws::String& value) { m_directoryIdHasBeenSet = true; m_directoryId = value; }
    inline void SetDirectoryId(Aws::String&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::move(value); }
    inline void SetDirectoryId(const char* value) { m_directoryIdHasBeenSet = true; m_directoryId.assign(value); }
    inline CreateInstanceRequest& WithDirectoryId(const Aws::String& value) { SetDirectoryId(value); return *this;}
    inline CreateInstanceRequest& WithDirectoryId(Aws::String&& value) { SetDirectoryId(std::move(value)); return *this;}
    inline CreateInstanceRequest& WithDirectoryId(const char* value) { SetDirectoryId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Your contact center handles incoming contacts.</p>
     */
    inline bool GetInboundCallsEnabled() const{ return m_inboundCallsEnabled; }
    inline bool InboundCallsEnabledHasBeenSet() const { return m_inboundCallsEnabledHasBeenSet; }
    inline void SetInboundCallsEnabled(bool value) { m_inboundCallsEnabledHasBeenSet = true; m_inboundCallsEnabled = value; }
    inline CreateInstanceRequest& WithInboundCallsEnabled(bool value) { SetInboundCallsEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Your contact center allows outbound calls.</p>
     */
    inline bool GetOutboundCallsEnabled() const{ return m_outboundCallsEnabled; }
    inline bool OutboundCallsEnabledHasBeenSet() const { return m_outboundCallsEnabledHasBeenSet; }
    inline void SetOutboundCallsEnabled(bool value) { m_outboundCallsEnabledHasBeenSet = true; m_outboundCallsEnabled = value; }
    inline CreateInstanceRequest& WithOutboundCallsEnabled(bool value) { SetOutboundCallsEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, <code>{ "tags": {"key1":"value1", "key2":"value2"} }</code>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateInstanceRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateInstanceRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateInstanceRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CreateInstanceRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateInstanceRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateInstanceRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateInstanceRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateInstanceRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateInstanceRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}
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

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
