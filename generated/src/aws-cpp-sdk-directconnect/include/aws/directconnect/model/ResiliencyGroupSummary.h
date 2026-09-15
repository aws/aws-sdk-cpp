/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/directconnect/model/ResiliencyGroupState.h>
#include <aws/directconnect/model/ResiliencyGroupType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace DirectConnect {
namespace Model {

/**
 * <p>Summary information about a resiliency group.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/ResiliencyGroupSummary">AWS
 * API Reference</a></p>
 */
class ResiliencyGroupSummary {
 public:
  AWS_DIRECTCONNECT_API ResiliencyGroupSummary() = default;
  AWS_DIRECTCONNECT_API ResiliencyGroupSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_DIRECTCONNECT_API ResiliencyGroupSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DIRECTCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ID of the resiliency group.</p>
   */
  inline const Aws::String& GetResiliencyGroupId() const { return m_resiliencyGroupId; }
  inline bool ResiliencyGroupIdHasBeenSet() const { return m_resiliencyGroupIdHasBeenSet; }
  template <typename ResiliencyGroupIdT = Aws::String>
  void SetResiliencyGroupId(ResiliencyGroupIdT&& value) {
    m_resiliencyGroupIdHasBeenSet = true;
    m_resiliencyGroupId = std::forward<ResiliencyGroupIdT>(value);
  }
  template <typename ResiliencyGroupIdT = Aws::String>
  ResiliencyGroupSummary& WithResiliencyGroupId(ResiliencyGroupIdT&& value) {
    SetResiliencyGroupId(std::forward<ResiliencyGroupIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the resiliency group.</p>
   */
  inline const Aws::String& GetResiliencyGroupArn() const { return m_resiliencyGroupArn; }
  inline bool ResiliencyGroupArnHasBeenSet() const { return m_resiliencyGroupArnHasBeenSet; }
  template <typename ResiliencyGroupArnT = Aws::String>
  void SetResiliencyGroupArn(ResiliencyGroupArnT&& value) {
    m_resiliencyGroupArnHasBeenSet = true;
    m_resiliencyGroupArn = std::forward<ResiliencyGroupArnT>(value);
  }
  template <typename ResiliencyGroupArnT = Aws::String>
  ResiliencyGroupSummary& WithResiliencyGroupArn(ResiliencyGroupArnT&& value) {
    SetResiliencyGroupArn(std::forward<ResiliencyGroupArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the resiliency group.</p>
   */
  inline const Aws::String& GetResiliencyGroupName() const { return m_resiliencyGroupName; }
  inline bool ResiliencyGroupNameHasBeenSet() const { return m_resiliencyGroupNameHasBeenSet; }
  template <typename ResiliencyGroupNameT = Aws::String>
  void SetResiliencyGroupName(ResiliencyGroupNameT&& value) {
    m_resiliencyGroupNameHasBeenSet = true;
    m_resiliencyGroupName = std::forward<ResiliencyGroupNameT>(value);
  }
  template <typename ResiliencyGroupNameT = Aws::String>
  ResiliencyGroupSummary& WithResiliencyGroupName(ResiliencyGroupNameT&& value) {
    SetResiliencyGroupName(std::forward<ResiliencyGroupNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the resiliency group. The valid value is
   * <code>Managed</code>.</p>
   */
  inline ResiliencyGroupType GetResiliencyGroupType() const { return m_resiliencyGroupType; }
  inline bool ResiliencyGroupTypeHasBeenSet() const { return m_resiliencyGroupTypeHasBeenSet; }
  inline void SetResiliencyGroupType(ResiliencyGroupType value) {
    m_resiliencyGroupTypeHasBeenSet = true;
    m_resiliencyGroupType = value;
  }
  inline ResiliencyGroupSummary& WithResiliencyGroupType(ResiliencyGroupType value) {
    SetResiliencyGroupType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the Amazon Web Services account that owns the resiliency group.</p>
   */
  inline const Aws::String& GetOwnerAccount() const { return m_ownerAccount; }
  inline bool OwnerAccountHasBeenSet() const { return m_ownerAccountHasBeenSet; }
  template <typename OwnerAccountT = Aws::String>
  void SetOwnerAccount(OwnerAccountT&& value) {
    m_ownerAccountHasBeenSet = true;
    m_ownerAccount = std::forward<OwnerAccountT>(value);
  }
  template <typename OwnerAccountT = Aws::String>
  ResiliencyGroupSummary& WithOwnerAccount(OwnerAccountT&& value) {
    SetOwnerAccount(std::forward<OwnerAccountT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The state of the resiliency group.</p>
   */
  inline ResiliencyGroupState GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  inline void SetState(ResiliencyGroupState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline ResiliencyGroupSummary& WithState(ResiliencyGroupState value) {
    SetState(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_resiliencyGroupId;

  Aws::String m_resiliencyGroupArn;

  Aws::String m_resiliencyGroupName;

  ResiliencyGroupType m_resiliencyGroupType{ResiliencyGroupType::NOT_SET};

  Aws::String m_ownerAccount;

  ResiliencyGroupState m_state{ResiliencyGroupState::NOT_SET};
  bool m_resiliencyGroupIdHasBeenSet = false;
  bool m_resiliencyGroupArnHasBeenSet = false;
  bool m_resiliencyGroupNameHasBeenSet = false;
  bool m_resiliencyGroupTypeHasBeenSet = false;
  bool m_ownerAccountHasBeenSet = false;
  bool m_stateHasBeenSet = false;
};

}  // namespace Model
}  // namespace DirectConnect
}  // namespace Aws
