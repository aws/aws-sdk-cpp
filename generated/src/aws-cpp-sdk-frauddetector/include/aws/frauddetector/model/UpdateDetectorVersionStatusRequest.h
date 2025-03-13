/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/frauddetector/FraudDetectorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/frauddetector/model/DetectorVersionStatus.h>
#include <utility>

namespace Aws
{
namespace FraudDetector
{
namespace Model
{

  /**
   */
  class UpdateDetectorVersionStatusRequest : public FraudDetectorRequest
  {
  public:
    AWS_FRAUDDETECTOR_API UpdateDetectorVersionStatusRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateDetectorVersionStatus"; }

    AWS_FRAUDDETECTOR_API Aws::String SerializePayload() const override;

    AWS_FRAUDDETECTOR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The detector ID. </p>
     */
    inline const Aws::String& GetDetectorId() const { return m_detectorId; }
    inline bool DetectorIdHasBeenSet() const { return m_detectorIdHasBeenSet; }
    template<typename DetectorIdT = Aws::String>
    void SetDetectorId(DetectorIdT&& value) { m_detectorIdHasBeenSet = true; m_detectorId = std::forward<DetectorIdT>(value); }
    template<typename DetectorIdT = Aws::String>
    UpdateDetectorVersionStatusRequest& WithDetectorId(DetectorIdT&& value) { SetDetectorId(std::forward<DetectorIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The detector version ID. </p>
     */
    inline const Aws::String& GetDetectorVersionId() const { return m_detectorVersionId; }
    inline bool DetectorVersionIdHasBeenSet() const { return m_detectorVersionIdHasBeenSet; }
    template<typename DetectorVersionIdT = Aws::String>
    void SetDetectorVersionId(DetectorVersionIdT&& value) { m_detectorVersionIdHasBeenSet = true; m_detectorVersionId = std::forward<DetectorVersionIdT>(value); }
    template<typename DetectorVersionIdT = Aws::String>
    UpdateDetectorVersionStatusRequest& WithDetectorVersionId(DetectorVersionIdT&& value) { SetDetectorVersionId(std::forward<DetectorVersionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new status.</p> <p>The only supported values are <code>ACTIVE</code> and
     * <code>INACTIVE</code> </p>
     */
    inline DetectorVersionStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(DetectorVersionStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline UpdateDetectorVersionStatusRequest& WithStatus(DetectorVersionStatus value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_detectorId;
    bool m_detectorIdHasBeenSet = false;

    Aws::String m_detectorVersionId;
    bool m_detectorVersionIdHasBeenSet = false;

    DetectorVersionStatus m_status{DetectorVersionStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
