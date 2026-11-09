/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Connect {
namespace Model {

/**
 * <p>Contains information about a resource that could not be replicated across the
 * Regions of a Global Resiliency deployment, including the reason and any action
 * required to resolve it.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ReplicationFinding">AWS
 * API Reference</a></p>
 */
class ReplicationFinding {
 public:
  AWS_CONNECT_API ReplicationFinding() = default;
  AWS_CONNECT_API ReplicationFinding(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API ReplicationFinding& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the resource that the finding is for.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  ReplicationFinding& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the resource that the finding is for.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  ReplicationFinding& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services Region that the finding was detected in.</p>
   */
  inline const Aws::String& GetRegion() const { return m_region; }
  inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
  template <typename RegionT = Aws::String>
  void SetRegion(RegionT&& value) {
    m_regionHasBeenSet = true;
    m_region = std::forward<RegionT>(value);
  }
  template <typename RegionT = Aws::String>
  ReplicationFinding& WithRegion(RegionT&& value) {
    SetRegion(std::forward<RegionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of resource that the finding is for, such as <code>QUEUE</code> or
   * <code>ROUTING_PROFILE</code>.</p>
   */
  inline const Aws::String& GetResourceType() const { return m_resourceType; }
  inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
  template <typename ResourceTypeT = Aws::String>
  void SetResourceType(ResourceTypeT&& value) {
    m_resourceTypeHasBeenSet = true;
    m_resourceType = std::forward<ResourceTypeT>(value);
  }
  template <typename ResourceTypeT = Aws::String>
  ReplicationFinding& WithResourceType(ResourceTypeT&& value) {
    SetResourceType(std::forward<ResourceTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the resource that the finding is for.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  ReplicationFinding& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The replication operation that produced the finding, such as a create,
   * update, or delete of the resource.</p>
   */
  inline const Aws::String& GetOperation() const { return m_operation; }
  inline bool OperationHasBeenSet() const { return m_operationHasBeenSet; }
  template <typename OperationT = Aws::String>
  void SetOperation(OperationT&& value) {
    m_operationHasBeenSet = true;
    m_operation = std::forward<OperationT>(value);
  }
  template <typename OperationT = Aws::String>
  ReplicationFinding& WithOperation(OperationT&& value) {
    SetOperation(std::forward<OperationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A stable code that identifies the class of the finding. Use this code to look
   * up the recommended steps to resolve the finding.</p>
   */
  inline const Aws::String& GetReferenceCode() const { return m_referenceCode; }
  inline bool ReferenceCodeHasBeenSet() const { return m_referenceCodeHasBeenSet; }
  template <typename ReferenceCodeT = Aws::String>
  void SetReferenceCode(ReferenceCodeT&& value) {
    m_referenceCodeHasBeenSet = true;
    m_referenceCode = std::forward<ReferenceCodeT>(value);
  }
  template <typename ReferenceCodeT = Aws::String>
  ReplicationFinding& WithReferenceCode(ReferenceCodeT&& value) {
    SetReferenceCode(std::forward<ReferenceCodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A human-readable description of the finding and the action, if any, required
   * to resolve it.</p>
   */
  inline const Aws::String& GetMessage() const { return m_message; }
  inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
  template <typename MessageT = Aws::String>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Aws::String>
  ReplicationFinding& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_arn;

  Aws::String m_id;

  Aws::String m_region;

  Aws::String m_resourceType;

  Aws::String m_name;

  Aws::String m_operation;

  Aws::String m_referenceCode;

  Aws::String m_message;
  bool m_arnHasBeenSet = false;
  bool m_idHasBeenSet = false;
  bool m_regionHasBeenSet = false;
  bool m_resourceTypeHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_operationHasBeenSet = false;
  bool m_referenceCodeHasBeenSet = false;
  bool m_messageHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
