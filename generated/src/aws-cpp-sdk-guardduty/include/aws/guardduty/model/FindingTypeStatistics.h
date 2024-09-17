/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>Information about each finding type associated with the
   * <code>groupedByFindingType</code> statistics.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/FindingTypeStatistics">AWS
   * API Reference</a></p>
   */
  class FindingTypeStatistics
  {
  public:
    AWS_GUARDDUTY_API FindingTypeStatistics();
    AWS_GUARDDUTY_API FindingTypeStatistics(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API FindingTypeStatistics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Name of the finding type.</p>
     */
    inline const Aws::String& GetFindingType() const{ return m_findingType; }
    inline bool FindingTypeHasBeenSet() const { return m_findingTypeHasBeenSet; }
    inline void SetFindingType(const Aws::String& value) { m_findingTypeHasBeenSet = true; m_findingType = value; }
    inline void SetFindingType(Aws::String&& value) { m_findingTypeHasBeenSet = true; m_findingType = std::move(value); }
    inline void SetFindingType(const char* value) { m_findingTypeHasBeenSet = true; m_findingType.assign(value); }
    inline FindingTypeStatistics& WithFindingType(const Aws::String& value) { SetFindingType(value); return *this;}
    inline FindingTypeStatistics& WithFindingType(Aws::String&& value) { SetFindingType(std::move(value)); return *this;}
    inline FindingTypeStatistics& WithFindingType(const char* value) { SetFindingType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp at which this finding type was last generated in your
     * environment.</p>
     */
    inline const Aws::Utils::DateTime& GetLastGeneratedAt() const{ return m_lastGeneratedAt; }
    inline bool LastGeneratedAtHasBeenSet() const { return m_lastGeneratedAtHasBeenSet; }
    inline void SetLastGeneratedAt(const Aws::Utils::DateTime& value) { m_lastGeneratedAtHasBeenSet = true; m_lastGeneratedAt = value; }
    inline void SetLastGeneratedAt(Aws::Utils::DateTime&& value) { m_lastGeneratedAtHasBeenSet = true; m_lastGeneratedAt = std::move(value); }
    inline FindingTypeStatistics& WithLastGeneratedAt(const Aws::Utils::DateTime& value) { SetLastGeneratedAt(value); return *this;}
    inline FindingTypeStatistics& WithLastGeneratedAt(Aws::Utils::DateTime&& value) { SetLastGeneratedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of findings associated with generated for each distinct
     * finding type.</p>
     */
    inline int GetTotalFindings() const{ return m_totalFindings; }
    inline bool TotalFindingsHasBeenSet() const { return m_totalFindingsHasBeenSet; }
    inline void SetTotalFindings(int value) { m_totalFindingsHasBeenSet = true; m_totalFindings = value; }
    inline FindingTypeStatistics& WithTotalFindings(int value) { SetTotalFindings(value); return *this;}
    ///@}
  private:

    Aws::String m_findingType;
    bool m_findingTypeHasBeenSet = false;

    Aws::Utils::DateTime m_lastGeneratedAt;
    bool m_lastGeneratedAtHasBeenSet = false;

    int m_totalFindings;
    bool m_totalFindingsHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
