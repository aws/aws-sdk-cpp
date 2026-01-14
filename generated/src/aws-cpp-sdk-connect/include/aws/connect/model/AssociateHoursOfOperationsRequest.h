/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/ConnectRequest.h>
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/ParentHoursOfOperationConfig.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Connect {
namespace Model {

/**
 */
class AssociateHoursOfOperationsRequest : public ConnectRequest {
 public:
  AWS_CONNECT_API AssociateHoursOfOperationsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "AssociateHoursOfOperations"; }

  AWS_CONNECT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The identifier of the Amazon Connect instance. You can <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
   * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
   */
  inline const Aws::String& GetInstanceId() const { return m_instanceId; }
  inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
  template <typename InstanceIdT = Aws::String>
  void SetInstanceId(InstanceIdT&& value) {
    m_instanceIdHasBeenSet = true;
    m_instanceId = std::forward<InstanceIdT>(value);
  }
  template <typename InstanceIdT = Aws::String>
  AssociateHoursOfOperationsRequest& WithInstanceId(InstanceIdT&& value) {
    SetInstanceId(std::forward<InstanceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the child hours of operation.</p>
   */
  inline const Aws::String& GetHoursOfOperationId() const { return m_hoursOfOperationId; }
  inline bool HoursOfOperationIdHasBeenSet() const { return m_hoursOfOperationIdHasBeenSet; }
  template <typename HoursOfOperationIdT = Aws::String>
  void SetHoursOfOperationId(HoursOfOperationIdT&& value) {
    m_hoursOfOperationIdHasBeenSet = true;
    m_hoursOfOperationId = std::forward<HoursOfOperationIdT>(value);
  }
  template <typename HoursOfOperationIdT = Aws::String>
  AssociateHoursOfOperationsRequest& WithHoursOfOperationId(HoursOfOperationIdT&& value) {
    SetHoursOfOperationId(std::forward<HoursOfOperationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Names (ARNs) of the parent hours of operation resources
   * to associate with the child hours of operation resource.</p>
   */
  inline const Aws::Vector<ParentHoursOfOperationConfig>& GetParentHoursOfOperationConfigs() const {
    return m_parentHoursOfOperationConfigs;
  }
  inline bool ParentHoursOfOperationConfigsHasBeenSet() const { return m_parentHoursOfOperationConfigsHasBeenSet; }
  template <typename ParentHoursOfOperationConfigsT = Aws::Vector<ParentHoursOfOperationConfig>>
  void SetParentHoursOfOperationConfigs(ParentHoursOfOperationConfigsT&& value) {
    m_parentHoursOfOperationConfigsHasBeenSet = true;
    m_parentHoursOfOperationConfigs = std::forward<ParentHoursOfOperationConfigsT>(value);
  }
  template <typename ParentHoursOfOperationConfigsT = Aws::Vector<ParentHoursOfOperationConfig>>
  AssociateHoursOfOperationsRequest& WithParentHoursOfOperationConfigs(ParentHoursOfOperationConfigsT&& value) {
    SetParentHoursOfOperationConfigs(std::forward<ParentHoursOfOperationConfigsT>(value));
    return *this;
  }
  template <typename ParentHoursOfOperationConfigsT = ParentHoursOfOperationConfig>
  AssociateHoursOfOperationsRequest& AddParentHoursOfOperationConfigs(ParentHoursOfOperationConfigsT&& value) {
    m_parentHoursOfOperationConfigsHasBeenSet = true;
    m_parentHoursOfOperationConfigs.emplace_back(std::forward<ParentHoursOfOperationConfigsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_instanceId;

  Aws::String m_hoursOfOperationId;

  Aws::Vector<ParentHoursOfOperationConfig> m_parentHoursOfOperationConfigs;
  bool m_instanceIdHasBeenSet = false;
  bool m_hoursOfOperationIdHasBeenSet = false;
  bool m_parentHoursOfOperationConfigsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
