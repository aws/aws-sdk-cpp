/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconnect/model/EncodingName.h>
#include <aws/mediaconnect/model/EncodingParametersRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/model/DestinationConfigurationRequest.h>
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
   * The media stream that you want to associate with the output, and the parameters
   * for that association.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/MediaStreamOutputConfigurationRequest">AWS
   * API Reference</a></p>
   */
  class MediaStreamOutputConfigurationRequest
  {
  public:
    AWS_MEDIACONNECT_API MediaStreamOutputConfigurationRequest();
    AWS_MEDIACONNECT_API MediaStreamOutputConfigurationRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API MediaStreamOutputConfigurationRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The transport parameters that you want to associate with the media stream.
     */
    inline const Aws::Vector<DestinationConfigurationRequest>& GetDestinationConfigurations() const{ return m_destinationConfigurations; }

    /**
     * The transport parameters that you want to associate with the media stream.
     */
    inline bool DestinationConfigurationsHasBeenSet() const { return m_destinationConfigurationsHasBeenSet; }

    /**
     * The transport parameters that you want to associate with the media stream.
     */
    inline void SetDestinationConfigurations(const Aws::Vector<DestinationConfigurationRequest>& value) { m_destinationConfigurationsHasBeenSet = true; m_destinationConfigurations = value; }

    /**
     * The transport parameters that you want to associate with the media stream.
     */
    inline void SetDestinationConfigurations(Aws::Vector<DestinationConfigurationRequest>&& value) { m_destinationConfigurationsHasBeenSet = true; m_destinationConfigurations = std::move(value); }

    /**
     * The transport parameters that you want to associate with the media stream.
     */
    inline MediaStreamOutputConfigurationRequest& WithDestinationConfigurations(const Aws::Vector<DestinationConfigurationRequest>& value) { SetDestinationConfigurations(value); return *this;}

    /**
     * The transport parameters that you want to associate with the media stream.
     */
    inline MediaStreamOutputConfigurationRequest& WithDestinationConfigurations(Aws::Vector<DestinationConfigurationRequest>&& value) { SetDestinationConfigurations(std::move(value)); return *this;}

    /**
     * The transport parameters that you want to associate with the media stream.
     */
    inline MediaStreamOutputConfigurationRequest& AddDestinationConfigurations(const DestinationConfigurationRequest& value) { m_destinationConfigurationsHasBeenSet = true; m_destinationConfigurations.push_back(value); return *this; }

    /**
     * The transport parameters that you want to associate with the media stream.
     */
    inline MediaStreamOutputConfigurationRequest& AddDestinationConfigurations(DestinationConfigurationRequest&& value) { m_destinationConfigurationsHasBeenSet = true; m_destinationConfigurations.push_back(std::move(value)); return *this; }


    /**
     * The format that will be used to encode the data. For ancillary data streams, set
     * the encoding name to smpte291. For audio streams, set the encoding name to pcm.
     * For video, 2110 streams, set the encoding name to raw. For video, JPEG XS
     * streams, set the encoding name to jxsv.
     */
    inline const EncodingName& GetEncodingName() const{ return m_encodingName; }

    /**
     * The format that will be used to encode the data. For ancillary data streams, set
     * the encoding name to smpte291. For audio streams, set the encoding name to pcm.
     * For video, 2110 streams, set the encoding name to raw. For video, JPEG XS
     * streams, set the encoding name to jxsv.
     */
    inline bool EncodingNameHasBeenSet() const { return m_encodingNameHasBeenSet; }

    /**
     * The format that will be used to encode the data. For ancillary data streams, set
     * the encoding name to smpte291. For audio streams, set the encoding name to pcm.
     * For video, 2110 streams, set the encoding name to raw. For video, JPEG XS
     * streams, set the encoding name to jxsv.
     */
    inline void SetEncodingName(const EncodingName& value) { m_encodingNameHasBeenSet = true; m_encodingName = value; }

    /**
     * The format that will be used to encode the data. For ancillary data streams, set
     * the encoding name to smpte291. For audio streams, set the encoding name to pcm.
     * For video, 2110 streams, set the encoding name to raw. For video, JPEG XS
     * streams, set the encoding name to jxsv.
     */
    inline void SetEncodingName(EncodingName&& value) { m_encodingNameHasBeenSet = true; m_encodingName = std::move(value); }

    /**
     * The format that will be used to encode the data. For ancillary data streams, set
     * the encoding name to smpte291. For audio streams, set the encoding name to pcm.
     * For video, 2110 streams, set the encoding name to raw. For video, JPEG XS
     * streams, set the encoding name to jxsv.
     */
    inline MediaStreamOutputConfigurationRequest& WithEncodingName(const EncodingName& value) { SetEncodingName(value); return *this;}

    /**
     * The format that will be used to encode the data. For ancillary data streams, set
     * the encoding name to smpte291. For audio streams, set the encoding name to pcm.
     * For video, 2110 streams, set the encoding name to raw. For video, JPEG XS
     * streams, set the encoding name to jxsv.
     */
    inline MediaStreamOutputConfigurationRequest& WithEncodingName(EncodingName&& value) { SetEncodingName(std::move(value)); return *this;}


    /**
     * A collection of parameters that determine how MediaConnect will convert the
     * content. These fields only apply to outputs on flows that have a CDI source.
     */
    inline const EncodingParametersRequest& GetEncodingParameters() const{ return m_encodingParameters; }

    /**
     * A collection of parameters that determine how MediaConnect will convert the
     * content. These fields only apply to outputs on flows that have a CDI source.
     */
    inline bool EncodingParametersHasBeenSet() const { return m_encodingParametersHasBeenSet; }

    /**
     * A collection of parameters that determine how MediaConnect will convert the
     * content. These fields only apply to outputs on flows that have a CDI source.
     */
    inline void SetEncodingParameters(const EncodingParametersRequest& value) { m_encodingParametersHasBeenSet = true; m_encodingParameters = value; }

    /**
     * A collection of parameters that determine how MediaConnect will convert the
     * content. These fields only apply to outputs on flows that have a CDI source.
     */
    inline void SetEncodingParameters(EncodingParametersRequest&& value) { m_encodingParametersHasBeenSet = true; m_encodingParameters = std::move(value); }

    /**
     * A collection of parameters that determine how MediaConnect will convert the
     * content. These fields only apply to outputs on flows that have a CDI source.
     */
    inline MediaStreamOutputConfigurationRequest& WithEncodingParameters(const EncodingParametersRequest& value) { SetEncodingParameters(value); return *this;}

    /**
     * A collection of parameters that determine how MediaConnect will convert the
     * content. These fields only apply to outputs on flows that have a CDI source.
     */
    inline MediaStreamOutputConfigurationRequest& WithEncodingParameters(EncodingParametersRequest&& value) { SetEncodingParameters(std::move(value)); return *this;}


    /**
     * The name of the media stream that is associated with the output.
     */
    inline const Aws::String& GetMediaStreamName() const{ return m_mediaStreamName; }

    /**
     * The name of the media stream that is associated with the output.
     */
    inline bool MediaStreamNameHasBeenSet() const { return m_mediaStreamNameHasBeenSet; }

    /**
     * The name of the media stream that is associated with the output.
     */
    inline void SetMediaStreamName(const Aws::String& value) { m_mediaStreamNameHasBeenSet = true; m_mediaStreamName = value; }

    /**
     * The name of the media stream that is associated with the output.
     */
    inline void SetMediaStreamName(Aws::String&& value) { m_mediaStreamNameHasBeenSet = true; m_mediaStreamName = std::move(value); }

    /**
     * The name of the media stream that is associated with the output.
     */
    inline void SetMediaStreamName(const char* value) { m_mediaStreamNameHasBeenSet = true; m_mediaStreamName.assign(value); }

    /**
     * The name of the media stream that is associated with the output.
     */
    inline MediaStreamOutputConfigurationRequest& WithMediaStreamName(const Aws::String& value) { SetMediaStreamName(value); return *this;}

    /**
     * The name of the media stream that is associated with the output.
     */
    inline MediaStreamOutputConfigurationRequest& WithMediaStreamName(Aws::String&& value) { SetMediaStreamName(std::move(value)); return *this;}

    /**
     * The name of the media stream that is associated with the output.
     */
    inline MediaStreamOutputConfigurationRequest& WithMediaStreamName(const char* value) { SetMediaStreamName(value); return *this;}

  private:

    Aws::Vector<DestinationConfigurationRequest> m_destinationConfigurations;
    bool m_destinationConfigurationsHasBeenSet = false;

    EncodingName m_encodingName;
    bool m_encodingNameHasBeenSet = false;

    EncodingParametersRequest m_encodingParameters;
    bool m_encodingParametersHasBeenSet = false;

    Aws::String m_mediaStreamName;
    bool m_mediaStreamNameHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
