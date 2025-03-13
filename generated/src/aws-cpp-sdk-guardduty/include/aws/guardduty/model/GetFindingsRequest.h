/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/GuardDutyRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/guardduty/model/SortCriteria.h>
#include <utility>

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

  /**
   */
  class GetFindingsRequest : public GuardDutyRequest
  {
  public:
    AWS_GUARDDUTY_API GetFindingsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetFindings"; }

    AWS_GUARDDUTY_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the detector that specifies the GuardDuty service whose findings
     * you want to retrieve.</p> <p>To find the <code>detectorId</code> in the current
     * Region, see the Settings page in the GuardDuty console, or run the <a
     * href="https://docs.aws.amazon.com/guardduty/latest/APIReference/API_ListDetectors.html">ListDetectors</a>
     * API.</p>
     */
    inline const Aws::String& GetDetectorId() const { return m_detectorId; }
    inline bool DetectorIdHasBeenSet() const { return m_detectorIdHasBeenSet; }
    template<typename DetectorIdT = Aws::String>
    void SetDetectorId(DetectorIdT&& value) { m_detectorIdHasBeenSet = true; m_detectorId = std::forward<DetectorIdT>(value); }
    template<typename DetectorIdT = Aws::String>
    GetFindingsRequest& WithDetectorId(DetectorIdT&& value) { SetDetectorId(std::forward<DetectorIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IDs of the findings that you want to retrieve.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFindingIds() const { return m_findingIds; }
    inline bool FindingIdsHasBeenSet() const { return m_findingIdsHasBeenSet; }
    template<typename FindingIdsT = Aws::Vector<Aws::String>>
    void SetFindingIds(FindingIdsT&& value) { m_findingIdsHasBeenSet = true; m_findingIds = std::forward<FindingIdsT>(value); }
    template<typename FindingIdsT = Aws::Vector<Aws::String>>
    GetFindingsRequest& WithFindingIds(FindingIdsT&& value) { SetFindingIds(std::forward<FindingIdsT>(value)); return *this;}
    template<typename FindingIdsT = Aws::String>
    GetFindingsRequest& AddFindingIds(FindingIdsT&& value) { m_findingIdsHasBeenSet = true; m_findingIds.emplace_back(std::forward<FindingIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Represents the criteria used for sorting findings.</p>
     */
    inline const SortCriteria& GetSortCriteria() const { return m_sortCriteria; }
    inline bool SortCriteriaHasBeenSet() const { return m_sortCriteriaHasBeenSet; }
    template<typename SortCriteriaT = SortCriteria>
    void SetSortCriteria(SortCriteriaT&& value) { m_sortCriteriaHasBeenSet = true; m_sortCriteria = std::forward<SortCriteriaT>(value); }
    template<typename SortCriteriaT = SortCriteria>
    GetFindingsRequest& WithSortCriteria(SortCriteriaT&& value) { SetSortCriteria(std::forward<SortCriteriaT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_detectorId;
    bool m_detectorIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_findingIds;
    bool m_findingIdsHasBeenSet = false;

    SortCriteria m_sortCriteria;
    bool m_sortCriteriaHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
