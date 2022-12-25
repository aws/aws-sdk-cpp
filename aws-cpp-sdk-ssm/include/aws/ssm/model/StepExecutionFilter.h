/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/model/StepExecutionFilterKey.h>
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
   * <p>A filter to limit the amount of step execution information returned by the
   * call.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/StepExecutionFilter">AWS
   * API Reference</a></p>
   */
  class StepExecutionFilter
  {
  public:
    AWS_SSM_API StepExecutionFilter();
    AWS_SSM_API StepExecutionFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API StepExecutionFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>One or more keys to limit the results. Valid filter keys include the
     * following: StepName, Action, StepExecutionId, StepExecutionStatus,
     * StartTimeBefore, StartTimeAfter.</p>
     */
    inline const StepExecutionFilterKey& GetKey() const{ return m_key; }

    /**
     * <p>One or more keys to limit the results. Valid filter keys include the
     * following: StepName, Action, StepExecutionId, StepExecutionStatus,
     * StartTimeBefore, StartTimeAfter.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>One or more keys to limit the results. Valid filter keys include the
     * following: StepName, Action, StepExecutionId, StepExecutionStatus,
     * StartTimeBefore, StartTimeAfter.</p>
     */
    inline void SetKey(const StepExecutionFilterKey& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>One or more keys to limit the results. Valid filter keys include the
     * following: StepName, Action, StepExecutionId, StepExecutionStatus,
     * StartTimeBefore, StartTimeAfter.</p>
     */
    inline void SetKey(StepExecutionFilterKey&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>One or more keys to limit the results. Valid filter keys include the
     * following: StepName, Action, StepExecutionId, StepExecutionStatus,
     * StartTimeBefore, StartTimeAfter.</p>
     */
    inline StepExecutionFilter& WithKey(const StepExecutionFilterKey& value) { SetKey(value); return *this;}

    /**
     * <p>One or more keys to limit the results. Valid filter keys include the
     * following: StepName, Action, StepExecutionId, StepExecutionStatus,
     * StartTimeBefore, StartTimeAfter.</p>
     */
    inline StepExecutionFilter& WithKey(StepExecutionFilterKey&& value) { SetKey(std::move(value)); return *this;}


    /**
     * <p>The values of the filter key.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    /**
     * <p>The values of the filter key.</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>The values of the filter key.</p>
     */
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>The values of the filter key.</p>
     */
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>The values of the filter key.</p>
     */
    inline StepExecutionFilter& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p>The values of the filter key.</p>
     */
    inline StepExecutionFilter& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>The values of the filter key.</p>
     */
    inline StepExecutionFilter& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>The values of the filter key.</p>
     */
    inline StepExecutionFilter& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    /**
     * <p>The values of the filter key.</p>
     */
    inline StepExecutionFilter& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

  private:

    StepExecutionFilterKey m_key;
    bool m_keyHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
