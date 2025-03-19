/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/groundstation/model/S3Object.h>
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
   * <p> Ephemeris data in Orbit Ephemeris Message (OEM) format. </p> <p> AWS Ground
   * Station processes OEM Customer Provided Ephemerides according to the <a
   * href="https://public.ccsds.org/Pubs/502x0b3e1.pdf">CCSDS standard</a> with some
   * extra restrictions. OEM files should be in KVN format. For more detail about the
   * OEM format that AWS Ground Station supports, see <a
   * href="https://docs.aws.amazon.com/ground-station/latest/ug/providing-custom-ephemeris-data.html#oem-ephemeris-format">OEM
   * ephemeris format</a> in the AWS Ground Station user guide. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/OEMEphemeris">AWS
   * API Reference</a></p>
   */
  class OEMEphemeris
  {
  public:
    AWS_GROUNDSTATION_API OEMEphemeris() = default;
    AWS_GROUNDSTATION_API OEMEphemeris(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API OEMEphemeris& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The data for an OEM ephemeris, supplied directly in the request rather than
     * through an S3 object.</p>
     */
    inline const Aws::String& GetOemData() const { return m_oemData; }
    inline bool OemDataHasBeenSet() const { return m_oemDataHasBeenSet; }
    template<typename OemDataT = Aws::String>
    void SetOemData(OemDataT&& value) { m_oemDataHasBeenSet = true; m_oemData = std::forward<OemDataT>(value); }
    template<typename OemDataT = Aws::String>
    OEMEphemeris& WithOemData(OemDataT&& value) { SetOemData(std::forward<OemDataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifies the S3 object to be used as the ephemeris.</p>
     */
    inline const S3Object& GetS3Object() const { return m_s3Object; }
    inline bool S3ObjectHasBeenSet() const { return m_s3ObjectHasBeenSet; }
    template<typename S3ObjectT = S3Object>
    void SetS3Object(S3ObjectT&& value) { m_s3ObjectHasBeenSet = true; m_s3Object = std::forward<S3ObjectT>(value); }
    template<typename S3ObjectT = S3Object>
    OEMEphemeris& WithS3Object(S3ObjectT&& value) { SetS3Object(std::forward<S3ObjectT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_oemData;
    bool m_oemDataHasBeenSet = false;

    S3Object m_s3Object;
    bool m_s3ObjectHasBeenSet = false;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
