﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/EncodingName.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/model/InputConfigurationRequest.h>
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
   * The definition of a media stream that you want to associate with the
   * source.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/MediaStreamSourceConfigurationRequest">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONNECT_API MediaStreamSourceConfigurationRequest
  {
  public:
    MediaStreamSourceConfigurationRequest();
    MediaStreamSourceConfigurationRequest(Aws::Utils::Json::JsonView jsonValue);
    MediaStreamSourceConfigurationRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The format you want to use to encode the data. For ancillary data streams, set
     * the encoding name to smpte291. For audio streams, set the encoding name to pcm.
     * For video, 2110 streams, set the encoding name to raw. For video, JPEG XS
     * streams, set the encoding name to jxsv.
     */
    inline const EncodingName& GetEncodingName() const{ return m_encodingName; }

    /**
     * The format you want to use to encode the data. For ancillary data streams, set
     * the encoding name to smpte291. For audio streams, set the encoding name to pcm.
     * For video, 2110 streams, set the encoding name to raw. For video, JPEG XS
     * streams, set the encoding name to jxsv.
     */
    inline bool EncodingNameHasBeenSet() const { return m_encodingNameHasBeenSet; }

    /**
     * The format you want to use to encode the data. For ancillary data streams, set
     * the encoding name to smpte291. For audio streams, set the encoding name to pcm.
     * For video, 2110 streams, set the encoding name to raw. For video, JPEG XS
     * streams, set the encoding name to jxsv.
     */
    inline void SetEncodingName(const EncodingName& value) { m_encodingNameHasBeenSet = true; m_encodingName = value; }

    /**
     * The format you want to use to encode the data. For ancillary data streams, set
     * the encoding name to smpte291. For audio streams, set the encoding name to pcm.
     * For video, 2110 streams, set the encoding name to raw. For video, JPEG XS
     * streams, set the encoding name to jxsv.
     */
    inline void SetEncodingName(EncodingName&& value) { m_encodingNameHasBeenSet = true; m_encodingName = std::move(value); }

    /**
     * The format you want to use to encode the data. For ancillary data streams, set
     * the encoding name to smpte291. For audio streams, set the encoding name to pcm.
     * For video, 2110 streams, set the encoding name to raw. For video, JPEG XS
     * streams, set the encoding name to jxsv.
     */
    inline MediaStreamSourceConfigurationRequest& WithEncodingName(const EncodingName& value) { SetEncodingName(value); return *this;}

    /**
     * The format you want to use to encode the data. For ancillary data streams, set
     * the encoding name to smpte291. For audio streams, set the encoding name to pcm.
     * For video, 2110 streams, set the encoding name to raw. For video, JPEG XS
     * streams, set the encoding name to jxsv.
     */
    inline MediaStreamSourceConfigurationRequest& WithEncodingName(EncodingName&& value) { SetEncodingName(std::move(value)); return *this;}


    /**
     * The transport parameters that you want to associate with the media stream.
     */
    inline const Aws::Vector<InputConfigurationRequest>& GetInputConfigurations() const{ return m_inputConfigurations; }

    /**
     * The transport parameters that you want to associate with the media stream.
     */
    inline bool InputConfigurationsHasBeenSet() const { return m_inputConfigurationsHasBeenSet; }

    /**
     * The transport parameters that you want to associate with the media stream.
     */
    inline void SetInputConfigurations(const Aws::Vector<InputConfigurationRequest>& value) { m_inputConfigurationsHasBeenSet = true; m_inputConfigurations = value; }

    /**
     * The transport parameters that you want to associate with the media stream.
     */
    inline void SetInputConfigurations(Aws::Vector<InputConfigurationRequest>&& value) { m_inputConfigurationsHasBeenSet = true; m_inputConfigurations = std::move(value); }

    /**
     * The transport parameters that you want to associate with the media stream.
     */
    inline MediaStreamSourceConfigurationRequest& WithInputConfigurations(const Aws::Vector<InputConfigurationRequest>& value) { SetInputConfigurations(value); return *this;}

    /**
     * The transport parameters that you want to associate with the media stream.
     */
    inline MediaStreamSourceConfigurationRequest& WithInputConfigurations(Aws::Vector<InputConfigurationRequest>&& value) { SetInputConfigurations(std::move(value)); return *this;}

    /**
     * The transport parameters that you want to associate with the media stream.
     */
    inline MediaStreamSourceConfigurationRequest& AddInputConfigurations(const InputConfigurationRequest& value) { m_inputConfigurationsHasBeenSet = true; m_inputConfigurations.push_back(value); return *this; }

    /**
     * The transport parameters that you want to associate with the media stream.
     */
    inline MediaStreamSourceConfigurationRequest& AddInputConfigurations(InputConfigurationRequest&& value) { m_inputConfigurationsHasBeenSet = true; m_inputConfigurations.push_back(std::move(value)); return *this; }


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
    inline MediaStreamSourceConfigurationRequest& WithMediaStreamName(const Aws::String& value) { SetMediaStreamName(value); return *this;}

    /**
     * The name of the media stream.
     */
    inline MediaStreamSourceConfigurationRequest& WithMediaStreamName(Aws::String&& value) { SetMediaStreamName(std::move(value)); return *this;}

    /**
     * The name of the media stream.
     */
    inline MediaStreamSourceConfigurationRequest& WithMediaStreamName(const char* value) { SetMediaStreamName(value); return *this;}

  private:

    EncodingName m_encodingName;
    bool m_encodingNameHasBeenSet;

    Aws::Vector<InputConfigurationRequest> m_inputConfigurations;
    bool m_inputConfigurationsHasBeenSet;

    Aws::String m_mediaStreamName;
    bool m_mediaStreamNameHasBeenSet;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
