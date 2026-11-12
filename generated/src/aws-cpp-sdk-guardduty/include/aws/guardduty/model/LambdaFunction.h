/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/GuardDuty_EXPORTS.h>

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
 * <p>Contains details about an Lambda function.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/LambdaFunction">AWS
 * API Reference</a></p>
 */
class LambdaFunction {
 public:
  AWS_GUARDDUTY_API LambdaFunction() = default;
  AWS_GUARDDUTY_API LambdaFunction(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API LambdaFunction& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the function.</p>
   */
  inline const Aws::String& GetFunctionName() const { return m_functionName; }
  inline bool FunctionNameHasBeenSet() const { return m_functionNameHasBeenSet; }
  template <typename FunctionNameT = Aws::String>
  void SetFunctionName(FunctionNameT&& value) {
    m_functionNameHasBeenSet = true;
    m_functionName = std::forward<FunctionNameT>(value);
  }
  template <typename FunctionNameT = Aws::String>
  LambdaFunction& WithFunctionName(FunctionNameT&& value) {
    SetFunctionName(std::forward<FunctionNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the function.</p>
   */
  inline const Aws::String& GetFunctionArn() const { return m_functionArn; }
  inline bool FunctionArnHasBeenSet() const { return m_functionArnHasBeenSet; }
  template <typename FunctionArnT = Aws::String>
  void SetFunctionArn(FunctionArnT&& value) {
    m_functionArnHasBeenSet = true;
    m_functionArn = std::forward<FunctionArnT>(value);
  }
  template <typename FunctionArnT = Aws::String>
  LambdaFunction& WithFunctionArn(FunctionArnT&& value) {
    SetFunctionArn(std::forward<FunctionArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version of the function.</p>
   */
  inline const Aws::String& GetFunctionVersion() const { return m_functionVersion; }
  inline bool FunctionVersionHasBeenSet() const { return m_functionVersionHasBeenSet; }
  template <typename FunctionVersionT = Aws::String>
  void SetFunctionVersion(FunctionVersionT&& value) {
    m_functionVersionHasBeenSet = true;
    m_functionVersion = std::forward<FunctionVersionT>(value);
  }
  template <typename FunctionVersionT = Aws::String>
  LambdaFunction& WithFunctionVersion(FunctionVersionT&& value) {
    SetFunctionVersion(std::forward<FunctionVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The execution role of the function.</p>
   */
  inline const Aws::String& GetRole() const { return m_role; }
  inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }
  template <typename RoleT = Aws::String>
  void SetRole(RoleT&& value) {
    m_roleHasBeenSet = true;
    m_role = std::forward<RoleT>(value);
  }
  template <typename RoleT = Aws::String>
  LambdaFunction& WithRole(RoleT&& value) {
    SetRole(std::forward<RoleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the function.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  LambdaFunction& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The revision ID of the function version.</p>
   */
  inline const Aws::String& GetRevisionId() const { return m_revisionId; }
  inline bool RevisionIdHasBeenSet() const { return m_revisionIdHasBeenSet; }
  template <typename RevisionIdT = Aws::String>
  void SetRevisionId(RevisionIdT&& value) {
    m_revisionIdHasBeenSet = true;
    m_revisionId = std::forward<RevisionIdT>(value);
  }
  template <typename RevisionIdT = Aws::String>
  LambdaFunction& WithRevisionId(RevisionIdT&& value) {
    SetRevisionId(std::forward<RevisionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp at which the function was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  LambdaFunction& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A summary of the VPC configuration of the function, as a single string.</p>
   */
  inline const Aws::String& GetVpcConfigurationSummary() const { return m_vpcConfigurationSummary; }
  inline bool VpcConfigurationSummaryHasBeenSet() const { return m_vpcConfigurationSummaryHasBeenSet; }
  template <typename VpcConfigurationSummaryT = Aws::String>
  void SetVpcConfigurationSummary(VpcConfigurationSummaryT&& value) {
    m_vpcConfigurationSummaryHasBeenSet = true;
    m_vpcConfigurationSummary = std::forward<VpcConfigurationSummaryT>(value);
  }
  template <typename VpcConfigurationSummaryT = Aws::String>
  LambdaFunction& WithVpcConfigurationSummary(VpcConfigurationSummaryT&& value) {
    SetVpcConfigurationSummary(std::forward<VpcConfigurationSummaryT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_functionName;

  Aws::String m_functionArn;

  Aws::String m_functionVersion;

  Aws::String m_role;

  Aws::String m_description;

  Aws::String m_revisionId;

  Aws::Utils::DateTime m_updatedAt{};

  Aws::String m_vpcConfigurationSummary;
  bool m_functionNameHasBeenSet = false;
  bool m_functionArnHasBeenSet = false;
  bool m_functionVersionHasBeenSet = false;
  bool m_roleHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_revisionIdHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_vpcConfigurationSummaryHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
