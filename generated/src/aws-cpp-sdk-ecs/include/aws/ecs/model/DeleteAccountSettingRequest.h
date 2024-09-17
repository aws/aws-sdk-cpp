/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/ECSRequest.h>
#include <aws/ecs/model/SettingName.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ECS
{
namespace Model
{

  /**
   */
  class DeleteAccountSettingRequest : public ECSRequest
  {
  public:
    AWS_ECS_API DeleteAccountSettingRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteAccountSetting"; }

    AWS_ECS_API Aws::String SerializePayload() const override;

    AWS_ECS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The resource name to disable the account setting for. If
     * <code>serviceLongArnFormat</code> is specified, the ARN for your Amazon ECS
     * services is affected. If <code>taskLongArnFormat</code> is specified, the ARN
     * and resource ID for your Amazon ECS tasks is affected. If
     * <code>containerInstanceLongArnFormat</code> is specified, the ARN and resource
     * ID for your Amazon ECS container instances is affected. If
     * <code>awsvpcTrunking</code> is specified, the ENI limit for your Amazon ECS
     * container instances is affected.</p>
     */
    inline const SettingName& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const SettingName& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(SettingName&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline DeleteAccountSettingRequest& WithName(const SettingName& value) { SetName(value); return *this;}
    inline DeleteAccountSettingRequest& WithName(SettingName&& value) { SetName(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the principal. It can be an user, role, or
     * the root user. If you specify the root user, it disables the account setting for
     * all users, roles, and the root user of the account unless a user or role
     * explicitly overrides these settings. If this field is omitted, the setting is
     * changed only for the authenticated user.</p>
     */
    inline const Aws::String& GetPrincipalArn() const{ return m_principalArn; }
    inline bool PrincipalArnHasBeenSet() const { return m_principalArnHasBeenSet; }
    inline void SetPrincipalArn(const Aws::String& value) { m_principalArnHasBeenSet = true; m_principalArn = value; }
    inline void SetPrincipalArn(Aws::String&& value) { m_principalArnHasBeenSet = true; m_principalArn = std::move(value); }
    inline void SetPrincipalArn(const char* value) { m_principalArnHasBeenSet = true; m_principalArn.assign(value); }
    inline DeleteAccountSettingRequest& WithPrincipalArn(const Aws::String& value) { SetPrincipalArn(value); return *this;}
    inline DeleteAccountSettingRequest& WithPrincipalArn(Aws::String&& value) { SetPrincipalArn(std::move(value)); return *this;}
    inline DeleteAccountSettingRequest& WithPrincipalArn(const char* value) { SetPrincipalArn(value); return *this;}
    ///@}
  private:

    SettingName m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_principalArn;
    bool m_principalArnHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
