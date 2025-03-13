/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace IoTWireless
{
namespace Model
{

  /**
   * <p>LoRaWANGatewayVersion object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/LoRaWANGatewayVersion">AWS
   * API Reference</a></p>
   */
  class LoRaWANGatewayVersion
  {
  public:
    AWS_IOTWIRELESS_API LoRaWANGatewayVersion() = default;
    AWS_IOTWIRELESS_API LoRaWANGatewayVersion(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API LoRaWANGatewayVersion& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The version of the wireless gateway firmware.</p>
     */
    inline const Aws::String& GetPackageVersion() const { return m_packageVersion; }
    inline bool PackageVersionHasBeenSet() const { return m_packageVersionHasBeenSet; }
    template<typename PackageVersionT = Aws::String>
    void SetPackageVersion(PackageVersionT&& value) { m_packageVersionHasBeenSet = true; m_packageVersion = std::forward<PackageVersionT>(value); }
    template<typename PackageVersionT = Aws::String>
    LoRaWANGatewayVersion& WithPackageVersion(PackageVersionT&& value) { SetPackageVersion(std::forward<PackageVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The model number of the wireless gateway.</p>
     */
    inline const Aws::String& GetModel() const { return m_model; }
    inline bool ModelHasBeenSet() const { return m_modelHasBeenSet; }
    template<typename ModelT = Aws::String>
    void SetModel(ModelT&& value) { m_modelHasBeenSet = true; m_model = std::forward<ModelT>(value); }
    template<typename ModelT = Aws::String>
    LoRaWANGatewayVersion& WithModel(ModelT&& value) { SetModel(std::forward<ModelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The basic station version of the wireless gateway.</p>
     */
    inline const Aws::String& GetStation() const { return m_station; }
    inline bool StationHasBeenSet() const { return m_stationHasBeenSet; }
    template<typename StationT = Aws::String>
    void SetStation(StationT&& value) { m_stationHasBeenSet = true; m_station = std::forward<StationT>(value); }
    template<typename StationT = Aws::String>
    LoRaWANGatewayVersion& WithStation(StationT&& value) { SetStation(std::forward<StationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_packageVersion;
    bool m_packageVersionHasBeenSet = false;

    Aws::String m_model;
    bool m_modelHasBeenSet = false;

    Aws::String m_station;
    bool m_stationHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
