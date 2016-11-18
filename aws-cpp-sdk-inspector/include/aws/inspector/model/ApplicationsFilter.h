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
#include <aws/inspector/Inspector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Inspector
{
namespace Model
{

  /**
   * <p>This data type is used as the request parameter in the
   * <a>ListApplications</a> action.</p>
   */
  class AWS_INSPECTOR_API ApplicationsFilter
  {
  public:
    ApplicationsFilter();
    ApplicationsFilter(const Aws::Utils::Json::JsonValue& jsonValue);
    ApplicationsFilter& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>For a record to match a filter, an explicit value or a string containing a
     * wildcard specified for this data type property must match the value of the
     * <b>applicationName</b> property of the <a>Application</a> data type.</p>
     */
    inline const Aws::Vector<Aws::String>& GetApplicationNamePatterns() const{ return m_applicationNamePatterns; }

    /**
     * <p>For a record to match a filter, an explicit value or a string containing a
     * wildcard specified for this data type property must match the value of the
     * <b>applicationName</b> property of the <a>Application</a> data type.</p>
     */
    inline void SetApplicationNamePatterns(const Aws::Vector<Aws::String>& value) { m_applicationNamePatternsHasBeenSet = true; m_applicationNamePatterns = value; }

    /**
     * <p>For a record to match a filter, an explicit value or a string containing a
     * wildcard specified for this data type property must match the value of the
     * <b>applicationName</b> property of the <a>Application</a> data type.</p>
     */
    inline void SetApplicationNamePatterns(Aws::Vector<Aws::String>&& value) { m_applicationNamePatternsHasBeenSet = true; m_applicationNamePatterns = value; }

    /**
     * <p>For a record to match a filter, an explicit value or a string containing a
     * wildcard specified for this data type property must match the value of the
     * <b>applicationName</b> property of the <a>Application</a> data type.</p>
     */
    inline ApplicationsFilter& WithApplicationNamePatterns(const Aws::Vector<Aws::String>& value) { SetApplicationNamePatterns(value); return *this;}

    /**
     * <p>For a record to match a filter, an explicit value or a string containing a
     * wildcard specified for this data type property must match the value of the
     * <b>applicationName</b> property of the <a>Application</a> data type.</p>
     */
    inline ApplicationsFilter& WithApplicationNamePatterns(Aws::Vector<Aws::String>&& value) { SetApplicationNamePatterns(value); return *this;}

    /**
     * <p>For a record to match a filter, an explicit value or a string containing a
     * wildcard specified for this data type property must match the value of the
     * <b>applicationName</b> property of the <a>Application</a> data type.</p>
     */
    inline ApplicationsFilter& AddApplicationNamePatterns(const Aws::String& value) { m_applicationNamePatternsHasBeenSet = true; m_applicationNamePatterns.push_back(value); return *this; }

    /**
     * <p>For a record to match a filter, an explicit value or a string containing a
     * wildcard specified for this data type property must match the value of the
     * <b>applicationName</b> property of the <a>Application</a> data type.</p>
     */
    inline ApplicationsFilter& AddApplicationNamePatterns(Aws::String&& value) { m_applicationNamePatternsHasBeenSet = true; m_applicationNamePatterns.push_back(value); return *this; }

    /**
     * <p>For a record to match a filter, an explicit value or a string containing a
     * wildcard specified for this data type property must match the value of the
     * <b>applicationName</b> property of the <a>Application</a> data type.</p>
     */
    inline ApplicationsFilter& AddApplicationNamePatterns(const char* value) { m_applicationNamePatternsHasBeenSet = true; m_applicationNamePatterns.push_back(value); return *this; }

  private:
    Aws::Vector<Aws::String> m_applicationNamePatterns;
    bool m_applicationNamePatternsHasBeenSet;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
