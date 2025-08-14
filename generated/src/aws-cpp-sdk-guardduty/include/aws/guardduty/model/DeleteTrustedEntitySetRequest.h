/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/GuardDutyRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

  /**
   */
  class DeleteTrustedEntitySetRequest : public GuardDutyRequest
  {
  public:
    AWS_GUARDDUTY_API DeleteTrustedEntitySetRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteTrustedEntitySet"; }

    AWS_GUARDDUTY_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique ID of the detector associated with the trusted entity set
     * resource.</p> <p>To find the <code>detectorId</code> in the current Region, see
     * the Settings page in the GuardDuty console, or run the <a
     * href="https://docs.aws.amazon.com/guardduty/latest/APIReference/API_ListDetectors.html">ListDetectors</a>
     * API.</p>
     */
    inline const Aws::String& GetDetectorId() const { return m_detectorId; }
    inline bool DetectorIdHasBeenSet() const { return m_detectorIdHasBeenSet; }
    template<typename DetectorIdT = Aws::String>
    void SetDetectorId(DetectorIdT&& value) { m_detectorIdHasBeenSet = true; m_detectorId = std::forward<DetectorIdT>(value); }
    template<typename DetectorIdT = Aws::String>
    DeleteTrustedEntitySetRequest& WithDetectorId(DetectorIdT&& value) { SetDetectorId(std::forward<DetectorIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ID that helps GuardDuty identify which trusted entity set needs to
     * be deleted.</p>
     */
    inline const Aws::String& GetTrustedEntitySetId() const { return m_trustedEntitySetId; }
    inline bool TrustedEntitySetIdHasBeenSet() const { return m_trustedEntitySetIdHasBeenSet; }
    template<typename TrustedEntitySetIdT = Aws::String>
    void SetTrustedEntitySetId(TrustedEntitySetIdT&& value) { m_trustedEntitySetIdHasBeenSet = true; m_trustedEntitySetId = std::forward<TrustedEntitySetIdT>(value); }
    template<typename TrustedEntitySetIdT = Aws::String>
    DeleteTrustedEntitySetRequest& WithTrustedEntitySetId(TrustedEntitySetIdT&& value) { SetTrustedEntitySetId(std::forward<TrustedEntitySetIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_detectorId;
    bool m_detectorIdHasBeenSet = false;

    Aws::String m_trustedEntitySetId;
    bool m_trustedEntitySetIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
