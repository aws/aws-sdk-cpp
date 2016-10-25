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
   * <p>This data type is used as a response element in the
   * <a>ListAssessmentAgents</a> action.</p>
   */
  class AWS_INSPECTOR_API AgentsFilter
  {
  public:
    AgentsFilter();
    AgentsFilter(const Aws::Utils::Json::JsonValue& jsonValue);
    AgentsFilter& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>For a record to match a filter, the value specified for this data type
     * property must be the exact match of the value of the <b>agentHealth</b> property
     * of the <a>Agent</a> data type.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAgentHealthList() const{ return m_agentHealthList; }

    /**
     * <p>For a record to match a filter, the value specified for this data type
     * property must be the exact match of the value of the <b>agentHealth</b> property
     * of the <a>Agent</a> data type.</p>
     */
    inline void SetAgentHealthList(const Aws::Vector<Aws::String>& value) { m_agentHealthListHasBeenSet = true; m_agentHealthList = value; }

    /**
     * <p>For a record to match a filter, the value specified for this data type
     * property must be the exact match of the value of the <b>agentHealth</b> property
     * of the <a>Agent</a> data type.</p>
     */
    inline void SetAgentHealthList(Aws::Vector<Aws::String>&& value) { m_agentHealthListHasBeenSet = true; m_agentHealthList = value; }

    /**
     * <p>For a record to match a filter, the value specified for this data type
     * property must be the exact match of the value of the <b>agentHealth</b> property
     * of the <a>Agent</a> data type.</p>
     */
    inline AgentsFilter& WithAgentHealthList(const Aws::Vector<Aws::String>& value) { SetAgentHealthList(value); return *this;}

    /**
     * <p>For a record to match a filter, the value specified for this data type
     * property must be the exact match of the value of the <b>agentHealth</b> property
     * of the <a>Agent</a> data type.</p>
     */
    inline AgentsFilter& WithAgentHealthList(Aws::Vector<Aws::String>&& value) { SetAgentHealthList(value); return *this;}

    /**
     * <p>For a record to match a filter, the value specified for this data type
     * property must be the exact match of the value of the <b>agentHealth</b> property
     * of the <a>Agent</a> data type.</p>
     */
    inline AgentsFilter& AddAgentHealthList(const Aws::String& value) { m_agentHealthListHasBeenSet = true; m_agentHealthList.push_back(value); return *this; }

    /**
     * <p>For a record to match a filter, the value specified for this data type
     * property must be the exact match of the value of the <b>agentHealth</b> property
     * of the <a>Agent</a> data type.</p>
     */
    inline AgentsFilter& AddAgentHealthList(Aws::String&& value) { m_agentHealthListHasBeenSet = true; m_agentHealthList.push_back(value); return *this; }

    /**
     * <p>For a record to match a filter, the value specified for this data type
     * property must be the exact match of the value of the <b>agentHealth</b> property
     * of the <a>Agent</a> data type.</p>
     */
    inline AgentsFilter& AddAgentHealthList(const char* value) { m_agentHealthListHasBeenSet = true; m_agentHealthList.push_back(value); return *this; }

  private:
    Aws::Vector<Aws::String> m_agentHealthList;
    bool m_agentHealthListHasBeenSet;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
