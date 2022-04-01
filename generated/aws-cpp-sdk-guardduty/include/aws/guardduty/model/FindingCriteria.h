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
  class AWS_GUARDDUTY_API FindingCriteria
  {
  public:
    FindingCriteria();
    FindingCriteria(Aws::Utils::Json::JsonView jsonValue);
    FindingCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Represents a map of finding properties that match specified conditions and
     * values when querying findings.</p>
     */
    inline const Aws::Map<Aws::String, Condition>& GetCriterion() const{ return m_criterion; }

    /**
     * <p>Represents a map of finding properties that match specified conditions and
     * values when querying findings.</p>
     */
    inline bool CriterionHasBeenSet() const { return m_criterionHasBeenSet; }

    /**
     * <p>Represents a map of finding properties that match specified conditions and
     * values when querying findings.</p>
     */
    inline void SetCriterion(const Aws::Map<Aws::String, Condition>& value) { m_criterionHasBeenSet = true; m_criterion = value; }

    /**
     * <p>Represents a map of finding properties that match specified conditions and
     * values when querying findings.</p>
     */
    inline void SetCriterion(Aws::Map<Aws::String, Condition>&& value) { m_criterionHasBeenSet = true; m_criterion = std::move(value); }

    /**
     * <p>Represents a map of finding properties that match specified conditions and
     * values when querying findings.</p>
     */
    inline FindingCriteria& WithCriterion(const Aws::Map<Aws::String, Condition>& value) { SetCriterion(value); return *this;}

    /**
     * <p>Represents a map of finding properties that match specified conditions and
     * values when querying findings.</p>
     */
    inline FindingCriteria& WithCriterion(Aws::Map<Aws::String, Condition>&& value) { SetCriterion(std::move(value)); return *this;}

    /**
     * <p>Represents a map of finding properties that match specified conditions and
     * values when querying findings.</p>
     */
    inline FindingCriteria& AddCriterion(const Aws::String& key, const Condition& value) { m_criterionHasBeenSet = true; m_criterion.emplace(key, value); return *this; }

    /**
     * <p>Represents a map of finding properties that match specified conditions and
     * values when querying findings.</p>
     */
    inline FindingCriteria& AddCriterion(Aws::String&& key, const Condition& value) { m_criterionHasBeenSet = true; m_criterion.emplace(std::move(key), value); return *this; }

    /**
     * <p>Represents a map of finding properties that match specified conditions and
     * values when querying findings.</p>
     */
    inline FindingCriteria& AddCriterion(const Aws::String& key, Condition&& value) { m_criterionHasBeenSet = true; m_criterion.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Represents a map of finding properties that match specified conditions and
     * values when querying findings.</p>
     */
    inline FindingCriteria& AddCriterion(Aws::String&& key, Condition&& value) { m_criterionHasBeenSet = true; m_criterion.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Represents a map of finding properties that match specified conditions and
     * values when querying findings.</p>
     */
    inline FindingCriteria& AddCriterion(const char* key, Condition&& value) { m_criterionHasBeenSet = true; m_criterion.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Represents a map of finding properties that match specified conditions and
     * values when querying findings.</p>
     */
    inline FindingCriteria& AddCriterion(const char* key, const Condition& value) { m_criterionHasBeenSet = true; m_criterion.emplace(key, value); return *this; }

  private:

    Aws::Map<Aws::String, Condition> m_criterion;
    bool m_criterionHasBeenSet;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
