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
#include <aws/serverlessrepo/ServerlessApplicationRepository_EXPORTS.h>
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
namespace ServerlessApplicationRepository
{
namespace Model
{

  /**
   * Parameter value of the application.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/serverlessrepo-2017-09-08/ParameterValue">AWS
   * API Reference</a></p>
   */
  class AWS_SERVERLESSAPPLICATIONREPOSITORY_API ParameterValue
  {
  public:
    ParameterValue();
    ParameterValue(const Aws::Utils::Json::JsonValue& jsonValue);
    ParameterValue& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The key associated with the parameter. If you don't specify a key and value for
     * a particular parameter, AWS CloudFormation\n uses the default value that is
     * specified in your template.
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * The key associated with the parameter. If you don't specify a key and value for
     * a particular parameter, AWS CloudFormation\n uses the default value that is
     * specified in your template.
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * The key associated with the parameter. If you don't specify a key and value for
     * a particular parameter, AWS CloudFormation\n uses the default value that is
     * specified in your template.
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * The key associated with the parameter. If you don't specify a key and value for
     * a particular parameter, AWS CloudFormation\n uses the default value that is
     * specified in your template.
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * The key associated with the parameter. If you don't specify a key and value for
     * a particular parameter, AWS CloudFormation\n uses the default value that is
     * specified in your template.
     */
    inline ParameterValue& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * The key associated with the parameter. If you don't specify a key and value for
     * a particular parameter, AWS CloudFormation\n uses the default value that is
     * specified in your template.
     */
    inline ParameterValue& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * The key associated with the parameter. If you don't specify a key and value for
     * a particular parameter, AWS CloudFormation\n uses the default value that is
     * specified in your template.
     */
    inline ParameterValue& WithName(const char* value) { SetName(value); return *this;}


    /**
     * The input value associated with the parameter.
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * The input value associated with the parameter.
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * The input value associated with the parameter.
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * The input value associated with the parameter.
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * The input value associated with the parameter.
     */
    inline ParameterValue& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * The input value associated with the parameter.
     */
    inline ParameterValue& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * The input value associated with the parameter.
     */
    inline ParameterValue& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_value;
    bool m_valueHasBeenSet;
  };

} // namespace Model
} // namespace ServerlessApplicationRepository
} // namespace Aws
