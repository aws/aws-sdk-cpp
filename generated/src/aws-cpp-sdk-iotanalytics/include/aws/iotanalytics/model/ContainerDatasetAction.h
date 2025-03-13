/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotanalytics/model/ResourceConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotanalytics/model/Variable.h>
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
namespace IoTAnalytics
{
namespace Model
{

  /**
   * <p>Information required to run the <code>containerAction</code> to produce
   * dataset contents.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/ContainerDatasetAction">AWS
   * API Reference</a></p>
   */
  class ContainerDatasetAction
  {
  public:
    AWS_IOTANALYTICS_API ContainerDatasetAction() = default;
    AWS_IOTANALYTICS_API ContainerDatasetAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API ContainerDatasetAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the Docker container stored in your account. The Docker container
     * contains an application and required support libraries and is used to generate
     * dataset contents.</p>
     */
    inline const Aws::String& GetImage() const { return m_image; }
    inline bool ImageHasBeenSet() const { return m_imageHasBeenSet; }
    template<typename ImageT = Aws::String>
    void SetImage(ImageT&& value) { m_imageHasBeenSet = true; m_image = std::forward<ImageT>(value); }
    template<typename ImageT = Aws::String>
    ContainerDatasetAction& WithImage(ImageT&& value) { SetImage(std::forward<ImageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the role that gives permission to the system to access required
     * resources to run the <code>containerAction</code>. This includes, at minimum,
     * permission to retrieve the dataset contents that are the input to the
     * containerized application.</p>
     */
    inline const Aws::String& GetExecutionRoleArn() const { return m_executionRoleArn; }
    inline bool ExecutionRoleArnHasBeenSet() const { return m_executionRoleArnHasBeenSet; }
    template<typename ExecutionRoleArnT = Aws::String>
    void SetExecutionRoleArn(ExecutionRoleArnT&& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = std::forward<ExecutionRoleArnT>(value); }
    template<typename ExecutionRoleArnT = Aws::String>
    ContainerDatasetAction& WithExecutionRoleArn(ExecutionRoleArnT&& value) { SetExecutionRoleArn(std::forward<ExecutionRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration of the resource that executes the
     * <code>containerAction</code>.</p>
     */
    inline const ResourceConfiguration& GetResourceConfiguration() const { return m_resourceConfiguration; }
    inline bool ResourceConfigurationHasBeenSet() const { return m_resourceConfigurationHasBeenSet; }
    template<typename ResourceConfigurationT = ResourceConfiguration>
    void SetResourceConfiguration(ResourceConfigurationT&& value) { m_resourceConfigurationHasBeenSet = true; m_resourceConfiguration = std::forward<ResourceConfigurationT>(value); }
    template<typename ResourceConfigurationT = ResourceConfiguration>
    ContainerDatasetAction& WithResourceConfiguration(ResourceConfigurationT&& value) { SetResourceConfiguration(std::forward<ResourceConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The values of variables used in the context of the execution of the
     * containerized application (basically, parameters passed to the application).
     * Each variable must have a name and a value given by one of
     * <code>stringValue</code>, <code>datasetContentVersionValue</code>, or
     * <code>outputFileUriValue</code>.</p>
     */
    inline const Aws::Vector<Variable>& GetVariables() const { return m_variables; }
    inline bool VariablesHasBeenSet() const { return m_variablesHasBeenSet; }
    template<typename VariablesT = Aws::Vector<Variable>>
    void SetVariables(VariablesT&& value) { m_variablesHasBeenSet = true; m_variables = std::forward<VariablesT>(value); }
    template<typename VariablesT = Aws::Vector<Variable>>
    ContainerDatasetAction& WithVariables(VariablesT&& value) { SetVariables(std::forward<VariablesT>(value)); return *this;}
    template<typename VariablesT = Variable>
    ContainerDatasetAction& AddVariables(VariablesT&& value) { m_variablesHasBeenSet = true; m_variables.emplace_back(std::forward<VariablesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_image;
    bool m_imageHasBeenSet = false;

    Aws::String m_executionRoleArn;
    bool m_executionRoleArnHasBeenSet = false;

    ResourceConfiguration m_resourceConfiguration;
    bool m_resourceConfigurationHasBeenSet = false;

    Aws::Vector<Variable> m_variables;
    bool m_variablesHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
