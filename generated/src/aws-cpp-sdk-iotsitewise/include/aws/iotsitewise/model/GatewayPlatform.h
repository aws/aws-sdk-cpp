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
   * <p>Contains a gateway's platform information.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/GatewayPlatform">AWS
   * API Reference</a></p>
   */
  class GatewayPlatform
  {
  public:
    AWS_IOTSITEWISE_API GatewayPlatform();
    AWS_IOTSITEWISE_API GatewayPlatform(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API GatewayPlatform& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A gateway that runs on IoT Greengrass.</p>
     */
    inline const Greengrass& GetGreengrass() const{ return m_greengrass; }
    inline bool GreengrassHasBeenSet() const { return m_greengrassHasBeenSet; }
    inline void SetGreengrass(const Greengrass& value) { m_greengrassHasBeenSet = true; m_greengrass = value; }
    inline void SetGreengrass(Greengrass&& value) { m_greengrassHasBeenSet = true; m_greengrass = std::move(value); }
    inline GatewayPlatform& WithGreengrass(const Greengrass& value) { SetGreengrass(value); return *this;}
    inline GatewayPlatform& WithGreengrass(Greengrass&& value) { SetGreengrass(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A gateway that runs on IoT Greengrass V2.</p>
     */
    inline const GreengrassV2& GetGreengrassV2() const{ return m_greengrassV2; }
    inline bool GreengrassV2HasBeenSet() const { return m_greengrassV2HasBeenSet; }
    inline void SetGreengrassV2(const GreengrassV2& value) { m_greengrassV2HasBeenSet = true; m_greengrassV2 = value; }
    inline void SetGreengrassV2(GreengrassV2&& value) { m_greengrassV2HasBeenSet = true; m_greengrassV2 = std::move(value); }
    inline GatewayPlatform& WithGreengrassV2(const GreengrassV2& value) { SetGreengrassV2(value); return *this;}
    inline GatewayPlatform& WithGreengrassV2(GreengrassV2&& value) { SetGreengrassV2(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A SiteWise Edge gateway that runs on a Siemens Industrial Edge Device.</p>
     */
    inline const SiemensIE& GetSiemensIE() const{ return m_siemensIE; }
    inline bool SiemensIEHasBeenSet() const { return m_siemensIEHasBeenSet; }
    inline void SetSiemensIE(const SiemensIE& value) { m_siemensIEHasBeenSet = true; m_siemensIE = value; }
    inline void SetSiemensIE(SiemensIE&& value) { m_siemensIEHasBeenSet = true; m_siemensIE = std::move(value); }
    inline GatewayPlatform& WithSiemensIE(const SiemensIE& value) { SetSiemensIE(value); return *this;}
    inline GatewayPlatform& WithSiemensIE(SiemensIE&& value) { SetSiemensIE(std::move(value)); return *this;}
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
