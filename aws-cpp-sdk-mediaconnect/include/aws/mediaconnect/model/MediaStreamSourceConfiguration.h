/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/EncodingName.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/model/InputConfiguration.h>
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
namespace MediaConnect
{
namespace Model
{

  /**
   * The media stream that is associated with the source, and the parameters for that
   * association.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/MediaStreamSourceConfiguration">AWS
   * API Reference</a></p>
   */
  class MediaStreamSourceConfiguration
  {
  public:
    AWS_MEDIACONNECT_API MediaStreamSourceConfiguration();
    AWS_MEDIACONNECT_API MediaStreamSourceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API MediaStreamSourceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The format that was used to encode the data. For ancillary data streams, set the
     * encoding name to smpte291. For audio streams, set the encoding name to pcm. For
     * video, 2110 streams, set the encoding name to raw. For video, JPEG XS streams,
     * set the encoding name to jxsv.
     */
    inline const EncodingName& GetEncodingName() const{ return m_encodingName; }

    /**
     * The format that was used to encode the data. For ancillary data streams, set the
     * encoding name to smpte291. For audio streams, set the encoding name to pcm. For
     * video, 2110 streams, set the encoding name to raw. For video, JPEG XS streams,
     * set the encoding name to jxsv.
     */
    inline bool EncodingNameHasBeenSet() const { return m_encodingNameHasBeenSet; }

    /**
     * The format that was used to encode the data. For ancillary data streams, set the
     * encoding name to smpte291. For audio streams, set the encoding name to pcm. For
     * video, 2110 streams, set the encoding name to raw. For video, JPEG XS streams,
     * set the encoding name to jxsv.
     */
    inline void SetEncodingName(const EncodingName& value) { m_encodingNameHasBeenSet = true; m_encodingName = value; }

    /**
     * The format that was used to encode the data. For ancillary data streams, set the
     * encoding name to smpte291. For audio streams, set the encoding name to pcm. For
     * video, 2110 streams, set the encoding name to raw. For video, JPEG XS streams,
     * set the encoding name to jxsv.
     */
    inline void SetEncodingName(EncodingName&& value) { m_encodingNameHasBeenSet = true; m_encodingName = std::move(value); }

    /**
     * The format that was used to encode the data. For ancillary data streams, set the
     * encoding name to smpte291. For audio streams, set the encoding name to pcm. For
     * video, 2110 streams, set the encoding name to raw. For video, JPEG XS streams,
     * set the encoding name to jxsv.
     */
    inline MediaStreamSourceConfiguration& WithEncodingName(const EncodingName& value) { SetEncodingName(value); return *this;}

    /**
     * The format that was used to encode the data. For ancillary data streams, set the
     * encoding name to smpte291. For audio streams, set the encoding name to pcm. For
     * video, 2110 streams, set the encoding name to raw. For video, JPEG XS streams,
     * set the encoding name to jxsv.
     */
    inline MediaStreamSourceConfiguration& WithEncodingName(EncodingName&& value) { SetEncodingName(std::move(value)); return *this;}


    /**
     * The transport parameters that are associated with an incoming media stream.
     */
    inline const Aws::Vector<InputConfiguration>& GetInputConfigurations() const{ return m_inputConfigurations; }

    /**
     * The transport parameters that are associated with an incoming media stream.
     */
    inline bool InputConfigurationsHasBeenSet() const { return m_inputConfigurationsHasBeenSet; }

    /**
     * The transport parameters that are associated with an incoming media stream.
     */
    inline void SetInputConfigurations(const Aws::Vector<InputConfiguration>& value) { m_inputConfigurationsHasBeenSet = true; m_inputConfigurations = value; }

    /**
     * The transport parameters that are associated with an incoming media stream.
     */
    inline void SetInputConfigurations(Aws::Vector<InputConfiguration>&& value) { m_inputConfigurationsHasBeenSet = true; m_inputConfigurations = std::move(value); }

    /**
     * The transport parameters that are associated with an incoming media stream.
     */
    inline MediaStreamSourceConfiguration& WithInputConfigurations(const Aws::Vector<InputConfiguration>& value) { SetInputConfigurations(value); return *this;}

    /**
     * The transport parameters that are associated with an incoming media stream.
     */
    inline MediaStreamSourceConfiguration& WithInputConfigurations(Aws::Vector<InputConfiguration>&& value) { SetInputConfigurations(std::move(value)); return *this;}

    /**
     * The transport parameters that are associated with an incoming media stream.
     */
    inline MediaStreamSourceConfiguration& AddInputConfigurations(const InputConfiguration& value) { m_inputConfigurationsHasBeenSet = true; m_inputConfigurations.push_back(value); return *this; }

    /**
     * The transport parameters that are associated with an incoming media stream.
     */
    inline MediaStreamSourceConfiguration& AddInputConfigurations(InputConfiguration&& value) { m_inputConfigurationsHasBeenSet = true; m_inputConfigurations.push_back(std::move(value)); return *this; }


    /**
     * The name of the media stream.
     */
    inline const Aws::String& GetMediaStreamName() const{ return m_mediaStreamName; }

    /**
     * The name of the media stream.
     */
    inline bool MediaStreamNameHasBeenSet() const { return m_mediaStreamNameHasBeenSet; }

    /**
     * The name of the media stream.
     */
    inline void SetMediaStreamName(const Aws::String& value) { m_mediaStreamNameHasBeenSet = true; m_mediaStreamName = value; }

    /**
     * The name of the media stream.
     */
    inline void SetMediaStreamName(Aws::String&& value) { m_mediaStreamNameHasBeenSet = true; m_mediaStreamName = std::move(value); }

    /**
     * The name of the media stream.
     */
    inline void SetMediaStreamName(const char* value) { m_mediaStreamNameHasBeenSet = true; m_mediaStreamName.assign(value); }

    /**
     * The name of the media stream.
     */
    inline MediaStreamSourceConfiguration& WithMediaStreamName(const Aws::String& value) { SetMediaStreamName(value); return *this;}

    /**
     * The name of the media stream.
     */
    inline MediaStreamSourceConfiguration& WithMediaStreamName(Aws::String&& value) { SetMediaStreamName(std::move(value)); return *this;}

    /**
     * The name of the media stream.
     */
    inline MediaStreamSourceConfiguration& WithMediaStreamName(const char* value) { SetMediaStreamName(value); return *this;}

  private:

    EncodingName m_encodingName;
    bool m_encodingNameHasBeenSet = false;

    Aws::Vector<InputConfiguration> m_inputConfigurations;
    bool m_inputConfigurationsHasBeenSet = false;

    Aws::String m_mediaStreamName;
    bool m_mediaStreamNameHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
