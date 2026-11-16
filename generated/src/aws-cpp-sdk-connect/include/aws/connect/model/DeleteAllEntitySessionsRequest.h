/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/ConnectRequest.h>
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/SessionEntityType.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Connect {
namespace Model {

/**
 */
class DeleteAllEntitySessionsRequest : public ConnectRequest {
 public:
  AWS_CONNECT_API DeleteAllEntitySessionsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DeleteAllEntitySessions"; }

  AWS_CONNECT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The identifier of the Connect Customer instance. You can <a
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
  DeleteAllEntitySessionsRequest& WithInstanceId(InstanceIdT&& value) {
    SetInstanceId(std::forward<InstanceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the entity whose sessions you want to delete. For
   * <code>USER</code>, use the user ID or the user ARN.</p>
   */
  inline const Aws::String& GetEntityId() const { return m_entityId; }
  inline bool EntityIdHasBeenSet() const { return m_entityIdHasBeenSet; }
  template <typename EntityIdT = Aws::String>
  void SetEntityId(EntityIdT&& value) {
    m_entityIdHasBeenSet = true;
    m_entityId = std::forward<EntityIdT>(value);
  }
  template <typename EntityIdT = Aws::String>
  DeleteAllEntitySessionsRequest& WithEntityId(EntityIdT&& value) {
    SetEntityId(std::forward<EntityIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of entity whose sessions you want to delete.</p>  <p>The only
   * valid value is <code>USER</code>, which signs out a user in your Connect
   * Customer instance.</p>
   */
  inline SessionEntityType GetEntityType() const { return m_entityType; }
  inline bool EntityTypeHasBeenSet() const { return m_entityTypeHasBeenSet; }
  inline void SetEntityType(SessionEntityType value) {
    m_entityTypeHasBeenSet = true;
    m_entityType = value;
  }
  inline DeleteAllEntitySessionsRequest& WithEntityType(SessionEntityType value) {
    SetEntityType(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_instanceId;

  Aws::String m_entityId;

  SessionEntityType m_entityType{SessionEntityType::NOT_SET};
  bool m_instanceIdHasBeenSet = false;
  bool m_entityIdHasBeenSet = false;
  bool m_entityTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
