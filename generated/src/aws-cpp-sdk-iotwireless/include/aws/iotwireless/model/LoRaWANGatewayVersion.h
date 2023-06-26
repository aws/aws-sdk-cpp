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
    AWS_IOTWIRELESS_API LoRaWANGatewayVersion();
    AWS_IOTWIRELESS_API LoRaWANGatewayVersion(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API LoRaWANGatewayVersion& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The version of the wireless gateway firmware.</p>
     */
    inline const Aws::String& GetPackageVersion() const{ return m_packageVersion; }

    /**
     * <p>The version of the wireless gateway firmware.</p>
     */
    inline bool PackageVersionHasBeenSet() const { return m_packageVersionHasBeenSet; }

    /**
     * <p>The version of the wireless gateway firmware.</p>
     */
    inline void SetPackageVersion(const Aws::String& value) { m_packageVersionHasBeenSet = true; m_packageVersion = value; }

    /**
     * <p>The version of the wireless gateway firmware.</p>
     */
    inline void SetPackageVersion(Aws::String&& value) { m_packageVersionHasBeenSet = true; m_packageVersion = std::move(value); }

    /**
     * <p>The version of the wireless gateway firmware.</p>
     */
    inline void SetPackageVersion(const char* value) { m_packageVersionHasBeenSet = true; m_packageVersion.assign(value); }

    /**
     * <p>The version of the wireless gateway firmware.</p>
     */
    inline LoRaWANGatewayVersion& WithPackageVersion(const Aws::String& value) { SetPackageVersion(value); return *this;}

    /**
     * <p>The version of the wireless gateway firmware.</p>
     */
    inline LoRaWANGatewayVersion& WithPackageVersion(Aws::String&& value) { SetPackageVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the wireless gateway firmware.</p>
     */
    inline LoRaWANGatewayVersion& WithPackageVersion(const char* value) { SetPackageVersion(value); return *this;}


    /**
     * <p>The model number of the wireless gateway.</p>
     */
    inline const Aws::String& GetModel() const{ return m_model; }

    /**
     * <p>The model number of the wireless gateway.</p>
     */
    inline bool ModelHasBeenSet() const { return m_modelHasBeenSet; }

    /**
     * <p>The model number of the wireless gateway.</p>
     */
    inline void SetModel(const Aws::String& value) { m_modelHasBeenSet = true; m_model = value; }

    /**
     * <p>The model number of the wireless gateway.</p>
     */
    inline void SetModel(Aws::String&& value) { m_modelHasBeenSet = true; m_model = std::move(value); }

    /**
     * <p>The model number of the wireless gateway.</p>
     */
    inline void SetModel(const char* value) { m_modelHasBeenSet = true; m_model.assign(value); }

    /**
     * <p>The model number of the wireless gateway.</p>
     */
    inline LoRaWANGatewayVersion& WithModel(const Aws::String& value) { SetModel(value); return *this;}

    /**
     * <p>The model number of the wireless gateway.</p>
     */
    inline LoRaWANGatewayVersion& WithModel(Aws::String&& value) { SetModel(std::move(value)); return *this;}

    /**
     * <p>The model number of the wireless gateway.</p>
     */
    inline LoRaWANGatewayVersion& WithModel(const char* value) { SetModel(value); return *this;}


    /**
     * <p>The basic station version of the wireless gateway.</p>
     */
    inline const Aws::String& GetStation() const{ return m_station; }

    /**
     * <p>The basic station version of the wireless gateway.</p>
     */
    inline bool StationHasBeenSet() const { return m_stationHasBeenSet; }

    /**
     * <p>The basic station version of the wireless gateway.</p>
     */
    inline void SetStation(const Aws::String& value) { m_stationHasBeenSet = true; m_station = value; }

    /**
     * <p>The basic station version of the wireless gateway.</p>
     */
    inline void SetStation(Aws::String&& value) { m_stationHasBeenSet = true; m_station = std::move(value); }

    /**
     * <p>The basic station version of the wireless gateway.</p>
     */
    inline void SetStation(const char* value) { m_stationHasBeenSet = true; m_station.assign(value); }

    /**
     * <p>The basic station version of the wireless gateway.</p>
     */
    inline LoRaWANGatewayVersion& WithStation(const Aws::String& value) { SetStation(value); return *this;}

    /**
     * <p>The basic station version of the wireless gateway.</p>
     */
    inline LoRaWANGatewayVersion& WithStation(Aws::String&& value) { SetStation(std::move(value)); return *this;}

    /**
     * <p>The basic station version of the wireless gateway.</p>
     */
    inline LoRaWANGatewayVersion& WithStation(const char* value) { SetStation(value); return *this;}

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
