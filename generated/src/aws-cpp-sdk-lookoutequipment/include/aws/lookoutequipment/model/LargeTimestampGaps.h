/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>
#include <aws/lookoutequipment/model/StatisticalIssueStatus.h>
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
namespace LookoutEquipment
{
namespace Model
{

  /**
   * <p> Entity that comprises information on large gaps between consecutive
   * timestamps in data. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/LargeTimestampGaps">AWS
   * API Reference</a></p>
   */
  class LargeTimestampGaps
  {
  public:
    AWS_LOOKOUTEQUIPMENT_API LargeTimestampGaps() = default;
    AWS_LOOKOUTEQUIPMENT_API LargeTimestampGaps(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTEQUIPMENT_API LargeTimestampGaps& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTEQUIPMENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Indicates whether there is a potential data issue related to large gaps in
     * timestamps. </p>
     */
    inline StatisticalIssueStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(StatisticalIssueStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline LargeTimestampGaps& WithStatus(StatisticalIssueStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates the number of large timestamp gaps, if there are any. </p>
     */
    inline int GetNumberOfLargeTimestampGaps() const { return m_numberOfLargeTimestampGaps; }
    inline bool NumberOfLargeTimestampGapsHasBeenSet() const { return m_numberOfLargeTimestampGapsHasBeenSet; }
    inline void SetNumberOfLargeTimestampGaps(int value) { m_numberOfLargeTimestampGapsHasBeenSet = true; m_numberOfLargeTimestampGaps = value; }
    inline LargeTimestampGaps& WithNumberOfLargeTimestampGaps(int value) { SetNumberOfLargeTimestampGaps(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates the size of the largest timestamp gap, in days. </p>
     */
    inline int GetMaxTimestampGapInDays() const { return m_maxTimestampGapInDays; }
    inline bool MaxTimestampGapInDaysHasBeenSet() const { return m_maxTimestampGapInDaysHasBeenSet; }
    inline void SetMaxTimestampGapInDays(int value) { m_maxTimestampGapInDaysHasBeenSet = true; m_maxTimestampGapInDays = value; }
    inline LargeTimestampGaps& WithMaxTimestampGapInDays(int value) { SetMaxTimestampGapInDays(value); return *this;}
    ///@}
  private:

    StatisticalIssueStatus m_status{StatisticalIssueStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    int m_numberOfLargeTimestampGaps{0};
    bool m_numberOfLargeTimestampGapsHasBeenSet = false;

    int m_maxTimestampGapInDays{0};
    bool m_maxTimestampGapInDaysHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
