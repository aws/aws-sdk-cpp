/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connect/model/UserProficiencyDisassociate.h>
#include <utility>

namespace Aws
{
namespace Connect
{
namespace Model
{

  /**
   */
  class DisassociateUserProficienciesRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API DisassociateUserProficienciesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisassociateUserProficiencies"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instance ID
     * in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    DisassociateUserProficienciesRequest& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
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
    DisassociateUserProficienciesRequest& WithUserId(UserIdT&& value) { SetUserId(std::forward<UserIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The proficiencies to disassociate from the user.</p>
     */
    inline const Aws::Vector<UserProficiencyDisassociate>& GetUserProficiencies() const { return m_userProficiencies; }
    inline bool UserProficienciesHasBeenSet() const { return m_userProficienciesHasBeenSet; }
    template<typename UserProficienciesT = Aws::Vector<UserProficiencyDisassociate>>
    void SetUserProficiencies(UserProficienciesT&& value) { m_userProficienciesHasBeenSet = true; m_userProficiencies = std::forward<UserProficienciesT>(value); }
    template<typename UserProficienciesT = Aws::Vector<UserProficiencyDisassociate>>
    DisassociateUserProficienciesRequest& WithUserProficiencies(UserProficienciesT&& value) { SetUserProficiencies(std::forward<UserProficienciesT>(value)); return *this;}
    template<typename UserProficienciesT = UserProficiencyDisassociate>
    DisassociateUserProficienciesRequest& AddUserProficiencies(UserProficienciesT&& value) { m_userProficienciesHasBeenSet = true; m_userProficiencies.emplace_back(std::forward<UserProficienciesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;

    Aws::Vector<UserProficiencyDisassociate> m_userProficiencies;
    bool m_userProficienciesHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
