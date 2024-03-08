/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/CoverageFilterCriterionKey.h>
#include <aws/guardduty/model/CoverageFilterCondition.h>
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
namespace GuardDuty
{
namespace Model
{

  /**
   * <p>Represents a condition that when matched will be added to the response of the
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/CoverageFilterCriterion">AWS
   * API Reference</a></p>
   */
  class CoverageFilterCriterion
  {
  public:
    AWS_GUARDDUTY_API CoverageFilterCriterion();
    AWS_GUARDDUTY_API CoverageFilterCriterion(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API CoverageFilterCriterion& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An enum value representing possible filter fields.</p>  <p>Replace the
     * enum value <code>CLUSTER_NAME</code> with <code>EKS_CLUSTER_NAME</code>.
     * <code>CLUSTER_NAME</code> has been deprecated.</p> 
     */
    inline const CoverageFilterCriterionKey& GetCriterionKey() const{ return m_criterionKey; }

    /**
     * <p>An enum value representing possible filter fields.</p>  <p>Replace the
     * enum value <code>CLUSTER_NAME</code> with <code>EKS_CLUSTER_NAME</code>.
     * <code>CLUSTER_NAME</code> has been deprecated.</p> 
     */
    inline bool CriterionKeyHasBeenSet() const { return m_criterionKeyHasBeenSet; }

    /**
     * <p>An enum value representing possible filter fields.</p>  <p>Replace the
     * enum value <code>CLUSTER_NAME</code> with <code>EKS_CLUSTER_NAME</code>.
     * <code>CLUSTER_NAME</code> has been deprecated.</p> 
     */
    inline void SetCriterionKey(const CoverageFilterCriterionKey& value) { m_criterionKeyHasBeenSet = true; m_criterionKey = value; }

    /**
     * <p>An enum value representing possible filter fields.</p>  <p>Replace the
     * enum value <code>CLUSTER_NAME</code> with <code>EKS_CLUSTER_NAME</code>.
     * <code>CLUSTER_NAME</code> has been deprecated.</p> 
     */
    inline void SetCriterionKey(CoverageFilterCriterionKey&& value) { m_criterionKeyHasBeenSet = true; m_criterionKey = std::move(value); }

    /**
     * <p>An enum value representing possible filter fields.</p>  <p>Replace the
     * enum value <code>CLUSTER_NAME</code> with <code>EKS_CLUSTER_NAME</code>.
     * <code>CLUSTER_NAME</code> has been deprecated.</p> 
     */
    inline CoverageFilterCriterion& WithCriterionKey(const CoverageFilterCriterionKey& value) { SetCriterionKey(value); return *this;}

    /**
     * <p>An enum value representing possible filter fields.</p>  <p>Replace the
     * enum value <code>CLUSTER_NAME</code> with <code>EKS_CLUSTER_NAME</code>.
     * <code>CLUSTER_NAME</code> has been deprecated.</p> 
     */
    inline CoverageFilterCriterion& WithCriterionKey(CoverageFilterCriterionKey&& value) { SetCriterionKey(std::move(value)); return *this;}


    /**
     * <p>Contains information about the condition.</p>
     */
    inline const CoverageFilterCondition& GetFilterCondition() const{ return m_filterCondition; }

    /**
     * <p>Contains information about the condition.</p>
     */
    inline bool FilterConditionHasBeenSet() const { return m_filterConditionHasBeenSet; }

    /**
     * <p>Contains information about the condition.</p>
     */
    inline void SetFilterCondition(const CoverageFilterCondition& value) { m_filterConditionHasBeenSet = true; m_filterCondition = value; }

    /**
     * <p>Contains information about the condition.</p>
     */
    inline void SetFilterCondition(CoverageFilterCondition&& value) { m_filterConditionHasBeenSet = true; m_filterCondition = std::move(value); }

    /**
     * <p>Contains information about the condition.</p>
     */
    inline CoverageFilterCriterion& WithFilterCondition(const CoverageFilterCondition& value) { SetFilterCondition(value); return *this;}

    /**
     * <p>Contains information about the condition.</p>
     */
    inline CoverageFilterCriterion& WithFilterCondition(CoverageFilterCondition&& value) { SetFilterCondition(std::move(value)); return *this;}

  private:

    CoverageFilterCriterionKey m_criterionKey;
    bool m_criterionKeyHasBeenSet = false;

    CoverageFilterCondition m_filterCondition;
    bool m_filterConditionHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
