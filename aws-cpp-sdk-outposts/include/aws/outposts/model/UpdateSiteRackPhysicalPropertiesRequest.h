/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/outposts/OutpostsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/outposts/model/PowerDrawKva.h>
#include <aws/outposts/model/PowerPhase.h>
#include <aws/outposts/model/PowerConnector.h>
#include <aws/outposts/model/PowerFeedDrop.h>
#include <aws/outposts/model/UplinkGbps.h>
#include <aws/outposts/model/UplinkCount.h>
#include <aws/outposts/model/FiberOpticCableType.h>
#include <aws/outposts/model/OpticalStandard.h>
#include <aws/outposts/model/MaximumSupportedWeightLbs.h>
#include <utility>

namespace Aws
{
namespace Outposts
{
namespace Model
{

  /**
   */
  class UpdateSiteRackPhysicalPropertiesRequest : public OutpostsRequest
  {
  public:
    AWS_OUTPOSTS_API UpdateSiteRackPhysicalPropertiesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateSiteRackPhysicalProperties"; }

    AWS_OUTPOSTS_API Aws::String SerializePayload() const override;


    /**
     * <p> The ID or the Amazon Resource Name (ARN) of the site. </p>
     */
    inline const Aws::String& GetSiteId() const{ return m_siteId; }

    /**
     * <p> The ID or the Amazon Resource Name (ARN) of the site. </p>
     */
    inline bool SiteIdHasBeenSet() const { return m_siteIdHasBeenSet; }

    /**
     * <p> The ID or the Amazon Resource Name (ARN) of the site. </p>
     */
    inline void SetSiteId(const Aws::String& value) { m_siteIdHasBeenSet = true; m_siteId = value; }

    /**
     * <p> The ID or the Amazon Resource Name (ARN) of the site. </p>
     */
    inline void SetSiteId(Aws::String&& value) { m_siteIdHasBeenSet = true; m_siteId = std::move(value); }

    /**
     * <p> The ID or the Amazon Resource Name (ARN) of the site. </p>
     */
    inline void SetSiteId(const char* value) { m_siteIdHasBeenSet = true; m_siteId.assign(value); }

    /**
     * <p> The ID or the Amazon Resource Name (ARN) of the site. </p>
     */
    inline UpdateSiteRackPhysicalPropertiesRequest& WithSiteId(const Aws::String& value) { SetSiteId(value); return *this;}

    /**
     * <p> The ID or the Amazon Resource Name (ARN) of the site. </p>
     */
    inline UpdateSiteRackPhysicalPropertiesRequest& WithSiteId(Aws::String&& value) { SetSiteId(std::move(value)); return *this;}

    /**
     * <p> The ID or the Amazon Resource Name (ARN) of the site. </p>
     */
    inline UpdateSiteRackPhysicalPropertiesRequest& WithSiteId(const char* value) { SetSiteId(value); return *this;}


    /**
     * <p>The power draw, in kVA, available at the hardware placement position for the
     * rack.</p>
     */
    inline const PowerDrawKva& GetPowerDrawKva() const{ return m_powerDrawKva; }

    /**
     * <p>The power draw, in kVA, available at the hardware placement position for the
     * rack.</p>
     */
    inline bool PowerDrawKvaHasBeenSet() const { return m_powerDrawKvaHasBeenSet; }

    /**
     * <p>The power draw, in kVA, available at the hardware placement position for the
     * rack.</p>
     */
    inline void SetPowerDrawKva(const PowerDrawKva& value) { m_powerDrawKvaHasBeenSet = true; m_powerDrawKva = value; }

    /**
     * <p>The power draw, in kVA, available at the hardware placement position for the
     * rack.</p>
     */
    inline void SetPowerDrawKva(PowerDrawKva&& value) { m_powerDrawKvaHasBeenSet = true; m_powerDrawKva = std::move(value); }

    /**
     * <p>The power draw, in kVA, available at the hardware placement position for the
     * rack.</p>
     */
    inline UpdateSiteRackPhysicalPropertiesRequest& WithPowerDrawKva(const PowerDrawKva& value) { SetPowerDrawKva(value); return *this;}

    /**
     * <p>The power draw, in kVA, available at the hardware placement position for the
     * rack.</p>
     */
    inline UpdateSiteRackPhysicalPropertiesRequest& WithPowerDrawKva(PowerDrawKva&& value) { SetPowerDrawKva(std::move(value)); return *this;}


    /**
     * <p>The power option that you can provide for hardware. </p> <ul> <li>
     * <p>Single-phase AC feed: 200 V to 277 V, 50 Hz or 60 Hz</p> </li> <li>
     * <p>Three-phase AC feed: 346 V to 480 V, 50 Hz or 60 Hz</p> </li> </ul>
     */
    inline const PowerPhase& GetPowerPhase() const{ return m_powerPhase; }

    /**
     * <p>The power option that you can provide for hardware. </p> <ul> <li>
     * <p>Single-phase AC feed: 200 V to 277 V, 50 Hz or 60 Hz</p> </li> <li>
     * <p>Three-phase AC feed: 346 V to 480 V, 50 Hz or 60 Hz</p> </li> </ul>
     */
    inline bool PowerPhaseHasBeenSet() const { return m_powerPhaseHasBeenSet; }

    /**
     * <p>The power option that you can provide for hardware. </p> <ul> <li>
     * <p>Single-phase AC feed: 200 V to 277 V, 50 Hz or 60 Hz</p> </li> <li>
     * <p>Three-phase AC feed: 346 V to 480 V, 50 Hz or 60 Hz</p> </li> </ul>
     */
    inline void SetPowerPhase(const PowerPhase& value) { m_powerPhaseHasBeenSet = true; m_powerPhase = value; }

    /**
     * <p>The power option that you can provide for hardware. </p> <ul> <li>
     * <p>Single-phase AC feed: 200 V to 277 V, 50 Hz or 60 Hz</p> </li> <li>
     * <p>Three-phase AC feed: 346 V to 480 V, 50 Hz or 60 Hz</p> </li> </ul>
     */
    inline void SetPowerPhase(PowerPhase&& value) { m_powerPhaseHasBeenSet = true; m_powerPhase = std::move(value); }

    /**
     * <p>The power option that you can provide for hardware. </p> <ul> <li>
     * <p>Single-phase AC feed: 200 V to 277 V, 50 Hz or 60 Hz</p> </li> <li>
     * <p>Three-phase AC feed: 346 V to 480 V, 50 Hz or 60 Hz</p> </li> </ul>
     */
    inline UpdateSiteRackPhysicalPropertiesRequest& WithPowerPhase(const PowerPhase& value) { SetPowerPhase(value); return *this;}

    /**
     * <p>The power option that you can provide for hardware. </p> <ul> <li>
     * <p>Single-phase AC feed: 200 V to 277 V, 50 Hz or 60 Hz</p> </li> <li>
     * <p>Three-phase AC feed: 346 V to 480 V, 50 Hz or 60 Hz</p> </li> </ul>
     */
    inline UpdateSiteRackPhysicalPropertiesRequest& WithPowerPhase(PowerPhase&& value) { SetPowerPhase(std::move(value)); return *this;}


    /**
     * <p>The power connector that Amazon Web Services should plan to provide for
     * connections to the hardware. Note the correlation between
     * <code>PowerPhase</code> and <code>PowerConnector</code>. </p> <ul> <li>
     * <p>Single-phase AC feed</p> <ul> <li> <p> <b>L6-30P</b> – (common in US); 30A;
     * single phase</p> </li> <li> <p> <b>IEC309 (blue)</b> – P+N+E, 6hr; 32 A; single
     * phase</p> </li> </ul> </li> <li> <p>Three-phase AC feed</p> <ul> <li> <p>
     * <b>AH530P7W (red)</b> – 3P+N+E, 7hr; 30A; three phase</p> </li> <li> <p>
     * <b>AH532P6W (red)</b> – 3P+N+E, 6hr; 32A; three phase</p> </li> </ul> </li>
     * </ul>
     */
    inline const PowerConnector& GetPowerConnector() const{ return m_powerConnector; }

    /**
     * <p>The power connector that Amazon Web Services should plan to provide for
     * connections to the hardware. Note the correlation between
     * <code>PowerPhase</code> and <code>PowerConnector</code>. </p> <ul> <li>
     * <p>Single-phase AC feed</p> <ul> <li> <p> <b>L6-30P</b> – (common in US); 30A;
     * single phase</p> </li> <li> <p> <b>IEC309 (blue)</b> – P+N+E, 6hr; 32 A; single
     * phase</p> </li> </ul> </li> <li> <p>Three-phase AC feed</p> <ul> <li> <p>
     * <b>AH530P7W (red)</b> – 3P+N+E, 7hr; 30A; three phase</p> </li> <li> <p>
     * <b>AH532P6W (red)</b> – 3P+N+E, 6hr; 32A; three phase</p> </li> </ul> </li>
     * </ul>
     */
    inline bool PowerConnectorHasBeenSet() const { return m_powerConnectorHasBeenSet; }

    /**
     * <p>The power connector that Amazon Web Services should plan to provide for
     * connections to the hardware. Note the correlation between
     * <code>PowerPhase</code> and <code>PowerConnector</code>. </p> <ul> <li>
     * <p>Single-phase AC feed</p> <ul> <li> <p> <b>L6-30P</b> – (common in US); 30A;
     * single phase</p> </li> <li> <p> <b>IEC309 (blue)</b> – P+N+E, 6hr; 32 A; single
     * phase</p> </li> </ul> </li> <li> <p>Three-phase AC feed</p> <ul> <li> <p>
     * <b>AH530P7W (red)</b> – 3P+N+E, 7hr; 30A; three phase</p> </li> <li> <p>
     * <b>AH532P6W (red)</b> – 3P+N+E, 6hr; 32A; three phase</p> </li> </ul> </li>
     * </ul>
     */
    inline void SetPowerConnector(const PowerConnector& value) { m_powerConnectorHasBeenSet = true; m_powerConnector = value; }

    /**
     * <p>The power connector that Amazon Web Services should plan to provide for
     * connections to the hardware. Note the correlation between
     * <code>PowerPhase</code> and <code>PowerConnector</code>. </p> <ul> <li>
     * <p>Single-phase AC feed</p> <ul> <li> <p> <b>L6-30P</b> – (common in US); 30A;
     * single phase</p> </li> <li> <p> <b>IEC309 (blue)</b> – P+N+E, 6hr; 32 A; single
     * phase</p> </li> </ul> </li> <li> <p>Three-phase AC feed</p> <ul> <li> <p>
     * <b>AH530P7W (red)</b> – 3P+N+E, 7hr; 30A; three phase</p> </li> <li> <p>
     * <b>AH532P6W (red)</b> – 3P+N+E, 6hr; 32A; three phase</p> </li> </ul> </li>
     * </ul>
     */
    inline void SetPowerConnector(PowerConnector&& value) { m_powerConnectorHasBeenSet = true; m_powerConnector = std::move(value); }

    /**
     * <p>The power connector that Amazon Web Services should plan to provide for
     * connections to the hardware. Note the correlation between
     * <code>PowerPhase</code> and <code>PowerConnector</code>. </p> <ul> <li>
     * <p>Single-phase AC feed</p> <ul> <li> <p> <b>L6-30P</b> – (common in US); 30A;
     * single phase</p> </li> <li> <p> <b>IEC309 (blue)</b> – P+N+E, 6hr; 32 A; single
     * phase</p> </li> </ul> </li> <li> <p>Three-phase AC feed</p> <ul> <li> <p>
     * <b>AH530P7W (red)</b> – 3P+N+E, 7hr; 30A; three phase</p> </li> <li> <p>
     * <b>AH532P6W (red)</b> – 3P+N+E, 6hr; 32A; three phase</p> </li> </ul> </li>
     * </ul>
     */
    inline UpdateSiteRackPhysicalPropertiesRequest& WithPowerConnector(const PowerConnector& value) { SetPowerConnector(value); return *this;}

    /**
     * <p>The power connector that Amazon Web Services should plan to provide for
     * connections to the hardware. Note the correlation between
     * <code>PowerPhase</code> and <code>PowerConnector</code>. </p> <ul> <li>
     * <p>Single-phase AC feed</p> <ul> <li> <p> <b>L6-30P</b> – (common in US); 30A;
     * single phase</p> </li> <li> <p> <b>IEC309 (blue)</b> – P+N+E, 6hr; 32 A; single
     * phase</p> </li> </ul> </li> <li> <p>Three-phase AC feed</p> <ul> <li> <p>
     * <b>AH530P7W (red)</b> – 3P+N+E, 7hr; 30A; three phase</p> </li> <li> <p>
     * <b>AH532P6W (red)</b> – 3P+N+E, 6hr; 32A; three phase</p> </li> </ul> </li>
     * </ul>
     */
    inline UpdateSiteRackPhysicalPropertiesRequest& WithPowerConnector(PowerConnector&& value) { SetPowerConnector(std::move(value)); return *this;}


    /**
     * <p>Indicates whether the power feed comes above or below the rack. </p>
     */
    inline const PowerFeedDrop& GetPowerFeedDrop() const{ return m_powerFeedDrop; }

    /**
     * <p>Indicates whether the power feed comes above or below the rack. </p>
     */
    inline bool PowerFeedDropHasBeenSet() const { return m_powerFeedDropHasBeenSet; }

    /**
     * <p>Indicates whether the power feed comes above or below the rack. </p>
     */
    inline void SetPowerFeedDrop(const PowerFeedDrop& value) { m_powerFeedDropHasBeenSet = true; m_powerFeedDrop = value; }

    /**
     * <p>Indicates whether the power feed comes above or below the rack. </p>
     */
    inline void SetPowerFeedDrop(PowerFeedDrop&& value) { m_powerFeedDropHasBeenSet = true; m_powerFeedDrop = std::move(value); }

    /**
     * <p>Indicates whether the power feed comes above or below the rack. </p>
     */
    inline UpdateSiteRackPhysicalPropertiesRequest& WithPowerFeedDrop(const PowerFeedDrop& value) { SetPowerFeedDrop(value); return *this;}

    /**
     * <p>Indicates whether the power feed comes above or below the rack. </p>
     */
    inline UpdateSiteRackPhysicalPropertiesRequest& WithPowerFeedDrop(PowerFeedDrop&& value) { SetPowerFeedDrop(std::move(value)); return *this;}


    /**
     * <p>The uplink speed the rack should support for the connection to the Region.
     * </p>
     */
    inline const UplinkGbps& GetUplinkGbps() const{ return m_uplinkGbps; }

    /**
     * <p>The uplink speed the rack should support for the connection to the Region.
     * </p>
     */
    inline bool UplinkGbpsHasBeenSet() const { return m_uplinkGbpsHasBeenSet; }

    /**
     * <p>The uplink speed the rack should support for the connection to the Region.
     * </p>
     */
    inline void SetUplinkGbps(const UplinkGbps& value) { m_uplinkGbpsHasBeenSet = true; m_uplinkGbps = value; }

    /**
     * <p>The uplink speed the rack should support for the connection to the Region.
     * </p>
     */
    inline void SetUplinkGbps(UplinkGbps&& value) { m_uplinkGbpsHasBeenSet = true; m_uplinkGbps = std::move(value); }

    /**
     * <p>The uplink speed the rack should support for the connection to the Region.
     * </p>
     */
    inline UpdateSiteRackPhysicalPropertiesRequest& WithUplinkGbps(const UplinkGbps& value) { SetUplinkGbps(value); return *this;}

    /**
     * <p>The uplink speed the rack should support for the connection to the Region.
     * </p>
     */
    inline UpdateSiteRackPhysicalPropertiesRequest& WithUplinkGbps(UplinkGbps&& value) { SetUplinkGbps(std::move(value)); return *this;}


    /**
     * <p>Racks come with two Outpost network devices. Depending on the supported
     * uplink speed at the site, the Outpost network devices provide a variable number
     * of uplinks. Specify the number of uplinks for each Outpost network device that
     * you intend to use to connect the rack to your network. Note the correlation
     * between <code>UplinkGbps</code> and <code>UplinkCount</code>. </p> <ul> <li>
     * <p>1Gbps - Uplinks available: 1, 2, 4, 6, 8</p> </li> <li> <p>10Gbps - Uplinks
     * available: 1, 2, 4, 8, 12, 16</p> </li> <li> <p>40 and 100 Gbps- Uplinks
     * available: 1, 2, 4</p> </li> </ul>
     */
    inline const UplinkCount& GetUplinkCount() const{ return m_uplinkCount; }

    /**
     * <p>Racks come with two Outpost network devices. Depending on the supported
     * uplink speed at the site, the Outpost network devices provide a variable number
     * of uplinks. Specify the number of uplinks for each Outpost network device that
     * you intend to use to connect the rack to your network. Note the correlation
     * between <code>UplinkGbps</code> and <code>UplinkCount</code>. </p> <ul> <li>
     * <p>1Gbps - Uplinks available: 1, 2, 4, 6, 8</p> </li> <li> <p>10Gbps - Uplinks
     * available: 1, 2, 4, 8, 12, 16</p> </li> <li> <p>40 and 100 Gbps- Uplinks
     * available: 1, 2, 4</p> </li> </ul>
     */
    inline bool UplinkCountHasBeenSet() const { return m_uplinkCountHasBeenSet; }

    /**
     * <p>Racks come with two Outpost network devices. Depending on the supported
     * uplink speed at the site, the Outpost network devices provide a variable number
     * of uplinks. Specify the number of uplinks for each Outpost network device that
     * you intend to use to connect the rack to your network. Note the correlation
     * between <code>UplinkGbps</code> and <code>UplinkCount</code>. </p> <ul> <li>
     * <p>1Gbps - Uplinks available: 1, 2, 4, 6, 8</p> </li> <li> <p>10Gbps - Uplinks
     * available: 1, 2, 4, 8, 12, 16</p> </li> <li> <p>40 and 100 Gbps- Uplinks
     * available: 1, 2, 4</p> </li> </ul>
     */
    inline void SetUplinkCount(const UplinkCount& value) { m_uplinkCountHasBeenSet = true; m_uplinkCount = value; }

    /**
     * <p>Racks come with two Outpost network devices. Depending on the supported
     * uplink speed at the site, the Outpost network devices provide a variable number
     * of uplinks. Specify the number of uplinks for each Outpost network device that
     * you intend to use to connect the rack to your network. Note the correlation
     * between <code>UplinkGbps</code> and <code>UplinkCount</code>. </p> <ul> <li>
     * <p>1Gbps - Uplinks available: 1, 2, 4, 6, 8</p> </li> <li> <p>10Gbps - Uplinks
     * available: 1, 2, 4, 8, 12, 16</p> </li> <li> <p>40 and 100 Gbps- Uplinks
     * available: 1, 2, 4</p> </li> </ul>
     */
    inline void SetUplinkCount(UplinkCount&& value) { m_uplinkCountHasBeenSet = true; m_uplinkCount = std::move(value); }

    /**
     * <p>Racks come with two Outpost network devices. Depending on the supported
     * uplink speed at the site, the Outpost network devices provide a variable number
     * of uplinks. Specify the number of uplinks for each Outpost network device that
     * you intend to use to connect the rack to your network. Note the correlation
     * between <code>UplinkGbps</code> and <code>UplinkCount</code>. </p> <ul> <li>
     * <p>1Gbps - Uplinks available: 1, 2, 4, 6, 8</p> </li> <li> <p>10Gbps - Uplinks
     * available: 1, 2, 4, 8, 12, 16</p> </li> <li> <p>40 and 100 Gbps- Uplinks
     * available: 1, 2, 4</p> </li> </ul>
     */
    inline UpdateSiteRackPhysicalPropertiesRequest& WithUplinkCount(const UplinkCount& value) { SetUplinkCount(value); return *this;}

    /**
     * <p>Racks come with two Outpost network devices. Depending on the supported
     * uplink speed at the site, the Outpost network devices provide a variable number
     * of uplinks. Specify the number of uplinks for each Outpost network device that
     * you intend to use to connect the rack to your network. Note the correlation
     * between <code>UplinkGbps</code> and <code>UplinkCount</code>. </p> <ul> <li>
     * <p>1Gbps - Uplinks available: 1, 2, 4, 6, 8</p> </li> <li> <p>10Gbps - Uplinks
     * available: 1, 2, 4, 8, 12, 16</p> </li> <li> <p>40 and 100 Gbps- Uplinks
     * available: 1, 2, 4</p> </li> </ul>
     */
    inline UpdateSiteRackPhysicalPropertiesRequest& WithUplinkCount(UplinkCount&& value) { SetUplinkCount(std::move(value)); return *this;}


    /**
     * <p>The type of fiber that you will use to attach the Outpost to your network.
     * </p>
     */
    inline const FiberOpticCableType& GetFiberOpticCableType() const{ return m_fiberOpticCableType; }

    /**
     * <p>The type of fiber that you will use to attach the Outpost to your network.
     * </p>
     */
    inline bool FiberOpticCableTypeHasBeenSet() const { return m_fiberOpticCableTypeHasBeenSet; }

    /**
     * <p>The type of fiber that you will use to attach the Outpost to your network.
     * </p>
     */
    inline void SetFiberOpticCableType(const FiberOpticCableType& value) { m_fiberOpticCableTypeHasBeenSet = true; m_fiberOpticCableType = value; }

    /**
     * <p>The type of fiber that you will use to attach the Outpost to your network.
     * </p>
     */
    inline void SetFiberOpticCableType(FiberOpticCableType&& value) { m_fiberOpticCableTypeHasBeenSet = true; m_fiberOpticCableType = std::move(value); }

    /**
     * <p>The type of fiber that you will use to attach the Outpost to your network.
     * </p>
     */
    inline UpdateSiteRackPhysicalPropertiesRequest& WithFiberOpticCableType(const FiberOpticCableType& value) { SetFiberOpticCableType(value); return *this;}

    /**
     * <p>The type of fiber that you will use to attach the Outpost to your network.
     * </p>
     */
    inline UpdateSiteRackPhysicalPropertiesRequest& WithFiberOpticCableType(FiberOpticCableType&& value) { SetFiberOpticCableType(std::move(value)); return *this;}


    /**
     * <p>The type of optical standard that you will use to attach the Outpost to your
     * network. This field is dependent on uplink speed, fiber type, and distance to
     * the upstream device. For more information about networking requirements for
     * racks, see <a
     * href="https://docs.aws.amazon.com/outposts/latest/userguide/outposts-requirements.html#facility-networking">Network</a>
     * in the Amazon Web Services Outposts User Guide. </p> <ul> <li> <p>
     * <code>OPTIC_10GBASE_SR</code>: 10GBASE-SR</p> </li> <li> <p>
     * <code>OPTIC_10GBASE_IR</code>: 10GBASE-IR</p> </li> <li> <p>
     * <code>OPTIC_10GBASE_LR</code>: 10GBASE-LR</p> </li> <li> <p>
     * <code>OPTIC_40GBASE_SR</code>: 40GBASE-SR</p> </li> <li> <p>
     * <code>OPTIC_40GBASE_ESR</code>: 40GBASE-ESR</p> </li> <li> <p>
     * <code>OPTIC_40GBASE_IR4_LR4L</code>: 40GBASE-IR (LR4L)</p> </li> <li> <p>
     * <code>OPTIC_40GBASE_LR4</code>: 40GBASE-LR4</p> </li> <li> <p>
     * <code>OPTIC_100GBASE_SR4</code>: 100GBASE-SR4</p> </li> <li> <p>
     * <code>OPTIC_100GBASE_CWDM4</code>: 100GBASE-CWDM4</p> </li> <li> <p>
     * <code>OPTIC_100GBASE_LR4</code>: 100GBASE-LR4</p> </li> <li> <p>
     * <code>OPTIC_100G_PSM4_MSA</code>: 100G PSM4 MSA</p> </li> <li> <p>
     * <code>OPTIC_1000BASE_LX</code>: 1000Base-LX</p> </li> <li> <p>
     * <code>OPTIC_1000BASE_SX</code> : 1000Base-SX</p> </li> </ul>
     */
    inline const OpticalStandard& GetOpticalStandard() const{ return m_opticalStandard; }

    /**
     * <p>The type of optical standard that you will use to attach the Outpost to your
     * network. This field is dependent on uplink speed, fiber type, and distance to
     * the upstream device. For more information about networking requirements for
     * racks, see <a
     * href="https://docs.aws.amazon.com/outposts/latest/userguide/outposts-requirements.html#facility-networking">Network</a>
     * in the Amazon Web Services Outposts User Guide. </p> <ul> <li> <p>
     * <code>OPTIC_10GBASE_SR</code>: 10GBASE-SR</p> </li> <li> <p>
     * <code>OPTIC_10GBASE_IR</code>: 10GBASE-IR</p> </li> <li> <p>
     * <code>OPTIC_10GBASE_LR</code>: 10GBASE-LR</p> </li> <li> <p>
     * <code>OPTIC_40GBASE_SR</code>: 40GBASE-SR</p> </li> <li> <p>
     * <code>OPTIC_40GBASE_ESR</code>: 40GBASE-ESR</p> </li> <li> <p>
     * <code>OPTIC_40GBASE_IR4_LR4L</code>: 40GBASE-IR (LR4L)</p> </li> <li> <p>
     * <code>OPTIC_40GBASE_LR4</code>: 40GBASE-LR4</p> </li> <li> <p>
     * <code>OPTIC_100GBASE_SR4</code>: 100GBASE-SR4</p> </li> <li> <p>
     * <code>OPTIC_100GBASE_CWDM4</code>: 100GBASE-CWDM4</p> </li> <li> <p>
     * <code>OPTIC_100GBASE_LR4</code>: 100GBASE-LR4</p> </li> <li> <p>
     * <code>OPTIC_100G_PSM4_MSA</code>: 100G PSM4 MSA</p> </li> <li> <p>
     * <code>OPTIC_1000BASE_LX</code>: 1000Base-LX</p> </li> <li> <p>
     * <code>OPTIC_1000BASE_SX</code> : 1000Base-SX</p> </li> </ul>
     */
    inline bool OpticalStandardHasBeenSet() const { return m_opticalStandardHasBeenSet; }

    /**
     * <p>The type of optical standard that you will use to attach the Outpost to your
     * network. This field is dependent on uplink speed, fiber type, and distance to
     * the upstream device. For more information about networking requirements for
     * racks, see <a
     * href="https://docs.aws.amazon.com/outposts/latest/userguide/outposts-requirements.html#facility-networking">Network</a>
     * in the Amazon Web Services Outposts User Guide. </p> <ul> <li> <p>
     * <code>OPTIC_10GBASE_SR</code>: 10GBASE-SR</p> </li> <li> <p>
     * <code>OPTIC_10GBASE_IR</code>: 10GBASE-IR</p> </li> <li> <p>
     * <code>OPTIC_10GBASE_LR</code>: 10GBASE-LR</p> </li> <li> <p>
     * <code>OPTIC_40GBASE_SR</code>: 40GBASE-SR</p> </li> <li> <p>
     * <code>OPTIC_40GBASE_ESR</code>: 40GBASE-ESR</p> </li> <li> <p>
     * <code>OPTIC_40GBASE_IR4_LR4L</code>: 40GBASE-IR (LR4L)</p> </li> <li> <p>
     * <code>OPTIC_40GBASE_LR4</code>: 40GBASE-LR4</p> </li> <li> <p>
     * <code>OPTIC_100GBASE_SR4</code>: 100GBASE-SR4</p> </li> <li> <p>
     * <code>OPTIC_100GBASE_CWDM4</code>: 100GBASE-CWDM4</p> </li> <li> <p>
     * <code>OPTIC_100GBASE_LR4</code>: 100GBASE-LR4</p> </li> <li> <p>
     * <code>OPTIC_100G_PSM4_MSA</code>: 100G PSM4 MSA</p> </li> <li> <p>
     * <code>OPTIC_1000BASE_LX</code>: 1000Base-LX</p> </li> <li> <p>
     * <code>OPTIC_1000BASE_SX</code> : 1000Base-SX</p> </li> </ul>
     */
    inline void SetOpticalStandard(const OpticalStandard& value) { m_opticalStandardHasBeenSet = true; m_opticalStandard = value; }

    /**
     * <p>The type of optical standard that you will use to attach the Outpost to your
     * network. This field is dependent on uplink speed, fiber type, and distance to
     * the upstream device. For more information about networking requirements for
     * racks, see <a
     * href="https://docs.aws.amazon.com/outposts/latest/userguide/outposts-requirements.html#facility-networking">Network</a>
     * in the Amazon Web Services Outposts User Guide. </p> <ul> <li> <p>
     * <code>OPTIC_10GBASE_SR</code>: 10GBASE-SR</p> </li> <li> <p>
     * <code>OPTIC_10GBASE_IR</code>: 10GBASE-IR</p> </li> <li> <p>
     * <code>OPTIC_10GBASE_LR</code>: 10GBASE-LR</p> </li> <li> <p>
     * <code>OPTIC_40GBASE_SR</code>: 40GBASE-SR</p> </li> <li> <p>
     * <code>OPTIC_40GBASE_ESR</code>: 40GBASE-ESR</p> </li> <li> <p>
     * <code>OPTIC_40GBASE_IR4_LR4L</code>: 40GBASE-IR (LR4L)</p> </li> <li> <p>
     * <code>OPTIC_40GBASE_LR4</code>: 40GBASE-LR4</p> </li> <li> <p>
     * <code>OPTIC_100GBASE_SR4</code>: 100GBASE-SR4</p> </li> <li> <p>
     * <code>OPTIC_100GBASE_CWDM4</code>: 100GBASE-CWDM4</p> </li> <li> <p>
     * <code>OPTIC_100GBASE_LR4</code>: 100GBASE-LR4</p> </li> <li> <p>
     * <code>OPTIC_100G_PSM4_MSA</code>: 100G PSM4 MSA</p> </li> <li> <p>
     * <code>OPTIC_1000BASE_LX</code>: 1000Base-LX</p> </li> <li> <p>
     * <code>OPTIC_1000BASE_SX</code> : 1000Base-SX</p> </li> </ul>
     */
    inline void SetOpticalStandard(OpticalStandard&& value) { m_opticalStandardHasBeenSet = true; m_opticalStandard = std::move(value); }

    /**
     * <p>The type of optical standard that you will use to attach the Outpost to your
     * network. This field is dependent on uplink speed, fiber type, and distance to
     * the upstream device. For more information about networking requirements for
     * racks, see <a
     * href="https://docs.aws.amazon.com/outposts/latest/userguide/outposts-requirements.html#facility-networking">Network</a>
     * in the Amazon Web Services Outposts User Guide. </p> <ul> <li> <p>
     * <code>OPTIC_10GBASE_SR</code>: 10GBASE-SR</p> </li> <li> <p>
     * <code>OPTIC_10GBASE_IR</code>: 10GBASE-IR</p> </li> <li> <p>
     * <code>OPTIC_10GBASE_LR</code>: 10GBASE-LR</p> </li> <li> <p>
     * <code>OPTIC_40GBASE_SR</code>: 40GBASE-SR</p> </li> <li> <p>
     * <code>OPTIC_40GBASE_ESR</code>: 40GBASE-ESR</p> </li> <li> <p>
     * <code>OPTIC_40GBASE_IR4_LR4L</code>: 40GBASE-IR (LR4L)</p> </li> <li> <p>
     * <code>OPTIC_40GBASE_LR4</code>: 40GBASE-LR4</p> </li> <li> <p>
     * <code>OPTIC_100GBASE_SR4</code>: 100GBASE-SR4</p> </li> <li> <p>
     * <code>OPTIC_100GBASE_CWDM4</code>: 100GBASE-CWDM4</p> </li> <li> <p>
     * <code>OPTIC_100GBASE_LR4</code>: 100GBASE-LR4</p> </li> <li> <p>
     * <code>OPTIC_100G_PSM4_MSA</code>: 100G PSM4 MSA</p> </li> <li> <p>
     * <code>OPTIC_1000BASE_LX</code>: 1000Base-LX</p> </li> <li> <p>
     * <code>OPTIC_1000BASE_SX</code> : 1000Base-SX</p> </li> </ul>
     */
    inline UpdateSiteRackPhysicalPropertiesRequest& WithOpticalStandard(const OpticalStandard& value) { SetOpticalStandard(value); return *this;}

    /**
     * <p>The type of optical standard that you will use to attach the Outpost to your
     * network. This field is dependent on uplink speed, fiber type, and distance to
     * the upstream device. For more information about networking requirements for
     * racks, see <a
     * href="https://docs.aws.amazon.com/outposts/latest/userguide/outposts-requirements.html#facility-networking">Network</a>
     * in the Amazon Web Services Outposts User Guide. </p> <ul> <li> <p>
     * <code>OPTIC_10GBASE_SR</code>: 10GBASE-SR</p> </li> <li> <p>
     * <code>OPTIC_10GBASE_IR</code>: 10GBASE-IR</p> </li> <li> <p>
     * <code>OPTIC_10GBASE_LR</code>: 10GBASE-LR</p> </li> <li> <p>
     * <code>OPTIC_40GBASE_SR</code>: 40GBASE-SR</p> </li> <li> <p>
     * <code>OPTIC_40GBASE_ESR</code>: 40GBASE-ESR</p> </li> <li> <p>
     * <code>OPTIC_40GBASE_IR4_LR4L</code>: 40GBASE-IR (LR4L)</p> </li> <li> <p>
     * <code>OPTIC_40GBASE_LR4</code>: 40GBASE-LR4</p> </li> <li> <p>
     * <code>OPTIC_100GBASE_SR4</code>: 100GBASE-SR4</p> </li> <li> <p>
     * <code>OPTIC_100GBASE_CWDM4</code>: 100GBASE-CWDM4</p> </li> <li> <p>
     * <code>OPTIC_100GBASE_LR4</code>: 100GBASE-LR4</p> </li> <li> <p>
     * <code>OPTIC_100G_PSM4_MSA</code>: 100G PSM4 MSA</p> </li> <li> <p>
     * <code>OPTIC_1000BASE_LX</code>: 1000Base-LX</p> </li> <li> <p>
     * <code>OPTIC_1000BASE_SX</code> : 1000Base-SX</p> </li> </ul>
     */
    inline UpdateSiteRackPhysicalPropertiesRequest& WithOpticalStandard(OpticalStandard&& value) { SetOpticalStandard(std::move(value)); return *this;}


    /**
     * <p>The maximum rack weight that this site can support. <code>NO_LIMIT</code> is
     * over 2000lbs. </p>
     */
    inline const MaximumSupportedWeightLbs& GetMaximumSupportedWeightLbs() const{ return m_maximumSupportedWeightLbs; }

    /**
     * <p>The maximum rack weight that this site can support. <code>NO_LIMIT</code> is
     * over 2000lbs. </p>
     */
    inline bool MaximumSupportedWeightLbsHasBeenSet() const { return m_maximumSupportedWeightLbsHasBeenSet; }

    /**
     * <p>The maximum rack weight that this site can support. <code>NO_LIMIT</code> is
     * over 2000lbs. </p>
     */
    inline void SetMaximumSupportedWeightLbs(const MaximumSupportedWeightLbs& value) { m_maximumSupportedWeightLbsHasBeenSet = true; m_maximumSupportedWeightLbs = value; }

    /**
     * <p>The maximum rack weight that this site can support. <code>NO_LIMIT</code> is
     * over 2000lbs. </p>
     */
    inline void SetMaximumSupportedWeightLbs(MaximumSupportedWeightLbs&& value) { m_maximumSupportedWeightLbsHasBeenSet = true; m_maximumSupportedWeightLbs = std::move(value); }

    /**
     * <p>The maximum rack weight that this site can support. <code>NO_LIMIT</code> is
     * over 2000lbs. </p>
     */
    inline UpdateSiteRackPhysicalPropertiesRequest& WithMaximumSupportedWeightLbs(const MaximumSupportedWeightLbs& value) { SetMaximumSupportedWeightLbs(value); return *this;}

    /**
     * <p>The maximum rack weight that this site can support. <code>NO_LIMIT</code> is
     * over 2000lbs. </p>
     */
    inline UpdateSiteRackPhysicalPropertiesRequest& WithMaximumSupportedWeightLbs(MaximumSupportedWeightLbs&& value) { SetMaximumSupportedWeightLbs(std::move(value)); return *this;}

  private:

    Aws::String m_siteId;
    bool m_siteIdHasBeenSet = false;

    PowerDrawKva m_powerDrawKva;
    bool m_powerDrawKvaHasBeenSet = false;

    PowerPhase m_powerPhase;
    bool m_powerPhaseHasBeenSet = false;

    PowerConnector m_powerConnector;
    bool m_powerConnectorHasBeenSet = false;

    PowerFeedDrop m_powerFeedDrop;
    bool m_powerFeedDropHasBeenSet = false;

    UplinkGbps m_uplinkGbps;
    bool m_uplinkGbpsHasBeenSet = false;

    UplinkCount m_uplinkCount;
    bool m_uplinkCountHasBeenSet = false;

    FiberOpticCableType m_fiberOpticCableType;
    bool m_fiberOpticCableTypeHasBeenSet = false;

    OpticalStandard m_opticalStandard;
    bool m_opticalStandardHasBeenSet = false;

    MaximumSupportedWeightLbs m_maximumSupportedWeightLbs;
    bool m_maximumSupportedWeightLbsHasBeenSet = false;
  };

} // namespace Model
} // namespace Outposts
} // namespace Aws
