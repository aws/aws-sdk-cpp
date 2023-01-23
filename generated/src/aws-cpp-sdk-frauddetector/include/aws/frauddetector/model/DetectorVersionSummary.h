/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/frauddetector/model/DetectorVersionStatus.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace FraudDetector
{
namespace Model
{

  /**
   * <p>The summary of the detector version.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/DetectorVersionSummary">AWS
   * API Reference</a></p>
   */
  class DetectorVersionSummary
  {
  public:
    AWS_FRAUDDETECTOR_API DetectorVersionSummary();
    AWS_FRAUDDETECTOR_API DetectorVersionSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API DetectorVersionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline DetectorVersionSummary& WithDetectorVersionId(const Aws::String& value) { SetDetectorVersionId(value); return *this;}

    /**
     * <p>The detector version ID. </p>
     */
    inline DetectorVersionSummary& WithDetectorVersionId(Aws::String&& value) { SetDetectorVersionId(std::move(value)); return *this;}

    /**
     * <p>The detector version ID. </p>
     */
    inline DetectorVersionSummary& WithDetectorVersionId(const char* value) { SetDetectorVersionId(value); return *this;}


    /**
     * <p>The detector version status. </p>
     */
    inline const DetectorVersionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The detector version status. </p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The detector version status. </p>
     */
    inline void SetStatus(const DetectorVersionStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The detector version status. </p>
     */
    inline void SetStatus(DetectorVersionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The detector version status. </p>
     */
    inline DetectorVersionSummary& WithStatus(const DetectorVersionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The detector version status. </p>
     */
    inline DetectorVersionSummary& WithStatus(DetectorVersionStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The detector version description. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The detector version description. </p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The detector version description. </p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The detector version description. </p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The detector version description. </p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The detector version description. </p>
     */
    inline DetectorVersionSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The detector version description. </p>
     */
    inline DetectorVersionSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The detector version description. </p>
     */
    inline DetectorVersionSummary& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Timestamp of when the detector version was last updated.</p>
     */
    inline const Aws::String& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }

    /**
     * <p>Timestamp of when the detector version was last updated.</p>
     */
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }

    /**
     * <p>Timestamp of when the detector version was last updated.</p>
     */
    inline void SetLastUpdatedTime(const Aws::String& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = value; }

    /**
     * <p>Timestamp of when the detector version was last updated.</p>
     */
    inline void SetLastUpdatedTime(Aws::String&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::move(value); }

    /**
     * <p>Timestamp of when the detector version was last updated.</p>
     */
    inline void SetLastUpdatedTime(const char* value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime.assign(value); }

    /**
     * <p>Timestamp of when the detector version was last updated.</p>
     */
    inline DetectorVersionSummary& WithLastUpdatedTime(const Aws::String& value) { SetLastUpdatedTime(value); return *this;}

    /**
     * <p>Timestamp of when the detector version was last updated.</p>
     */
    inline DetectorVersionSummary& WithLastUpdatedTime(Aws::String&& value) { SetLastUpdatedTime(std::move(value)); return *this;}

    /**
     * <p>Timestamp of when the detector version was last updated.</p>
     */
    inline DetectorVersionSummary& WithLastUpdatedTime(const char* value) { SetLastUpdatedTime(value); return *this;}

  private:

    Aws::String m_detectorVersionId;
    bool m_detectorVersionIdHasBeenSet = false;

    DetectorVersionStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_lastUpdatedTime;
    bool m_lastUpdatedTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
