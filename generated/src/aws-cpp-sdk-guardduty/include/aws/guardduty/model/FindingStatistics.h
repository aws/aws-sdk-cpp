/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

  /**
   * <p>Contains information about finding statistics.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/FindingStatistics">AWS
   * API Reference</a></p>
   */
  class FindingStatistics
  {
  public:
    AWS_GUARDDUTY_API FindingStatistics();
    AWS_GUARDDUTY_API FindingStatistics(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API FindingStatistics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Represents a map of severity to count statistics for a set of findings.</p>
     */
    inline const Aws::Map<Aws::String, int>& GetCountBySeverity() const{ return m_countBySeverity; }

    /**
     * <p>Represents a map of severity to count statistics for a set of findings.</p>
     */
    inline bool CountBySeverityHasBeenSet() const { return m_countBySeverityHasBeenSet; }

    /**
     * <p>Represents a map of severity to count statistics for a set of findings.</p>
     */
    inline void SetCountBySeverity(const Aws::Map<Aws::String, int>& value) { m_countBySeverityHasBeenSet = true; m_countBySeverity = value; }

    /**
     * <p>Represents a map of severity to count statistics for a set of findings.</p>
     */
    inline void SetCountBySeverity(Aws::Map<Aws::String, int>&& value) { m_countBySeverityHasBeenSet = true; m_countBySeverity = std::move(value); }

    /**
     * <p>Represents a map of severity to count statistics for a set of findings.</p>
     */
    inline FindingStatistics& WithCountBySeverity(const Aws::Map<Aws::String, int>& value) { SetCountBySeverity(value); return *this;}

    /**
     * <p>Represents a map of severity to count statistics for a set of findings.</p>
     */
    inline FindingStatistics& WithCountBySeverity(Aws::Map<Aws::String, int>&& value) { SetCountBySeverity(std::move(value)); return *this;}

    /**
     * <p>Represents a map of severity to count statistics for a set of findings.</p>
     */
    inline FindingStatistics& AddCountBySeverity(const Aws::String& key, int value) { m_countBySeverityHasBeenSet = true; m_countBySeverity.emplace(key, value); return *this; }

    /**
     * <p>Represents a map of severity to count statistics for a set of findings.</p>
     */
    inline FindingStatistics& AddCountBySeverity(Aws::String&& key, int value) { m_countBySeverityHasBeenSet = true; m_countBySeverity.emplace(std::move(key), value); return *this; }

    /**
     * <p>Represents a map of severity to count statistics for a set of findings.</p>
     */
    inline FindingStatistics& AddCountBySeverity(const char* key, int value) { m_countBySeverityHasBeenSet = true; m_countBySeverity.emplace(key, value); return *this; }

  private:

    Aws::Map<Aws::String, int> m_countBySeverity;
    bool m_countBySeverityHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
