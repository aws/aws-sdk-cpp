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
    AWS_KINESISVIDEO_API EdgeConfig();
    AWS_KINESISVIDEO_API EdgeConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISVIDEO_API EdgeConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISVIDEO_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The "<b>Internet of Things (IoT) Thing</b>" Arn of the stream.</p>
     */
    inline const Aws::String& GetHubDeviceArn() const{ return m_hubDeviceArn; }

    /**
     * <p>The "<b>Internet of Things (IoT) Thing</b>" Arn of the stream.</p>
     */
    inline bool HubDeviceArnHasBeenSet() const { return m_hubDeviceArnHasBeenSet; }

    /**
     * <p>The "<b>Internet of Things (IoT) Thing</b>" Arn of the stream.</p>
     */
    inline void SetHubDeviceArn(const Aws::String& value) { m_hubDeviceArnHasBeenSet = true; m_hubDeviceArn = value; }

    /**
     * <p>The "<b>Internet of Things (IoT) Thing</b>" Arn of the stream.</p>
     */
    inline void SetHubDeviceArn(Aws::String&& value) { m_hubDeviceArnHasBeenSet = true; m_hubDeviceArn = std::move(value); }

    /**
     * <p>The "<b>Internet of Things (IoT) Thing</b>" Arn of the stream.</p>
     */
    inline void SetHubDeviceArn(const char* value) { m_hubDeviceArnHasBeenSet = true; m_hubDeviceArn.assign(value); }

    /**
     * <p>The "<b>Internet of Things (IoT) Thing</b>" Arn of the stream.</p>
     */
    inline EdgeConfig& WithHubDeviceArn(const Aws::String& value) { SetHubDeviceArn(value); return *this;}

    /**
     * <p>The "<b>Internet of Things (IoT) Thing</b>" Arn of the stream.</p>
     */
    inline EdgeConfig& WithHubDeviceArn(Aws::String&& value) { SetHubDeviceArn(std::move(value)); return *this;}

    /**
     * <p>The "<b>Internet of Things (IoT) Thing</b>" Arn of the stream.</p>
     */
    inline EdgeConfig& WithHubDeviceArn(const char* value) { SetHubDeviceArn(value); return *this;}


    /**
     * <p>The recorder configuration consists of the local
     * <code>MediaSourceConfig</code> details, that are used as credentials to access
     * the local media files streamed on the camera. </p>
     */
    inline const RecorderConfig& GetRecorderConfig() const{ return m_recorderConfig; }

    /**
     * <p>The recorder configuration consists of the local
     * <code>MediaSourceConfig</code> details, that are used as credentials to access
     * the local media files streamed on the camera. </p>
     */
    inline bool RecorderConfigHasBeenSet() const { return m_recorderConfigHasBeenSet; }

    /**
     * <p>The recorder configuration consists of the local
     * <code>MediaSourceConfig</code> details, that are used as credentials to access
     * the local media files streamed on the camera. </p>
     */
    inline void SetRecorderConfig(const RecorderConfig& value) { m_recorderConfigHasBeenSet = true; m_recorderConfig = value; }

    /**
     * <p>The recorder configuration consists of the local
     * <code>MediaSourceConfig</code> details, that are used as credentials to access
     * the local media files streamed on the camera. </p>
     */
    inline void SetRecorderConfig(RecorderConfig&& value) { m_recorderConfigHasBeenSet = true; m_recorderConfig = std::move(value); }

    /**
     * <p>The recorder configuration consists of the local
     * <code>MediaSourceConfig</code> details, that are used as credentials to access
     * the local media files streamed on the camera. </p>
     */
    inline EdgeConfig& WithRecorderConfig(const RecorderConfig& value) { SetRecorderConfig(value); return *this;}

    /**
     * <p>The recorder configuration consists of the local
     * <code>MediaSourceConfig</code> details, that are used as credentials to access
     * the local media files streamed on the camera. </p>
     */
    inline EdgeConfig& WithRecorderConfig(RecorderConfig&& value) { SetRecorderConfig(std::move(value)); return *this;}


    /**
     * <p>The uploader configuration contains the <code>ScheduleExpression</code>
     * details that are used to schedule upload jobs for the recorded media files from
     * the Edge Agent to a Kinesis Video Stream.</p>
     */
    inline const UploaderConfig& GetUploaderConfig() const{ return m_uploaderConfig; }

    /**
     * <p>The uploader configuration contains the <code>ScheduleExpression</code>
     * details that are used to schedule upload jobs for the recorded media files from
     * the Edge Agent to a Kinesis Video Stream.</p>
     */
    inline bool UploaderConfigHasBeenSet() const { return m_uploaderConfigHasBeenSet; }

    /**
     * <p>The uploader configuration contains the <code>ScheduleExpression</code>
     * details that are used to schedule upload jobs for the recorded media files from
     * the Edge Agent to a Kinesis Video Stream.</p>
     */
    inline void SetUploaderConfig(const UploaderConfig& value) { m_uploaderConfigHasBeenSet = true; m_uploaderConfig = value; }

    /**
     * <p>The uploader configuration contains the <code>ScheduleExpression</code>
     * details that are used to schedule upload jobs for the recorded media files from
     * the Edge Agent to a Kinesis Video Stream.</p>
     */
    inline void SetUploaderConfig(UploaderConfig&& value) { m_uploaderConfigHasBeenSet = true; m_uploaderConfig = std::move(value); }

    /**
     * <p>The uploader configuration contains the <code>ScheduleExpression</code>
     * details that are used to schedule upload jobs for the recorded media files from
     * the Edge Agent to a Kinesis Video Stream.</p>
     */
    inline EdgeConfig& WithUploaderConfig(const UploaderConfig& value) { SetUploaderConfig(value); return *this;}

    /**
     * <p>The uploader configuration contains the <code>ScheduleExpression</code>
     * details that are used to schedule upload jobs for the recorded media files from
     * the Edge Agent to a Kinesis Video Stream.</p>
     */
    inline EdgeConfig& WithUploaderConfig(UploaderConfig&& value) { SetUploaderConfig(std::move(value)); return *this;}


    /**
     * <p>The deletion configuration is made up of the retention time
     * (<code>EdgeRetentionInHours</code>) and local size configuration
     * (<code>LocalSizeConfig</code>) details that are used to make the deletion.</p>
     */
    inline const DeletionConfig& GetDeletionConfig() const{ return m_deletionConfig; }

    /**
     * <p>The deletion configuration is made up of the retention time
     * (<code>EdgeRetentionInHours</code>) and local size configuration
     * (<code>LocalSizeConfig</code>) details that are used to make the deletion.</p>
     */
    inline bool DeletionConfigHasBeenSet() const { return m_deletionConfigHasBeenSet; }

    /**
     * <p>The deletion configuration is made up of the retention time
     * (<code>EdgeRetentionInHours</code>) and local size configuration
     * (<code>LocalSizeConfig</code>) details that are used to make the deletion.</p>
     */
    inline void SetDeletionConfig(const DeletionConfig& value) { m_deletionConfigHasBeenSet = true; m_deletionConfig = value; }

    /**
     * <p>The deletion configuration is made up of the retention time
     * (<code>EdgeRetentionInHours</code>) and local size configuration
     * (<code>LocalSizeConfig</code>) details that are used to make the deletion.</p>
     */
    inline void SetDeletionConfig(DeletionConfig&& value) { m_deletionConfigHasBeenSet = true; m_deletionConfig = std::move(value); }

    /**
     * <p>The deletion configuration is made up of the retention time
     * (<code>EdgeRetentionInHours</code>) and local size configuration
     * (<code>LocalSizeConfig</code>) details that are used to make the deletion.</p>
     */
    inline EdgeConfig& WithDeletionConfig(const DeletionConfig& value) { SetDeletionConfig(value); return *this;}

    /**
     * <p>The deletion configuration is made up of the retention time
     * (<code>EdgeRetentionInHours</code>) and local size configuration
     * (<code>LocalSizeConfig</code>) details that are used to make the deletion.</p>
     */
    inline EdgeConfig& WithDeletionConfig(DeletionConfig&& value) { SetDeletionConfig(std::move(value)); return *this;}

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
