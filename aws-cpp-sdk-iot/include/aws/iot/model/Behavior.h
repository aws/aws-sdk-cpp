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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/BehaviorCriteria.h>
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
   * <p>A Device Defender security profile behavior.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/Behavior">AWS API
   * Reference</a></p>
   */
  class AWS_IOT_API Behavior
  {
  public:
    Behavior();
    Behavior(Aws::Utils::Json::JsonView jsonValue);
    Behavior& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name you have given to the behavior.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name you have given to the behavior.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name you have given to the behavior.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name you have given to the behavior.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name you have given to the behavior.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name you have given to the behavior.</p>
     */
    inline Behavior& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name you have given to the behavior.</p>
     */
    inline Behavior& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name you have given to the behavior.</p>
     */
    inline Behavior& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>What is measured by the behavior.</p>
     */
    inline const Aws::String& GetMetric() const{ return m_metric; }

    /**
     * <p>What is measured by the behavior.</p>
     */
    inline bool MetricHasBeenSet() const { return m_metricHasBeenSet; }

    /**
     * <p>What is measured by the behavior.</p>
     */
    inline void SetMetric(const Aws::String& value) { m_metricHasBeenSet = true; m_metric = value; }

    /**
     * <p>What is measured by the behavior.</p>
     */
    inline void SetMetric(Aws::String&& value) { m_metricHasBeenSet = true; m_metric = std::move(value); }

    /**
     * <p>What is measured by the behavior.</p>
     */
    inline void SetMetric(const char* value) { m_metricHasBeenSet = true; m_metric.assign(value); }

    /**
     * <p>What is measured by the behavior.</p>
     */
    inline Behavior& WithMetric(const Aws::String& value) { SetMetric(value); return *this;}

    /**
     * <p>What is measured by the behavior.</p>
     */
    inline Behavior& WithMetric(Aws::String&& value) { SetMetric(std::move(value)); return *this;}

    /**
     * <p>What is measured by the behavior.</p>
     */
    inline Behavior& WithMetric(const char* value) { SetMetric(value); return *this;}


    /**
     * <p>The criteria that determine if a device is behaving normally in regard to the
     * <code>metric</code>.</p>
     */
    inline const BehaviorCriteria& GetCriteria() const{ return m_criteria; }

    /**
     * <p>The criteria that determine if a device is behaving normally in regard to the
     * <code>metric</code>.</p>
     */
    inline bool CriteriaHasBeenSet() const { return m_criteriaHasBeenSet; }

    /**
     * <p>The criteria that determine if a device is behaving normally in regard to the
     * <code>metric</code>.</p>
     */
    inline void SetCriteria(const BehaviorCriteria& value) { m_criteriaHasBeenSet = true; m_criteria = value; }

    /**
     * <p>The criteria that determine if a device is behaving normally in regard to the
     * <code>metric</code>.</p>
     */
    inline void SetCriteria(BehaviorCriteria&& value) { m_criteriaHasBeenSet = true; m_criteria = std::move(value); }

    /**
     * <p>The criteria that determine if a device is behaving normally in regard to the
     * <code>metric</code>.</p>
     */
    inline Behavior& WithCriteria(const BehaviorCriteria& value) { SetCriteria(value); return *this;}

    /**
     * <p>The criteria that determine if a device is behaving normally in regard to the
     * <code>metric</code>.</p>
     */
    inline Behavior& WithCriteria(BehaviorCriteria&& value) { SetCriteria(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_metric;
    bool m_metricHasBeenSet;

    BehaviorCriteria m_criteria;
    bool m_criteriaHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
