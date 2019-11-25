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
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ce/model/TargetInstance.h>
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
namespace CostExplorer
{
namespace Model
{

  /**
   * <p> Details on the modification recommendation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/ModifyRecommendationDetail">AWS
   * API Reference</a></p>
   */
  class AWS_COSTEXPLORER_API ModifyRecommendationDetail
  {
  public:
    ModifyRecommendationDetail();
    ModifyRecommendationDetail(Aws::Utils::Json::JsonView jsonValue);
    ModifyRecommendationDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Identifies whether this instance type is the Amazon Web Services default
     * recommendation.</p>
     */
    inline const Aws::Vector<TargetInstance>& GetTargetInstances() const{ return m_targetInstances; }

    /**
     * <p>Identifies whether this instance type is the Amazon Web Services default
     * recommendation.</p>
     */
    inline bool TargetInstancesHasBeenSet() const { return m_targetInstancesHasBeenSet; }

    /**
     * <p>Identifies whether this instance type is the Amazon Web Services default
     * recommendation.</p>
     */
    inline void SetTargetInstances(const Aws::Vector<TargetInstance>& value) { m_targetInstancesHasBeenSet = true; m_targetInstances = value; }

    /**
     * <p>Identifies whether this instance type is the Amazon Web Services default
     * recommendation.</p>
     */
    inline void SetTargetInstances(Aws::Vector<TargetInstance>&& value) { m_targetInstancesHasBeenSet = true; m_targetInstances = std::move(value); }

    /**
     * <p>Identifies whether this instance type is the Amazon Web Services default
     * recommendation.</p>
     */
    inline ModifyRecommendationDetail& WithTargetInstances(const Aws::Vector<TargetInstance>& value) { SetTargetInstances(value); return *this;}

    /**
     * <p>Identifies whether this instance type is the Amazon Web Services default
     * recommendation.</p>
     */
    inline ModifyRecommendationDetail& WithTargetInstances(Aws::Vector<TargetInstance>&& value) { SetTargetInstances(std::move(value)); return *this;}

    /**
     * <p>Identifies whether this instance type is the Amazon Web Services default
     * recommendation.</p>
     */
    inline ModifyRecommendationDetail& AddTargetInstances(const TargetInstance& value) { m_targetInstancesHasBeenSet = true; m_targetInstances.push_back(value); return *this; }

    /**
     * <p>Identifies whether this instance type is the Amazon Web Services default
     * recommendation.</p>
     */
    inline ModifyRecommendationDetail& AddTargetInstances(TargetInstance&& value) { m_targetInstancesHasBeenSet = true; m_targetInstances.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<TargetInstance> m_targetInstances;
    bool m_targetInstancesHasBeenSet;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
