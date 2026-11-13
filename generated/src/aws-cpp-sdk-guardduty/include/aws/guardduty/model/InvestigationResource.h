/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/InvestigationResourceData.h>
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
 * <p>Contains information about an Amazon Web Services resource that is relevant
 * to an investigation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/InvestigationResource">AWS
 * API Reference</a></p>
 */
class InvestigationResource {
 public:
  AWS_GUARDDUTY_API InvestigationResource() = default;
  AWS_GUARDDUTY_API InvestigationResource(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API InvestigationResource& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the resource. This is the Amazon Resource Name (ARN)
   * of the resource when it's available. Otherwise, it's the name or ID of the
   * resource.</p>
   */
  inline const Aws::String& GetUid() const { return m_uid; }
  inline bool UidHasBeenSet() const { return m_uidHasBeenSet; }
  template <typename UidT = Aws::String>
  void SetUid(UidT&& value) {
    m_uidHasBeenSet = true;
    m_uid = std::forward<UidT>(value);
  }
  template <typename UidT = Aws::String>
  InvestigationResource& WithUid(UidT&& value) {
    SetUid(std::forward<UidT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the resource.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  InvestigationResource& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
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
  inline InvestigationResourceType GetResourceType() const { return m_resourceType; }
  inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
  inline void SetResourceType(InvestigationResourceType value) {
    m_resourceTypeHasBeenSet = true;
    m_resourceType = value;
  }
  inline InvestigationResource& WithResourceType(InvestigationResourceType value) {
    SetResourceType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details that are specific to the type of the resource.</p>
   */
  inline const InvestigationResourceData& GetData() const { return m_data; }
  inline bool DataHasBeenSet() const { return m_dataHasBeenSet; }
  template <typename DataT = InvestigationResourceData>
  void SetData(DataT&& value) {
    m_dataHasBeenSet = true;
    m_data = std::forward<DataT>(value);
  }
  template <typename DataT = InvestigationResourceData>
  InvestigationResource& WithData(DataT&& value) {
    SetData(std::forward<DataT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_uid;

  Aws::String m_name;

  InvestigationResourceType m_resourceType{InvestigationResourceType::NOT_SET};

  InvestigationResourceData m_data;
  bool m_uidHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_resourceTypeHasBeenSet = false;
  bool m_dataHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
