/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/GuardDutyRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/model/FilterAction.h>
#include <aws/guardduty/model/FindingCriteria.h>
#include <utility>

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

  /**
   */
  class UpdateFilterRequest : public GuardDutyRequest
  {
  public:
    AWS_GUARDDUTY_API UpdateFilterRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateFilter"; }

    AWS_GUARDDUTY_API Aws::String SerializePayload() const override;


    /**
     * <p>The unique ID of the detector that specifies the GuardDuty service where you
     * want to update a filter.</p>
     */
    inline const Aws::String& GetDetectorId() const{ return m_detectorId; }

    /**
     * <p>The unique ID of the detector that specifies the GuardDuty service where you
     * want to update a filter.</p>
     */
    inline bool DetectorIdHasBeenSet() const { return m_detectorIdHasBeenSet; }

    /**
     * <p>The unique ID of the detector that specifies the GuardDuty service where you
     * want to update a filter.</p>
     */
    inline void SetDetectorId(const Aws::String& value) { m_detectorIdHasBeenSet = true; m_detectorId = value; }

    /**
     * <p>The unique ID of the detector that specifies the GuardDuty service where you
     * want to update a filter.</p>
     */
    inline void SetDetectorId(Aws::String&& value) { m_detectorIdHasBeenSet = true; m_detectorId = std::move(value); }

    /**
     * <p>The unique ID of the detector that specifies the GuardDuty service where you
     * want to update a filter.</p>
     */
    inline void SetDetectorId(const char* value) { m_detectorIdHasBeenSet = true; m_detectorId.assign(value); }

    /**
     * <p>The unique ID of the detector that specifies the GuardDuty service where you
     * want to update a filter.</p>
     */
    inline UpdateFilterRequest& WithDetectorId(const Aws::String& value) { SetDetectorId(value); return *this;}

    /**
     * <p>The unique ID of the detector that specifies the GuardDuty service where you
     * want to update a filter.</p>
     */
    inline UpdateFilterRequest& WithDetectorId(Aws::String&& value) { SetDetectorId(std::move(value)); return *this;}

    /**
     * <p>The unique ID of the detector that specifies the GuardDuty service where you
     * want to update a filter.</p>
     */
    inline UpdateFilterRequest& WithDetectorId(const char* value) { SetDetectorId(value); return *this;}


    /**
     * <p>The name of the filter.</p>
     */
    inline const Aws::String& GetFilterName() const{ return m_filterName; }

    /**
     * <p>The name of the filter.</p>
     */
    inline bool FilterNameHasBeenSet() const { return m_filterNameHasBeenSet; }

    /**
     * <p>The name of the filter.</p>
     */
    inline void SetFilterName(const Aws::String& value) { m_filterNameHasBeenSet = true; m_filterName = value; }

    /**
     * <p>The name of the filter.</p>
     */
    inline void SetFilterName(Aws::String&& value) { m_filterNameHasBeenSet = true; m_filterName = std::move(value); }

    /**
     * <p>The name of the filter.</p>
     */
    inline void SetFilterName(const char* value) { m_filterNameHasBeenSet = true; m_filterName.assign(value); }

    /**
     * <p>The name of the filter.</p>
     */
    inline UpdateFilterRequest& WithFilterName(const Aws::String& value) { SetFilterName(value); return *this;}

    /**
     * <p>The name of the filter.</p>
     */
    inline UpdateFilterRequest& WithFilterName(Aws::String&& value) { SetFilterName(std::move(value)); return *this;}

    /**
     * <p>The name of the filter.</p>
     */
    inline UpdateFilterRequest& WithFilterName(const char* value) { SetFilterName(value); return *this;}


    /**
     * <p>The description of the filter. Valid special characters include period (.),
     * underscore (_), dash (-), and whitespace. The new line character is considered
     * to be an invalid input for description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the filter. Valid special characters include period (.),
     * underscore (_), dash (-), and whitespace. The new line character is considered
     * to be an invalid input for description.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the filter. Valid special characters include period (.),
     * underscore (_), dash (-), and whitespace. The new line character is considered
     * to be an invalid input for description.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the filter. Valid special characters include period (.),
     * underscore (_), dash (-), and whitespace. The new line character is considered
     * to be an invalid input for description.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the filter. Valid special characters include period (.),
     * underscore (_), dash (-), and whitespace. The new line character is considered
     * to be an invalid input for description.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the filter. Valid special characters include period (.),
     * underscore (_), dash (-), and whitespace. The new line character is considered
     * to be an invalid input for description.</p>
     */
    inline UpdateFilterRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the filter. Valid special characters include period (.),
     * underscore (_), dash (-), and whitespace. The new line character is considered
     * to be an invalid input for description.</p>
     */
    inline UpdateFilterRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the filter. Valid special characters include period (.),
     * underscore (_), dash (-), and whitespace. The new line character is considered
     * to be an invalid input for description.</p>
     */
    inline UpdateFilterRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Specifies the action that is to be applied to the findings that match the
     * filter.</p>
     */
    inline const FilterAction& GetAction() const{ return m_action; }

    /**
     * <p>Specifies the action that is to be applied to the findings that match the
     * filter.</p>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p>Specifies the action that is to be applied to the findings that match the
     * filter.</p>
     */
    inline void SetAction(const FilterAction& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>Specifies the action that is to be applied to the findings that match the
     * filter.</p>
     */
    inline void SetAction(FilterAction&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>Specifies the action that is to be applied to the findings that match the
     * filter.</p>
     */
    inline UpdateFilterRequest& WithAction(const FilterAction& value) { SetAction(value); return *this;}

    /**
     * <p>Specifies the action that is to be applied to the findings that match the
     * filter.</p>
     */
    inline UpdateFilterRequest& WithAction(FilterAction&& value) { SetAction(std::move(value)); return *this;}


    /**
     * <p>Specifies the position of the filter in the list of current filters. Also
     * specifies the order in which this filter is applied to the findings.</p>
     */
    inline int GetRank() const{ return m_rank; }

    /**
     * <p>Specifies the position of the filter in the list of current filters. Also
     * specifies the order in which this filter is applied to the findings.</p>
     */
    inline bool RankHasBeenSet() const { return m_rankHasBeenSet; }

    /**
     * <p>Specifies the position of the filter in the list of current filters. Also
     * specifies the order in which this filter is applied to the findings.</p>
     */
    inline void SetRank(int value) { m_rankHasBeenSet = true; m_rank = value; }

    /**
     * <p>Specifies the position of the filter in the list of current filters. Also
     * specifies the order in which this filter is applied to the findings.</p>
     */
    inline UpdateFilterRequest& WithRank(int value) { SetRank(value); return *this;}


    /**
     * <p>Represents the criteria to be used in the filter for querying findings.</p>
     */
    inline const FindingCriteria& GetFindingCriteria() const{ return m_findingCriteria; }

    /**
     * <p>Represents the criteria to be used in the filter for querying findings.</p>
     */
    inline bool FindingCriteriaHasBeenSet() const { return m_findingCriteriaHasBeenSet; }

    /**
     * <p>Represents the criteria to be used in the filter for querying findings.</p>
     */
    inline void SetFindingCriteria(const FindingCriteria& value) { m_findingCriteriaHasBeenSet = true; m_findingCriteria = value; }

    /**
     * <p>Represents the criteria to be used in the filter for querying findings.</p>
     */
    inline void SetFindingCriteria(FindingCriteria&& value) { m_findingCriteriaHasBeenSet = true; m_findingCriteria = std::move(value); }

    /**
     * <p>Represents the criteria to be used in the filter for querying findings.</p>
     */
    inline UpdateFilterRequest& WithFindingCriteria(const FindingCriteria& value) { SetFindingCriteria(value); return *this;}

    /**
     * <p>Represents the criteria to be used in the filter for querying findings.</p>
     */
    inline UpdateFilterRequest& WithFindingCriteria(FindingCriteria&& value) { SetFindingCriteria(std::move(value)); return *this;}

  private:

    Aws::String m_detectorId;
    bool m_detectorIdHasBeenSet = false;

    Aws::String m_filterName;
    bool m_filterNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    FilterAction m_action;
    bool m_actionHasBeenSet = false;

    int m_rank;
    bool m_rankHasBeenSet = false;

    FindingCriteria m_findingCriteria;
    bool m_findingCriteriaHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
