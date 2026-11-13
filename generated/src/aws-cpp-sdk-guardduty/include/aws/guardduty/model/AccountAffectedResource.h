/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/InvestigationResourceType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace GuardDuty {
namespace Model {

/**
 * <p>Contains the number of findings associated with a resource.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/AccountAffectedResource">AWS
 * API Reference</a></p>
 */
class AccountAffectedResource {
 public:
  AWS_GUARDDUTY_API AccountAffectedResource() = default;
  AWS_GUARDDUTY_API AccountAffectedResource(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API AccountAffectedResource& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The identifier of the resource.</p>
   */
  inline const Aws::String& GetIdentifier() const { return m_identifier; }
  inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
  template <typename IdentifierT = Aws::String>
  void SetIdentifier(IdentifierT&& value) {
    m_identifierHasBeenSet = true;
    m_identifier = std::forward<IdentifierT>(value);
  }
  template <typename IdentifierT = Aws::String>
  AccountAffectedResource& WithIdentifier(IdentifierT&& value) {
    SetIdentifier(std::forward<IdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the resource. Possible values are <code>EC2_INSTANCE</code>,
   * <code>EBS_VOLUME</code>, <code>S3_BUCKET</code>, <code>IAM_ROLE</code>,
   * <code>IAM_USER</code>, <code>IAM_ACCESS_KEY</code>,
   * <code>LAMBDA_FUNCTION</code>, <code>EKS_CLUSTER</code>,
   * <code>ECS_CLUSTER</code>, <code>KUBERNETES_WORKLOAD</code>,
   * <code>RDS_INSTANCE</code>, <code>RDS_DB_USER</code>, and
   * <code>EC2_SECURITY_GROUP</code>.</p>
   */
  inline InvestigationResourceType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(InvestigationResourceType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline AccountAffectedResource& WithType(InvestigationResourceType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of findings associated with the resource.</p>
   */
  inline int GetFindingCount() const { return m_findingCount; }
  inline bool FindingCountHasBeenSet() const { return m_findingCountHasBeenSet; }
  inline void SetFindingCount(int value) {
    m_findingCountHasBeenSet = true;
    m_findingCount = value;
  }
  inline AccountAffectedResource& WithFindingCount(int value) {
    SetFindingCount(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_identifier;

  InvestigationResourceType m_type{InvestigationResourceType::NOT_SET};

  int m_findingCount{0};
  bool m_identifierHasBeenSet = false;
  bool m_typeHasBeenSet = false;
  bool m_findingCountHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
