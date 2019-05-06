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
#include <utility>

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

  /**
   * ArchiveFindings request body.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ArchiveFindingsRequest">AWS
   * API Reference</a></p>
   */
  class AWS_GUARDDUTY_API ArchiveFindingsRequest : public GuardDutyRequest
  {
  public:
    ArchiveFindingsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ArchiveFindings"; }

    Aws::String SerializePayload() const override;


    /**
     * The ID of the detector that specifies the GuardDuty service whose findings you
     * want to archive.
     */
    inline const Aws::String& GetDetectorId() const{ return m_detectorId; }

    /**
     * The ID of the detector that specifies the GuardDuty service whose findings you
     * want to archive.
     */
    inline bool DetectorIdHasBeenSet() const { return m_detectorIdHasBeenSet; }

    /**
     * The ID of the detector that specifies the GuardDuty service whose findings you
     * want to archive.
     */
    inline void SetDetectorId(const Aws::String& value) { m_detectorIdHasBeenSet = true; m_detectorId = value; }

    /**
     * The ID of the detector that specifies the GuardDuty service whose findings you
     * want to archive.
     */
    inline void SetDetectorId(Aws::String&& value) { m_detectorIdHasBeenSet = true; m_detectorId = std::move(value); }

    /**
     * The ID of the detector that specifies the GuardDuty service whose findings you
     * want to archive.
     */
    inline void SetDetectorId(const char* value) { m_detectorIdHasBeenSet = true; m_detectorId.assign(value); }

    /**
     * The ID of the detector that specifies the GuardDuty service whose findings you
     * want to archive.
     */
    inline ArchiveFindingsRequest& WithDetectorId(const Aws::String& value) { SetDetectorId(value); return *this;}

    /**
     * The ID of the detector that specifies the GuardDuty service whose findings you
     * want to archive.
     */
    inline ArchiveFindingsRequest& WithDetectorId(Aws::String&& value) { SetDetectorId(std::move(value)); return *this;}

    /**
     * The ID of the detector that specifies the GuardDuty service whose findings you
     * want to archive.
     */
    inline ArchiveFindingsRequest& WithDetectorId(const char* value) { SetDetectorId(value); return *this;}


    /**
     * IDs of the findings that you want to archive.
     */
    inline const Aws::Vector<Aws::String>& GetFindingIds() const{ return m_findingIds; }

    /**
     * IDs of the findings that you want to archive.
     */
    inline bool FindingIdsHasBeenSet() const { return m_findingIdsHasBeenSet; }

    /**
     * IDs of the findings that you want to archive.
     */
    inline void SetFindingIds(const Aws::Vector<Aws::String>& value) { m_findingIdsHasBeenSet = true; m_findingIds = value; }

    /**
     * IDs of the findings that you want to archive.
     */
    inline void SetFindingIds(Aws::Vector<Aws::String>&& value) { m_findingIdsHasBeenSet = true; m_findingIds = std::move(value); }

    /**
     * IDs of the findings that you want to archive.
     */
    inline ArchiveFindingsRequest& WithFindingIds(const Aws::Vector<Aws::String>& value) { SetFindingIds(value); return *this;}

    /**
     * IDs of the findings that you want to archive.
     */
    inline ArchiveFindingsRequest& WithFindingIds(Aws::Vector<Aws::String>&& value) { SetFindingIds(std::move(value)); return *this;}

    /**
     * IDs of the findings that you want to archive.
     */
    inline ArchiveFindingsRequest& AddFindingIds(const Aws::String& value) { m_findingIdsHasBeenSet = true; m_findingIds.push_back(value); return *this; }

    /**
     * IDs of the findings that you want to archive.
     */
    inline ArchiveFindingsRequest& AddFindingIds(Aws::String&& value) { m_findingIdsHasBeenSet = true; m_findingIds.push_back(std::move(value)); return *this; }

    /**
     * IDs of the findings that you want to archive.
     */
    inline ArchiveFindingsRequest& AddFindingIds(const char* value) { m_findingIdsHasBeenSet = true; m_findingIds.push_back(value); return *this; }

  private:

    Aws::String m_detectorId;
    bool m_detectorIdHasBeenSet;

    Aws::Vector<Aws::String> m_findingIds;
    bool m_findingIdsHasBeenSet;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
