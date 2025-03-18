/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/model/Condition.h>
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
   * <p>Contains information about the criteria used for querying
   * findings.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/FindingCriteria">AWS
   * API Reference</a></p>
   */
  class FindingCriteria
  {
  public:
    AWS_GUARDDUTY_API FindingCriteria() = default;
    AWS_GUARDDUTY_API FindingCriteria(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API FindingCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Represents a map of finding properties that match specified conditions and
     * values when querying findings.</p>
     */
    inline const Aws::Map<Aws::String, Condition>& GetCriterion() const { return m_criterion; }
    inline bool CriterionHasBeenSet() const { return m_criterionHasBeenSet; }
    template<typename CriterionT = Aws::Map<Aws::String, Condition>>
    void SetCriterion(CriterionT&& value) { m_criterionHasBeenSet = true; m_criterion = std::forward<CriterionT>(value); }
    template<typename CriterionT = Aws::Map<Aws::String, Condition>>
    FindingCriteria& WithCriterion(CriterionT&& value) { SetCriterion(std::forward<CriterionT>(value)); return *this;}
    template<typename CriterionKeyT = Aws::String, typename CriterionValueT = Condition>
    FindingCriteria& AddCriterion(CriterionKeyT&& key, CriterionValueT&& value) {
      m_criterionHasBeenSet = true; m_criterion.emplace(std::forward<CriterionKeyT>(key), std::forward<CriterionValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::Map<Aws::String, Condition> m_criterion;
    bool m_criterionHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
