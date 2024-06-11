/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/DirectoryType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/connect/model/InstanceStatus.h>
#include <aws/connect/model/InstanceStatusReason.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Connect
{
namespace Model
{

  /**
   * <p>The Amazon Connect instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/Instance">AWS
   * API Reference</a></p>
   */
  class Instance
  {
  public:
    AWS_CONNECT_API Instance();
    AWS_CONNECT_API Instance(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Instance& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline Instance& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline Instance& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline Instance& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the instance.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline Instance& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline Instance& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline Instance& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identity management type.</p>
     */
    inline const DirectoryType& GetIdentityManagementType() const{ return m_identityManagementType; }
    inline bool IdentityManagementTypeHasBeenSet() const { return m_identityManagementTypeHasBeenSet; }
    inline void SetIdentityManagementType(const DirectoryType& value) { m_identityManagementTypeHasBeenSet = true; m_identityManagementType = value; }
    inline void SetIdentityManagementType(DirectoryType&& value) { m_identityManagementTypeHasBeenSet = true; m_identityManagementType = std::move(value); }
    inline Instance& WithIdentityManagementType(const DirectoryType& value) { SetIdentityManagementType(value); return *this;}
    inline Instance& WithIdentityManagementType(DirectoryType&& value) { SetIdentityManagementType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The alias of instance.</p>
     */
    inline const Aws::String& GetInstanceAlias() const{ return m_instanceAlias; }
    inline bool InstanceAliasHasBeenSet() const { return m_instanceAliasHasBeenSet; }
    inline void SetInstanceAlias(const Aws::String& value) { m_instanceAliasHasBeenSet = true; m_instanceAlias = value; }
    inline void SetInstanceAlias(Aws::String&& value) { m_instanceAliasHasBeenSet = true; m_instanceAlias = std::move(value); }
    inline void SetInstanceAlias(const char* value) { m_instanceAliasHasBeenSet = true; m_instanceAlias.assign(value); }
    inline Instance& WithInstanceAlias(const Aws::String& value) { SetInstanceAlias(value); return *this;}
    inline Instance& WithInstanceAlias(Aws::String&& value) { SetInstanceAlias(std::move(value)); return *this;}
    inline Instance& WithInstanceAlias(const char* value) { SetInstanceAlias(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the instance was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }
    inline Instance& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}
    inline Instance& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The service role of the instance.</p>
     */
    inline const Aws::String& GetServiceRole() const{ return m_serviceRole; }
    inline bool ServiceRoleHasBeenSet() const { return m_serviceRoleHasBeenSet; }
    inline void SetServiceRole(const Aws::String& value) { m_serviceRoleHasBeenSet = true; m_serviceRole = value; }
    inline void SetServiceRole(Aws::String&& value) { m_serviceRoleHasBeenSet = true; m_serviceRole = std::move(value); }
    inline void SetServiceRole(const char* value) { m_serviceRoleHasBeenSet = true; m_serviceRole.assign(value); }
    inline Instance& WithServiceRole(const Aws::String& value) { SetServiceRole(value); return *this;}
    inline Instance& WithServiceRole(Aws::String&& value) { SetServiceRole(std::move(value)); return *this;}
    inline Instance& WithServiceRole(const char* value) { SetServiceRole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the instance.</p>
     */
    inline const InstanceStatus& GetInstanceStatus() const{ return m_instanceStatus; }
    inline bool InstanceStatusHasBeenSet() const { return m_instanceStatusHasBeenSet; }
    inline void SetInstanceStatus(const InstanceStatus& value) { m_instanceStatusHasBeenSet = true; m_instanceStatus = value; }
    inline void SetInstanceStatus(InstanceStatus&& value) { m_instanceStatusHasBeenSet = true; m_instanceStatus = std::move(value); }
    inline Instance& WithInstanceStatus(const InstanceStatus& value) { SetInstanceStatus(value); return *this;}
    inline Instance& WithInstanceStatus(InstanceStatus&& value) { SetInstanceStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Relevant details why the instance was not successfully created. </p>
     */
    inline const InstanceStatusReason& GetStatusReason() const{ return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    inline void SetStatusReason(const InstanceStatusReason& value) { m_statusReasonHasBeenSet = true; m_statusReason = value; }
    inline void SetStatusReason(InstanceStatusReason&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::move(value); }
    inline Instance& WithStatusReason(const InstanceStatusReason& value) { SetStatusReason(value); return *this;}
    inline Instance& WithStatusReason(InstanceStatusReason&& value) { SetStatusReason(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether inbound calls are enabled.</p>
     */
    inline bool GetInboundCallsEnabled() const{ return m_inboundCallsEnabled; }
    inline bool InboundCallsEnabledHasBeenSet() const { return m_inboundCallsEnabledHasBeenSet; }
    inline void SetInboundCallsEnabled(bool value) { m_inboundCallsEnabledHasBeenSet = true; m_inboundCallsEnabled = value; }
    inline Instance& WithInboundCallsEnabled(bool value) { SetInboundCallsEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether outbound calls are enabled.</p>
     */
    inline bool GetOutboundCallsEnabled() const{ return m_outboundCallsEnabled; }
    inline bool OutboundCallsEnabledHasBeenSet() const { return m_outboundCallsEnabledHasBeenSet; }
    inline void SetOutboundCallsEnabled(bool value) { m_outboundCallsEnabledHasBeenSet = true; m_outboundCallsEnabled = value; }
    inline Instance& WithOutboundCallsEnabled(bool value) { SetOutboundCallsEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This URL allows contact center users to access the Amazon Connect admin
     * website.</p>
     */
    inline const Aws::String& GetInstanceAccessUrl() const{ return m_instanceAccessUrl; }
    inline bool InstanceAccessUrlHasBeenSet() const { return m_instanceAccessUrlHasBeenSet; }
    inline void SetInstanceAccessUrl(const Aws::String& value) { m_instanceAccessUrlHasBeenSet = true; m_instanceAccessUrl = value; }
    inline void SetInstanceAccessUrl(Aws::String&& value) { m_instanceAccessUrlHasBeenSet = true; m_instanceAccessUrl = std::move(value); }
    inline void SetInstanceAccessUrl(const char* value) { m_instanceAccessUrlHasBeenSet = true; m_instanceAccessUrl.assign(value); }
    inline Instance& WithInstanceAccessUrl(const Aws::String& value) { SetInstanceAccessUrl(value); return *this;}
    inline Instance& WithInstanceAccessUrl(Aws::String&& value) { SetInstanceAccessUrl(std::move(value)); return *this;}
    inline Instance& WithInstanceAccessUrl(const char* value) { SetInstanceAccessUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags of an instance.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline Instance& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline Instance& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline Instance& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline Instance& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline Instance& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline Instance& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline Instance& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline Instance& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline Instance& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    DirectoryType m_identityManagementType;
    bool m_identityManagementTypeHasBeenSet = false;

    Aws::String m_instanceAlias;
    bool m_instanceAliasHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet = false;

    Aws::String m_serviceRole;
    bool m_serviceRoleHasBeenSet = false;

    InstanceStatus m_instanceStatus;
    bool m_instanceStatusHasBeenSet = false;

    InstanceStatusReason m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    bool m_inboundCallsEnabled;
    bool m_inboundCallsEnabledHasBeenSet = false;

    bool m_outboundCallsEnabled;
    bool m_outboundCallsEnabledHasBeenSet = false;

    Aws::String m_instanceAccessUrl;
    bool m_instanceAccessUrlHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
