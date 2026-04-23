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
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ServerlessApplicationRepository
{
namespace Model
{

  /**
   * <p>Parameter value of the application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/serverlessrepo-2017-09-08/ParameterValue">AWS
   * API Reference</a></p>
   */
  class AWS_SERVERLESSAPPLICATIONREPOSITORY_API ParameterValue
  {
  public:
    ParameterValue();
    ParameterValue(Aws::Utils::Json::JsonView jsonValue);
    ParameterValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The key associated with the parameter. If you don't specify a key and value
     * for a particular parameter, AWS CloudFormation
 uses the default value that is
     * specified in your template.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The key associated with the parameter. If you don't specify a key and value
     * for a particular parameter, AWS CloudFormation
 uses the default value that is
     * specified in your template.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The key associated with the parameter. If you don't specify a key and value
     * for a particular parameter, AWS CloudFormation
 uses the default value that is
     * specified in your template.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The key associated with the parameter. If you don't specify a key and value
     * for a particular parameter, AWS CloudFormation
 uses the default value that is
     * specified in your template.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The key associated with the parameter. If you don't specify a key and value
     * for a particular parameter, AWS CloudFormation
 uses the default value that is
     * specified in your template.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The key associated with the parameter. If you don't specify a key and value
     * for a particular parameter, AWS CloudFormation
 uses the default value that is
     * specified in your template.</p>
     */
    inline ParameterValue& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The key associated with the parameter. If you don't specify a key and value
     * for a particular parameter, AWS CloudFormation
 uses the default value that is
     * specified in your template.</p>
     */
    inline ParameterValue& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The key associated with the parameter. If you don't specify a key and value
     * for a particular parameter, AWS CloudFormation
 uses the default value that is
     * specified in your template.</p>
     */
    inline ParameterValue& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The input value associated with the parameter.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The input value associated with the parameter.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The input value associated with the parameter.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The input value associated with the parameter.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The input value associated with the parameter.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The input value associated with the parameter.</p>
     */
    inline ParameterValue& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The input value associated with the parameter.</p>
     */
    inline ParameterValue& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The input value associated with the parameter.</p>
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
