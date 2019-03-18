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
#include <aws/discovery/ApplicationDiscoveryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace ApplicationDiscoveryService
{
namespace Model
{

  /**
   * <p>Used to select which agent's data is to be exported. A single agent ID may be
   * selected for export using the <a
   * href="http://docs.aws.amazon.com/application-discovery/latest/APIReference/API_StartExportTask.html">StartExportTask</a>
   * action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/ExportFilter">AWS
   * API Reference</a></p>
   */
  class AWS_APPLICATIONDISCOVERYSERVICE_API ExportFilter
  {
  public:
    ExportFilter();
    ExportFilter(Aws::Utils::Json::JsonView jsonValue);
    ExportFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A single <code>ExportFilter</code> name. Supported filters:
     * <code>agentId</code>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A single <code>ExportFilter</code> name. Supported filters:
     * <code>agentId</code>.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A single <code>ExportFilter</code> name. Supported filters:
     * <code>agentId</code>.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A single <code>ExportFilter</code> name. Supported filters:
     * <code>agentId</code>.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A single <code>ExportFilter</code> name. Supported filters:
     * <code>agentId</code>.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A single <code>ExportFilter</code> name. Supported filters:
     * <code>agentId</code>.</p>
     */
    inline ExportFilter& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A single <code>ExportFilter</code> name. Supported filters:
     * <code>agentId</code>.</p>
     */
    inline ExportFilter& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A single <code>ExportFilter</code> name. Supported filters:
     * <code>agentId</code>.</p>
     */
    inline ExportFilter& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A single <code>agentId</code> for a Discovery Agent. An <code>agentId</code>
     * can be found using the <a
     * href="http://docs.aws.amazon.com/application-discovery/latest/APIReference/API_DescribeExportTasks.html">DescribeAgents</a>
     * action. Typically an ADS <code>agentId</code> is in the form
     * <code>o-0123456789abcdef0</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    /**
     * <p>A single <code>agentId</code> for a Discovery Agent. An <code>agentId</code>
     * can be found using the <a
     * href="http://docs.aws.amazon.com/application-discovery/latest/APIReference/API_DescribeExportTasks.html">DescribeAgents</a>
     * action. Typically an ADS <code>agentId</code> is in the form
     * <code>o-0123456789abcdef0</code>.</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>A single <code>agentId</code> for a Discovery Agent. An <code>agentId</code>
     * can be found using the <a
     * href="http://docs.aws.amazon.com/application-discovery/latest/APIReference/API_DescribeExportTasks.html">DescribeAgents</a>
     * action. Typically an ADS <code>agentId</code> is in the form
     * <code>o-0123456789abcdef0</code>.</p>
     */
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>A single <code>agentId</code> for a Discovery Agent. An <code>agentId</code>
     * can be found using the <a
     * href="http://docs.aws.amazon.com/application-discovery/latest/APIReference/API_DescribeExportTasks.html">DescribeAgents</a>
     * action. Typically an ADS <code>agentId</code> is in the form
     * <code>o-0123456789abcdef0</code>.</p>
     */
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>A single <code>agentId</code> for a Discovery Agent. An <code>agentId</code>
     * can be found using the <a
     * href="http://docs.aws.amazon.com/application-discovery/latest/APIReference/API_DescribeExportTasks.html">DescribeAgents</a>
     * action. Typically an ADS <code>agentId</code> is in the form
     * <code>o-0123456789abcdef0</code>.</p>
     */
    inline ExportFilter& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p>A single <code>agentId</code> for a Discovery Agent. An <code>agentId</code>
     * can be found using the <a
     * href="http://docs.aws.amazon.com/application-discovery/latest/APIReference/API_DescribeExportTasks.html">DescribeAgents</a>
     * action. Typically an ADS <code>agentId</code> is in the form
     * <code>o-0123456789abcdef0</code>.</p>
     */
    inline ExportFilter& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>A single <code>agentId</code> for a Discovery Agent. An <code>agentId</code>
     * can be found using the <a
     * href="http://docs.aws.amazon.com/application-discovery/latest/APIReference/API_DescribeExportTasks.html">DescribeAgents</a>
     * action. Typically an ADS <code>agentId</code> is in the form
     * <code>o-0123456789abcdef0</code>.</p>
     */
    inline ExportFilter& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>A single <code>agentId</code> for a Discovery Agent. An <code>agentId</code>
     * can be found using the <a
     * href="http://docs.aws.amazon.com/application-discovery/latest/APIReference/API_DescribeExportTasks.html">DescribeAgents</a>
     * action. Typically an ADS <code>agentId</code> is in the form
     * <code>o-0123456789abcdef0</code>.</p>
     */
    inline ExportFilter& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    /**
     * <p>A single <code>agentId</code> for a Discovery Agent. An <code>agentId</code>
     * can be found using the <a
     * href="http://docs.aws.amazon.com/application-discovery/latest/APIReference/API_DescribeExportTasks.html">DescribeAgents</a>
     * action. Typically an ADS <code>agentId</code> is in the form
     * <code>o-0123456789abcdef0</code>.</p>
     */
    inline ExportFilter& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }


    /**
     * <p>Supported condition: <code>EQUALS</code> </p>
     */
    inline const Aws::String& GetCondition() const{ return m_condition; }

    /**
     * <p>Supported condition: <code>EQUALS</code> </p>
     */
    inline bool ConditionHasBeenSet() const { return m_conditionHasBeenSet; }

    /**
     * <p>Supported condition: <code>EQUALS</code> </p>
     */
    inline void SetCondition(const Aws::String& value) { m_conditionHasBeenSet = true; m_condition = value; }

    /**
     * <p>Supported condition: <code>EQUALS</code> </p>
     */
    inline void SetCondition(Aws::String&& value) { m_conditionHasBeenSet = true; m_condition = std::move(value); }

    /**
     * <p>Supported condition: <code>EQUALS</code> </p>
     */
    inline void SetCondition(const char* value) { m_conditionHasBeenSet = true; m_condition.assign(value); }

    /**
     * <p>Supported condition: <code>EQUALS</code> </p>
     */
    inline ExportFilter& WithCondition(const Aws::String& value) { SetCondition(value); return *this;}

    /**
     * <p>Supported condition: <code>EQUALS</code> </p>
     */
    inline ExportFilter& WithCondition(Aws::String&& value) { SetCondition(std::move(value)); return *this;}

    /**
     * <p>Supported condition: <code>EQUALS</code> </p>
     */
    inline ExportFilter& WithCondition(const char* value) { SetCondition(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet;

    Aws::String m_condition;
    bool m_conditionHasBeenSet;
  };

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
