/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   */
  class CreateSampleFindingsRequest : public GuardDutyRequest
  {
  public:
    AWS_GUARDDUTY_API CreateSampleFindingsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSampleFindings"; }

    AWS_GUARDDUTY_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the detector for which you need to create sample findings.</p>
     * <p>To find the <code>detectorId</code> in the current Region, see the Settings
     * page in the GuardDuty console, or run the <a
     * href="https://docs.aws.amazon.com/guardduty/latest/APIReference/API_ListDetectors.html">ListDetectors</a>
     * API.</p>
     */
    inline const Aws::String& GetDetectorId() const { return m_detectorId; }
    inline bool DetectorIdHasBeenSet() const { return m_detectorIdHasBeenSet; }
    template<typename DetectorIdT = Aws::String>
    void SetDetectorId(DetectorIdT&& value) { m_detectorIdHasBeenSet = true; m_detectorId = std::forward<DetectorIdT>(value); }
    template<typename DetectorIdT = Aws::String>
    CreateSampleFindingsRequest& WithDetectorId(DetectorIdT&& value) { SetDetectorId(std::forward<DetectorIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The types of sample findings to generate.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFindingTypes() const { return m_findingTypes; }
    inline bool FindingTypesHasBeenSet() const { return m_findingTypesHasBeenSet; }
    template<typename FindingTypesT = Aws::Vector<Aws::String>>
    void SetFindingTypes(FindingTypesT&& value) { m_findingTypesHasBeenSet = true; m_findingTypes = std::forward<FindingTypesT>(value); }
    template<typename FindingTypesT = Aws::Vector<Aws::String>>
    CreateSampleFindingsRequest& WithFindingTypes(FindingTypesT&& value) { SetFindingTypes(std::forward<FindingTypesT>(value)); return *this;}
    template<typename FindingTypesT = Aws::String>
    CreateSampleFindingsRequest& AddFindingTypes(FindingTypesT&& value) { m_findingTypesHasBeenSet = true; m_findingTypes.emplace_back(std::forward<FindingTypesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_detectorId;
    bool m_detectorIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_findingTypes;
    bool m_findingTypesHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
