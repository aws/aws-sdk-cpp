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
#include <aws/guardduty/model/FilterAction.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/model/FindingCriteria.h>
#include <utility>

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

  /**
   * UpdateFilterRequest request body.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/UpdateFilterRequest">AWS
   * API Reference</a></p>
   */
  class AWS_GUARDDUTY_API UpdateFilterRequest : public GuardDutyRequest
  {
  public:
    UpdateFilterRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateFilter"; }

    Aws::String SerializePayload() const override;


    /**
     * Specifies the action that is to be applied to the findings that match the
     * filter.
     */
    inline const FilterAction& GetAction() const{ return m_action; }

    /**
     * Specifies the action that is to be applied to the findings that match the
     * filter.
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * Specifies the action that is to be applied to the findings that match the
     * filter.
     */
    inline void SetAction(const FilterAction& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * Specifies the action that is to be applied to the findings that match the
     * filter.
     */
    inline void SetAction(FilterAction&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * Specifies the action that is to be applied to the findings that match the
     * filter.
     */
    inline UpdateFilterRequest& WithAction(const FilterAction& value) { SetAction(value); return *this;}

    /**
     * Specifies the action that is to be applied to the findings that match the
     * filter.
     */
    inline UpdateFilterRequest& WithAction(FilterAction&& value) { SetAction(std::move(value)); return *this;}


    /**
     * The description of the filter.
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * The description of the filter.
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * The description of the filter.
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * The description of the filter.
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * The description of the filter.
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * The description of the filter.
     */
    inline UpdateFilterRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * The description of the filter.
     */
    inline UpdateFilterRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * The description of the filter.
     */
    inline UpdateFilterRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * The unique ID of the detector that specifies the GuardDuty service where you
     * want to update a filter.
     */
    inline const Aws::String& GetDetectorId() const{ return m_detectorId; }

    /**
     * The unique ID of the detector that specifies the GuardDuty service where you
     * want to update a filter.
     */
    inline bool DetectorIdHasBeenSet() const { return m_detectorIdHasBeenSet; }

    /**
     * The unique ID of the detector that specifies the GuardDuty service where you
     * want to update a filter.
     */
    inline void SetDetectorId(const Aws::String& value) { m_detectorIdHasBeenSet = true; m_detectorId = value; }

    /**
     * The unique ID of the detector that specifies the GuardDuty service where you
     * want to update a filter.
     */
    inline void SetDetectorId(Aws::String&& value) { m_detectorIdHasBeenSet = true; m_detectorId = std::move(value); }

    /**
     * The unique ID of the detector that specifies the GuardDuty service where you
     * want to update a filter.
     */
    inline void SetDetectorId(const char* value) { m_detectorIdHasBeenSet = true; m_detectorId.assign(value); }

    /**
     * The unique ID of the detector that specifies the GuardDuty service where you
     * want to update a filter.
     */
    inline UpdateFilterRequest& WithDetectorId(const Aws::String& value) { SetDetectorId(value); return *this;}

    /**
     * The unique ID of the detector that specifies the GuardDuty service where you
     * want to update a filter.
     */
    inline UpdateFilterRequest& WithDetectorId(Aws::String&& value) { SetDetectorId(std::move(value)); return *this;}

    /**
     * The unique ID of the detector that specifies the GuardDuty service where you
     * want to update a filter.
     */
    inline UpdateFilterRequest& WithDetectorId(const char* value) { SetDetectorId(value); return *this;}


    /**
     * The name of the filter.
     */
    inline const Aws::String& GetFilterName() const{ return m_filterName; }

    /**
     * The name of the filter.
     */
    inline bool FilterNameHasBeenSet() const { return m_filterNameHasBeenSet; }

    /**
     * The name of the filter.
     */
    inline void SetFilterName(const Aws::String& value) { m_filterNameHasBeenSet = true; m_filterName = value; }

    /**
     * The name of the filter.
     */
    inline void SetFilterName(Aws::String&& value) { m_filterNameHasBeenSet = true; m_filterName = std::move(value); }

    /**
     * The name of the filter.
     */
    inline void SetFilterName(const char* value) { m_filterNameHasBeenSet = true; m_filterName.assign(value); }

    /**
     * The name of the filter.
     */
    inline UpdateFilterRequest& WithFilterName(const Aws::String& value) { SetFilterName(value); return *this;}

    /**
     * The name of the filter.
     */
    inline UpdateFilterRequest& WithFilterName(Aws::String&& value) { SetFilterName(std::move(value)); return *this;}

    /**
     * The name of the filter.
     */
    inline UpdateFilterRequest& WithFilterName(const char* value) { SetFilterName(value); return *this;}


    /**
     * Represents the criteria to be used in the filter for querying findings.
     */
    inline const FindingCriteria& GetFindingCriteria() const{ return m_findingCriteria; }

    /**
     * Represents the criteria to be used in the filter for querying findings.
     */
    inline bool FindingCriteriaHasBeenSet() const { return m_findingCriteriaHasBeenSet; }

    /**
     * Represents the criteria to be used in the filter for querying findings.
     */
    inline void SetFindingCriteria(const FindingCriteria& value) { m_findingCriteriaHasBeenSet = true; m_findingCriteria = value; }

    /**
     * Represents the criteria to be used in the filter for querying findings.
     */
    inline void SetFindingCriteria(FindingCriteria&& value) { m_findingCriteriaHasBeenSet = true; m_findingCriteria = std::move(value); }

    /**
     * Represents the criteria to be used in the filter for querying findings.
     */
    inline UpdateFilterRequest& WithFindingCriteria(const FindingCriteria& value) { SetFindingCriteria(value); return *this;}

    /**
     * Represents the criteria to be used in the filter for querying findings.
     */
    inline UpdateFilterRequest& WithFindingCriteria(FindingCriteria&& value) { SetFindingCriteria(std::move(value)); return *this;}


    /**
     * Specifies the position of the filter in the list of current filters. Also
     * specifies the order in which this filter is applied to the findings.
     */
    inline int GetRank() const{ return m_rank; }

    /**
     * Specifies the position of the filter in the list of current filters. Also
     * specifies the order in which this filter is applied to the findings.
     */
    inline bool RankHasBeenSet() const { return m_rankHasBeenSet; }

    /**
     * Specifies the position of the filter in the list of current filters. Also
     * specifies the order in which this filter is applied to the findings.
     */
    inline void SetRank(int value) { m_rankHasBeenSet = true; m_rank = value; }

    /**
     * Specifies the position of the filter in the list of current filters. Also
     * specifies the order in which this filter is applied to the findings.
     */
    inline UpdateFilterRequest& WithRank(int value) { SetRank(value); return *this;}

  private:

    FilterAction m_action;
    bool m_actionHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_detectorId;
    bool m_detectorIdHasBeenSet;

    Aws::String m_filterName;
    bool m_filterNameHasBeenSet;

    FindingCriteria m_findingCriteria;
    bool m_findingCriteriaHasBeenSet;

    int m_rank;
    bool m_rankHasBeenSet;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
