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
    AWS_GUARDDUTY_API UpdateFilterRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateFilter"; }

    AWS_GUARDDUTY_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique ID of the detector that specifies the GuardDuty service where you
     * want to update a filter.</p> <p>To find the <code>detectorId</code> in the
     * current Region, see the Settings page in the GuardDuty console, or run the <a
     * href="https://docs.aws.amazon.com/guardduty/latest/APIReference/API_ListDetectors.html">ListDetectors</a>
     * API.</p>
     */
    inline const Aws::String& GetDetectorId() const { return m_detectorId; }
    inline bool DetectorIdHasBeenSet() const { return m_detectorIdHasBeenSet; }
    template<typename DetectorIdT = Aws::String>
    void SetDetectorId(DetectorIdT&& value) { m_detectorIdHasBeenSet = true; m_detectorId = std::forward<DetectorIdT>(value); }
    template<typename DetectorIdT = Aws::String>
    UpdateFilterRequest& WithDetectorId(DetectorIdT&& value) { SetDetectorId(std::forward<DetectorIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the filter.</p>
     */
    inline const Aws::String& GetFilterName() const { return m_filterName; }
    inline bool FilterNameHasBeenSet() const { return m_filterNameHasBeenSet; }
    template<typename FilterNameT = Aws::String>
    void SetFilterName(FilterNameT&& value) { m_filterNameHasBeenSet = true; m_filterName = std::forward<FilterNameT>(value); }
    template<typename FilterNameT = Aws::String>
    UpdateFilterRequest& WithFilterName(FilterNameT&& value) { SetFilterName(std::forward<FilterNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the filter. Valid characters include alphanumeric
     * characters, and special characters such as hyphen, period, colon, underscore,
     * parentheses (<code>{ }</code>, <code>[ ]</code>, and <code>( )</code>), forward
     * slash, horizontal tab, vertical tab, newline, form feed, return, and
     * whitespace.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateFilterRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the action that is to be applied to the findings that match the
     * filter.</p>
     */
    inline FilterAction GetAction() const { return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(FilterAction value) { m_actionHasBeenSet = true; m_action = value; }
    inline UpdateFilterRequest& WithAction(FilterAction value) { SetAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the position of the filter in the list of current filters. Also
     * specifies the order in which this filter is applied to the findings.</p>
     */
    inline int GetRank() const { return m_rank; }
    inline bool RankHasBeenSet() const { return m_rankHasBeenSet; }
    inline void SetRank(int value) { m_rankHasBeenSet = true; m_rank = value; }
    inline UpdateFilterRequest& WithRank(int value) { SetRank(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the criteria to be used in the filter for querying findings.</p>
     */
    inline const FindingCriteria& GetFindingCriteria() const { return m_findingCriteria; }
    inline bool FindingCriteriaHasBeenSet() const { return m_findingCriteriaHasBeenSet; }
    template<typename FindingCriteriaT = FindingCriteria>
    void SetFindingCriteria(FindingCriteriaT&& value) { m_findingCriteriaHasBeenSet = true; m_findingCriteria = std::forward<FindingCriteriaT>(value); }
    template<typename FindingCriteriaT = FindingCriteria>
    UpdateFilterRequest& WithFindingCriteria(FindingCriteriaT&& value) { SetFindingCriteria(std::forward<FindingCriteriaT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_detectorId;
    bool m_detectorIdHasBeenSet = false;

    Aws::String m_filterName;
    bool m_filterNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    FilterAction m_action{FilterAction::NOT_SET};
    bool m_actionHasBeenSet = false;

    int m_rank{0};
    bool m_rankHasBeenSet = false;

    FindingCriteria m_findingCriteria;
    bool m_findingCriteriaHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
