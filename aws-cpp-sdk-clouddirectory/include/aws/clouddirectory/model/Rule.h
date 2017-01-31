/*
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
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/clouddirectory/model/RuleType.h>
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
namespace CloudDirectory
{
namespace Model
{

  /**
   * <p>Contains an ARN and parameters associated with the rule.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2016-05-10/Rule">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDDIRECTORY_API Rule
  {
  public:
    Rule();
    Rule(const Aws::Utils::Json::JsonValue& jsonValue);
    Rule& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The type of attribute validation rule.</p>
     */
    inline const RuleType& GetType() const{ return m_type; }

    /**
     * <p>The type of attribute validation rule.</p>
     */
    inline void SetType(const RuleType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of attribute validation rule.</p>
     */
    inline void SetType(RuleType&& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of attribute validation rule.</p>
     */
    inline Rule& WithType(const RuleType& value) { SetType(value); return *this;}

    /**
     * <p>The type of attribute validation rule.</p>
     */
    inline Rule& WithType(RuleType&& value) { SetType(value); return *this;}

    /**
     * <p>Min and max parameters associated with the rule.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetParameters() const{ return m_parameters; }

    /**
     * <p>Min and max parameters associated with the rule.</p>
     */
    inline void SetParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>Min and max parameters associated with the rule.</p>
     */
    inline void SetParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>Min and max parameters associated with the rule.</p>
     */
    inline Rule& WithParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetParameters(value); return *this;}

    /**
     * <p>Min and max parameters associated with the rule.</p>
     */
    inline Rule& WithParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetParameters(value); return *this;}

    /**
     * <p>Min and max parameters associated with the rule.</p>
     */
    inline Rule& AddParameters(const Aws::String& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters[key] = value; return *this; }

    /**
     * <p>Min and max parameters associated with the rule.</p>
     */
    inline Rule& AddParameters(Aws::String&& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters[key] = value; return *this; }

    /**
     * <p>Min and max parameters associated with the rule.</p>
     */
    inline Rule& AddParameters(const Aws::String& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters[key] = value; return *this; }

    /**
     * <p>Min and max parameters associated with the rule.</p>
     */
    inline Rule& AddParameters(Aws::String&& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters[key] = value; return *this; }

    /**
     * <p>Min and max parameters associated with the rule.</p>
     */
    inline Rule& AddParameters(const char* key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters[key] = value; return *this; }

    /**
     * <p>Min and max parameters associated with the rule.</p>
     */
    inline Rule& AddParameters(Aws::String&& key, const char* value) { m_parametersHasBeenSet = true; m_parameters[key] = value; return *this; }

    /**
     * <p>Min and max parameters associated with the rule.</p>
     */
    inline Rule& AddParameters(const char* key, const char* value) { m_parametersHasBeenSet = true; m_parameters[key] = value; return *this; }

  private:
    RuleType m_type;
    bool m_typeHasBeenSet;
    Aws::Map<Aws::String, Aws::String> m_parameters;
    bool m_parametersHasBeenSet;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
