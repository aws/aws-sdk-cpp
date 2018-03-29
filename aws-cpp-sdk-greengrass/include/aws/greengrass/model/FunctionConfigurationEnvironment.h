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
#include <aws/greengrass/Greengrass_EXPORTS.h>
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
  class AWS_GREENGRASS_API FunctionConfigurationEnvironment
  {
  public:
    FunctionConfigurationEnvironment();
    FunctionConfigurationEnvironment(const Aws::Utils::Json::JsonValue& jsonValue);
    FunctionConfigurationEnvironment& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * If true, the Lambda function is allowed to access the host's /sys folder. Use
     * this when the Lambda function needs to read device information from /sys.
     */
    inline bool GetAccessSysfs() const{ return m_accessSysfs; }

    /**
     * If true, the Lambda function is allowed to access the host's /sys folder. Use
     * this when the Lambda function needs to read device information from /sys.
     */
    inline void SetAccessSysfs(bool value) { m_accessSysfsHasBeenSet = true; m_accessSysfs = value; }

    /**
     * If true, the Lambda function is allowed to access the host's /sys folder. Use
     * this when the Lambda function needs to read device information from /sys.
     */
    inline FunctionConfigurationEnvironment& WithAccessSysfs(bool value) { SetAccessSysfs(value); return *this;}


    /**
     * A list of the resources, with their permissions, to which the Lambda function
     * will be granted access. A Lambda function can have at most 10 resources.
     */
    inline const Aws::Vector<ResourceAccessPolicy>& GetResourceAccessPolicies() const{ return m_resourceAccessPolicies; }

    /**
     * A list of the resources, with their permissions, to which the Lambda function
     * will be granted access. A Lambda function can have at most 10 resources.
     */
    inline void SetResourceAccessPolicies(const Aws::Vector<ResourceAccessPolicy>& value) { m_resourceAccessPoliciesHasBeenSet = true; m_resourceAccessPolicies = value; }

    /**
     * A list of the resources, with their permissions, to which the Lambda function
     * will be granted access. A Lambda function can have at most 10 resources.
     */
    inline void SetResourceAccessPolicies(Aws::Vector<ResourceAccessPolicy>&& value) { m_resourceAccessPoliciesHasBeenSet = true; m_resourceAccessPolicies = std::move(value); }

    /**
     * A list of the resources, with their permissions, to which the Lambda function
     * will be granted access. A Lambda function can have at most 10 resources.
     */
    inline FunctionConfigurationEnvironment& WithResourceAccessPolicies(const Aws::Vector<ResourceAccessPolicy>& value) { SetResourceAccessPolicies(value); return *this;}

    /**
     * A list of the resources, with their permissions, to which the Lambda function
     * will be granted access. A Lambda function can have at most 10 resources.
     */
    inline FunctionConfigurationEnvironment& WithResourceAccessPolicies(Aws::Vector<ResourceAccessPolicy>&& value) { SetResourceAccessPolicies(std::move(value)); return *this;}

    /**
     * A list of the resources, with their permissions, to which the Lambda function
     * will be granted access. A Lambda function can have at most 10 resources.
     */
    inline FunctionConfigurationEnvironment& AddResourceAccessPolicies(const ResourceAccessPolicy& value) { m_resourceAccessPoliciesHasBeenSet = true; m_resourceAccessPolicies.push_back(value); return *this; }

    /**
     * A list of the resources, with their permissions, to which the Lambda function
     * will be granted access. A Lambda function can have at most 10 resources.
     */
    inline FunctionConfigurationEnvironment& AddResourceAccessPolicies(ResourceAccessPolicy&& value) { m_resourceAccessPoliciesHasBeenSet = true; m_resourceAccessPolicies.push_back(std::move(value)); return *this; }


    /**
     * Environment variables for the Lambda function's configuration.
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetVariables() const{ return m_variables; }

    /**
     * Environment variables for the Lambda function's configuration.
     */
    inline void SetVariables(const Aws::Map<Aws::String, Aws::String>& value) { m_variablesHasBeenSet = true; m_variables = value; }

    /**
     * Environment variables for the Lambda function's configuration.
     */
    inline void SetVariables(Aws::Map<Aws::String, Aws::String>&& value) { m_variablesHasBeenSet = true; m_variables = std::move(value); }

    /**
     * Environment variables for the Lambda function's configuration.
     */
    inline FunctionConfigurationEnvironment& WithVariables(const Aws::Map<Aws::String, Aws::String>& value) { SetVariables(value); return *this;}

    /**
     * Environment variables for the Lambda function's configuration.
     */
    inline FunctionConfigurationEnvironment& WithVariables(Aws::Map<Aws::String, Aws::String>&& value) { SetVariables(std::move(value)); return *this;}

    /**
     * Environment variables for the Lambda function's configuration.
     */
    inline FunctionConfigurationEnvironment& AddVariables(const Aws::String& key, const Aws::String& value) { m_variablesHasBeenSet = true; m_variables.emplace(key, value); return *this; }

    /**
     * Environment variables for the Lambda function's configuration.
     */
    inline FunctionConfigurationEnvironment& AddVariables(Aws::String&& key, const Aws::String& value) { m_variablesHasBeenSet = true; m_variables.emplace(std::move(key), value); return *this; }

    /**
     * Environment variables for the Lambda function's configuration.
     */
    inline FunctionConfigurationEnvironment& AddVariables(const Aws::String& key, Aws::String&& value) { m_variablesHasBeenSet = true; m_variables.emplace(key, std::move(value)); return *this; }

    /**
     * Environment variables for the Lambda function's configuration.
     */
    inline FunctionConfigurationEnvironment& AddVariables(Aws::String&& key, Aws::String&& value) { m_variablesHasBeenSet = true; m_variables.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * Environment variables for the Lambda function's configuration.
     */
    inline FunctionConfigurationEnvironment& AddVariables(const char* key, Aws::String&& value) { m_variablesHasBeenSet = true; m_variables.emplace(key, std::move(value)); return *this; }

    /**
     * Environment variables for the Lambda function's configuration.
     */
    inline FunctionConfigurationEnvironment& AddVariables(Aws::String&& key, const char* value) { m_variablesHasBeenSet = true; m_variables.emplace(std::move(key), value); return *this; }

    /**
     * Environment variables for the Lambda function's configuration.
     */
    inline FunctionConfigurationEnvironment& AddVariables(const char* key, const char* value) { m_variablesHasBeenSet = true; m_variables.emplace(key, value); return *this; }

  private:

    bool m_accessSysfs;
    bool m_accessSysfsHasBeenSet;

    Aws::Vector<ResourceAccessPolicy> m_resourceAccessPolicies;
    bool m_resourceAccessPoliciesHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_variables;
    bool m_variablesHasBeenSet;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
