/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class UpdateUserPhoneConfigRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API UpdateUserPhoneConfigRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateUserPhoneConfig"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Information about phone configuration settings for the user.</p>
     */
    inline const UserPhoneConfig& GetPhoneConfig() const{ return m_phoneConfig; }
    inline bool PhoneConfigHasBeenSet() const { return m_phoneConfigHasBeenSet; }
    inline void SetPhoneConfig(const UserPhoneConfig& value) { m_phoneConfigHasBeenSet = true; m_phoneConfig = value; }
    inline void SetPhoneConfig(UserPhoneConfig&& value) { m_phoneConfigHasBeenSet = true; m_phoneConfig = std::move(value); }
    inline UpdateUserPhoneConfigRequest& WithPhoneConfig(const UserPhoneConfig& value) { SetPhoneConfig(value); return *this;}
    inline UpdateUserPhoneConfigRequest& WithPhoneConfig(UserPhoneConfig&& value) { SetPhoneConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the user account.</p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = std::move(value); }
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }
    inline UpdateUserPhoneConfigRequest& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}
    inline UpdateUserPhoneConfigRequest& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}
    inline UpdateUserPhoneConfigRequest& WithUserId(const char* value) { SetUserId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline UpdateUserPhoneConfigRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline UpdateUserPhoneConfigRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline UpdateUserPhoneConfigRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}
  private:

    UserPhoneConfig m_phoneConfig;
    bool m_phoneConfigHasBeenSet = false;

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
