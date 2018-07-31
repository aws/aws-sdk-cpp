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
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/model/ComparisonOperator.h>
#include <aws/iot/model/MetricValue.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>The criteria by which the behavior is determined to be normal.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/BehaviorCriteria">AWS
   * API Reference</a></p>
   */
  class AWS_IOT_API BehaviorCriteria
  {
  public:
    BehaviorCriteria();
    BehaviorCriteria(Aws::Utils::Json::JsonView jsonValue);
    BehaviorCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The operator that relates the thing measured (<code>metric</code>) to the
     * criteria (<code>value</code>).</p>
     */
    inline const ComparisonOperator& GetComparisonOperator() const{ return m_comparisonOperator; }

    /**
     * <p>The operator that relates the thing measured (<code>metric</code>) to the
     * criteria (<code>value</code>).</p>
     */
    inline void SetComparisonOperator(const ComparisonOperator& value) { m_comparisonOperatorHasBeenSet = true; m_comparisonOperator = value; }

    /**
     * <p>The operator that relates the thing measured (<code>metric</code>) to the
     * criteria (<code>value</code>).</p>
     */
    inline void SetComparisonOperator(ComparisonOperator&& value) { m_comparisonOperatorHasBeenSet = true; m_comparisonOperator = std::move(value); }

    /**
     * <p>The operator that relates the thing measured (<code>metric</code>) to the
     * criteria (<code>value</code>).</p>
     */
    inline BehaviorCriteria& WithComparisonOperator(const ComparisonOperator& value) { SetComparisonOperator(value); return *this;}

    /**
     * <p>The operator that relates the thing measured (<code>metric</code>) to the
     * criteria (<code>value</code>).</p>
     */
    inline BehaviorCriteria& WithComparisonOperator(ComparisonOperator&& value) { SetComparisonOperator(std::move(value)); return *this;}


    /**
     * <p>The value to be compared with the <code>metric</code>.</p>
     */
    inline const MetricValue& GetValue() const{ return m_value; }

    /**
     * <p>The value to be compared with the <code>metric</code>.</p>
     */
    inline void SetValue(const MetricValue& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value to be compared with the <code>metric</code>.</p>
     */
    inline void SetValue(MetricValue&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value to be compared with the <code>metric</code>.</p>
     */
    inline BehaviorCriteria& WithValue(const MetricValue& value) { SetValue(value); return *this;}

    /**
     * <p>The value to be compared with the <code>metric</code>.</p>
     */
    inline BehaviorCriteria& WithValue(MetricValue&& value) { SetValue(std::move(value)); return *this;}


    /**
     * <p>Use this to specify the period of time over which the behavior is evaluated,
     * for those criteria which have a time dimension (for example,
     * <code>NUM_MESSAGES_SENT</code>).</p>
     */
    inline int GetDurationSeconds() const{ return m_durationSeconds; }

    /**
     * <p>Use this to specify the period of time over which the behavior is evaluated,
     * for those criteria which have a time dimension (for example,
     * <code>NUM_MESSAGES_SENT</code>).</p>
     */
    inline void SetDurationSeconds(int value) { m_durationSecondsHasBeenSet = true; m_durationSeconds = value; }

    /**
     * <p>Use this to specify the period of time over which the behavior is evaluated,
     * for those criteria which have a time dimension (for example,
     * <code>NUM_MESSAGES_SENT</code>).</p>
     */
    inline BehaviorCriteria& WithDurationSeconds(int value) { SetDurationSeconds(value); return *this;}

  private:

    ComparisonOperator m_comparisonOperator;
    bool m_comparisonOperatorHasBeenSet;

    MetricValue m_value;
    bool m_valueHasBeenSet;

    int m_durationSeconds;
    bool m_durationSecondsHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
