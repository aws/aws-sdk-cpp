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
  class AWS_GUARDDUTY_API GetFindingsStatisticsRequest : public GuardDutyRequest
  {
  public:
    GetFindingsStatisticsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetFindingsStatistics"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the detector that specifies the GuardDuty service whose findings'
     * statistics you want to retrieve.</p>
     */
    inline const Aws::String& GetDetectorId() const{ return m_detectorId; }

    /**
     * <p>The ID of the detector that specifies the GuardDuty service whose findings'
     * statistics you want to retrieve.</p>
     */
    inline bool DetectorIdHasBeenSet() const { return m_detectorIdHasBeenSet; }

    /**
     * <p>The ID of the detector that specifies the GuardDuty service whose findings'
     * statistics you want to retrieve.</p>
     */
    inline void SetDetectorId(const Aws::String& value) { m_detectorIdHasBeenSet = true; m_detectorId = value; }

    /**
     * <p>The ID of the detector that specifies the GuardDuty service whose findings'
     * statistics you want to retrieve.</p>
     */
    inline void SetDetectorId(Aws::String&& value) { m_detectorIdHasBeenSet = true; m_detectorId = std::move(value); }

    /**
     * <p>The ID of the detector that specifies the GuardDuty service whose findings'
     * statistics you want to retrieve.</p>
     */
    inline void SetDetectorId(const char* value) { m_detectorIdHasBeenSet = true; m_detectorId.assign(value); }

    /**
     * <p>The ID of the detector that specifies the GuardDuty service whose findings'
     * statistics you want to retrieve.</p>
     */
    inline GetFindingsStatisticsRequest& WithDetectorId(const Aws::String& value) { SetDetectorId(value); return *this;}

    /**
     * <p>The ID of the detector that specifies the GuardDuty service whose findings'
     * statistics you want to retrieve.</p>
     */
    inline GetFindingsStatisticsRequest& WithDetectorId(Aws::String&& value) { SetDetectorId(std::move(value)); return *this;}

    /**
     * <p>The ID of the detector that specifies the GuardDuty service whose findings'
     * statistics you want to retrieve.</p>
     */
    inline GetFindingsStatisticsRequest& WithDetectorId(const char* value) { SetDetectorId(value); return *this;}


    /**
     * <p>Types of finding statistics to retrieve.</p>
     */
    inline const Aws::Vector<FindingStatisticType>& GetFindingStatisticTypes() const{ return m_findingStatisticTypes; }

    /**
     * <p>Types of finding statistics to retrieve.</p>
     */
    inline bool FindingStatisticTypesHasBeenSet() const { return m_findingStatisticTypesHasBeenSet; }

    /**
     * <p>Types of finding statistics to retrieve.</p>
     */
    inline void SetFindingStatisticTypes(const Aws::Vector<FindingStatisticType>& value) { m_findingStatisticTypesHasBeenSet = true; m_findingStatisticTypes = value; }

    /**
     * <p>Types of finding statistics to retrieve.</p>
     */
    inline void SetFindingStatisticTypes(Aws::Vector<FindingStatisticType>&& value) { m_findingStatisticTypesHasBeenSet = true; m_findingStatisticTypes = std::move(value); }

    /**
     * <p>Types of finding statistics to retrieve.</p>
     */
    inline GetFindingsStatisticsRequest& WithFindingStatisticTypes(const Aws::Vector<FindingStatisticType>& value) { SetFindingStatisticTypes(value); return *this;}

    /**
     * <p>Types of finding statistics to retrieve.</p>
     */
    inline GetFindingsStatisticsRequest& WithFindingStatisticTypes(Aws::Vector<FindingStatisticType>&& value) { SetFindingStatisticTypes(std::move(value)); return *this;}

    /**
     * <p>Types of finding statistics to retrieve.</p>
     */
    inline GetFindingsStatisticsRequest& AddFindingStatisticTypes(const FindingStatisticType& value) { m_findingStatisticTypesHasBeenSet = true; m_findingStatisticTypes.push_back(value); return *this; }

    /**
     * <p>Types of finding statistics to retrieve.</p>
     */
    inline GetFindingsStatisticsRequest& AddFindingStatisticTypes(FindingStatisticType&& value) { m_findingStatisticTypesHasBeenSet = true; m_findingStatisticTypes.push_back(std::move(value)); return *this; }


    /**
     * <p>Represents the criteria used for querying findings.</p>
     */
    inline const FindingCriteria& GetFindingCriteria() const{ return m_findingCriteria; }

    /**
     * <p>Represents the criteria used for querying findings.</p>
     */
    inline bool FindingCriteriaHasBeenSet() const { return m_findingCriteriaHasBeenSet; }

    /**
     * <p>Represents the criteria used for querying findings.</p>
     */
    inline void SetFindingCriteria(const FindingCriteria& value) { m_findingCriteriaHasBeenSet = true; m_findingCriteria = value; }

    /**
     * <p>Represents the criteria used for querying findings.</p>
     */
    inline void SetFindingCriteria(FindingCriteria&& value) { m_findingCriteriaHasBeenSet = true; m_findingCriteria = std::move(value); }

    /**
     * <p>Represents the criteria used for querying findings.</p>
     */
    inline GetFindingsStatisticsRequest& WithFindingCriteria(const FindingCriteria& value) { SetFindingCriteria(value); return *this;}

    /**
     * <p>Represents the criteria used for querying findings.</p>
     */
    inline GetFindingsStatisticsRequest& WithFindingCriteria(FindingCriteria&& value) { SetFindingCriteria(std::move(value)); return *this;}

  private:

    Aws::String m_detectorId;
    bool m_detectorIdHasBeenSet;

    Aws::Vector<FindingStatisticType> m_findingStatisticTypes;
    bool m_findingStatisticTypesHasBeenSet;

    FindingCriteria m_findingCriteria;
    bool m_findingCriteriaHasBeenSet;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
