﻿/**
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
  class AWS_CONNECT_API InstanceSummary
  {
  public:
    InstanceSummary();
    InstanceSummary(Aws::Utils::Json::JsonView jsonValue);
    InstanceSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the instance.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier of the instance.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The identifier of the instance.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identifier of the instance.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The identifier of the instance.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The identifier of the instance.</p>
     */
    inline InstanceSummary& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier of the instance.</p>
     */
    inline InstanceSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the instance.</p>
     */
    inline InstanceSummary& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the instance.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the instance.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the instance.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the instance.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the instance.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the instance.</p>
     */
    inline InstanceSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the instance.</p>
     */
    inline InstanceSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the instance.</p>
     */
    inline InstanceSummary& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The identity management type of the instance.</p>
     */
    inline const DirectoryType& GetIdentityManagementType() const{ return m_identityManagementType; }

    /**
     * <p>The identity management type of the instance.</p>
     */
    inline bool IdentityManagementTypeHasBeenSet() const { return m_identityManagementTypeHasBeenSet; }

    /**
     * <p>The identity management type of the instance.</p>
     */
    inline void SetIdentityManagementType(const DirectoryType& value) { m_identityManagementTypeHasBeenSet = true; m_identityManagementType = value; }

    /**
     * <p>The identity management type of the instance.</p>
     */
    inline void SetIdentityManagementType(DirectoryType&& value) { m_identityManagementTypeHasBeenSet = true; m_identityManagementType = std::move(value); }

    /**
     * <p>The identity management type of the instance.</p>
     */
    inline InstanceSummary& WithIdentityManagementType(const DirectoryType& value) { SetIdentityManagementType(value); return *this;}

    /**
     * <p>The identity management type of the instance.</p>
     */
    inline InstanceSummary& WithIdentityManagementType(DirectoryType&& value) { SetIdentityManagementType(std::move(value)); return *this;}


    /**
     * <p>The alias of the instance.</p>
     */
    inline const Aws::String& GetInstanceAlias() const{ return m_instanceAlias; }

    /**
     * <p>The alias of the instance.</p>
     */
    inline bool InstanceAliasHasBeenSet() const { return m_instanceAliasHasBeenSet; }

    /**
     * <p>The alias of the instance.</p>
     */
    inline void SetInstanceAlias(const Aws::String& value) { m_instanceAliasHasBeenSet = true; m_instanceAlias = value; }

    /**
     * <p>The alias of the instance.</p>
     */
    inline void SetInstanceAlias(Aws::String&& value) { m_instanceAliasHasBeenSet = true; m_instanceAlias = std::move(value); }

    /**
     * <p>The alias of the instance.</p>
     */
    inline void SetInstanceAlias(const char* value) { m_instanceAliasHasBeenSet = true; m_instanceAlias.assign(value); }

    /**
     * <p>The alias of the instance.</p>
     */
    inline InstanceSummary& WithInstanceAlias(const Aws::String& value) { SetInstanceAlias(value); return *this;}

    /**
     * <p>The alias of the instance.</p>
     */
    inline InstanceSummary& WithInstanceAlias(Aws::String&& value) { SetInstanceAlias(std::move(value)); return *this;}

    /**
     * <p>The alias of the instance.</p>
     */
    inline InstanceSummary& WithInstanceAlias(const char* value) { SetInstanceAlias(value); return *this;}


    /**
     * <p>When the instance was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }

    /**
     * <p>When the instance was created.</p>
     */
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }

    /**
     * <p>When the instance was created.</p>
     */
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }

    /**
     * <p>When the instance was created.</p>
     */
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }

    /**
     * <p>When the instance was created.</p>
     */
    inline InstanceSummary& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}

    /**
     * <p>When the instance was created.</p>
     */
    inline InstanceSummary& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}


    /**
     * <p>The service role of the instance.</p>
     */
    inline const Aws::String& GetServiceRole() const{ return m_serviceRole; }

    /**
     * <p>The service role of the instance.</p>
     */
    inline bool ServiceRoleHasBeenSet() const { return m_serviceRoleHasBeenSet; }

    /**
     * <p>The service role of the instance.</p>
     */
    inline void SetServiceRole(const Aws::String& value) { m_serviceRoleHasBeenSet = true; m_serviceRole = value; }

    /**
     * <p>The service role of the instance.</p>
     */
    inline void SetServiceRole(Aws::String&& value) { m_serviceRoleHasBeenSet = true; m_serviceRole = std::move(value); }

    /**
     * <p>The service role of the instance.</p>
     */
    inline void SetServiceRole(const char* value) { m_serviceRoleHasBeenSet = true; m_serviceRole.assign(value); }

    /**
     * <p>The service role of the instance.</p>
     */
    inline InstanceSummary& WithServiceRole(const Aws::String& value) { SetServiceRole(value); return *this;}

    /**
     * <p>The service role of the instance.</p>
     */
    inline InstanceSummary& WithServiceRole(Aws::String&& value) { SetServiceRole(std::move(value)); return *this;}

    /**
     * <p>The service role of the instance.</p>
     */
    inline InstanceSummary& WithServiceRole(const char* value) { SetServiceRole(value); return *this;}


    /**
     * <p>The state of the instance.</p>
     */
    inline const InstanceStatus& GetInstanceStatus() const{ return m_instanceStatus; }

    /**
     * <p>The state of the instance.</p>
     */
    inline bool InstanceStatusHasBeenSet() const { return m_instanceStatusHasBeenSet; }

    /**
     * <p>The state of the instance.</p>
     */
    inline void SetInstanceStatus(const InstanceStatus& value) { m_instanceStatusHasBeenSet = true; m_instanceStatus = value; }

    /**
     * <p>The state of the instance.</p>
     */
    inline void SetInstanceStatus(InstanceStatus&& value) { m_instanceStatusHasBeenSet = true; m_instanceStatus = std::move(value); }

    /**
     * <p>The state of the instance.</p>
     */
    inline InstanceSummary& WithInstanceStatus(const InstanceStatus& value) { SetInstanceStatus(value); return *this;}

    /**
     * <p>The state of the instance.</p>
     */
    inline InstanceSummary& WithInstanceStatus(InstanceStatus&& value) { SetInstanceStatus(std::move(value)); return *this;}


    /**
     * <p>Whether inbound calls are enabled.</p>
     */
    inline bool GetInboundCallsEnabled() const{ return m_inboundCallsEnabled; }

    /**
     * <p>Whether inbound calls are enabled.</p>
     */
    inline bool InboundCallsEnabledHasBeenSet() const { return m_inboundCallsEnabledHasBeenSet; }

    /**
     * <p>Whether inbound calls are enabled.</p>
     */
    inline void SetInboundCallsEnabled(bool value) { m_inboundCallsEnabledHasBeenSet = true; m_inboundCallsEnabled = value; }

    /**
     * <p>Whether inbound calls are enabled.</p>
     */
    inline InstanceSummary& WithInboundCallsEnabled(bool value) { SetInboundCallsEnabled(value); return *this;}


    /**
     * <p>Whether outbound calls are enabled.</p>
     */
    inline bool GetOutboundCallsEnabled() const{ return m_outboundCallsEnabled; }

    /**
     * <p>Whether outbound calls are enabled.</p>
     */
    inline bool OutboundCallsEnabledHasBeenSet() const { return m_outboundCallsEnabledHasBeenSet; }

    /**
     * <p>Whether outbound calls are enabled.</p>
     */
    inline void SetOutboundCallsEnabled(bool value) { m_outboundCallsEnabledHasBeenSet = true; m_outboundCallsEnabled = value; }

    /**
     * <p>Whether outbound calls are enabled.</p>
     */
    inline InstanceSummary& WithOutboundCallsEnabled(bool value) { SetOutboundCallsEnabled(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    DirectoryType m_identityManagementType;
    bool m_identityManagementTypeHasBeenSet;

    Aws::String m_instanceAlias;
    bool m_instanceAliasHasBeenSet;

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet;

    Aws::String m_serviceRole;
    bool m_serviceRoleHasBeenSet;

    InstanceStatus m_instanceStatus;
    bool m_instanceStatusHasBeenSet;

    bool m_inboundCallsEnabled;
    bool m_inboundCallsEnabledHasBeenSet;

    bool m_outboundCallsEnabled;
    bool m_outboundCallsEnabledHasBeenSet;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
