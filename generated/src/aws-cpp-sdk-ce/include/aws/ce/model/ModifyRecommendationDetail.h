/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>Details for the modification recommendation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/ModifyRecommendationDetail">AWS
   * API Reference</a></p>
   */
  class ModifyRecommendationDetail
  {
  public:
    AWS_COSTEXPLORER_API ModifyRecommendationDetail();
    AWS_COSTEXPLORER_API ModifyRecommendationDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API ModifyRecommendationDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Determines whether this instance type is the Amazon Web Services default
     * recommendation.</p>
     */
    inline const Aws::Vector<TargetInstance>& GetTargetInstances() const{ return m_targetInstances; }

    /**
     * <p>Determines whether this instance type is the Amazon Web Services default
     * recommendation.</p>
     */
    inline bool TargetInstancesHasBeenSet() const { return m_targetInstancesHasBeenSet; }

    /**
     * <p>Determines whether this instance type is the Amazon Web Services default
     * recommendation.</p>
     */
    inline void SetTargetInstances(const Aws::Vector<TargetInstance>& value) { m_targetInstancesHasBeenSet = true; m_targetInstances = value; }

    /**
     * <p>Determines whether this instance type is the Amazon Web Services default
     * recommendation.</p>
     */
    inline void SetTargetInstances(Aws::Vector<TargetInstance>&& value) { m_targetInstancesHasBeenSet = true; m_targetInstances = std::move(value); }

    /**
     * <p>Determines whether this instance type is the Amazon Web Services default
     * recommendation.</p>
     */
    inline ModifyRecommendationDetail& WithTargetInstances(const Aws::Vector<TargetInstance>& value) { SetTargetInstances(value); return *this;}

    /**
     * <p>Determines whether this instance type is the Amazon Web Services default
     * recommendation.</p>
     */
    inline ModifyRecommendationDetail& WithTargetInstances(Aws::Vector<TargetInstance>&& value) { SetTargetInstances(std::move(value)); return *this;}

    /**
     * <p>Determines whether this instance type is the Amazon Web Services default
     * recommendation.</p>
     */
    inline ModifyRecommendationDetail& AddTargetInstances(const TargetInstance& value) { m_targetInstancesHasBeenSet = true; m_targetInstances.push_back(value); return *this; }

    /**
     * <p>Determines whether this instance type is the Amazon Web Services default
     * recommendation.</p>
     */
    inline ModifyRecommendationDetail& AddTargetInstances(TargetInstance&& value) { m_targetInstancesHasBeenSet = true; m_targetInstances.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<TargetInstance> m_targetInstances;
    bool m_targetInstancesHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
