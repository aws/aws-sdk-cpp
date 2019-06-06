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
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace GuardDuty
{
namespace Model
{

  class AWS_GUARDDUTY_API FindingStatistics
  {
  public:
    FindingStatistics();
    FindingStatistics(Aws::Utils::Json::JsonView jsonValue);
    FindingStatistics& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Represents a map of severity to count statistic for a set of findings</p>
     */
    inline const Aws::Map<Aws::String, int>& GetCountBySeverity() const{ return m_countBySeverity; }

    /**
     * <p>Represents a map of severity to count statistic for a set of findings</p>
     */
    inline bool CountBySeverityHasBeenSet() const { return m_countBySeverityHasBeenSet; }

    /**
     * <p>Represents a map of severity to count statistic for a set of findings</p>
     */
    inline void SetCountBySeverity(const Aws::Map<Aws::String, int>& value) { m_countBySeverityHasBeenSet = true; m_countBySeverity = value; }

    /**
     * <p>Represents a map of severity to count statistic for a set of findings</p>
     */
    inline void SetCountBySeverity(Aws::Map<Aws::String, int>&& value) { m_countBySeverityHasBeenSet = true; m_countBySeverity = std::move(value); }

    /**
     * <p>Represents a map of severity to count statistic for a set of findings</p>
     */
    inline FindingStatistics& WithCountBySeverity(const Aws::Map<Aws::String, int>& value) { SetCountBySeverity(value); return *this;}

    /**
     * <p>Represents a map of severity to count statistic for a set of findings</p>
     */
    inline FindingStatistics& WithCountBySeverity(Aws::Map<Aws::String, int>&& value) { SetCountBySeverity(std::move(value)); return *this;}

    /**
     * <p>Represents a map of severity to count statistic for a set of findings</p>
     */
    inline FindingStatistics& AddCountBySeverity(const Aws::String& key, int value) { m_countBySeverityHasBeenSet = true; m_countBySeverity.emplace(key, value); return *this; }

    /**
     * <p>Represents a map of severity to count statistic for a set of findings</p>
     */
    inline FindingStatistics& AddCountBySeverity(Aws::String&& key, int value) { m_countBySeverityHasBeenSet = true; m_countBySeverity.emplace(std::move(key), value); return *this; }

    /**
     * <p>Represents a map of severity to count statistic for a set of findings</p>
     */
    inline FindingStatistics& AddCountBySeverity(const char* key, int value) { m_countBySeverityHasBeenSet = true; m_countBySeverity.emplace(key, value); return *this; }

  private:

    Aws::Map<Aws::String, int> m_countBySeverity;
    bool m_countBySeverityHasBeenSet;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
