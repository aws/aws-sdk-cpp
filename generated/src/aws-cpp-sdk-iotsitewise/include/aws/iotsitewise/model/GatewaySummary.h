﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/model/GatewayPlatform.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/iotsitewise/model/GatewayCapabilitySummary.h>
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
   * <p>Contains a summary of a gateway.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/GatewaySummary">AWS
   * API Reference</a></p>
   */
  class GatewaySummary
  {
  public:
    AWS_IOTSITEWISE_API GatewaySummary();
    AWS_IOTSITEWISE_API GatewaySummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API GatewaySummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the gateway device.</p>
     */
    inline const Aws::String& GetGatewayId() const{ return m_gatewayId; }
    inline bool GatewayIdHasBeenSet() const { return m_gatewayIdHasBeenSet; }
    inline void SetGatewayId(const Aws::String& value) { m_gatewayIdHasBeenSet = true; m_gatewayId = value; }
    inline void SetGatewayId(Aws::String&& value) { m_gatewayIdHasBeenSet = true; m_gatewayId = std::move(value); }
    inline void SetGatewayId(const char* value) { m_gatewayIdHasBeenSet = true; m_gatewayId.assign(value); }
    inline GatewaySummary& WithGatewayId(const Aws::String& value) { SetGatewayId(value); return *this;}
    inline GatewaySummary& WithGatewayId(Aws::String&& value) { SetGatewayId(std::move(value)); return *this;}
    inline GatewaySummary& WithGatewayId(const char* value) { SetGatewayId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the gateway.</p>
     */
    inline const Aws::String& GetGatewayName() const{ return m_gatewayName; }
    inline bool GatewayNameHasBeenSet() const { return m_gatewayNameHasBeenSet; }
    inline void SetGatewayName(const Aws::String& value) { m_gatewayNameHasBeenSet = true; m_gatewayName = value; }
    inline void SetGatewayName(Aws::String&& value) { m_gatewayNameHasBeenSet = true; m_gatewayName = std::move(value); }
    inline void SetGatewayName(const char* value) { m_gatewayNameHasBeenSet = true; m_gatewayName.assign(value); }
    inline GatewaySummary& WithGatewayName(const Aws::String& value) { SetGatewayName(value); return *this;}
    inline GatewaySummary& WithGatewayName(Aws::String&& value) { SetGatewayName(std::move(value)); return *this;}
    inline GatewaySummary& WithGatewayName(const char* value) { SetGatewayName(value); return *this;}
    ///@}

    ///@{
    
    inline const GatewayPlatform& GetGatewayPlatform() const{ return m_gatewayPlatform; }
    inline bool GatewayPlatformHasBeenSet() const { return m_gatewayPlatformHasBeenSet; }
    inline void SetGatewayPlatform(const GatewayPlatform& value) { m_gatewayPlatformHasBeenSet = true; m_gatewayPlatform = value; }
    inline void SetGatewayPlatform(GatewayPlatform&& value) { m_gatewayPlatformHasBeenSet = true; m_gatewayPlatform = std::move(value); }
    inline GatewaySummary& WithGatewayPlatform(const GatewayPlatform& value) { SetGatewayPlatform(value); return *this;}
    inline GatewaySummary& WithGatewayPlatform(GatewayPlatform&& value) { SetGatewayPlatform(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the gateway. A value of <code>3</code> indicates an
     * MQTT-enabled, V3 gateway, while <code>2</code> indicates a Classic streams, V2
     * gateway.</p>
     */
    inline const Aws::String& GetGatewayVersion() const{ return m_gatewayVersion; }
    inline bool GatewayVersionHasBeenSet() const { return m_gatewayVersionHasBeenSet; }
    inline void SetGatewayVersion(const Aws::String& value) { m_gatewayVersionHasBeenSet = true; m_gatewayVersion = value; }
    inline void SetGatewayVersion(Aws::String&& value) { m_gatewayVersionHasBeenSet = true; m_gatewayVersion = std::move(value); }
    inline void SetGatewayVersion(const char* value) { m_gatewayVersionHasBeenSet = true; m_gatewayVersion.assign(value); }
    inline GatewaySummary& WithGatewayVersion(const Aws::String& value) { SetGatewayVersion(value); return *this;}
    inline GatewaySummary& WithGatewayVersion(Aws::String&& value) { SetGatewayVersion(std::move(value)); return *this;}
    inline GatewaySummary& WithGatewayVersion(const char* value) { SetGatewayVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of gateway capability summaries that each contain a namespace and
     * status. Each gateway capability defines data sources for the gateway. To
     * retrieve a capability configuration's definition, use <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_DescribeGatewayCapabilityConfiguration.html">DescribeGatewayCapabilityConfiguration</a>.</p>
     */
    inline const Aws::Vector<GatewayCapabilitySummary>& GetGatewayCapabilitySummaries() const{ return m_gatewayCapabilitySummaries; }
    inline bool GatewayCapabilitySummariesHasBeenSet() const { return m_gatewayCapabilitySummariesHasBeenSet; }
    inline void SetGatewayCapabilitySummaries(const Aws::Vector<GatewayCapabilitySummary>& value) { m_gatewayCapabilitySummariesHasBeenSet = true; m_gatewayCapabilitySummaries = value; }
    inline void SetGatewayCapabilitySummaries(Aws::Vector<GatewayCapabilitySummary>&& value) { m_gatewayCapabilitySummariesHasBeenSet = true; m_gatewayCapabilitySummaries = std::move(value); }
    inline GatewaySummary& WithGatewayCapabilitySummaries(const Aws::Vector<GatewayCapabilitySummary>& value) { SetGatewayCapabilitySummaries(value); return *this;}
    inline GatewaySummary& WithGatewayCapabilitySummaries(Aws::Vector<GatewayCapabilitySummary>&& value) { SetGatewayCapabilitySummaries(std::move(value)); return *this;}
    inline GatewaySummary& AddGatewayCapabilitySummaries(const GatewayCapabilitySummary& value) { m_gatewayCapabilitySummariesHasBeenSet = true; m_gatewayCapabilitySummaries.push_back(value); return *this; }
    inline GatewaySummary& AddGatewayCapabilitySummaries(GatewayCapabilitySummary&& value) { m_gatewayCapabilitySummariesHasBeenSet = true; m_gatewayCapabilitySummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The date the gateway was created, in Unix epoch time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }
    inline GatewaySummary& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}
    inline GatewaySummary& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the gateway was last updated, in Unix epoch time.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateDate() const{ return m_lastUpdateDate; }
    inline bool LastUpdateDateHasBeenSet() const { return m_lastUpdateDateHasBeenSet; }
    inline void SetLastUpdateDate(const Aws::Utils::DateTime& value) { m_lastUpdateDateHasBeenSet = true; m_lastUpdateDate = value; }
    inline void SetLastUpdateDate(Aws::Utils::DateTime&& value) { m_lastUpdateDateHasBeenSet = true; m_lastUpdateDate = std::move(value); }
    inline GatewaySummary& WithLastUpdateDate(const Aws::Utils::DateTime& value) { SetLastUpdateDate(value); return *this;}
    inline GatewaySummary& WithLastUpdateDate(Aws::Utils::DateTime&& value) { SetLastUpdateDate(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_gatewayId;
    bool m_gatewayIdHasBeenSet = false;

    Aws::String m_gatewayName;
    bool m_gatewayNameHasBeenSet = false;

    GatewayPlatform m_gatewayPlatform;
    bool m_gatewayPlatformHasBeenSet = false;

    Aws::String m_gatewayVersion;
    bool m_gatewayVersionHasBeenSet = false;

    Aws::Vector<GatewayCapabilitySummary> m_gatewayCapabilitySummaries;
    bool m_gatewayCapabilitySummariesHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate;
    bool m_creationDateHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdateDate;
    bool m_lastUpdateDateHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
