/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/model/PingBeacon.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace GameLift {
namespace Model {

/**
 * <p>Properties of a location, which can include its name, ARN (for custom
 * locations), and ping beacon information.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/LocationModel">AWS
 * API Reference</a></p>
 */
class LocationModel {
 public:
  AWS_GAMELIFT_API LocationModel() = default;
  AWS_GAMELIFT_API LocationModel(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_GAMELIFT_API LocationModel& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_GAMELIFT_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The location's name.</p>
   */
  inline const Aws::String& GetLocationName() const { return m_locationName; }
  inline bool LocationNameHasBeenSet() const { return m_locationNameHasBeenSet; }
  template <typename LocationNameT = Aws::String>
  void SetLocationName(LocationNameT&& value) {
    m_locationNameHasBeenSet = true;
    m_locationName = std::forward<LocationNameT>(value);
  }
  template <typename LocationNameT = Aws::String>
  LocationModel& WithLocationName(LocationNameT&& value) {
    SetLocationName(std::forward<LocationNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (<a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
   * that is assigned to a custom location resource and uniquely identifies it. ARNs
   * are unique across all Regions. Format is
   * <code>arn:aws:gamelift:&lt;region&gt;::location/location-a1234567-b8c9-0d1e-2fa3-b45c6d7e8912</code>.</p>
   */
  inline const Aws::String& GetLocationArn() const { return m_locationArn; }
  inline bool LocationArnHasBeenSet() const { return m_locationArnHasBeenSet; }
  template <typename LocationArnT = Aws::String>
  void SetLocationArn(LocationArnT&& value) {
    m_locationArnHasBeenSet = true;
    m_locationArn = std::forward<LocationArnT>(value);
  }
  template <typename LocationArnT = Aws::String>
  LocationModel& WithLocationArn(LocationArnT&& value) {
    SetLocationArn(std::forward<LocationArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Information about the UDP ping beacon for this location. Ping beacons are
   * fixed endpoints that you can use to measure network latency between a player
   * device and an Amazon GameLift Servers hosting location.</p>
   */
  inline const PingBeacon& GetPingBeacon() const { return m_pingBeacon; }
  inline bool PingBeaconHasBeenSet() const { return m_pingBeaconHasBeenSet; }
  template <typename PingBeaconT = PingBeacon>
  void SetPingBeacon(PingBeaconT&& value) {
    m_pingBeaconHasBeenSet = true;
    m_pingBeacon = std::forward<PingBeaconT>(value);
  }
  template <typename PingBeaconT = PingBeacon>
  LocationModel& WithPingBeacon(PingBeaconT&& value) {
    SetPingBeacon(std::forward<PingBeaconT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_locationName;

  Aws::String m_locationArn;

  PingBeacon m_pingBeacon;
  bool m_locationNameHasBeenSet = false;
  bool m_locationArnHasBeenSet = false;
  bool m_pingBeaconHasBeenSet = false;
};

}  // namespace Model
}  // namespace GameLift
}  // namespace Aws
