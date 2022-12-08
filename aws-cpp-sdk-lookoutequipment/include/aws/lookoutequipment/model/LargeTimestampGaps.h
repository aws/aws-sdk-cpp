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
    AWS_LOOKOUTEQUIPMENT_API LargeTimestampGaps();
    AWS_LOOKOUTEQUIPMENT_API LargeTimestampGaps(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTEQUIPMENT_API LargeTimestampGaps& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTEQUIPMENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Indicates whether there is a potential data issue related to large gaps in
     * timestamps. </p>
     */
    inline const StatisticalIssueStatus& GetStatus() const{ return m_status; }

    /**
     * <p> Indicates whether there is a potential data issue related to large gaps in
     * timestamps. </p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p> Indicates whether there is a potential data issue related to large gaps in
     * timestamps. </p>
     */
    inline void SetStatus(const StatisticalIssueStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p> Indicates whether there is a potential data issue related to large gaps in
     * timestamps. </p>
     */
    inline void SetStatus(StatisticalIssueStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p> Indicates whether there is a potential data issue related to large gaps in
     * timestamps. </p>
     */
    inline LargeTimestampGaps& WithStatus(const StatisticalIssueStatus& value) { SetStatus(value); return *this;}

    /**
     * <p> Indicates whether there is a potential data issue related to large gaps in
     * timestamps. </p>
     */
    inline LargeTimestampGaps& WithStatus(StatisticalIssueStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p> Indicates the number of large timestamp gaps, if there are any. </p>
     */
    inline int GetNumberOfLargeTimestampGaps() const{ return m_numberOfLargeTimestampGaps; }

    /**
     * <p> Indicates the number of large timestamp gaps, if there are any. </p>
     */
    inline bool NumberOfLargeTimestampGapsHasBeenSet() const { return m_numberOfLargeTimestampGapsHasBeenSet; }

    /**
     * <p> Indicates the number of large timestamp gaps, if there are any. </p>
     */
    inline void SetNumberOfLargeTimestampGaps(int value) { m_numberOfLargeTimestampGapsHasBeenSet = true; m_numberOfLargeTimestampGaps = value; }

    /**
     * <p> Indicates the number of large timestamp gaps, if there are any. </p>
     */
    inline LargeTimestampGaps& WithNumberOfLargeTimestampGaps(int value) { SetNumberOfLargeTimestampGaps(value); return *this;}


    /**
     * <p> Indicates the size of the largest timestamp gap, in days. </p>
     */
    inline int GetMaxTimestampGapInDays() const{ return m_maxTimestampGapInDays; }

    /**
     * <p> Indicates the size of the largest timestamp gap, in days. </p>
     */
    inline bool MaxTimestampGapInDaysHasBeenSet() const { return m_maxTimestampGapInDaysHasBeenSet; }

    /**
     * <p> Indicates the size of the largest timestamp gap, in days. </p>
     */
    inline void SetMaxTimestampGapInDays(int value) { m_maxTimestampGapInDaysHasBeenSet = true; m_maxTimestampGapInDays = value; }

    /**
     * <p> Indicates the size of the largest timestamp gap, in days. </p>
     */
    inline LargeTimestampGaps& WithMaxTimestampGapInDays(int value) { SetMaxTimestampGapInDays(value); return *this;}

  private:

    StatisticalIssueStatus m_status;
    bool m_statusHasBeenSet = false;

    int m_numberOfLargeTimestampGaps;
    bool m_numberOfLargeTimestampGapsHasBeenSet = false;

    int m_maxTimestampGapInDays;
    bool m_maxTimestampGapInDaysHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
