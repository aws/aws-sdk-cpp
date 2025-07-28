/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/Greengrass.h>
#include <aws/iotsitewise/model/GreengrassV2.h>
#include <aws/iotsitewise/model/SiemensIE.h>
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
namespace IoTSiteWise
{
namespace Model
{

  /**
   * <p>The gateway's platform configuration. You can only specify one platform type
   * in a gateway.</p> <p>(Legacy only) For Greengrass V1 gateways, specify the
   * <code>greengrass</code> parameter with a valid Greengrass group ARN.</p> <p>For
   * Greengrass V2 gateways, specify the <code>greengrassV2</code> parameter with a
   * valid core device thing name. If creating a V3 gateway
   * (<code>gatewayVersion=3</code>), you must also specify the
   * <code>coreDeviceOperatingSystem</code>.</p> <p>For Siemens Industrial Edge
   * gateways, specify the <code>siemensIE</code> parameter with a valid IoT Core
   * thing name.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/GatewayPlatform">AWS
   * API Reference</a></p>
   */
  class GatewayPlatform
  {
  public:
    AWS_IOTSITEWISE_API GatewayPlatform() = default;
    AWS_IOTSITEWISE_API GatewayPlatform(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API GatewayPlatform& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A gateway that runs on IoT Greengrass.</p>
     */
    inline const Greengrass& GetGreengrass() const { return m_greengrass; }
    inline bool GreengrassHasBeenSet() const { return m_greengrassHasBeenSet; }
    template<typename GreengrassT = Greengrass>
    void SetGreengrass(GreengrassT&& value) { m_greengrassHasBeenSet = true; m_greengrass = std::forward<GreengrassT>(value); }
    template<typename GreengrassT = Greengrass>
    GatewayPlatform& WithGreengrass(GreengrassT&& value) { SetGreengrass(std::forward<GreengrassT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A gateway that runs on IoT Greengrass V2.</p>
     */
    inline const GreengrassV2& GetGreengrassV2() const { return m_greengrassV2; }
    inline bool GreengrassV2HasBeenSet() const { return m_greengrassV2HasBeenSet; }
    template<typename GreengrassV2T = GreengrassV2>
    void SetGreengrassV2(GreengrassV2T&& value) { m_greengrassV2HasBeenSet = true; m_greengrassV2 = std::forward<GreengrassV2T>(value); }
    template<typename GreengrassV2T = GreengrassV2>
    GatewayPlatform& WithGreengrassV2(GreengrassV2T&& value) { SetGreengrassV2(std::forward<GreengrassV2T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A SiteWise Edge gateway that runs on a Siemens Industrial Edge Device.</p>
     */
    inline const SiemensIE& GetSiemensIE() const { return m_siemensIE; }
    inline bool SiemensIEHasBeenSet() const { return m_siemensIEHasBeenSet; }
    template<typename SiemensIET = SiemensIE>
    void SetSiemensIE(SiemensIET&& value) { m_siemensIEHasBeenSet = true; m_siemensIE = std::forward<SiemensIET>(value); }
    template<typename SiemensIET = SiemensIE>
    GatewayPlatform& WithSiemensIE(SiemensIET&& value) { SetSiemensIE(std::forward<SiemensIET>(value)); return *this;}
    ///@}
  private:

    Greengrass m_greengrass;
    bool m_greengrassHasBeenSet = false;

    GreengrassV2 m_greengrassV2;
    bool m_greengrassV2HasBeenSet = false;

    SiemensIE m_siemensIE;
    bool m_siemensIEHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
