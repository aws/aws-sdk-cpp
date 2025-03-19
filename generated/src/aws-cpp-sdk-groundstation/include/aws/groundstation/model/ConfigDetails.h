/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/groundstation/model/AntennaDemodDecodeDetails.h>
#include <aws/groundstation/model/EndpointDetails.h>
#include <aws/groundstation/model/S3RecordingDetails.h>
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
namespace GroundStation
{
namespace Model
{

  /**
   * <p>Details for certain <code>Config</code> object types in a
   * contact.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/ConfigDetails">AWS
   * API Reference</a></p>
   */
  class ConfigDetails
  {
  public:
    AWS_GROUNDSTATION_API ConfigDetails() = default;
    AWS_GROUNDSTATION_API ConfigDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API ConfigDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Details for antenna demod decode <code>Config</code> in a contact.</p>
     */
    inline const AntennaDemodDecodeDetails& GetAntennaDemodDecodeDetails() const { return m_antennaDemodDecodeDetails; }
    inline bool AntennaDemodDecodeDetailsHasBeenSet() const { return m_antennaDemodDecodeDetailsHasBeenSet; }
    template<typename AntennaDemodDecodeDetailsT = AntennaDemodDecodeDetails>
    void SetAntennaDemodDecodeDetails(AntennaDemodDecodeDetailsT&& value) { m_antennaDemodDecodeDetailsHasBeenSet = true; m_antennaDemodDecodeDetails = std::forward<AntennaDemodDecodeDetailsT>(value); }
    template<typename AntennaDemodDecodeDetailsT = AntennaDemodDecodeDetails>
    ConfigDetails& WithAntennaDemodDecodeDetails(AntennaDemodDecodeDetailsT&& value) { SetAntennaDemodDecodeDetails(std::forward<AntennaDemodDecodeDetailsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const EndpointDetails& GetEndpointDetails() const { return m_endpointDetails; }
    inline bool EndpointDetailsHasBeenSet() const { return m_endpointDetailsHasBeenSet; }
    template<typename EndpointDetailsT = EndpointDetails>
    void SetEndpointDetails(EndpointDetailsT&& value) { m_endpointDetailsHasBeenSet = true; m_endpointDetails = std::forward<EndpointDetailsT>(value); }
    template<typename EndpointDetailsT = EndpointDetails>
    ConfigDetails& WithEndpointDetails(EndpointDetailsT&& value) { SetEndpointDetails(std::forward<EndpointDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details for an S3 recording <code>Config</code> in a contact.</p>
     */
    inline const S3RecordingDetails& GetS3RecordingDetails() const { return m_s3RecordingDetails; }
    inline bool S3RecordingDetailsHasBeenSet() const { return m_s3RecordingDetailsHasBeenSet; }
    template<typename S3RecordingDetailsT = S3RecordingDetails>
    void SetS3RecordingDetails(S3RecordingDetailsT&& value) { m_s3RecordingDetailsHasBeenSet = true; m_s3RecordingDetails = std::forward<S3RecordingDetailsT>(value); }
    template<typename S3RecordingDetailsT = S3RecordingDetails>
    ConfigDetails& WithS3RecordingDetails(S3RecordingDetailsT&& value) { SetS3RecordingDetails(std::forward<S3RecordingDetailsT>(value)); return *this;}
    ///@}
  private:

    AntennaDemodDecodeDetails m_antennaDemodDecodeDetails;
    bool m_antennaDemodDecodeDetailsHasBeenSet = false;

    EndpointDetails m_endpointDetails;
    bool m_endpointDetailsHasBeenSet = false;

    S3RecordingDetails m_s3RecordingDetails;
    bool m_s3RecordingDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
