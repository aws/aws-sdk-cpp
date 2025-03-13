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
  class UpdateUserProficienciesRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API UpdateUserProficienciesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateUserProficiencies"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p> The identifier of the Amazon Connect instance. You can find the instance ID
     * in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    UpdateUserProficienciesRequest& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the user account.</p>
     */
    inline const Aws::String& GetUserId() const { return m_userId; }
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }
    template<typename UserIdT = Aws::String>
    void SetUserId(UserIdT&& value) { m_userIdHasBeenSet = true; m_userId = std::forward<UserIdT>(value); }
    template<typename UserIdT = Aws::String>
    UpdateUserProficienciesRequest& WithUserId(UserIdT&& value) { SetUserId(std::forward<UserIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The proficiencies to be updated for the user. Proficiencies must first be
     * associated to the user. You can do this using AssociateUserProficiencies
     * API.</p>
     */
    inline const Aws::Vector<UserProficiency>& GetUserProficiencies() const { return m_userProficiencies; }
    inline bool UserProficienciesHasBeenSet() const { return m_userProficienciesHasBeenSet; }
    template<typename UserProficienciesT = Aws::Vector<UserProficiency>>
    void SetUserProficiencies(UserProficienciesT&& value) { m_userProficienciesHasBeenSet = true; m_userProficiencies = std::forward<UserProficienciesT>(value); }
    template<typename UserProficienciesT = Aws::Vector<UserProficiency>>
    UpdateUserProficienciesRequest& WithUserProficiencies(UserProficienciesT&& value) { SetUserProficiencies(std::forward<UserProficienciesT>(value)); return *this;}
    template<typename UserProficienciesT = UserProficiency>
    UpdateUserProficienciesRequest& AddUserProficiencies(UserProficienciesT&& value) { m_userProficienciesHasBeenSet = true; m_userProficiencies.emplace_back(std::forward<UserProficienciesT>(value)); return *this; }
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
