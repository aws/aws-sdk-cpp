/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/GuardDutyRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/model/FindingPublishingFrequency.h>
#include <aws/guardduty/model/DataSourceConfigurations.h>
#include <utility>

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

  /**
   */
  class UpdateDetectorRequest : public GuardDutyRequest
  {
  public:
    AWS_GUARDDUTY_API UpdateDetectorRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateDetector"; }

    AWS_GUARDDUTY_API Aws::String SerializePayload() const override;


    /**
     * <p>The unique ID of the detector to update.</p>
     */
    inline const Aws::String& GetDetectorId() const{ return m_detectorId; }

    /**
     * <p>The unique ID of the detector to update.</p>
     */
    inline bool DetectorIdHasBeenSet() const { return m_detectorIdHasBeenSet; }

    /**
     * <p>The unique ID of the detector to update.</p>
     */
    inline void SetDetectorId(const Aws::String& value) { m_detectorIdHasBeenSet = true; m_detectorId = value; }

    /**
     * <p>The unique ID of the detector to update.</p>
     */
    inline void SetDetectorId(Aws::String&& value) { m_detectorIdHasBeenSet = true; m_detectorId = std::move(value); }

    /**
     * <p>The unique ID of the detector to update.</p>
     */
    inline void SetDetectorId(const char* value) { m_detectorIdHasBeenSet = true; m_detectorId.assign(value); }

    /**
     * <p>The unique ID of the detector to update.</p>
     */
    inline UpdateDetectorRequest& WithDetectorId(const Aws::String& value) { SetDetectorId(value); return *this;}

    /**
     * <p>The unique ID of the detector to update.</p>
     */
    inline UpdateDetectorRequest& WithDetectorId(Aws::String&& value) { SetDetectorId(std::move(value)); return *this;}

    /**
     * <p>The unique ID of the detector to update.</p>
     */
    inline UpdateDetectorRequest& WithDetectorId(const char* value) { SetDetectorId(value); return *this;}


    /**
     * <p>Specifies whether the detector is enabled or not enabled.</p>
     */
    inline bool GetEnable() const{ return m_enable; }

    /**
     * <p>Specifies whether the detector is enabled or not enabled.</p>
     */
    inline bool EnableHasBeenSet() const { return m_enableHasBeenSet; }

    /**
     * <p>Specifies whether the detector is enabled or not enabled.</p>
     */
    inline void SetEnable(bool value) { m_enableHasBeenSet = true; m_enable = value; }

    /**
     * <p>Specifies whether the detector is enabled or not enabled.</p>
     */
    inline UpdateDetectorRequest& WithEnable(bool value) { SetEnable(value); return *this;}


    /**
     * <p>An enum value that specifies how frequently findings are exported, such as to
     * CloudWatch Events.</p>
     */
    inline const FindingPublishingFrequency& GetFindingPublishingFrequency() const{ return m_findingPublishingFrequency; }

    /**
     * <p>An enum value that specifies how frequently findings are exported, such as to
     * CloudWatch Events.</p>
     */
    inline bool FindingPublishingFrequencyHasBeenSet() const { return m_findingPublishingFrequencyHasBeenSet; }

    /**
     * <p>An enum value that specifies how frequently findings are exported, such as to
     * CloudWatch Events.</p>
     */
    inline void SetFindingPublishingFrequency(const FindingPublishingFrequency& value) { m_findingPublishingFrequencyHasBeenSet = true; m_findingPublishingFrequency = value; }

    /**
     * <p>An enum value that specifies how frequently findings are exported, such as to
     * CloudWatch Events.</p>
     */
    inline void SetFindingPublishingFrequency(FindingPublishingFrequency&& value) { m_findingPublishingFrequencyHasBeenSet = true; m_findingPublishingFrequency = std::move(value); }

    /**
     * <p>An enum value that specifies how frequently findings are exported, such as to
     * CloudWatch Events.</p>
     */
    inline UpdateDetectorRequest& WithFindingPublishingFrequency(const FindingPublishingFrequency& value) { SetFindingPublishingFrequency(value); return *this;}

    /**
     * <p>An enum value that specifies how frequently findings are exported, such as to
     * CloudWatch Events.</p>
     */
    inline UpdateDetectorRequest& WithFindingPublishingFrequency(FindingPublishingFrequency&& value) { SetFindingPublishingFrequency(std::move(value)); return *this;}


    /**
     * <p>Describes which data sources will be updated.</p>
     */
    inline const DataSourceConfigurations& GetDataSources() const{ return m_dataSources; }

    /**
     * <p>Describes which data sources will be updated.</p>
     */
    inline bool DataSourcesHasBeenSet() const { return m_dataSourcesHasBeenSet; }

    /**
     * <p>Describes which data sources will be updated.</p>
     */
    inline void SetDataSources(const DataSourceConfigurations& value) { m_dataSourcesHasBeenSet = true; m_dataSources = value; }

    /**
     * <p>Describes which data sources will be updated.</p>
     */
    inline void SetDataSources(DataSourceConfigurations&& value) { m_dataSourcesHasBeenSet = true; m_dataSources = std::move(value); }

    /**
     * <p>Describes which data sources will be updated.</p>
     */
    inline UpdateDetectorRequest& WithDataSources(const DataSourceConfigurations& value) { SetDataSources(value); return *this;}

    /**
     * <p>Describes which data sources will be updated.</p>
     */
    inline UpdateDetectorRequest& WithDataSources(DataSourceConfigurations&& value) { SetDataSources(std::move(value)); return *this;}

  private:

    Aws::String m_detectorId;
    bool m_detectorIdHasBeenSet = false;

    bool m_enable;
    bool m_enableHasBeenSet = false;

    FindingPublishingFrequency m_findingPublishingFrequency;
    bool m_findingPublishingFrequencyHasBeenSet = false;

    DataSourceConfigurations m_dataSources;
    bool m_dataSourcesHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
