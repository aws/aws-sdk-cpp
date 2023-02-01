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
    AWS_GUARDDUTY_API GetFindingsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetFindings"; }

    AWS_GUARDDUTY_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the detector that specifies the GuardDuty service whose findings
     * you want to retrieve.</p>
     */
    inline const Aws::String& GetDetectorId() const{ return m_detectorId; }

    /**
     * <p>The ID of the detector that specifies the GuardDuty service whose findings
     * you want to retrieve.</p>
     */
    inline bool DetectorIdHasBeenSet() const { return m_detectorIdHasBeenSet; }

    /**
     * <p>The ID of the detector that specifies the GuardDuty service whose findings
     * you want to retrieve.</p>
     */
    inline void SetDetectorId(const Aws::String& value) { m_detectorIdHasBeenSet = true; m_detectorId = value; }

    /**
     * <p>The ID of the detector that specifies the GuardDuty service whose findings
     * you want to retrieve.</p>
     */
    inline void SetDetectorId(Aws::String&& value) { m_detectorIdHasBeenSet = true; m_detectorId = std::move(value); }

    /**
     * <p>The ID of the detector that specifies the GuardDuty service whose findings
     * you want to retrieve.</p>
     */
    inline void SetDetectorId(const char* value) { m_detectorIdHasBeenSet = true; m_detectorId.assign(value); }

    /**
     * <p>The ID of the detector that specifies the GuardDuty service whose findings
     * you want to retrieve.</p>
     */
    inline GetFindingsRequest& WithDetectorId(const Aws::String& value) { SetDetectorId(value); return *this;}

    /**
     * <p>The ID of the detector that specifies the GuardDuty service whose findings
     * you want to retrieve.</p>
     */
    inline GetFindingsRequest& WithDetectorId(Aws::String&& value) { SetDetectorId(std::move(value)); return *this;}

    /**
     * <p>The ID of the detector that specifies the GuardDuty service whose findings
     * you want to retrieve.</p>
     */
    inline GetFindingsRequest& WithDetectorId(const char* value) { SetDetectorId(value); return *this;}


    /**
     * <p>The IDs of the findings that you want to retrieve.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFindingIds() const{ return m_findingIds; }

    /**
     * <p>The IDs of the findings that you want to retrieve.</p>
     */
    inline bool FindingIdsHasBeenSet() const { return m_findingIdsHasBeenSet; }

    /**
     * <p>The IDs of the findings that you want to retrieve.</p>
     */
    inline void SetFindingIds(const Aws::Vector<Aws::String>& value) { m_findingIdsHasBeenSet = true; m_findingIds = value; }

    /**
     * <p>The IDs of the findings that you want to retrieve.</p>
     */
    inline void SetFindingIds(Aws::Vector<Aws::String>&& value) { m_findingIdsHasBeenSet = true; m_findingIds = std::move(value); }

    /**
     * <p>The IDs of the findings that you want to retrieve.</p>
     */
    inline GetFindingsRequest& WithFindingIds(const Aws::Vector<Aws::String>& value) { SetFindingIds(value); return *this;}

    /**
     * <p>The IDs of the findings that you want to retrieve.</p>
     */
    inline GetFindingsRequest& WithFindingIds(Aws::Vector<Aws::String>&& value) { SetFindingIds(std::move(value)); return *this;}

    /**
     * <p>The IDs of the findings that you want to retrieve.</p>
     */
    inline GetFindingsRequest& AddFindingIds(const Aws::String& value) { m_findingIdsHasBeenSet = true; m_findingIds.push_back(value); return *this; }

    /**
     * <p>The IDs of the findings that you want to retrieve.</p>
     */
    inline GetFindingsRequest& AddFindingIds(Aws::String&& value) { m_findingIdsHasBeenSet = true; m_findingIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of the findings that you want to retrieve.</p>
     */
    inline GetFindingsRequest& AddFindingIds(const char* value) { m_findingIdsHasBeenSet = true; m_findingIds.push_back(value); return *this; }


    /**
     * <p>Represents the criteria used for sorting findings.</p>
     */
    inline const SortCriteria& GetSortCriteria() const{ return m_sortCriteria; }

    /**
     * <p>Represents the criteria used for sorting findings.</p>
     */
    inline bool SortCriteriaHasBeenSet() const { return m_sortCriteriaHasBeenSet; }

    /**
     * <p>Represents the criteria used for sorting findings.</p>
     */
    inline void SetSortCriteria(const SortCriteria& value) { m_sortCriteriaHasBeenSet = true; m_sortCriteria = value; }

    /**
     * <p>Represents the criteria used for sorting findings.</p>
     */
    inline void SetSortCriteria(SortCriteria&& value) { m_sortCriteriaHasBeenSet = true; m_sortCriteria = std::move(value); }

    /**
     * <p>Represents the criteria used for sorting findings.</p>
     */
    inline GetFindingsRequest& WithSortCriteria(const SortCriteria& value) { SetSortCriteria(value); return *this;}

    /**
     * <p>Represents the criteria used for sorting findings.</p>
     */
    inline GetFindingsRequest& WithSortCriteria(SortCriteria&& value) { SetSortCriteria(std::move(value)); return *this;}

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
