/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisvideo/KinesisVideo_EXPORTS.h>
#include <aws/kinesisvideo/model/LocalSizeConfig.h>
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
   * <p>The configuration details required to delete the connection of the stream
   * from the Edge Agent.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisvideo-2017-09-30/DeletionConfig">AWS
   * API Reference</a></p>
   */
  class DeletionConfig
  {
  public:
    AWS_KINESISVIDEO_API DeletionConfig() = default;
    AWS_KINESISVIDEO_API DeletionConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISVIDEO_API DeletionConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISVIDEO_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number of hours that you want to retain the data in the stream on the
     * Edge Agent. The default value of the retention time is 720 hours, which
     * translates to 30 days.</p>
     */
    inline int GetEdgeRetentionInHours() const { return m_edgeRetentionInHours; }
    inline bool EdgeRetentionInHoursHasBeenSet() const { return m_edgeRetentionInHoursHasBeenSet; }
    inline void SetEdgeRetentionInHours(int value) { m_edgeRetentionInHoursHasBeenSet = true; m_edgeRetentionInHours = value; }
    inline DeletionConfig& WithEdgeRetentionInHours(int value) { SetEdgeRetentionInHours(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the local size required in order to delete the edge
     * configuration.</p>
     */
    inline const LocalSizeConfig& GetLocalSizeConfig() const { return m_localSizeConfig; }
    inline bool LocalSizeConfigHasBeenSet() const { return m_localSizeConfigHasBeenSet; }
    template<typename LocalSizeConfigT = LocalSizeConfig>
    void SetLocalSizeConfig(LocalSizeConfigT&& value) { m_localSizeConfigHasBeenSet = true; m_localSizeConfig = std::forward<LocalSizeConfigT>(value); }
    template<typename LocalSizeConfigT = LocalSizeConfig>
    DeletionConfig& WithLocalSizeConfig(LocalSizeConfigT&& value) { SetLocalSizeConfig(std::forward<LocalSizeConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>boolean</code> value used to indicate whether or not you want to
     * mark the media for deletion, once it has been uploaded to the Kinesis Video
     * Stream cloud. The media files can be deleted if any of the deletion
     * configuration values are set to <code>true</code>, such as when the limit for
     * the <code>EdgeRetentionInHours</code>, or the
     * <code>MaxLocalMediaSizeInMB</code>, has been reached. </p> <p>Since the default
     * value is set to <code>true</code>, configure the uploader schedule such that the
     * media files are not being deleted before they are initially uploaded to the
     * Amazon Web Services cloud.</p>
     */
    inline bool GetDeleteAfterUpload() const { return m_deleteAfterUpload; }
    inline bool DeleteAfterUploadHasBeenSet() const { return m_deleteAfterUploadHasBeenSet; }
    inline void SetDeleteAfterUpload(bool value) { m_deleteAfterUploadHasBeenSet = true; m_deleteAfterUpload = value; }
    inline DeletionConfig& WithDeleteAfterUpload(bool value) { SetDeleteAfterUpload(value); return *this;}
    ///@}
  private:

    int m_edgeRetentionInHours{0};
    bool m_edgeRetentionInHoursHasBeenSet = false;

    LocalSizeConfig m_localSizeConfig;
    bool m_localSizeConfigHasBeenSet = false;

    bool m_deleteAfterUpload{false};
    bool m_deleteAfterUploadHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
