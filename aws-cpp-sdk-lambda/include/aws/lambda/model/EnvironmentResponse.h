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
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/lambda/model/EnvironmentError.h>
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
namespace Lambda
{
namespace Model
{

  /**
   * <p>The parent object returned that contains your environment's configuration
   * settings or any error information associated with your configuration
   * settings.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/EnvironmentResponse">AWS
   * API Reference</a></p>
   */
  class AWS_LAMBDA_API EnvironmentResponse
  {
  public:
    EnvironmentResponse();
    EnvironmentResponse(const Aws::Utils::Json::JsonValue& jsonValue);
    EnvironmentResponse& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The key-value pairs returned that represent your environment's configuration
     * settings or error information.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetVariables() const{ return m_variables; }

    /**
     * <p>The key-value pairs returned that represent your environment's configuration
     * settings or error information.</p>
     */
    inline void SetVariables(const Aws::Map<Aws::String, Aws::String>& value) { m_variablesHasBeenSet = true; m_variables = value; }

    /**
     * <p>The key-value pairs returned that represent your environment's configuration
     * settings or error information.</p>
     */
    inline void SetVariables(Aws::Map<Aws::String, Aws::String>&& value) { m_variablesHasBeenSet = true; m_variables = std::move(value); }

    /**
     * <p>The key-value pairs returned that represent your environment's configuration
     * settings or error information.</p>
     */
    inline EnvironmentResponse& WithVariables(const Aws::Map<Aws::String, Aws::String>& value) { SetVariables(value); return *this;}

    /**
     * <p>The key-value pairs returned that represent your environment's configuration
     * settings or error information.</p>
     */
    inline EnvironmentResponse& WithVariables(Aws::Map<Aws::String, Aws::String>&& value) { SetVariables(std::move(value)); return *this;}

    /**
     * <p>The key-value pairs returned that represent your environment's configuration
     * settings or error information.</p>
     */
    inline EnvironmentResponse& AddVariables(const Aws::String& key, const Aws::String& value) { m_variablesHasBeenSet = true; m_variables.emplace(key, value); return *this; }

    /**
     * <p>The key-value pairs returned that represent your environment's configuration
     * settings or error information.</p>
     */
    inline EnvironmentResponse& AddVariables(Aws::String&& key, const Aws::String& value) { m_variablesHasBeenSet = true; m_variables.emplace(std::move(key), value); return *this; }

    /**
     * <p>The key-value pairs returned that represent your environment's configuration
     * settings or error information.</p>
     */
    inline EnvironmentResponse& AddVariables(const Aws::String& key, Aws::String&& value) { m_variablesHasBeenSet = true; m_variables.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The key-value pairs returned that represent your environment's configuration
     * settings or error information.</p>
     */
    inline EnvironmentResponse& AddVariables(Aws::String&& key, Aws::String&& value) { m_variablesHasBeenSet = true; m_variables.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The key-value pairs returned that represent your environment's configuration
     * settings or error information.</p>
     */
    inline EnvironmentResponse& AddVariables(const char* key, Aws::String&& value) { m_variablesHasBeenSet = true; m_variables.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The key-value pairs returned that represent your environment's configuration
     * settings or error information.</p>
     */
    inline EnvironmentResponse& AddVariables(Aws::String&& key, const char* value) { m_variablesHasBeenSet = true; m_variables.emplace(std::move(key), value); return *this; }

    /**
     * <p>The key-value pairs returned that represent your environment's configuration
     * settings or error information.</p>
     */
    inline EnvironmentResponse& AddVariables(const char* key, const char* value) { m_variablesHasBeenSet = true; m_variables.emplace(key, value); return *this; }

    
    inline const EnvironmentError& GetError() const{ return m_error; }

    
    inline void SetError(const EnvironmentError& value) { m_errorHasBeenSet = true; m_error = value; }

    
    inline void SetError(EnvironmentError&& value) { m_errorHasBeenSet = true; m_error = std::move(value); }

    
    inline EnvironmentResponse& WithError(const EnvironmentError& value) { SetError(value); return *this;}

    
    inline EnvironmentResponse& WithError(EnvironmentError&& value) { SetError(std::move(value)); return *this;}

  private:
    Aws::Map<Aws::String, Aws::String> m_variables;
    bool m_variablesHasBeenSet;
    EnvironmentError m_error;
    bool m_errorHasBeenSet;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
