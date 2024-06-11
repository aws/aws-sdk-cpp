/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/frauddetector/FraudDetectorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace FraudDetector
{
namespace Model
{

  /**
   */
  class DeleteDetectorVersionRequest : public FraudDetectorRequest
  {
  public:
    AWS_FRAUDDETECTOR_API DeleteDetectorVersionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteDetectorVersion"; }

    AWS_FRAUDDETECTOR_API Aws::String SerializePayload() const override;

    AWS_FRAUDDETECTOR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the parent detector for the detector version to delete.</p>
     */
    inline const Aws::String& GetDetectorId() const{ return m_detectorId; }
    inline bool DetectorIdHasBeenSet() const { return m_detectorIdHasBeenSet; }
    inline void SetDetectorId(const Aws::String& value) { m_detectorIdHasBeenSet = true; m_detectorId = value; }
    inline void SetDetectorId(Aws::String&& value) { m_detectorIdHasBeenSet = true; m_detectorId = std::move(value); }
    inline void SetDetectorId(const char* value) { m_detectorIdHasBeenSet = true; m_detectorId.assign(value); }
    inline DeleteDetectorVersionRequest& WithDetectorId(const Aws::String& value) { SetDetectorId(value); return *this;}
    inline DeleteDetectorVersionRequest& WithDetectorId(Aws::String&& value) { SetDetectorId(std::move(value)); return *this;}
    inline DeleteDetectorVersionRequest& WithDetectorId(const char* value) { SetDetectorId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the detector version to delete.</p>
     */
    inline const Aws::String& GetDetectorVersionId() const{ return m_detectorVersionId; }
    inline bool DetectorVersionIdHasBeenSet() const { return m_detectorVersionIdHasBeenSet; }
    inline void SetDetectorVersionId(const Aws::String& value) { m_detectorVersionIdHasBeenSet = true; m_detectorVersionId = value; }
    inline void SetDetectorVersionId(Aws::String&& value) { m_detectorVersionIdHasBeenSet = true; m_detectorVersionId = std::move(value); }
    inline void SetDetectorVersionId(const char* value) { m_detectorVersionIdHasBeenSet = true; m_detectorVersionId.assign(value); }
    inline DeleteDetectorVersionRequest& WithDetectorVersionId(const Aws::String& value) { SetDetectorVersionId(value); return *this;}
    inline DeleteDetectorVersionRequest& WithDetectorVersionId(Aws::String&& value) { SetDetectorVersionId(std::move(value)); return *this;}
    inline DeleteDetectorVersionRequest& WithDetectorVersionId(const char* value) { SetDetectorVersionId(value); return *this;}
    ///@}
  private:

    Aws::String m_detectorId;
    bool m_detectorIdHasBeenSet = false;

    Aws::String m_detectorVersionId;
    bool m_detectorVersionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
