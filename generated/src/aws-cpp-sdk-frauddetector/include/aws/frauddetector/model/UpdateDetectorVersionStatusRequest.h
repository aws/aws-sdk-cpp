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
    AWS_FRAUDDETECTOR_API UpdateDetectorVersionStatusRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateDetectorVersionStatus"; }

    AWS_FRAUDDETECTOR_API Aws::String SerializePayload() const override;

    AWS_FRAUDDETECTOR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The detector ID. </p>
     */
    inline const Aws::String& GetDetectorId() const{ return m_detectorId; }

    /**
     * <p>The detector ID. </p>
     */
    inline bool DetectorIdHasBeenSet() const { return m_detectorIdHasBeenSet; }

    /**
     * <p>The detector ID. </p>
     */
    inline void SetDetectorId(const Aws::String& value) { m_detectorIdHasBeenSet = true; m_detectorId = value; }

    /**
     * <p>The detector ID. </p>
     */
    inline void SetDetectorId(Aws::String&& value) { m_detectorIdHasBeenSet = true; m_detectorId = std::move(value); }

    /**
     * <p>The detector ID. </p>
     */
    inline void SetDetectorId(const char* value) { m_detectorIdHasBeenSet = true; m_detectorId.assign(value); }

    /**
     * <p>The detector ID. </p>
     */
    inline UpdateDetectorVersionStatusRequest& WithDetectorId(const Aws::String& value) { SetDetectorId(value); return *this;}

    /**
     * <p>The detector ID. </p>
     */
    inline UpdateDetectorVersionStatusRequest& WithDetectorId(Aws::String&& value) { SetDetectorId(std::move(value)); return *this;}

    /**
     * <p>The detector ID. </p>
     */
    inline UpdateDetectorVersionStatusRequest& WithDetectorId(const char* value) { SetDetectorId(value); return *this;}


    /**
     * <p>The detector version ID. </p>
     */
    inline const Aws::String& GetDetectorVersionId() const{ return m_detectorVersionId; }

    /**
     * <p>The detector version ID. </p>
     */
    inline bool DetectorVersionIdHasBeenSet() const { return m_detectorVersionIdHasBeenSet; }

    /**
     * <p>The detector version ID. </p>
     */
    inline void SetDetectorVersionId(const Aws::String& value) { m_detectorVersionIdHasBeenSet = true; m_detectorVersionId = value; }

    /**
     * <p>The detector version ID. </p>
     */
    inline void SetDetectorVersionId(Aws::String&& value) { m_detectorVersionIdHasBeenSet = true; m_detectorVersionId = std::move(value); }

    /**
     * <p>The detector version ID. </p>
     */
    inline void SetDetectorVersionId(const char* value) { m_detectorVersionIdHasBeenSet = true; m_detectorVersionId.assign(value); }

    /**
     * <p>The detector version ID. </p>
     */
    inline UpdateDetectorVersionStatusRequest& WithDetectorVersionId(const Aws::String& value) { SetDetectorVersionId(value); return *this;}

    /**
     * <p>The detector version ID. </p>
     */
    inline UpdateDetectorVersionStatusRequest& WithDetectorVersionId(Aws::String&& value) { SetDetectorVersionId(std::move(value)); return *this;}

    /**
     * <p>The detector version ID. </p>
     */
    inline UpdateDetectorVersionStatusRequest& WithDetectorVersionId(const char* value) { SetDetectorVersionId(value); return *this;}


    /**
     * <p>The new status.</p> <p>The only supported values are <code>ACTIVE</code> and
     * <code>INACTIVE</code> </p>
     */
    inline const DetectorVersionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The new status.</p> <p>The only supported values are <code>ACTIVE</code> and
     * <code>INACTIVE</code> </p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The new status.</p> <p>The only supported values are <code>ACTIVE</code> and
     * <code>INACTIVE</code> </p>
     */
    inline void SetStatus(const DetectorVersionStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The new status.</p> <p>The only supported values are <code>ACTIVE</code> and
     * <code>INACTIVE</code> </p>
     */
    inline void SetStatus(DetectorVersionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The new status.</p> <p>The only supported values are <code>ACTIVE</code> and
     * <code>INACTIVE</code> </p>
     */
    inline UpdateDetectorVersionStatusRequest& WithStatus(const DetectorVersionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The new status.</p> <p>The only supported values are <code>ACTIVE</code> and
     * <code>INACTIVE</code> </p>
     */
    inline UpdateDetectorVersionStatusRequest& WithStatus(DetectorVersionStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_detectorId;
    bool m_detectorIdHasBeenSet = false;

    Aws::String m_detectorVersionId;
    bool m_detectorVersionIdHasBeenSet = false;

    DetectorVersionStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
