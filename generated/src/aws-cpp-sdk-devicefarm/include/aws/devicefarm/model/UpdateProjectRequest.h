/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/devicefarm/DeviceFarmRequest.h>
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/devicefarm/model/EnvironmentVariable.h>
#include <aws/devicefarm/model/VpcConfig.h>

#include <utility>

namespace Aws {
namespace DeviceFarm {
namespace Model {

/**
 * <p>Represents a request to the update project operation.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/UpdateProjectRequest">AWS
 * API Reference</a></p>
 */
class UpdateProjectRequest : public DeviceFarmRequest {
 public:
  AWS_DEVICEFARM_API UpdateProjectRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateProject"; }

  AWS_DEVICEFARM_API Aws::String SerializePayload() const override;

  AWS_DEVICEFARM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the project whose name to update.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  UpdateProjectRequest& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A string that represents the new name of the project that you are
   * updating.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  UpdateProjectRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of minutes a test run in the project executes before it times
   * out.</p>
   */
  inline int GetDefaultJobTimeoutMinutes() const { return m_defaultJobTimeoutMinutes; }
  inline bool DefaultJobTimeoutMinutesHasBeenSet() const { return m_defaultJobTimeoutMinutesHasBeenSet; }
  inline void SetDefaultJobTimeoutMinutes(int value) {
    m_defaultJobTimeoutMinutesHasBeenSet = true;
    m_defaultJobTimeoutMinutes = value;
  }
  inline UpdateProjectRequest& WithDefaultJobTimeoutMinutes(int value) {
    SetDefaultJobTimeoutMinutes(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The VPC security groups and subnets that are attached to a project.</p>
   */
  inline const VpcConfig& GetVpcConfig() const { return m_vpcConfig; }
  inline bool VpcConfigHasBeenSet() const { return m_vpcConfigHasBeenSet; }
  template <typename VpcConfigT = VpcConfig>
  void SetVpcConfig(VpcConfigT&& value) {
    m_vpcConfigHasBeenSet = true;
    m_vpcConfig = std::forward<VpcConfigT>(value);
  }
  template <typename VpcConfigT = VpcConfig>
  UpdateProjectRequest& WithVpcConfig(VpcConfigT&& value) {
    SetVpcConfig(std::forward<VpcConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> A set of environment variables which are used by default for all runs in the
   * project. These environment variables are applied to the test run during the
   * execution of a test spec file. </p> <p> For more information about using test
   * spec files, please see <a
   * href="https://docs.aws.amazon.com/devicefarm/latest/developerguide/custom-test-environments.html">Custom
   * test environments </a> in <i>AWS Device Farm.</i> </p>
   */
  inline const Aws::Vector<EnvironmentVariable>& GetEnvironmentVariables() const { return m_environmentVariables; }
  inline bool EnvironmentVariablesHasBeenSet() const { return m_environmentVariablesHasBeenSet; }
  template <typename EnvironmentVariablesT = Aws::Vector<EnvironmentVariable>>
  void SetEnvironmentVariables(EnvironmentVariablesT&& value) {
    m_environmentVariablesHasBeenSet = true;
    m_environmentVariables = std::forward<EnvironmentVariablesT>(value);
  }
  template <typename EnvironmentVariablesT = Aws::Vector<EnvironmentVariable>>
  UpdateProjectRequest& WithEnvironmentVariables(EnvironmentVariablesT&& value) {
    SetEnvironmentVariables(std::forward<EnvironmentVariablesT>(value));
    return *this;
  }
  template <typename EnvironmentVariablesT = EnvironmentVariable>
  UpdateProjectRequest& AddEnvironmentVariables(EnvironmentVariablesT&& value) {
    m_environmentVariablesHasBeenSet = true;
    m_environmentVariables.emplace_back(std::forward<EnvironmentVariablesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An IAM role to be assumed by the test host for all runs in the project.</p>
   */
  inline const Aws::String& GetExecutionRoleArn() const { return m_executionRoleArn; }
  inline bool ExecutionRoleArnHasBeenSet() const { return m_executionRoleArnHasBeenSet; }
  template <typename ExecutionRoleArnT = Aws::String>
  void SetExecutionRoleArn(ExecutionRoleArnT&& value) {
    m_executionRoleArnHasBeenSet = true;
    m_executionRoleArn = std::forward<ExecutionRoleArnT>(value);
  }
  template <typename ExecutionRoleArnT = Aws::String>
  UpdateProjectRequest& WithExecutionRoleArn(ExecutionRoleArnT&& value) {
    SetExecutionRoleArn(std::forward<ExecutionRoleArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_arn;
  bool m_arnHasBeenSet = false;

  Aws::String m_name;
  bool m_nameHasBeenSet = false;

  int m_defaultJobTimeoutMinutes{0};
  bool m_defaultJobTimeoutMinutesHasBeenSet = false;

  VpcConfig m_vpcConfig;
  bool m_vpcConfigHasBeenSet = false;

  Aws::Vector<EnvironmentVariable> m_environmentVariables;
  bool m_environmentVariablesHasBeenSet = false;

  Aws::String m_executionRoleArn;
  bool m_executionRoleArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace DeviceFarm
}  // namespace Aws
