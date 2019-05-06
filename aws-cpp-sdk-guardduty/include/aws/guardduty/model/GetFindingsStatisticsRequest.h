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
#include <aws/guardduty/model/FindingCriteria.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/guardduty/model/FindingStatisticType.h>
#include <utility>

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

  /**
   * GetFindingsStatistics request body.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/GetFindingsStatisticsRequest">AWS
   * API Reference</a></p>
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
     * The ID of the detector that specifies the GuardDuty service whose findings'
     * statistics you want to retrieve.
     */
    inline const Aws::String& GetDetectorId() const{ return m_detectorId; }

    /**
     * The ID of the detector that specifies the GuardDuty service whose findings'
     * statistics you want to retrieve.
     */
    inline bool DetectorIdHasBeenSet() const { return m_detectorIdHasBeenSet; }

    /**
     * The ID of the detector that specifies the GuardDuty service whose findings'
     * statistics you want to retrieve.
     */
    inline void SetDetectorId(const Aws::String& value) { m_detectorIdHasBeenSet = true; m_detectorId = value; }

    /**
     * The ID of the detector that specifies the GuardDuty service whose findings'
     * statistics you want to retrieve.
     */
    inline void SetDetectorId(Aws::String&& value) { m_detectorIdHasBeenSet = true; m_detectorId = std::move(value); }

    /**
     * The ID of the detector that specifies the GuardDuty service whose findings'
     * statistics you want to retrieve.
     */
    inline void SetDetectorId(const char* value) { m_detectorIdHasBeenSet = true; m_detectorId.assign(value); }

    /**
     * The ID of the detector that specifies the GuardDuty service whose findings'
     * statistics you want to retrieve.
     */
    inline GetFindingsStatisticsRequest& WithDetectorId(const Aws::String& value) { SetDetectorId(value); return *this;}

    /**
     * The ID of the detector that specifies the GuardDuty service whose findings'
     * statistics you want to retrieve.
     */
    inline GetFindingsStatisticsRequest& WithDetectorId(Aws::String&& value) { SetDetectorId(std::move(value)); return *this;}

    /**
     * The ID of the detector that specifies the GuardDuty service whose findings'
     * statistics you want to retrieve.
     */
    inline GetFindingsStatisticsRequest& WithDetectorId(const char* value) { SetDetectorId(value); return *this;}


    /**
     * Represents the criteria used for querying findings.
     */
    inline const FindingCriteria& GetFindingCriteria() const{ return m_findingCriteria; }

    /**
     * Represents the criteria used for querying findings.
     */
    inline bool FindingCriteriaHasBeenSet() const { return m_findingCriteriaHasBeenSet; }

    /**
     * Represents the criteria used for querying findings.
     */
    inline void SetFindingCriteria(const FindingCriteria& value) { m_findingCriteriaHasBeenSet = true; m_findingCriteria = value; }

    /**
     * Represents the criteria used for querying findings.
     */
    inline void SetFindingCriteria(FindingCriteria&& value) { m_findingCriteriaHasBeenSet = true; m_findingCriteria = std::move(value); }

    /**
     * Represents the criteria used for querying findings.
     */
    inline GetFindingsStatisticsRequest& WithFindingCriteria(const FindingCriteria& value) { SetFindingCriteria(value); return *this;}

    /**
     * Represents the criteria used for querying findings.
     */
    inline GetFindingsStatisticsRequest& WithFindingCriteria(FindingCriteria&& value) { SetFindingCriteria(std::move(value)); return *this;}


    /**
     * Types of finding statistics to retrieve.
     */
    inline const Aws::Vector<FindingStatisticType>& GetFindingStatisticTypes() const{ return m_findingStatisticTypes; }

    /**
     * Types of finding statistics to retrieve.
     */
    inline bool FindingStatisticTypesHasBeenSet() const { return m_findingStatisticTypesHasBeenSet; }

    /**
     * Types of finding statistics to retrieve.
     */
    inline void SetFindingStatisticTypes(const Aws::Vector<FindingStatisticType>& value) { m_findingStatisticTypesHasBeenSet = true; m_findingStatisticTypes = value; }

    /**
     * Types of finding statistics to retrieve.
     */
    inline void SetFindingStatisticTypes(Aws::Vector<FindingStatisticType>&& value) { m_findingStatisticTypesHasBeenSet = true; m_findingStatisticTypes = std::move(value); }

    /**
     * Types of finding statistics to retrieve.
     */
    inline GetFindingsStatisticsRequest& WithFindingStatisticTypes(const Aws::Vector<FindingStatisticType>& value) { SetFindingStatisticTypes(value); return *this;}

    /**
     * Types of finding statistics to retrieve.
     */
    inline GetFindingsStatisticsRequest& WithFindingStatisticTypes(Aws::Vector<FindingStatisticType>&& value) { SetFindingStatisticTypes(std::move(value)); return *this;}

    /**
     * Types of finding statistics to retrieve.
     */
    inline GetFindingsStatisticsRequest& AddFindingStatisticTypes(const FindingStatisticType& value) { m_findingStatisticTypesHasBeenSet = true; m_findingStatisticTypes.push_back(value); return *this; }

    /**
     * Types of finding statistics to retrieve.
     */
    inline GetFindingsStatisticsRequest& AddFindingStatisticTypes(FindingStatisticType&& value) { m_findingStatisticTypesHasBeenSet = true; m_findingStatisticTypes.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_detectorId;
    bool m_detectorIdHasBeenSet;

    FindingCriteria m_findingCriteria;
    bool m_findingCriteriaHasBeenSet;

    Aws::Vector<FindingStatisticType> m_findingStatisticTypes;
    bool m_findingStatisticTypesHasBeenSet;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
