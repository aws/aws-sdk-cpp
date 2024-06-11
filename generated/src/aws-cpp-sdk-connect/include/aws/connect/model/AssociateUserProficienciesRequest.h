/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connect/model/UserProficiency.h>
#include <utility>

namespace Aws
{
namespace Connect
{
namespace Model
{

  /**
   */
  class AssociateUserProficienciesRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API AssociateUserProficienciesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateUserProficiencies"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instance ID
     * in the Amazon Resource Name (ARN of the instance).</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline AssociateUserProficienciesRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline AssociateUserProficienciesRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline AssociateUserProficienciesRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
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
    inline AssociateUserProficienciesRequest& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}
    inline AssociateUserProficienciesRequest& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}
    inline AssociateUserProficienciesRequest& WithUserId(const char* value) { SetUserId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The proficiencies to associate with the user.</p>
     */
    inline const Aws::Vector<UserProficiency>& GetUserProficiencies() const{ return m_userProficiencies; }
    inline bool UserProficienciesHasBeenSet() const { return m_userProficienciesHasBeenSet; }
    inline void SetUserProficiencies(const Aws::Vector<UserProficiency>& value) { m_userProficienciesHasBeenSet = true; m_userProficiencies = value; }
    inline void SetUserProficiencies(Aws::Vector<UserProficiency>&& value) { m_userProficienciesHasBeenSet = true; m_userProficiencies = std::move(value); }
    inline AssociateUserProficienciesRequest& WithUserProficiencies(const Aws::Vector<UserProficiency>& value) { SetUserProficiencies(value); return *this;}
    inline AssociateUserProficienciesRequest& WithUserProficiencies(Aws::Vector<UserProficiency>&& value) { SetUserProficiencies(std::move(value)); return *this;}
    inline AssociateUserProficienciesRequest& AddUserProficiencies(const UserProficiency& value) { m_userProficienciesHasBeenSet = true; m_userProficiencies.push_back(value); return *this; }
    inline AssociateUserProficienciesRequest& AddUserProficiencies(UserProficiency&& value) { m_userProficienciesHasBeenSet = true; m_userProficiencies.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;

    Aws::Vector<UserProficiency> m_userProficiencies;
    bool m_userProficienciesHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
