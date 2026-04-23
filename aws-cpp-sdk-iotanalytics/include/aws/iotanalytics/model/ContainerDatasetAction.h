/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   * <p>Information needed to run the "containerAction" to produce data set
   * contents.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/ContainerDatasetAction">AWS
   * API Reference</a></p>
   */
  class AWS_IOTANALYTICS_API ContainerDatasetAction
  {
  public:
    ContainerDatasetAction();
    ContainerDatasetAction(Aws::Utils::Json::JsonView jsonValue);
    ContainerDatasetAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the Docker container stored in your account. The Docker container
     * contains an application and needed support libraries and is used to generate
     * data set contents.</p>
     */
    inline const Aws::String& GetImage() const{ return m_image; }

    /**
     * <p>The ARN of the Docker container stored in your account. The Docker container
     * contains an application and needed support libraries and is used to generate
     * data set contents.</p>
     */
    inline bool ImageHasBeenSet() const { return m_imageHasBeenSet; }

    /**
     * <p>The ARN of the Docker container stored in your account. The Docker container
     * contains an application and needed support libraries and is used to generate
     * data set contents.</p>
     */
    inline void SetImage(const Aws::String& value) { m_imageHasBeenSet = true; m_image = value; }

    /**
     * <p>The ARN of the Docker container stored in your account. The Docker container
     * contains an application and needed support libraries and is used to generate
     * data set contents.</p>
     */
    inline void SetImage(Aws::String&& value) { m_imageHasBeenSet = true; m_image = std::move(value); }

    /**
     * <p>The ARN of the Docker container stored in your account. The Docker container
     * contains an application and needed support libraries and is used to generate
     * data set contents.</p>
     */
    inline void SetImage(const char* value) { m_imageHasBeenSet = true; m_image.assign(value); }

    /**
     * <p>The ARN of the Docker container stored in your account. The Docker container
     * contains an application and needed support libraries and is used to generate
     * data set contents.</p>
     */
    inline ContainerDatasetAction& WithImage(const Aws::String& value) { SetImage(value); return *this;}

    /**
     * <p>The ARN of the Docker container stored in your account. The Docker container
     * contains an application and needed support libraries and is used to generate
     * data set contents.</p>
     */
    inline ContainerDatasetAction& WithImage(Aws::String&& value) { SetImage(std::move(value)); return *this;}

    /**
     * <p>The ARN of the Docker container stored in your account. The Docker container
     * contains an application and needed support libraries and is used to generate
     * data set contents.</p>
     */
    inline ContainerDatasetAction& WithImage(const char* value) { SetImage(value); return *this;}


    /**
     * <p>The ARN of the role which gives permission to the system to access needed
     * resources in order to run the "containerAction". This includes, at minimum,
     * permission to retrieve the data set contents which are the input to the
     * containerized application.</p>
     */
    inline const Aws::String& GetExecutionRoleArn() const{ return m_executionRoleArn; }

    /**
     * <p>The ARN of the role which gives permission to the system to access needed
     * resources in order to run the "containerAction". This includes, at minimum,
     * permission to retrieve the data set contents which are the input to the
     * containerized application.</p>
     */
    inline bool ExecutionRoleArnHasBeenSet() const { return m_executionRoleArnHasBeenSet; }

    /**
     * <p>The ARN of the role which gives permission to the system to access needed
     * resources in order to run the "containerAction". This includes, at minimum,
     * permission to retrieve the data set contents which are the input to the
     * containerized application.</p>
     */
    inline void SetExecutionRoleArn(const Aws::String& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = value; }

    /**
     * <p>The ARN of the role which gives permission to the system to access needed
     * resources in order to run the "containerAction". This includes, at minimum,
     * permission to retrieve the data set contents which are the input to the
     * containerized application.</p>
     */
    inline void SetExecutionRoleArn(Aws::String&& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = std::move(value); }

    /**
     * <p>The ARN of the role which gives permission to the system to access needed
     * resources in order to run the "containerAction". This includes, at minimum,
     * permission to retrieve the data set contents which are the input to the
     * containerized application.</p>
     */
    inline void SetExecutionRoleArn(const char* value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn.assign(value); }

    /**
     * <p>The ARN of the role which gives permission to the system to access needed
     * resources in order to run the "containerAction". This includes, at minimum,
     * permission to retrieve the data set contents which are the input to the
     * containerized application.</p>
     */
    inline ContainerDatasetAction& WithExecutionRoleArn(const Aws::String& value) { SetExecutionRoleArn(value); return *this;}

    /**
     * <p>The ARN of the role which gives permission to the system to access needed
     * resources in order to run the "containerAction". This includes, at minimum,
     * permission to retrieve the data set contents which are the input to the
     * containerized application.</p>
     */
    inline ContainerDatasetAction& WithExecutionRoleArn(Aws::String&& value) { SetExecutionRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the role which gives permission to the system to access needed
     * resources in order to run the "containerAction". This includes, at minimum,
     * permission to retrieve the data set contents which are the input to the
     * containerized application.</p>
     */
    inline ContainerDatasetAction& WithExecutionRoleArn(const char* value) { SetExecutionRoleArn(value); return *this;}


    /**
     * <p>Configuration of the resource which executes the "containerAction".</p>
     */
    inline const ResourceConfiguration& GetResourceConfiguration() const{ return m_resourceConfiguration; }

    /**
     * <p>Configuration of the resource which executes the "containerAction".</p>
     */
    inline bool ResourceConfigurationHasBeenSet() const { return m_resourceConfigurationHasBeenSet; }

    /**
     * <p>Configuration of the resource which executes the "containerAction".</p>
     */
    inline void SetResourceConfiguration(const ResourceConfiguration& value) { m_resourceConfigurationHasBeenSet = true; m_resourceConfiguration = value; }

    /**
     * <p>Configuration of the resource which executes the "containerAction".</p>
     */
    inline void SetResourceConfiguration(ResourceConfiguration&& value) { m_resourceConfigurationHasBeenSet = true; m_resourceConfiguration = std::move(value); }

    /**
     * <p>Configuration of the resource which executes the "containerAction".</p>
     */
    inline ContainerDatasetAction& WithResourceConfiguration(const ResourceConfiguration& value) { SetResourceConfiguration(value); return *this;}

    /**
     * <p>Configuration of the resource which executes the "containerAction".</p>
     */
    inline ContainerDatasetAction& WithResourceConfiguration(ResourceConfiguration&& value) { SetResourceConfiguration(std::move(value)); return *this;}


    /**
     * <p>The values of variables used within the context of the execution of the
     * containerized application (basically, parameters passed to the application).
     * Each variable must have a name and a value given by one of "stringValue",
     * "datasetContentVersionValue", or "outputFileUriValue".</p>
     */
    inline const Aws::Vector<Variable>& GetVariables() const{ return m_variables; }

    /**
     * <p>The values of variables used within the context of the execution of the
     * containerized application (basically, parameters passed to the application).
     * Each variable must have a name and a value given by one of "stringValue",
     * "datasetContentVersionValue", or "outputFileUriValue".</p>
     */
    inline bool VariablesHasBeenSet() const { return m_variablesHasBeenSet; }

    /**
     * <p>The values of variables used within the context of the execution of the
     * containerized application (basically, parameters passed to the application).
     * Each variable must have a name and a value given by one of "stringValue",
     * "datasetContentVersionValue", or "outputFileUriValue".</p>
     */
    inline void SetVariables(const Aws::Vector<Variable>& value) { m_variablesHasBeenSet = true; m_variables = value; }

    /**
     * <p>The values of variables used within the context of the execution of the
     * containerized application (basically, parameters passed to the application).
     * Each variable must have a name and a value given by one of "stringValue",
     * "datasetContentVersionValue", or "outputFileUriValue".</p>
     */
    inline void SetVariables(Aws::Vector<Variable>&& value) { m_variablesHasBeenSet = true; m_variables = std::move(value); }

    /**
     * <p>The values of variables used within the context of the execution of the
     * containerized application (basically, parameters passed to the application).
     * Each variable must have a name and a value given by one of "stringValue",
     * "datasetContentVersionValue", or "outputFileUriValue".</p>
     */
    inline ContainerDatasetAction& WithVariables(const Aws::Vector<Variable>& value) { SetVariables(value); return *this;}

    /**
     * <p>The values of variables used within the context of the execution of the
     * containerized application (basically, parameters passed to the application).
     * Each variable must have a name and a value given by one of "stringValue",
     * "datasetContentVersionValue", or "outputFileUriValue".</p>
     */
    inline ContainerDatasetAction& WithVariables(Aws::Vector<Variable>&& value) { SetVariables(std::move(value)); return *this;}

    /**
     * <p>The values of variables used within the context of the execution of the
     * containerized application (basically, parameters passed to the application).
     * Each variable must have a name and a value given by one of "stringValue",
     * "datasetContentVersionValue", or "outputFileUriValue".</p>
     */
    inline ContainerDatasetAction& AddVariables(const Variable& value) { m_variablesHasBeenSet = true; m_variables.push_back(value); return *this; }

    /**
     * <p>The values of variables used within the context of the execution of the
     * containerized application (basically, parameters passed to the application).
     * Each variable must have a name and a value given by one of "stringValue",
     * "datasetContentVersionValue", or "outputFileUriValue".</p>
     */
    inline ContainerDatasetAction& AddVariables(Variable&& value) { m_variablesHasBeenSet = true; m_variables.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_image;
    bool m_imageHasBeenSet;

    Aws::String m_executionRoleArn;
    bool m_executionRoleArnHasBeenSet;

    ResourceConfiguration m_resourceConfiguration;
    bool m_resourceConfigurationHasBeenSet;

    Aws::Vector<Variable> m_variables;
    bool m_variablesHasBeenSet;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
