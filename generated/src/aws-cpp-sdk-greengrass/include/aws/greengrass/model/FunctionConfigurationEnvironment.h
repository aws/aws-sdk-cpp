/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrass/Greengrass_EXPORTS.h>
#include <aws/greengrass/model/FunctionExecutionConfig.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/greengrass/model/ResourceAccessPolicy.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Greengrass
{
namespace Model
{

  /**
   * The environment configuration of the function.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/FunctionConfigurationEnvironment">AWS
   * API Reference</a></p>
   */
  class FunctionConfigurationEnvironment
  {
  public:
    AWS_GREENGRASS_API FunctionConfigurationEnvironment() = default;
    AWS_GREENGRASS_API FunctionConfigurationEnvironment(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASS_API FunctionConfigurationEnvironment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * If true, the Lambda function is allowed to access the host's /sys folder. Use
     * this when the Lambda function needs to read device information from /sys. This
     * setting applies only when you run the Lambda function in a Greengrass container.
     */
    inline bool GetAccessSysfs() const { return m_accessSysfs; }
    inline bool AccessSysfsHasBeenSet() const { return m_accessSysfsHasBeenSet; }
    inline void SetAccessSysfs(bool value) { m_accessSysfsHasBeenSet = true; m_accessSysfs = value; }
    inline FunctionConfigurationEnvironment& WithAccessSysfs(bool value) { SetAccessSysfs(value); return *this;}
    ///@}

    ///@{
    /**
     * Configuration related to executing the Lambda function
     */
    inline const FunctionExecutionConfig& GetExecution() const { return m_execution; }
    inline bool ExecutionHasBeenSet() const { return m_executionHasBeenSet; }
    template<typename ExecutionT = FunctionExecutionConfig>
    void SetExecution(ExecutionT&& value) { m_executionHasBeenSet = true; m_execution = std::forward<ExecutionT>(value); }
    template<typename ExecutionT = FunctionExecutionConfig>
    FunctionConfigurationEnvironment& WithExecution(ExecutionT&& value) { SetExecution(std::forward<ExecutionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * A list of the resources, with their permissions, to which the Lambda function
     * will be granted access. A Lambda function can have at most 10 resources.
     * ResourceAccessPolicies apply only when you run the Lambda function in a
     * Greengrass container.
     */
    inline const Aws::Vector<ResourceAccessPolicy>& GetResourceAccessPolicies() const { return m_resourceAccessPolicies; }
    inline bool ResourceAccessPoliciesHasBeenSet() const { return m_resourceAccessPoliciesHasBeenSet; }
    template<typename ResourceAccessPoliciesT = Aws::Vector<ResourceAccessPolicy>>
    void SetResourceAccessPolicies(ResourceAccessPoliciesT&& value) { m_resourceAccessPoliciesHasBeenSet = true; m_resourceAccessPolicies = std::forward<ResourceAccessPoliciesT>(value); }
    template<typename ResourceAccessPoliciesT = Aws::Vector<ResourceAccessPolicy>>
    FunctionConfigurationEnvironment& WithResourceAccessPolicies(ResourceAccessPoliciesT&& value) { SetResourceAccessPolicies(std::forward<ResourceAccessPoliciesT>(value)); return *this;}
    template<typename ResourceAccessPoliciesT = ResourceAccessPolicy>
    FunctionConfigurationEnvironment& AddResourceAccessPolicies(ResourceAccessPoliciesT&& value) { m_resourceAccessPoliciesHasBeenSet = true; m_resourceAccessPolicies.emplace_back(std::forward<ResourceAccessPoliciesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * Environment variables for the Lambda function's configuration.
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetVariables() const { return m_variables; }
    inline bool VariablesHasBeenSet() const { return m_variablesHasBeenSet; }
    template<typename VariablesT = Aws::Map<Aws::String, Aws::String>>
    void SetVariables(VariablesT&& value) { m_variablesHasBeenSet = true; m_variables = std::forward<VariablesT>(value); }
    template<typename VariablesT = Aws::Map<Aws::String, Aws::String>>
    FunctionConfigurationEnvironment& WithVariables(VariablesT&& value) { SetVariables(std::forward<VariablesT>(value)); return *this;}
    template<typename VariablesKeyT = Aws::String, typename VariablesValueT = Aws::String>
    FunctionConfigurationEnvironment& AddVariables(VariablesKeyT&& key, VariablesValueT&& value) {
      m_variablesHasBeenSet = true; m_variables.emplace(std::forward<VariablesKeyT>(key), std::forward<VariablesValueT>(value)); return *this;
    }
    ///@}
  private:

    bool m_accessSysfs{false};
    bool m_accessSysfsHasBeenSet = false;

    FunctionExecutionConfig m_execution;
    bool m_executionHasBeenSet = false;

    Aws::Vector<ResourceAccessPolicy> m_resourceAccessPolicies;
    bool m_resourceAccessPoliciesHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_variables;
    bool m_variablesHasBeenSet = false;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
