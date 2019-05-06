/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectRequest.h>
#include <aws/connect/model/UserPhoneConfig.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Connect
{
namespace Model
{

  /**
   */
  class AWS_CONNECT_API UpdateUserPhoneConfigRequest : public ConnectRequest
  {
  public:
    UpdateUserPhoneConfigRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateUserPhoneConfig"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>A <code>UserPhoneConfig</code> object that contains settings for
     * <code>AfterContactWorkTimeLimit</code>, <code>AutoAccept</code>,
     * <code>DeskPhoneNumber</code>, and <code>PhoneType</code> to assign to the
     * user.</p>
     */
    inline const UserPhoneConfig& GetPhoneConfig() const{ return m_phoneConfig; }

    /**
     * <p>A <code>UserPhoneConfig</code> object that contains settings for
     * <code>AfterContactWorkTimeLimit</code>, <code>AutoAccept</code>,
     * <code>DeskPhoneNumber</code>, and <code>PhoneType</code> to assign to the
     * user.</p>
     */
    inline bool PhoneConfigHasBeenSet() const { return m_phoneConfigHasBeenSet; }

    /**
     * <p>A <code>UserPhoneConfig</code> object that contains settings for
     * <code>AfterContactWorkTimeLimit</code>, <code>AutoAccept</code>,
     * <code>DeskPhoneNumber</code>, and <code>PhoneType</code> to assign to the
     * user.</p>
     */
    inline void SetPhoneConfig(const UserPhoneConfig& value) { m_phoneConfigHasBeenSet = true; m_phoneConfig = value; }

    /**
     * <p>A <code>UserPhoneConfig</code> object that contains settings for
     * <code>AfterContactWorkTimeLimit</code>, <code>AutoAccept</code>,
     * <code>DeskPhoneNumber</code>, and <code>PhoneType</code> to assign to the
     * user.</p>
     */
    inline void SetPhoneConfig(UserPhoneConfig&& value) { m_phoneConfigHasBeenSet = true; m_phoneConfig = std::move(value); }

    /**
     * <p>A <code>UserPhoneConfig</code> object that contains settings for
     * <code>AfterContactWorkTimeLimit</code>, <code>AutoAccept</code>,
     * <code>DeskPhoneNumber</code>, and <code>PhoneType</code> to assign to the
     * user.</p>
     */
    inline UpdateUserPhoneConfigRequest& WithPhoneConfig(const UserPhoneConfig& value) { SetPhoneConfig(value); return *this;}

    /**
     * <p>A <code>UserPhoneConfig</code> object that contains settings for
     * <code>AfterContactWorkTimeLimit</code>, <code>AutoAccept</code>,
     * <code>DeskPhoneNumber</code>, and <code>PhoneType</code> to assign to the
     * user.</p>
     */
    inline UpdateUserPhoneConfigRequest& WithPhoneConfig(UserPhoneConfig&& value) { SetPhoneConfig(std::move(value)); return *this;}


    /**
     * <p>The identifier for the user account to change phone settings for.</p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }

    /**
     * <p>The identifier for the user account to change phone settings for.</p>
     */
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }

    /**
     * <p>The identifier for the user account to change phone settings for.</p>
     */
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }

    /**
     * <p>The identifier for the user account to change phone settings for.</p>
     */
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = std::move(value); }

    /**
     * <p>The identifier for the user account to change phone settings for.</p>
     */
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }

    /**
     * <p>The identifier for the user account to change phone settings for.</p>
     */
    inline UpdateUserPhoneConfigRequest& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}

    /**
     * <p>The identifier for the user account to change phone settings for.</p>
     */
    inline UpdateUserPhoneConfigRequest& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the user account to change phone settings for.</p>
     */
    inline UpdateUserPhoneConfigRequest& WithUserId(const char* value) { SetUserId(value); return *this;}


    /**
     * <p>The identifier for your Amazon Connect instance. To find the ID of your
     * instance, open the AWS console and select Amazon Connect. Select the alias of
     * the instance in the Instance alias column. The instance ID is displayed in the
     * Overview section of your instance settings. For example, the instance ID is the
     * set of characters at the end of the instance ARN, after instance/, such as
     * 10a4c4eb-f57e-4d4c-b602-bf39176ced07.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The identifier for your Amazon Connect instance. To find the ID of your
     * instance, open the AWS console and select Amazon Connect. Select the alias of
     * the instance in the Instance alias column. The instance ID is displayed in the
     * Overview section of your instance settings. For example, the instance ID is the
     * set of characters at the end of the instance ARN, after instance/, such as
     * 10a4c4eb-f57e-4d4c-b602-bf39176ced07.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The identifier for your Amazon Connect instance. To find the ID of your
     * instance, open the AWS console and select Amazon Connect. Select the alias of
     * the instance in the Instance alias column. The instance ID is displayed in the
     * Overview section of your instance settings. For example, the instance ID is the
     * set of characters at the end of the instance ARN, after instance/, such as
     * 10a4c4eb-f57e-4d4c-b602-bf39176ced07.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The identifier for your Amazon Connect instance. To find the ID of your
     * instance, open the AWS console and select Amazon Connect. Select the alias of
     * the instance in the Instance alias column. The instance ID is displayed in the
     * Overview section of your instance settings. For example, the instance ID is the
     * set of characters at the end of the instance ARN, after instance/, such as
     * 10a4c4eb-f57e-4d4c-b602-bf39176ced07.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The identifier for your Amazon Connect instance. To find the ID of your
     * instance, open the AWS console and select Amazon Connect. Select the alias of
     * the instance in the Instance alias column. The instance ID is displayed in the
     * Overview section of your instance settings. For example, the instance ID is the
     * set of characters at the end of the instance ARN, after instance/, such as
     * 10a4c4eb-f57e-4d4c-b602-bf39176ced07.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The identifier for your Amazon Connect instance. To find the ID of your
     * instance, open the AWS console and select Amazon Connect. Select the alias of
     * the instance in the Instance alias column. The instance ID is displayed in the
     * Overview section of your instance settings. For example, the instance ID is the
     * set of characters at the end of the instance ARN, after instance/, such as
     * 10a4c4eb-f57e-4d4c-b602-bf39176ced07.</p>
     */
    inline UpdateUserPhoneConfigRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The identifier for your Amazon Connect instance. To find the ID of your
     * instance, open the AWS console and select Amazon Connect. Select the alias of
     * the instance in the Instance alias column. The instance ID is displayed in the
     * Overview section of your instance settings. For example, the instance ID is the
     * set of characters at the end of the instance ARN, after instance/, such as
     * 10a4c4eb-f57e-4d4c-b602-bf39176ced07.</p>
     */
    inline UpdateUserPhoneConfigRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The identifier for your Amazon Connect instance. To find the ID of your
     * instance, open the AWS console and select Amazon Connect. Select the alias of
     * the instance in the Instance alias column. The instance ID is displayed in the
     * Overview section of your instance settings. For example, the instance ID is the
     * set of characters at the end of the instance ARN, after instance/, such as
     * 10a4c4eb-f57e-4d4c-b602-bf39176ced07.</p>
     */
    inline UpdateUserPhoneConfigRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}

  private:

    UserPhoneConfig m_phoneConfig;
    bool m_phoneConfigHasBeenSet;

    Aws::String m_userId;
    bool m_userIdHasBeenSet;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
