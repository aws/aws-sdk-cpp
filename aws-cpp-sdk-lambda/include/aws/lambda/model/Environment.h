﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/core/utils/memory/stl/AWSString.h>

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
   * <p>The parent object that contains your environment's configuration
   * settings.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/Environment">AWS
   * API Reference</a></p>
   */
  class AWS_LAMBDA_API Environment
  {
  public:
    Environment();
    Environment(const Aws::Utils::Json::JsonValue& jsonValue);
    Environment& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The key-value pairs that represent your environment's configuration settings.
     * The value you specify cannot contain a ",".</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetVariables() const{ return m_variables; }

    /**
     * <p>The key-value pairs that represent your environment's configuration settings.
     * The value you specify cannot contain a ",".</p>
     */
    inline void SetVariables(const Aws::Map<Aws::String, Aws::String>& value) { m_variablesHasBeenSet = true; m_variables = value; }

    /**
     * <p>The key-value pairs that represent your environment's configuration settings.
     * The value you specify cannot contain a ",".</p>
     */
    inline void SetVariables(Aws::Map<Aws::String, Aws::String>&& value) { m_variablesHasBeenSet = true; m_variables = value; }

    /**
     * <p>The key-value pairs that represent your environment's configuration settings.
     * The value you specify cannot contain a ",".</p>
     */
    inline Environment& WithVariables(const Aws::Map<Aws::String, Aws::String>& value) { SetVariables(value); return *this;}

    /**
     * <p>The key-value pairs that represent your environment's configuration settings.
     * The value you specify cannot contain a ",".</p>
     */
    inline Environment& WithVariables(Aws::Map<Aws::String, Aws::String>&& value) { SetVariables(value); return *this;}

    /**
     * <p>The key-value pairs that represent your environment's configuration settings.
     * The value you specify cannot contain a ",".</p>
     */
    inline Environment& AddVariables(const Aws::String& key, const Aws::String& value) { m_variablesHasBeenSet = true; m_variables[key] = value; return *this; }

    /**
     * <p>The key-value pairs that represent your environment's configuration settings.
     * The value you specify cannot contain a ",".</p>
     */
    inline Environment& AddVariables(Aws::String&& key, const Aws::String& value) { m_variablesHasBeenSet = true; m_variables[key] = value; return *this; }

    /**
     * <p>The key-value pairs that represent your environment's configuration settings.
     * The value you specify cannot contain a ",".</p>
     */
    inline Environment& AddVariables(const Aws::String& key, Aws::String&& value) { m_variablesHasBeenSet = true; m_variables[key] = value; return *this; }

    /**
     * <p>The key-value pairs that represent your environment's configuration settings.
     * The value you specify cannot contain a ",".</p>
     */
    inline Environment& AddVariables(Aws::String&& key, Aws::String&& value) { m_variablesHasBeenSet = true; m_variables[key] = value; return *this; }

    /**
     * <p>The key-value pairs that represent your environment's configuration settings.
     * The value you specify cannot contain a ",".</p>
     */
    inline Environment& AddVariables(const char* key, Aws::String&& value) { m_variablesHasBeenSet = true; m_variables[key] = value; return *this; }

    /**
     * <p>The key-value pairs that represent your environment's configuration settings.
     * The value you specify cannot contain a ",".</p>
     */
    inline Environment& AddVariables(Aws::String&& key, const char* value) { m_variablesHasBeenSet = true; m_variables[key] = value; return *this; }

    /**
     * <p>The key-value pairs that represent your environment's configuration settings.
     * The value you specify cannot contain a ",".</p>
     */
    inline Environment& AddVariables(const char* key, const char* value) { m_variablesHasBeenSet = true; m_variables[key] = value; return *this; }

  private:
    Aws::Map<Aws::String, Aws::String> m_variables;
    bool m_variablesHasBeenSet;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
