﻿/*
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
   * Represents the criteria used for querying findings.<p><h3>See Also:</h3>   <a
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
     * Represents a map of finding properties that match specified conditions and
     * values when querying findings.
     */
    inline const Aws::Map<Aws::String, Condition>& GetCriterion() const{ return m_criterion; }

    /**
     * Represents a map of finding properties that match specified conditions and
     * values when querying findings.
     */
    inline void SetCriterion(const Aws::Map<Aws::String, Condition>& value) { m_criterionHasBeenSet = true; m_criterion = value; }

    /**
     * Represents a map of finding properties that match specified conditions and
     * values when querying findings.
     */
    inline void SetCriterion(Aws::Map<Aws::String, Condition>&& value) { m_criterionHasBeenSet = true; m_criterion = std::move(value); }

    /**
     * Represents a map of finding properties that match specified conditions and
     * values when querying findings.
     */
    inline FindingCriteria& WithCriterion(const Aws::Map<Aws::String, Condition>& value) { SetCriterion(value); return *this;}

    /**
     * Represents a map of finding properties that match specified conditions and
     * values when querying findings.
     */
    inline FindingCriteria& WithCriterion(Aws::Map<Aws::String, Condition>&& value) { SetCriterion(std::move(value)); return *this;}

    /**
     * Represents a map of finding properties that match specified conditions and
     * values when querying findings.
     */
    inline FindingCriteria& AddCriterion(const Aws::String& key, const Condition& value) { m_criterionHasBeenSet = true; m_criterion.emplace(key, value); return *this; }

    /**
     * Represents a map of finding properties that match specified conditions and
     * values when querying findings.
     */
    inline FindingCriteria& AddCriterion(Aws::String&& key, const Condition& value) { m_criterionHasBeenSet = true; m_criterion.emplace(std::move(key), value); return *this; }

    /**
     * Represents a map of finding properties that match specified conditions and
     * values when querying findings.
     */
    inline FindingCriteria& AddCriterion(const Aws::String& key, Condition&& value) { m_criterionHasBeenSet = true; m_criterion.emplace(key, std::move(value)); return *this; }

    /**
     * Represents a map of finding properties that match specified conditions and
     * values when querying findings.
     */
    inline FindingCriteria& AddCriterion(Aws::String&& key, Condition&& value) { m_criterionHasBeenSet = true; m_criterion.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * Represents a map of finding properties that match specified conditions and
     * values when querying findings.
     */
    inline FindingCriteria& AddCriterion(const char* key, Condition&& value) { m_criterionHasBeenSet = true; m_criterion.emplace(key, std::move(value)); return *this; }

    /**
     * Represents a map of finding properties that match specified conditions and
     * values when querying findings.
     */
    inline FindingCriteria& AddCriterion(const char* key, const Condition& value) { m_criterionHasBeenSet = true; m_criterion.emplace(key, value); return *this; }

  private:

    Aws::Map<Aws::String, Condition> m_criterion;
    bool m_criterionHasBeenSet;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
