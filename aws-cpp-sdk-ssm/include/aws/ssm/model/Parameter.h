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
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/ParameterType.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>An Amazon EC2 Systems Manager parameter in Parameter Store.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/Parameter">AWS API
   * Reference</a></p>
   */
  class AWS_SSM_API Parameter
  {
  public:
    Parameter();
    Parameter(const Aws::Utils::Json::JsonValue& jsonValue);
    Parameter& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The name of the parameter.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the parameter.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the parameter.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the parameter.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the parameter.</p>
     */
    inline Parameter& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the parameter.</p>
     */
    inline Parameter& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the parameter.</p>
     */
    inline Parameter& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>The type of parameter. Valid values include the following: String, String
     * list, Secure string.</p>
     */
    inline const ParameterType& GetType() const{ return m_type; }

    /**
     * <p>The type of parameter. Valid values include the following: String, String
     * list, Secure string.</p>
     */
    inline void SetType(const ParameterType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of parameter. Valid values include the following: String, String
     * list, Secure string.</p>
     */
    inline void SetType(ParameterType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of parameter. Valid values include the following: String, String
     * list, Secure string.</p>
     */
    inline Parameter& WithType(const ParameterType& value) { SetType(value); return *this;}

    /**
     * <p>The type of parameter. Valid values include the following: String, String
     * list, Secure string.</p>
     */
    inline Parameter& WithType(ParameterType&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The parameter value.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The parameter value.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The parameter value.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The parameter value.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The parameter value.</p>
     */
    inline Parameter& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The parameter value.</p>
     */
    inline Parameter& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The parameter value.</p>
     */
    inline Parameter& WithValue(const char* value) { SetValue(value); return *this;}

  private:
    Aws::String m_name;
    bool m_nameHasBeenSet;
    ParameterType m_type;
    bool m_typeHasBeenSet;
    Aws::String m_value;
    bool m_valueHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
