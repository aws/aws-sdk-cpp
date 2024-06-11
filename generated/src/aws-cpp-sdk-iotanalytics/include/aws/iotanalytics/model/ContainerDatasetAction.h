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
    AWS_IOTANALYTICS_API ContainerDatasetAction();
    AWS_IOTANALYTICS_API ContainerDatasetAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API ContainerDatasetAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the Docker container stored in your account. The Docker container
     * contains an application and required support libraries and is used to generate
     * dataset contents.</p>
     */
    inline const Aws::String& GetImage() const{ return m_image; }
    inline bool ImageHasBeenSet() const { return m_imageHasBeenSet; }
    inline void SetImage(const Aws::String& value) { m_imageHasBeenSet = true; m_image = value; }
    inline void SetImage(Aws::String&& value) { m_imageHasBeenSet = true; m_image = std::move(value); }
    inline void SetImage(const char* value) { m_imageHasBeenSet = true; m_image.assign(value); }
    inline ContainerDatasetAction& WithImage(const Aws::String& value) { SetImage(value); return *this;}
    inline ContainerDatasetAction& WithImage(Aws::String&& value) { SetImage(std::move(value)); return *this;}
    inline ContainerDatasetAction& WithImage(const char* value) { SetImage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the role that gives permission to the system to access required
     * resources to run the <code>containerAction</code>. This includes, at minimum,
     * permission to retrieve the dataset contents that are the input to the
     * containerized application.</p>
     */
    inline const Aws::String& GetExecutionRoleArn() const{ return m_executionRoleArn; }
    inline bool ExecutionRoleArnHasBeenSet() const { return m_executionRoleArnHasBeenSet; }
    inline void SetExecutionRoleArn(const Aws::String& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = value; }
    inline void SetExecutionRoleArn(Aws::String&& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = std::move(value); }
    inline void SetExecutionRoleArn(const char* value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn.assign(value); }
    inline ContainerDatasetAction& WithExecutionRoleArn(const Aws::String& value) { SetExecutionRoleArn(value); return *this;}
    inline ContainerDatasetAction& WithExecutionRoleArn(Aws::String&& value) { SetExecutionRoleArn(std::move(value)); return *this;}
    inline ContainerDatasetAction& WithExecutionRoleArn(const char* value) { SetExecutionRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration of the resource that executes the
     * <code>containerAction</code>.</p>
     */
    inline const ResourceConfiguration& GetResourceConfiguration() const{ return m_resourceConfiguration; }
    inline bool ResourceConfigurationHasBeenSet() const { return m_resourceConfigurationHasBeenSet; }
    inline void SetResourceConfiguration(const ResourceConfiguration& value) { m_resourceConfigurationHasBeenSet = true; m_resourceConfiguration = value; }
    inline void SetResourceConfiguration(ResourceConfiguration&& value) { m_resourceConfigurationHasBeenSet = true; m_resourceConfiguration = std::move(value); }
    inline ContainerDatasetAction& WithResourceConfiguration(const ResourceConfiguration& value) { SetResourceConfiguration(value); return *this;}
    inline ContainerDatasetAction& WithResourceConfiguration(ResourceConfiguration&& value) { SetResourceConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The values of variables used in the context of the execution of the
     * containerized application (basically, parameters passed to the application).
     * Each variable must have a name and a value given by one of
     * <code>stringValue</code>, <code>datasetContentVersionValue</code>, or
     * <code>outputFileUriValue</code>.</p>
     */
    inline const Aws::Vector<Variable>& GetVariables() const{ return m_variables; }
    inline bool VariablesHasBeenSet() const { return m_variablesHasBeenSet; }
    inline void SetVariables(const Aws::Vector<Variable>& value) { m_variablesHasBeenSet = true; m_variables = value; }
    inline void SetVariables(Aws::Vector<Variable>&& value) { m_variablesHasBeenSet = true; m_variables = std::move(value); }
    inline ContainerDatasetAction& WithVariables(const Aws::Vector<Variable>& value) { SetVariables(value); return *this;}
    inline ContainerDatasetAction& WithVariables(Aws::Vector<Variable>&& value) { SetVariables(std::move(value)); return *this;}
    inline ContainerDatasetAction& AddVariables(const Variable& value) { m_variablesHasBeenSet = true; m_variables.push_back(value); return *this; }
    inline ContainerDatasetAction& AddVariables(Variable&& value) { m_variablesHasBeenSet = true; m_variables.push_back(std::move(value)); return *this; }
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
