/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lakeformation/LakeFormationRequest.h>
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/lakeformation/model/Condition.h>
#include <aws/lakeformation/model/DataLakePrincipal.h>
#include <aws/lakeformation/model/Resource.h>

#include <utility>

namespace Aws {
namespace LakeFormation {
namespace Model {

/**
 */
class AttachRLSPolicyRequest : public LakeFormationRequest {
 public:
  AWS_LAKEFORMATION_API AttachRLSPolicyRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "AttachRLSPolicy"; }

  AWS_LAKEFORMATION_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The name of the row-level security policy to attach.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  AttachRLSPolicyRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The resource to which the row-level security policy is attached.</p>
   */
  inline const Resource& GetResource() const { return m_resource; }
  inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }
  template <typename ResourceT = Resource>
  void SetResource(ResourceT&& value) {
    m_resourceHasBeenSet = true;
    m_resource = std::forward<ResourceT>(value);
  }
  template <typename ResourceT = Resource>
  AttachRLSPolicyRequest& WithResource(ResourceT&& value) {
    SetResource(std::forward<ResourceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The principal to which the row-level security policy applies.</p>
   */
  inline const DataLakePrincipal& GetPrincipal() const { return m_principal; }
  inline bool PrincipalHasBeenSet() const { return m_principalHasBeenSet; }
  template <typename PrincipalT = DataLakePrincipal>
  void SetPrincipal(PrincipalT&& value) {
    m_principalHasBeenSet = true;
    m_principal = std::forward<PrincipalT>(value);
  }
  template <typename PrincipalT = DataLakePrincipal>
  AttachRLSPolicyRequest& WithPrincipal(PrincipalT&& value) {
    SetPrincipal(std::forward<PrincipalT>(value));
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
  AttachRLSPolicyRequest& WithCondition(ConditionT&& value) {
    SetCondition(std::forward<ConditionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether this policy becomes the default row-level security policy
   * for the resource. The default policy applies to all principals by default.</p>
   */
  inline bool GetSetDefault() const { return m_setDefault; }
  inline bool SetDefaultHasBeenSet() const { return m_setDefaultHasBeenSet; }
  inline void SetSetDefault(bool value) {
    m_setDefaultHasBeenSet = true;
    m_setDefault = value;
  }
  inline AttachRLSPolicyRequest& WithSetDefault(bool value) {
    SetSetDefault(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  Resource m_resource;

  DataLakePrincipal m_principal;

  Condition m_condition;

  bool m_setDefault{false};
  bool m_nameHasBeenSet = false;
  bool m_resourceHasBeenSet = false;
  bool m_principalHasBeenSet = false;
  bool m_conditionHasBeenSet = false;
  bool m_setDefaultHasBeenSet = false;
};

}  // namespace Model
}  // namespace LakeFormation
}  // namespace Aws
