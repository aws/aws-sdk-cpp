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
   * <p>Information about the instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/InstanceSummary">AWS
   * API Reference</a></p>
   */
  class InstanceSummary
  {
  public:
    AWS_CONNECT_API InstanceSummary() = default;
    AWS_CONNECT_API InstanceSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API InstanceSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the instance.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    InstanceSummary& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the instance.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    InstanceSummary& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identity management type of the instance.</p>
     */
    inline DirectoryType GetIdentityManagementType() const { return m_identityManagementType; }
    inline bool IdentityManagementTypeHasBeenSet() const { return m_identityManagementTypeHasBeenSet; }
    inline void SetIdentityManagementType(DirectoryType value) { m_identityManagementTypeHasBeenSet = true; m_identityManagementType = value; }
    inline InstanceSummary& WithIdentityManagementType(DirectoryType value) { SetIdentityManagementType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The alias of the instance.</p>
     */
    inline const Aws::String& GetInstanceAlias() const { return m_instanceAlias; }
    inline bool InstanceAliasHasBeenSet() const { return m_instanceAliasHasBeenSet; }
    template<typename InstanceAliasT = Aws::String>
    void SetInstanceAlias(InstanceAliasT&& value) { m_instanceAliasHasBeenSet = true; m_instanceAlias = std::forward<InstanceAliasT>(value); }
    template<typename InstanceAliasT = Aws::String>
    InstanceSummary& WithInstanceAlias(InstanceAliasT&& value) { SetInstanceAlias(std::forward<InstanceAliasT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the instance was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const { return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    void SetCreatedTime(CreatedTimeT&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::forward<CreatedTimeT>(value); }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    InstanceSummary& WithCreatedTime(CreatedTimeT&& value) { SetCreatedTime(std::forward<CreatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The service role of the instance.</p>
     */
    inline const Aws::String& GetServiceRole() const { return m_serviceRole; }
    inline bool ServiceRoleHasBeenSet() const { return m_serviceRoleHasBeenSet; }
    template<typename ServiceRoleT = Aws::String>
    void SetServiceRole(ServiceRoleT&& value) { m_serviceRoleHasBeenSet = true; m_serviceRole = std::forward<ServiceRoleT>(value); }
    template<typename ServiceRoleT = Aws::String>
    InstanceSummary& WithServiceRole(ServiceRoleT&& value) { SetServiceRole(std::forward<ServiceRoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the instance.</p>
     */
    inline InstanceStatus GetInstanceStatus() const { return m_instanceStatus; }
    inline bool InstanceStatusHasBeenSet() const { return m_instanceStatusHasBeenSet; }
    inline void SetInstanceStatus(InstanceStatus value) { m_instanceStatusHasBeenSet = true; m_instanceStatus = value; }
    inline InstanceSummary& WithInstanceStatus(InstanceStatus value) { SetInstanceStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether inbound calls are enabled.</p>
     */
    inline bool GetInboundCallsEnabled() const { return m_inboundCallsEnabled; }
    inline bool InboundCallsEnabledHasBeenSet() const { return m_inboundCallsEnabledHasBeenSet; }
    inline void SetInboundCallsEnabled(bool value) { m_inboundCallsEnabledHasBeenSet = true; m_inboundCallsEnabled = value; }
    inline InstanceSummary& WithInboundCallsEnabled(bool value) { SetInboundCallsEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether outbound calls are enabled.</p>
     */
    inline bool GetOutboundCallsEnabled() const { return m_outboundCallsEnabled; }
    inline bool OutboundCallsEnabledHasBeenSet() const { return m_outboundCallsEnabledHasBeenSet; }
    inline void SetOutboundCallsEnabled(bool value) { m_outboundCallsEnabledHasBeenSet = true; m_outboundCallsEnabled = value; }
    inline InstanceSummary& WithOutboundCallsEnabled(bool value) { SetOutboundCallsEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This URL allows contact center users to access the Amazon Connect admin
     * website.</p>
     */
    inline const Aws::String& GetInstanceAccessUrl() const { return m_instanceAccessUrl; }
    inline bool InstanceAccessUrlHasBeenSet() const { return m_instanceAccessUrlHasBeenSet; }
    template<typename InstanceAccessUrlT = Aws::String>
    void SetInstanceAccessUrl(InstanceAccessUrlT&& value) { m_instanceAccessUrlHasBeenSet = true; m_instanceAccessUrl = std::forward<InstanceAccessUrlT>(value); }
    template<typename InstanceAccessUrlT = Aws::String>
    InstanceSummary& WithInstanceAccessUrl(InstanceAccessUrlT&& value) { SetInstanceAccessUrl(std::forward<InstanceAccessUrlT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    DirectoryType m_identityManagementType{DirectoryType::NOT_SET};
    bool m_identityManagementTypeHasBeenSet = false;

    Aws::String m_instanceAlias;
    bool m_instanceAliasHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime{};
    bool m_createdTimeHasBeenSet = false;

    Aws::String m_serviceRole;
    bool m_serviceRoleHasBeenSet = false;

    InstanceStatus m_instanceStatus{InstanceStatus::NOT_SET};
    bool m_instanceStatusHasBeenSet = false;

    bool m_inboundCallsEnabled{false};
    bool m_inboundCallsEnabledHasBeenSet = false;

    bool m_outboundCallsEnabled{false};
    bool m_outboundCallsEnabledHasBeenSet = false;

    Aws::String m_instanceAccessUrl;
    bool m_instanceAccessUrlHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
