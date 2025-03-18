/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisvideo/KinesisVideo_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesisvideo/model/RecorderConfig.h>
#include <aws/kinesisvideo/model/UploaderConfig.h>
#include <aws/kinesisvideo/model/DeletionConfig.h>
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
namespace KinesisVideo
{
namespace Model
{

  /**
   * <p>A description of the stream's edge configuration that will be used to sync
   * with the Edge Agent IoT Greengrass component. The Edge Agent component will run
   * on an IoT Hub Device setup at your premise.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisvideo-2017-09-30/EdgeConfig">AWS
   * API Reference</a></p>
   */
  class EdgeConfig
  {
  public:
    AWS_KINESISVIDEO_API EdgeConfig() = default;
    AWS_KINESISVIDEO_API EdgeConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISVIDEO_API EdgeConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISVIDEO_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The "<b>Internet of Things (IoT) Thing</b>" Arn of the stream.</p>
     */
    inline const Aws::String& GetHubDeviceArn() const { return m_hubDeviceArn; }
    inline bool HubDeviceArnHasBeenSet() const { return m_hubDeviceArnHasBeenSet; }
    template<typename HubDeviceArnT = Aws::String>
    void SetHubDeviceArn(HubDeviceArnT&& value) { m_hubDeviceArnHasBeenSet = true; m_hubDeviceArn = std::forward<HubDeviceArnT>(value); }
    template<typename HubDeviceArnT = Aws::String>
    EdgeConfig& WithHubDeviceArn(HubDeviceArnT&& value) { SetHubDeviceArn(std::forward<HubDeviceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The recorder configuration consists of the local
     * <code>MediaSourceConfig</code> details, that are used as credentials to access
     * the local media files streamed on the camera. </p>
     */
    inline const RecorderConfig& GetRecorderConfig() const { return m_recorderConfig; }
    inline bool RecorderConfigHasBeenSet() const { return m_recorderConfigHasBeenSet; }
    template<typename RecorderConfigT = RecorderConfig>
    void SetRecorderConfig(RecorderConfigT&& value) { m_recorderConfigHasBeenSet = true; m_recorderConfig = std::forward<RecorderConfigT>(value); }
    template<typename RecorderConfigT = RecorderConfig>
    EdgeConfig& WithRecorderConfig(RecorderConfigT&& value) { SetRecorderConfig(std::forward<RecorderConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The uploader configuration contains the <code>ScheduleExpression</code>
     * details that are used to schedule upload jobs for the recorded media files from
     * the Edge Agent to a Kinesis Video Stream.</p>
     */
    inline const UploaderConfig& GetUploaderConfig() const { return m_uploaderConfig; }
    inline bool UploaderConfigHasBeenSet() const { return m_uploaderConfigHasBeenSet; }
    template<typename UploaderConfigT = UploaderConfig>
    void SetUploaderConfig(UploaderConfigT&& value) { m_uploaderConfigHasBeenSet = true; m_uploaderConfig = std::forward<UploaderConfigT>(value); }
    template<typename UploaderConfigT = UploaderConfig>
    EdgeConfig& WithUploaderConfig(UploaderConfigT&& value) { SetUploaderConfig(std::forward<UploaderConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The deletion configuration is made up of the retention time
     * (<code>EdgeRetentionInHours</code>) and local size configuration
     * (<code>LocalSizeConfig</code>) details that are used to make the deletion.</p>
     */
    inline const DeletionConfig& GetDeletionConfig() const { return m_deletionConfig; }
    inline bool DeletionConfigHasBeenSet() const { return m_deletionConfigHasBeenSet; }
    template<typename DeletionConfigT = DeletionConfig>
    void SetDeletionConfig(DeletionConfigT&& value) { m_deletionConfigHasBeenSet = true; m_deletionConfig = std::forward<DeletionConfigT>(value); }
    template<typename DeletionConfigT = DeletionConfig>
    EdgeConfig& WithDeletionConfig(DeletionConfigT&& value) { SetDeletionConfig(std::forward<DeletionConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_hubDeviceArn;
    bool m_hubDeviceArnHasBeenSet = false;

    RecorderConfig m_recorderConfig;
    bool m_recorderConfigHasBeenSet = false;

    UploaderConfig m_uploaderConfig;
    bool m_uploaderConfigHasBeenSet = false;

    DeletionConfig m_deletionConfig;
    bool m_deletionConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
