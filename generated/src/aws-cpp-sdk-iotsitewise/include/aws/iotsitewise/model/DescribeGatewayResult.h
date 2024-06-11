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
    AWS_IOTSITEWISE_API DescribeGatewayResult();
    AWS_IOTSITEWISE_API DescribeGatewayResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTSITEWISE_API DescribeGatewayResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the gateway device.</p>
     */
    inline const Aws::String& GetGatewayId() const{ return m_gatewayId; }
    inline void SetGatewayId(const Aws::String& value) { m_gatewayId = value; }
    inline void SetGatewayId(Aws::String&& value) { m_gatewayId = std::move(value); }
    inline void SetGatewayId(const char* value) { m_gatewayId.assign(value); }
    inline DescribeGatewayResult& WithGatewayId(const Aws::String& value) { SetGatewayId(value); return *this;}
    inline DescribeGatewayResult& WithGatewayId(Aws::String&& value) { SetGatewayId(std::move(value)); return *this;}
    inline DescribeGatewayResult& WithGatewayId(const char* value) { SetGatewayId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the gateway.</p>
     */
    inline const Aws::String& GetGatewayName() const{ return m_gatewayName; }
    inline void SetGatewayName(const Aws::String& value) { m_gatewayName = value; }
    inline void SetGatewayName(Aws::String&& value) { m_gatewayName = std::move(value); }
    inline void SetGatewayName(const char* value) { m_gatewayName.assign(value); }
    inline DescribeGatewayResult& WithGatewayName(const Aws::String& value) { SetGatewayName(value); return *this;}
    inline DescribeGatewayResult& WithGatewayName(Aws::String&& value) { SetGatewayName(std::move(value)); return *this;}
    inline DescribeGatewayResult& WithGatewayName(const char* value) { SetGatewayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the gateway, which has the following format.</p> <p>
     * <code>arn:${Partition}:iotsitewise:${Region}:${Account}:gateway/${GatewayId}</code>
     * </p>
     */
    inline const Aws::String& GetGatewayArn() const{ return m_gatewayArn; }
    inline void SetGatewayArn(const Aws::String& value) { m_gatewayArn = value; }
    inline void SetGatewayArn(Aws::String&& value) { m_gatewayArn = std::move(value); }
    inline void SetGatewayArn(const char* value) { m_gatewayArn.assign(value); }
    inline DescribeGatewayResult& WithGatewayArn(const Aws::String& value) { SetGatewayArn(value); return *this;}
    inline DescribeGatewayResult& WithGatewayArn(Aws::String&& value) { SetGatewayArn(std::move(value)); return *this;}
    inline DescribeGatewayResult& WithGatewayArn(const char* value) { SetGatewayArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The gateway's platform.</p>
     */
    inline const GatewayPlatform& GetGatewayPlatform() const{ return m_gatewayPlatform; }
    inline void SetGatewayPlatform(const GatewayPlatform& value) { m_gatewayPlatform = value; }
    inline void SetGatewayPlatform(GatewayPlatform&& value) { m_gatewayPlatform = std::move(value); }
    inline DescribeGatewayResult& WithGatewayPlatform(const GatewayPlatform& value) { SetGatewayPlatform(value); return *this;}
    inline DescribeGatewayResult& WithGatewayPlatform(GatewayPlatform&& value) { SetGatewayPlatform(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of gateway capability summaries that each contain a namespace and
     * status. Each gateway capability defines data sources for the gateway. To
     * retrieve a capability configuration's definition, use <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_DescribeGatewayCapabilityConfiguration.html">DescribeGatewayCapabilityConfiguration</a>.</p>
     */
    inline const Aws::Vector<GatewayCapabilitySummary>& GetGatewayCapabilitySummaries() const{ return m_gatewayCapabilitySummaries; }
    inline void SetGatewayCapabilitySummaries(const Aws::Vector<GatewayCapabilitySummary>& value) { m_gatewayCapabilitySummaries = value; }
    inline void SetGatewayCapabilitySummaries(Aws::Vector<GatewayCapabilitySummary>&& value) { m_gatewayCapabilitySummaries = std::move(value); }
    inline DescribeGatewayResult& WithGatewayCapabilitySummaries(const Aws::Vector<GatewayCapabilitySummary>& value) { SetGatewayCapabilitySummaries(value); return *this;}
    inline DescribeGatewayResult& WithGatewayCapabilitySummaries(Aws::Vector<GatewayCapabilitySummary>&& value) { SetGatewayCapabilitySummaries(std::move(value)); return *this;}
    inline DescribeGatewayResult& AddGatewayCapabilitySummaries(const GatewayCapabilitySummary& value) { m_gatewayCapabilitySummaries.push_back(value); return *this; }
    inline DescribeGatewayResult& AddGatewayCapabilitySummaries(GatewayCapabilitySummary&& value) { m_gatewayCapabilitySummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The date the gateway was created, in Unix epoch time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDate = value; }
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDate = std::move(value); }
    inline DescribeGatewayResult& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}
    inline DescribeGatewayResult& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the gateway was last updated, in Unix epoch time.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateDate() const{ return m_lastUpdateDate; }
    inline void SetLastUpdateDate(const Aws::Utils::DateTime& value) { m_lastUpdateDate = value; }
    inline void SetLastUpdateDate(Aws::Utils::DateTime&& value) { m_lastUpdateDate = std::move(value); }
    inline DescribeGatewayResult& WithLastUpdateDate(const Aws::Utils::DateTime& value) { SetLastUpdateDate(value); return *this;}
    inline DescribeGatewayResult& WithLastUpdateDate(Aws::Utils::DateTime&& value) { SetLastUpdateDate(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeGatewayResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeGatewayResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeGatewayResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_gatewayId;

    Aws::String m_gatewayName;

    Aws::String m_gatewayArn;

    GatewayPlatform m_gatewayPlatform;

    Aws::Vector<GatewayCapabilitySummary> m_gatewayCapabilitySummaries;

    Aws::Utils::DateTime m_creationDate;

    Aws::Utils::DateTime m_lastUpdateDate;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
