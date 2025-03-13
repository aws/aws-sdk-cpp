/**
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
    AWS_IOTSITEWISE_API GatewaySummary() = default;
    AWS_IOTSITEWISE_API GatewaySummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API GatewaySummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the gateway device.</p>
     */
    inline const Aws::String& GetGatewayId() const { return m_gatewayId; }
    inline bool GatewayIdHasBeenSet() const { return m_gatewayIdHasBeenSet; }
    template<typename GatewayIdT = Aws::String>
    void SetGatewayId(GatewayIdT&& value) { m_gatewayIdHasBeenSet = true; m_gatewayId = std::forward<GatewayIdT>(value); }
    template<typename GatewayIdT = Aws::String>
    GatewaySummary& WithGatewayId(GatewayIdT&& value) { SetGatewayId(std::forward<GatewayIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the gateway.</p>
     */
    inline const Aws::String& GetGatewayName() const { return m_gatewayName; }
    inline bool GatewayNameHasBeenSet() const { return m_gatewayNameHasBeenSet; }
    template<typename GatewayNameT = Aws::String>
    void SetGatewayName(GatewayNameT&& value) { m_gatewayNameHasBeenSet = true; m_gatewayName = std::forward<GatewayNameT>(value); }
    template<typename GatewayNameT = Aws::String>
    GatewaySummary& WithGatewayName(GatewayNameT&& value) { SetGatewayName(std::forward<GatewayNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const GatewayPlatform& GetGatewayPlatform() const { return m_gatewayPlatform; }
    inline bool GatewayPlatformHasBeenSet() const { return m_gatewayPlatformHasBeenSet; }
    template<typename GatewayPlatformT = GatewayPlatform>
    void SetGatewayPlatform(GatewayPlatformT&& value) { m_gatewayPlatformHasBeenSet = true; m_gatewayPlatform = std::forward<GatewayPlatformT>(value); }
    template<typename GatewayPlatformT = GatewayPlatform>
    GatewaySummary& WithGatewayPlatform(GatewayPlatformT&& value) { SetGatewayPlatform(std::forward<GatewayPlatformT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the gateway. A value of <code>3</code> indicates an
     * MQTT-enabled, V3 gateway, while <code>2</code> indicates a Classic streams, V2
     * gateway.</p>
     */
    inline const Aws::String& GetGatewayVersion() const { return m_gatewayVersion; }
    inline bool GatewayVersionHasBeenSet() const { return m_gatewayVersionHasBeenSet; }
    template<typename GatewayVersionT = Aws::String>
    void SetGatewayVersion(GatewayVersionT&& value) { m_gatewayVersionHasBeenSet = true; m_gatewayVersion = std::forward<GatewayVersionT>(value); }
    template<typename GatewayVersionT = Aws::String>
    GatewaySummary& WithGatewayVersion(GatewayVersionT&& value) { SetGatewayVersion(std::forward<GatewayVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of gateway capability summaries that each contain a namespace and
     * status. Each gateway capability defines data sources for the gateway. To
     * retrieve a capability configuration's definition, use <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_DescribeGatewayCapabilityConfiguration.html">DescribeGatewayCapabilityConfiguration</a>.</p>
     */
    inline const Aws::Vector<GatewayCapabilitySummary>& GetGatewayCapabilitySummaries() const { return m_gatewayCapabilitySummaries; }
    inline bool GatewayCapabilitySummariesHasBeenSet() const { return m_gatewayCapabilitySummariesHasBeenSet; }
    template<typename GatewayCapabilitySummariesT = Aws::Vector<GatewayCapabilitySummary>>
    void SetGatewayCapabilitySummaries(GatewayCapabilitySummariesT&& value) { m_gatewayCapabilitySummariesHasBeenSet = true; m_gatewayCapabilitySummaries = std::forward<GatewayCapabilitySummariesT>(value); }
    template<typename GatewayCapabilitySummariesT = Aws::Vector<GatewayCapabilitySummary>>
    GatewaySummary& WithGatewayCapabilitySummaries(GatewayCapabilitySummariesT&& value) { SetGatewayCapabilitySummaries(std::forward<GatewayCapabilitySummariesT>(value)); return *this;}
    template<typename GatewayCapabilitySummariesT = GatewayCapabilitySummary>
    GatewaySummary& AddGatewayCapabilitySummaries(GatewayCapabilitySummariesT&& value) { m_gatewayCapabilitySummariesHasBeenSet = true; m_gatewayCapabilitySummaries.emplace_back(std::forward<GatewayCapabilitySummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The date the gateway was created, in Unix epoch time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const { return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    template<typename CreationDateT = Aws::Utils::DateTime>
    void SetCreationDate(CreationDateT&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::forward<CreationDateT>(value); }
    template<typename CreationDateT = Aws::Utils::DateTime>
    GatewaySummary& WithCreationDate(CreationDateT&& value) { SetCreationDate(std::forward<CreationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the gateway was last updated, in Unix epoch time.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateDate() const { return m_lastUpdateDate; }
    inline bool LastUpdateDateHasBeenSet() const { return m_lastUpdateDateHasBeenSet; }
    template<typename LastUpdateDateT = Aws::Utils::DateTime>
    void SetLastUpdateDate(LastUpdateDateT&& value) { m_lastUpdateDateHasBeenSet = true; m_lastUpdateDate = std::forward<LastUpdateDateT>(value); }
    template<typename LastUpdateDateT = Aws::Utils::DateTime>
    GatewaySummary& WithLastUpdateDate(LastUpdateDateT&& value) { SetLastUpdateDate(std::forward<LastUpdateDateT>(value)); return *this;}
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

    Aws::Utils::DateTime m_creationDate{};
    bool m_creationDateHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdateDate{};
    bool m_lastUpdateDateHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
