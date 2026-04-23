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
#include <aws/ssm/model/AutomationExecutionFilterKey.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>A filter used to match specific automation executions. This is used to limit
   * the scope of Automation execution information returned.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/AutomationExecutionFilter">AWS
   * API Reference</a></p>
   */
  class AWS_SSM_API AutomationExecutionFilter
  {
  public:
    AutomationExecutionFilter();
    AutomationExecutionFilter(Aws::Utils::Json::JsonView jsonValue);
    AutomationExecutionFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>One or more keys to limit the results. Valid filter keys include the
     * following: DocumentNamePrefix, ExecutionStatus, ExecutionId, ParentExecutionId,
     * CurrentAction, StartTimeBefore, StartTimeAfter.</p>
     */
    inline const AutomationExecutionFilterKey& GetKey() const{ return m_key; }

    /**
     * <p>One or more keys to limit the results. Valid filter keys include the
     * following: DocumentNamePrefix, ExecutionStatus, ExecutionId, ParentExecutionId,
     * CurrentAction, StartTimeBefore, StartTimeAfter.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>One or more keys to limit the results. Valid filter keys include the
     * following: DocumentNamePrefix, ExecutionStatus, ExecutionId, ParentExecutionId,
     * CurrentAction, StartTimeBefore, StartTimeAfter.</p>
     */
    inline void SetKey(const AutomationExecutionFilterKey& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>One or more keys to limit the results. Valid filter keys include the
     * following: DocumentNamePrefix, ExecutionStatus, ExecutionId, ParentExecutionId,
     * CurrentAction, StartTimeBefore, StartTimeAfter.</p>
     */
    inline void SetKey(AutomationExecutionFilterKey&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>One or more keys to limit the results. Valid filter keys include the
     * following: DocumentNamePrefix, ExecutionStatus, ExecutionId, ParentExecutionId,
     * CurrentAction, StartTimeBefore, StartTimeAfter.</p>
     */
    inline AutomationExecutionFilter& WithKey(const AutomationExecutionFilterKey& value) { SetKey(value); return *this;}

    /**
     * <p>One or more keys to limit the results. Valid filter keys include the
     * following: DocumentNamePrefix, ExecutionStatus, ExecutionId, ParentExecutionId,
     * CurrentAction, StartTimeBefore, StartTimeAfter.</p>
     */
    inline AutomationExecutionFilter& WithKey(AutomationExecutionFilterKey&& value) { SetKey(std::move(value)); return *this;}


    /**
     * <p>The values used to limit the execution information associated with the
     * filter's key.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    /**
     * <p>The values used to limit the execution information associated with the
     * filter's key.</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>The values used to limit the execution information associated with the
     * filter's key.</p>
     */
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>The values used to limit the execution information associated with the
     * filter's key.</p>
     */
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>The values used to limit the execution information associated with the
     * filter's key.</p>
     */
    inline AutomationExecutionFilter& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p>The values used to limit the execution information associated with the
     * filter's key.</p>
     */
    inline AutomationExecutionFilter& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>The values used to limit the execution information associated with the
     * filter's key.</p>
     */
    inline AutomationExecutionFilter& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>The values used to limit the execution information associated with the
     * filter's key.</p>
     */
    inline AutomationExecutionFilter& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    /**
     * <p>The values used to limit the execution information associated with the
     * filter's key.</p>
     */
    inline AutomationExecutionFilter& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

  private:

    AutomationExecutionFilterKey m_key;
    bool m_keyHasBeenSet;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
