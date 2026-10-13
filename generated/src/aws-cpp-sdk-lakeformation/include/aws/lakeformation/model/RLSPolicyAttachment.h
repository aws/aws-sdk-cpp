/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/lakeformation/model/Condition.h>
#include <aws/lakeformation/model/DataLakePrincipal.h>
#include <aws/lakeformation/model/Resource.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace LakeFormation {
namespace Model {

/**
 * <p>A structure that describes the attachment of a row-level security policy to a
 * resource for a principal.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/RLSPolicyAttachment">AWS
 * API Reference</a></p>
 */
class RLSPolicyAttachment {
 public:
  AWS_LAKEFORMATION_API RLSPolicyAttachment() = default;
  AWS_LAKEFORMATION_API RLSPolicyAttachment(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAKEFORMATION_API RLSPolicyAttachment& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAKEFORMATION_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The identifier for the Data Catalog that contains the attachment. By default,
   * the account ID.</p>
   */
  inline const Aws::String& GetCatalogId() const { return m_catalogId; }
  inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }
  template <typename CatalogIdT = Aws::String>
  void SetCatalogId(CatalogIdT&& value) {
    m_catalogIdHasBeenSet = true;
    m_catalogId = std::forward<CatalogIdT>(value);
  }
  template <typename CatalogIdT = Aws::String>
  RLSPolicyAttachment& WithCatalogId(CatalogIdT&& value) {
    SetCatalogId(std::forward<CatalogIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the attached row-level security policy.</p>
   */
  inline const Aws::String& GetPolicyName() const { return m_policyName; }
  inline bool PolicyNameHasBeenSet() const { return m_policyNameHasBeenSet; }
  template <typename PolicyNameT = Aws::String>
  void SetPolicyName(PolicyNameT&& value) {
    m_policyNameHasBeenSet = true;
    m_policyName = std::forward<PolicyNameT>(value);
  }
  template <typename PolicyNameT = Aws::String>
  RLSPolicyAttachment& WithPolicyName(PolicyNameT&& value) {
    SetPolicyName(std::forward<PolicyNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The principal to which the attached policy applies.</p>
   */
  inline const DataLakePrincipal& GetPrincipal() const { return m_principal; }
  inline bool PrincipalHasBeenSet() const { return m_principalHasBeenSet; }
  template <typename PrincipalT = DataLakePrincipal>
  void SetPrincipal(PrincipalT&& value) {
    m_principalHasBeenSet = true;
    m_principal = std::forward<PrincipalT>(value);
  }
  template <typename PrincipalT = DataLakePrincipal>
  RLSPolicyAttachment& WithPrincipal(PrincipalT&& value) {
    SetPrincipal(std::forward<PrincipalT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The resource to which the policy is attached.</p>
   */
  inline const Resource& GetResource() const { return m_resource; }
  inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }
  template <typename ResourceT = Resource>
  void SetResource(ResourceT&& value) {
    m_resourceHasBeenSet = true;
    m_resource = std::forward<ResourceT>(value);
  }
  template <typename ResourceT = Resource>
  RLSPolicyAttachment& WithResource(ResourceT&& value) {
    SetResource(std::forward<ResourceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A Lake Formation condition, which applies to the row-level security policy
   * attachment and contains an expression.</p>
   */
  inline const Condition& GetCondition() const { return m_condition; }
  inline bool ConditionHasBeenSet() const { return m_conditionHasBeenSet; }
  template <typename ConditionT = Condition>
  void SetCondition(ConditionT&& value) {
    m_conditionHasBeenSet = true;
    m_condition = std::forward<ConditionT>(value);
  }
  template <typename ConditionT = Condition>
  RLSPolicyAttachment& WithCondition(ConditionT&& value) {
    SetCondition(std::forward<ConditionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether this attachment is the default row-level security policy
   * for the resource.</p>
   */
  inline bool GetDefaultRLSPolicy() const { return m_defaultRLSPolicy; }
  inline bool DefaultRLSPolicyHasBeenSet() const { return m_defaultRLSPolicyHasBeenSet; }
  inline void SetDefaultRLSPolicy(bool value) {
    m_defaultRLSPolicyHasBeenSet = true;
    m_defaultRLSPolicy = value;
  }
  inline RLSPolicyAttachment& WithDefaultRLSPolicy(bool value) {
    SetDefaultRLSPolicy(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_catalogId;

  Aws::String m_policyName;

  DataLakePrincipal m_principal;

  Resource m_resource;

  Condition m_condition;

  bool m_defaultRLSPolicy{false};
  bool m_catalogIdHasBeenSet = false;
  bool m_policyNameHasBeenSet = false;
  bool m_principalHasBeenSet = false;
  bool m_resourceHasBeenSet = false;
  bool m_conditionHasBeenSet = false;
  bool m_defaultRLSPolicyHasBeenSet = false;
};

}  // namespace Model
}  // namespace LakeFormation
}  // namespace Aws
