/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/GuardDutyRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/guardduty/model/FindingCriteria.h>
#include <aws/guardduty/model/FindingStatisticType.h>
#include <utility>

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

  /**
   */
  class GetFindingsStatisticsRequest : public GuardDutyRequest
  {
  public:
    AWS_GUARDDUTY_API GetFindingsStatisticsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetFindingsStatistics"; }

    AWS_GUARDDUTY_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the detector that specifies the GuardDuty service whose findings'
     * statistics you want to retrieve.</p>
     */
    inline const Aws::String& GetDetectorId() const{ return m_detectorId; }
    inline bool DetectorIdHasBeenSet() const { return m_detectorIdHasBeenSet; }
    inline void SetDetectorId(const Aws::String& value) { m_detectorIdHasBeenSet = true; m_detectorId = value; }
    inline void SetDetectorId(Aws::String&& value) { m_detectorIdHasBeenSet = true; m_detectorId = std::move(value); }
    inline void SetDetectorId(const char* value) { m_detectorIdHasBeenSet = true; m_detectorId.assign(value); }
    inline GetFindingsStatisticsRequest& WithDetectorId(const Aws::String& value) { SetDetectorId(value); return *this;}
    inline GetFindingsStatisticsRequest& WithDetectorId(Aws::String&& value) { SetDetectorId(std::move(value)); return *this;}
    inline GetFindingsStatisticsRequest& WithDetectorId(const char* value) { SetDetectorId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The types of finding statistics to retrieve.</p>
     */
    inline const Aws::Vector<FindingStatisticType>& GetFindingStatisticTypes() const{ return m_findingStatisticTypes; }
    inline bool FindingStatisticTypesHasBeenSet() const { return m_findingStatisticTypesHasBeenSet; }
    inline void SetFindingStatisticTypes(const Aws::Vector<FindingStatisticType>& value) { m_findingStatisticTypesHasBeenSet = true; m_findingStatisticTypes = value; }
    inline void SetFindingStatisticTypes(Aws::Vector<FindingStatisticType>&& value) { m_findingStatisticTypesHasBeenSet = true; m_findingStatisticTypes = std::move(value); }
    inline GetFindingsStatisticsRequest& WithFindingStatisticTypes(const Aws::Vector<FindingStatisticType>& value) { SetFindingStatisticTypes(value); return *this;}
    inline GetFindingsStatisticsRequest& WithFindingStatisticTypes(Aws::Vector<FindingStatisticType>&& value) { SetFindingStatisticTypes(std::move(value)); return *this;}
    inline GetFindingsStatisticsRequest& AddFindingStatisticTypes(const FindingStatisticType& value) { m_findingStatisticTypesHasBeenSet = true; m_findingStatisticTypes.push_back(value); return *this; }
    inline GetFindingsStatisticsRequest& AddFindingStatisticTypes(FindingStatisticType&& value) { m_findingStatisticTypesHasBeenSet = true; m_findingStatisticTypes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Represents the criteria that is used for querying findings.</p>
     */
    inline const FindingCriteria& GetFindingCriteria() const{ return m_findingCriteria; }
    inline bool FindingCriteriaHasBeenSet() const { return m_findingCriteriaHasBeenSet; }
    inline void SetFindingCriteria(const FindingCriteria& value) { m_findingCriteriaHasBeenSet = true; m_findingCriteria = value; }
    inline void SetFindingCriteria(FindingCriteria&& value) { m_findingCriteriaHasBeenSet = true; m_findingCriteria = std::move(value); }
    inline GetFindingsStatisticsRequest& WithFindingCriteria(const FindingCriteria& value) { SetFindingCriteria(value); return *this;}
    inline GetFindingsStatisticsRequest& WithFindingCriteria(FindingCriteria&& value) { SetFindingCriteria(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_detectorId;
    bool m_detectorIdHasBeenSet = false;

    Aws::Vector<FindingStatisticType> m_findingStatisticTypes;
    bool m_findingStatisticTypesHasBeenSet = false;

    FindingCriteria m_findingCriteria;
    bool m_findingCriteriaHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
