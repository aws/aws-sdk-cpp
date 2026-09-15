/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/directconnect/model/ResiliencyGroupAssociationState.h>

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
 * <p>Information about an association between a connection and a resiliency
 * group.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/ResiliencyGroupAssociation">AWS
 * API Reference</a></p>
 */
class ResiliencyGroupAssociation {
 public:
  AWS_DIRECTCONNECT_API ResiliencyGroupAssociation() = default;
  AWS_DIRECTCONNECT_API ResiliencyGroupAssociation(Aws::Utils::Json::JsonView jsonValue);
  AWS_DIRECTCONNECT_API ResiliencyGroupAssociation& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  ResiliencyGroupAssociation& WithResiliencyGroupId(ResiliencyGroupIdT&& value) {
    SetResiliencyGroupId(std::forward<ResiliencyGroupIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the associated connection.</p>
   */
  inline const Aws::String& GetConnectionArn() const { return m_connectionArn; }
  inline bool ConnectionArnHasBeenSet() const { return m_connectionArnHasBeenSet; }
  template <typename ConnectionArnT = Aws::String>
  void SetConnectionArn(ConnectionArnT&& value) {
    m_connectionArnHasBeenSet = true;
    m_connectionArn = std::forward<ConnectionArnT>(value);
  }
  template <typename ConnectionArnT = Aws::String>
  ResiliencyGroupAssociation& WithConnectionArn(ConnectionArnT&& value) {
    SetConnectionArn(std::forward<ConnectionArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The state of the association. The valid values are <code>associating</code>,
   * <code>associated</code>, <code>disassociating</code>, and
   * <code>disassociated</code>.</p>
   */
  inline ResiliencyGroupAssociationState GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  inline void SetState(ResiliencyGroupAssociationState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline ResiliencyGroupAssociation& WithState(ResiliencyGroupAssociationState value) {
    SetState(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_resiliencyGroupId;

  Aws::String m_connectionArn;

  ResiliencyGroupAssociationState m_state{ResiliencyGroupAssociationState::NOT_SET};
  bool m_resiliencyGroupIdHasBeenSet = false;
  bool m_connectionArnHasBeenSet = false;
  bool m_stateHasBeenSet = false;
};

}  // namespace Model
}  // namespace DirectConnect
}  // namespace Aws
