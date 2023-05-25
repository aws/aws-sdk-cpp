/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisvideo/KinesisVideo_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesisvideo/model/MediaStorageConfigurationStatus.h>
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
   * <p>A structure that encapsulates, or contains, the media storage configuration
   * properties.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisvideo-2017-09-30/MediaStorageConfiguration">AWS
   * API Reference</a></p>
   */
  class MediaStorageConfiguration
  {
  public:
    AWS_KINESISVIDEO_API MediaStorageConfiguration();
    AWS_KINESISVIDEO_API MediaStorageConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISVIDEO_API MediaStorageConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISVIDEO_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the stream </p>
     */
    inline const Aws::String& GetStreamARN() const{ return m_streamARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the stream </p>
     */
    inline bool StreamARNHasBeenSet() const { return m_streamARNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the stream </p>
     */
    inline void SetStreamARN(const Aws::String& value) { m_streamARNHasBeenSet = true; m_streamARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the stream </p>
     */
    inline void SetStreamARN(Aws::String&& value) { m_streamARNHasBeenSet = true; m_streamARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the stream </p>
     */
    inline void SetStreamARN(const char* value) { m_streamARNHasBeenSet = true; m_streamARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the stream </p>
     */
    inline MediaStorageConfiguration& WithStreamARN(const Aws::String& value) { SetStreamARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the stream </p>
     */
    inline MediaStorageConfiguration& WithStreamARN(Aws::String&& value) { SetStreamARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the stream </p>
     */
    inline MediaStorageConfiguration& WithStreamARN(const char* value) { SetStreamARN(value); return *this;}


    /**
     * <p>The status of the media storage configuration.</p>
     */
    inline const MediaStorageConfigurationStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the media storage configuration.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the media storage configuration.</p>
     */
    inline void SetStatus(const MediaStorageConfigurationStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the media storage configuration.</p>
     */
    inline void SetStatus(MediaStorageConfigurationStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the media storage configuration.</p>
     */
    inline MediaStorageConfiguration& WithStatus(const MediaStorageConfigurationStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the media storage configuration.</p>
     */
    inline MediaStorageConfiguration& WithStatus(MediaStorageConfigurationStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_streamARN;
    bool m_streamARNHasBeenSet = false;

    MediaStorageConfigurationStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
