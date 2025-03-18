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
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace IoTSiteWise
{
namespace Model
{
  class DescribeGatewayResult
  {
  public:
    AWS_IOTSITEWISE_API DescribeGatewayResult() = default;
    AWS_IOTSITEWISE_API DescribeGatewayResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTSITEWISE_API DescribeGatewayResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the gateway device.</p>
     */
    inline const Aws::String& GetGatewayId() const { return m_gatewayId; }
    template<typename GatewayIdT = Aws::String>
    void SetGatewayId(GatewayIdT&& value) { m_gatewayIdHasBeenSet = true; m_gatewayId = std::forward<GatewayIdT>(value); }
    template<typename GatewayIdT = Aws::String>
    DescribeGatewayResult& WithGatewayId(GatewayIdT&& value) { SetGatewayId(std::forward<GatewayIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the gateway.</p>
     */
    inline const Aws::String& GetGatewayName() const { return m_gatewayName; }
    template<typename GatewayNameT = Aws::String>
    void SetGatewayName(GatewayNameT&& value) { m_gatewayNameHasBeenSet = true; m_gatewayName = std::forward<GatewayNameT>(value); }
    template<typename GatewayNameT = Aws::String>
    DescribeGatewayResult& WithGatewayName(GatewayNameT&& value) { SetGatewayName(std::forward<GatewayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the gateway, which has the following format.</p> <p>
     * <code>arn:${Partition}:iotsitewise:${Region}:${Account}:gateway/${GatewayId}</code>
     * </p>
     */
    inline const Aws::String& GetGatewayArn() const { return m_gatewayArn; }
    template<typename GatewayArnT = Aws::String>
    void SetGatewayArn(GatewayArnT&& value) { m_gatewayArnHasBeenSet = true; m_gatewayArn = std::forward<GatewayArnT>(value); }
    template<typename GatewayArnT = Aws::String>
    DescribeGatewayResult& WithGatewayArn(GatewayArnT&& value) { SetGatewayArn(std::forward<GatewayArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The gateway's platform.</p>
     */
    inline const GatewayPlatform& GetGatewayPlatform() const { return m_gatewayPlatform; }
    template<typename GatewayPlatformT = GatewayPlatform>
    void SetGatewayPlatform(GatewayPlatformT&& value) { m_gatewayPlatformHasBeenSet = true; m_gatewayPlatform = std::forward<GatewayPlatformT>(value); }
    template<typename GatewayPlatformT = GatewayPlatform>
    DescribeGatewayResult& WithGatewayPlatform(GatewayPlatformT&& value) { SetGatewayPlatform(std::forward<GatewayPlatformT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the gateway. A value of <code>3</code> indicates an
     * MQTT-enabled, V3 gateway, while <code>2</code> indicates a Classic streams, V2
     * gateway.</p>
     */
    inline const Aws::String& GetGatewayVersion() const { return m_gatewayVersion; }
    template<typename GatewayVersionT = Aws::String>
    void SetGatewayVersion(GatewayVersionT&& value) { m_gatewayVersionHasBeenSet = true; m_gatewayVersion = std::forward<GatewayVersionT>(value); }
    template<typename GatewayVersionT = Aws::String>
    DescribeGatewayResult& WithGatewayVersion(GatewayVersionT&& value) { SetGatewayVersion(std::forward<GatewayVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of gateway capability summaries that each contain a namespace and
     * status. Each gateway capability defines data sources for the gateway. To
     * retrieve a capability configuration's definition, use <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_DescribeGatewayCapabilityConfiguration.html">DescribeGatewayCapabilityConfiguration</a>.</p>
     */
    inline const Aws::Vector<GatewayCapabilitySummary>& GetGatewayCapabilitySummaries() const { return m_gatewayCapabilitySummaries; }
    template<typename GatewayCapabilitySummariesT = Aws::Vector<GatewayCapabilitySummary>>
    void SetGatewayCapabilitySummaries(GatewayCapabilitySummariesT&& value) { m_gatewayCapabilitySummariesHasBeenSet = true; m_gatewayCapabilitySummaries = std::forward<GatewayCapabilitySummariesT>(value); }
    template<typename GatewayCapabilitySummariesT = Aws::Vector<GatewayCapabilitySummary>>
    DescribeGatewayResult& WithGatewayCapabilitySummaries(GatewayCapabilitySummariesT&& value) { SetGatewayCapabilitySummaries(std::forward<GatewayCapabilitySummariesT>(value)); return *this;}
    template<typename GatewayCapabilitySummariesT = GatewayCapabilitySummary>
    DescribeGatewayResult& AddGatewayCapabilitySummaries(GatewayCapabilitySummariesT&& value) { m_gatewayCapabilitySummariesHasBeenSet = true; m_gatewayCapabilitySummaries.emplace_back(std::forward<GatewayCapabilitySummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The date the gateway was created, in Unix epoch time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const { return m_creationDate; }
    template<typename CreationDateT = Aws::Utils::DateTime>
    void SetCreationDate(CreationDateT&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::forward<CreationDateT>(value); }
    template<typename CreationDateT = Aws::Utils::DateTime>
    DescribeGatewayResult& WithCreationDate(CreationDateT&& value) { SetCreationDate(std::forward<CreationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the gateway was last updated, in Unix epoch time.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateDate() const { return m_lastUpdateDate; }
    template<typename LastUpdateDateT = Aws::Utils::DateTime>
    void SetLastUpdateDate(LastUpdateDateT&& value) { m_lastUpdateDateHasBeenSet = true; m_lastUpdateDate = std::forward<LastUpdateDateT>(value); }
    template<typename LastUpdateDateT = Aws::Utils::DateTime>
    DescribeGatewayResult& WithLastUpdateDate(LastUpdateDateT&& value) { SetLastUpdateDate(std::forward<LastUpdateDateT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeGatewayResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_gatewayId;
    bool m_gatewayIdHasBeenSet = false;

    Aws::String m_gatewayName;
    bool m_gatewayNameHasBeenSet = false;

    Aws::String m_gatewayArn;
    bool m_gatewayArnHasBeenSet = false;

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

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
