/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectRequest.h>
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
  class AssociateTrafficDistributionGroupUserRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API AssociateTrafficDistributionGroupUserRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateTrafficDistributionGroupUser"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier of the traffic distribution group. This can be the ID or the
     * ARN of the traffic distribution group.</p>
     */
    inline const Aws::String& GetTrafficDistributionGroupId() const { return m_trafficDistributionGroupId; }
    inline bool TrafficDistributionGroupIdHasBeenSet() const { return m_trafficDistributionGroupIdHasBeenSet; }
    template<typename TrafficDistributionGroupIdT = Aws::String>
    void SetTrafficDistributionGroupId(TrafficDistributionGroupIdT&& value) { m_trafficDistributionGroupIdHasBeenSet = true; m_trafficDistributionGroupId = std::forward<TrafficDistributionGroupIdT>(value); }
    template<typename TrafficDistributionGroupIdT = Aws::String>
    AssociateTrafficDistributionGroupUserRequest& WithTrafficDistributionGroupId(TrafficDistributionGroupIdT&& value) { SetTrafficDistributionGroupId(std::forward<TrafficDistributionGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the user account. This can be the ID or the ARN of the
     * user. </p>
     */
    inline const Aws::String& GetUserId() const { return m_userId; }
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }
    template<typename UserIdT = Aws::String>
    void SetUserId(UserIdT&& value) { m_userIdHasBeenSet = true; m_userId = std::forward<UserIdT>(value); }
    template<typename UserIdT = Aws::String>
    AssociateTrafficDistributionGroupUserRequest& WithUserId(UserIdT&& value) { SetUserId(std::forward<UserIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    AssociateTrafficDistributionGroupUserRequest& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_trafficDistributionGroupId;
    bool m_trafficDistributionGroupIdHasBeenSet = false;

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
