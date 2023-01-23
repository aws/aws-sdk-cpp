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


    /**
     * <p>The ID of the gateway device.</p>
     */
    inline const Aws::String& GetGatewayId() const{ return m_gatewayId; }

    /**
     * <p>The ID of the gateway device.</p>
     */
    inline void SetGatewayId(const Aws::String& value) { m_gatewayId = value; }

    /**
     * <p>The ID of the gateway device.</p>
     */
    inline void SetGatewayId(Aws::String&& value) { m_gatewayId = std::move(value); }

    /**
     * <p>The ID of the gateway device.</p>
     */
    inline void SetGatewayId(const char* value) { m_gatewayId.assign(value); }

    /**
     * <p>The ID of the gateway device.</p>
     */
    inline DescribeGatewayResult& WithGatewayId(const Aws::String& value) { SetGatewayId(value); return *this;}

    /**
     * <p>The ID of the gateway device.</p>
     */
    inline DescribeGatewayResult& WithGatewayId(Aws::String&& value) { SetGatewayId(std::move(value)); return *this;}

    /**
     * <p>The ID of the gateway device.</p>
     */
    inline DescribeGatewayResult& WithGatewayId(const char* value) { SetGatewayId(value); return *this;}


    /**
     * <p>The name of the gateway.</p>
     */
    inline const Aws::String& GetGatewayName() const{ return m_gatewayName; }

    /**
     * <p>The name of the gateway.</p>
     */
    inline void SetGatewayName(const Aws::String& value) { m_gatewayName = value; }

    /**
     * <p>The name of the gateway.</p>
     */
    inline void SetGatewayName(Aws::String&& value) { m_gatewayName = std::move(value); }

    /**
     * <p>The name of the gateway.</p>
     */
    inline void SetGatewayName(const char* value) { m_gatewayName.assign(value); }

    /**
     * <p>The name of the gateway.</p>
     */
    inline DescribeGatewayResult& WithGatewayName(const Aws::String& value) { SetGatewayName(value); return *this;}

    /**
     * <p>The name of the gateway.</p>
     */
    inline DescribeGatewayResult& WithGatewayName(Aws::String&& value) { SetGatewayName(std::move(value)); return *this;}

    /**
     * <p>The name of the gateway.</p>
     */
    inline DescribeGatewayResult& WithGatewayName(const char* value) { SetGatewayName(value); return *this;}


    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the gateway, which has the following format.</p> <p>
     * <code>arn:${Partition}:iotsitewise:${Region}:${Account}:gateway/${GatewayId}</code>
     * </p>
     */
    inline const Aws::String& GetGatewayArn() const{ return m_gatewayArn; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the gateway, which has the following format.</p> <p>
     * <code>arn:${Partition}:iotsitewise:${Region}:${Account}:gateway/${GatewayId}</code>
     * </p>
     */
    inline void SetGatewayArn(const Aws::String& value) { m_gatewayArn = value; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the gateway, which has the following format.</p> <p>
     * <code>arn:${Partition}:iotsitewise:${Region}:${Account}:gateway/${GatewayId}</code>
     * </p>
     */
    inline void SetGatewayArn(Aws::String&& value) { m_gatewayArn = std::move(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the gateway, which has the following format.</p> <p>
     * <code>arn:${Partition}:iotsitewise:${Region}:${Account}:gateway/${GatewayId}</code>
     * </p>
     */
    inline void SetGatewayArn(const char* value) { m_gatewayArn.assign(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the gateway, which has the following format.</p> <p>
     * <code>arn:${Partition}:iotsitewise:${Region}:${Account}:gateway/${GatewayId}</code>
     * </p>
     */
    inline DescribeGatewayResult& WithGatewayArn(const Aws::String& value) { SetGatewayArn(value); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the gateway, which has the following format.</p> <p>
     * <code>arn:${Partition}:iotsitewise:${Region}:${Account}:gateway/${GatewayId}</code>
     * </p>
     */
    inline DescribeGatewayResult& WithGatewayArn(Aws::String&& value) { SetGatewayArn(std::move(value)); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the gateway, which has the following format.</p> <p>
     * <code>arn:${Partition}:iotsitewise:${Region}:${Account}:gateway/${GatewayId}</code>
     * </p>
     */
    inline DescribeGatewayResult& WithGatewayArn(const char* value) { SetGatewayArn(value); return *this;}


    /**
     * <p>The gateway's platform.</p>
     */
    inline const GatewayPlatform& GetGatewayPlatform() const{ return m_gatewayPlatform; }

    /**
     * <p>The gateway's platform.</p>
     */
    inline void SetGatewayPlatform(const GatewayPlatform& value) { m_gatewayPlatform = value; }

    /**
     * <p>The gateway's platform.</p>
     */
    inline void SetGatewayPlatform(GatewayPlatform&& value) { m_gatewayPlatform = std::move(value); }

    /**
     * <p>The gateway's platform.</p>
     */
    inline DescribeGatewayResult& WithGatewayPlatform(const GatewayPlatform& value) { SetGatewayPlatform(value); return *this;}

    /**
     * <p>The gateway's platform.</p>
     */
    inline DescribeGatewayResult& WithGatewayPlatform(GatewayPlatform&& value) { SetGatewayPlatform(std::move(value)); return *this;}


    /**
     * <p>A list of gateway capability summaries that each contain a namespace and
     * status. Each gateway capability defines data sources for the gateway. To
     * retrieve a capability configuration's definition, use <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_DescribeGatewayCapabilityConfiguration.html">DescribeGatewayCapabilityConfiguration</a>.</p>
     */
    inline const Aws::Vector<GatewayCapabilitySummary>& GetGatewayCapabilitySummaries() const{ return m_gatewayCapabilitySummaries; }

    /**
     * <p>A list of gateway capability summaries that each contain a namespace and
     * status. Each gateway capability defines data sources for the gateway. To
     * retrieve a capability configuration's definition, use <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_DescribeGatewayCapabilityConfiguration.html">DescribeGatewayCapabilityConfiguration</a>.</p>
     */
    inline void SetGatewayCapabilitySummaries(const Aws::Vector<GatewayCapabilitySummary>& value) { m_gatewayCapabilitySummaries = value; }

    /**
     * <p>A list of gateway capability summaries that each contain a namespace and
     * status. Each gateway capability defines data sources for the gateway. To
     * retrieve a capability configuration's definition, use <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_DescribeGatewayCapabilityConfiguration.html">DescribeGatewayCapabilityConfiguration</a>.</p>
     */
    inline void SetGatewayCapabilitySummaries(Aws::Vector<GatewayCapabilitySummary>&& value) { m_gatewayCapabilitySummaries = std::move(value); }

    /**
     * <p>A list of gateway capability summaries that each contain a namespace and
     * status. Each gateway capability defines data sources for the gateway. To
     * retrieve a capability configuration's definition, use <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_DescribeGatewayCapabilityConfiguration.html">DescribeGatewayCapabilityConfiguration</a>.</p>
     */
    inline DescribeGatewayResult& WithGatewayCapabilitySummaries(const Aws::Vector<GatewayCapabilitySummary>& value) { SetGatewayCapabilitySummaries(value); return *this;}

    /**
     * <p>A list of gateway capability summaries that each contain a namespace and
     * status. Each gateway capability defines data sources for the gateway. To
     * retrieve a capability configuration's definition, use <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_DescribeGatewayCapabilityConfiguration.html">DescribeGatewayCapabilityConfiguration</a>.</p>
     */
    inline DescribeGatewayResult& WithGatewayCapabilitySummaries(Aws::Vector<GatewayCapabilitySummary>&& value) { SetGatewayCapabilitySummaries(std::move(value)); return *this;}

    /**
     * <p>A list of gateway capability summaries that each contain a namespace and
     * status. Each gateway capability defines data sources for the gateway. To
     * retrieve a capability configuration's definition, use <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_DescribeGatewayCapabilityConfiguration.html">DescribeGatewayCapabilityConfiguration</a>.</p>
     */
    inline DescribeGatewayResult& AddGatewayCapabilitySummaries(const GatewayCapabilitySummary& value) { m_gatewayCapabilitySummaries.push_back(value); return *this; }

    /**
     * <p>A list of gateway capability summaries that each contain a namespace and
     * status. Each gateway capability defines data sources for the gateway. To
     * retrieve a capability configuration's definition, use <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_DescribeGatewayCapabilityConfiguration.html">DescribeGatewayCapabilityConfiguration</a>.</p>
     */
    inline DescribeGatewayResult& AddGatewayCapabilitySummaries(GatewayCapabilitySummary&& value) { m_gatewayCapabilitySummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>The date the gateway was created, in Unix epoch time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The date the gateway was created, in Unix epoch time.</p>
     */
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDate = value; }

    /**
     * <p>The date the gateway was created, in Unix epoch time.</p>
     */
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDate = std::move(value); }

    /**
     * <p>The date the gateway was created, in Unix epoch time.</p>
     */
    inline DescribeGatewayResult& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The date the gateway was created, in Unix epoch time.</p>
     */
    inline DescribeGatewayResult& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}


    /**
     * <p>The date the gateway was last updated, in Unix epoch time.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateDate() const{ return m_lastUpdateDate; }

    /**
     * <p>The date the gateway was last updated, in Unix epoch time.</p>
     */
    inline void SetLastUpdateDate(const Aws::Utils::DateTime& value) { m_lastUpdateDate = value; }

    /**
     * <p>The date the gateway was last updated, in Unix epoch time.</p>
     */
    inline void SetLastUpdateDate(Aws::Utils::DateTime&& value) { m_lastUpdateDate = std::move(value); }

    /**
     * <p>The date the gateway was last updated, in Unix epoch time.</p>
     */
    inline DescribeGatewayResult& WithLastUpdateDate(const Aws::Utils::DateTime& value) { SetLastUpdateDate(value); return *this;}

    /**
     * <p>The date the gateway was last updated, in Unix epoch time.</p>
     */
    inline DescribeGatewayResult& WithLastUpdateDate(Aws::Utils::DateTime&& value) { SetLastUpdateDate(std::move(value)); return *this;}

  private:

    Aws::String m_gatewayId;

    Aws::String m_gatewayName;

    Aws::String m_gatewayArn;

    GatewayPlatform m_gatewayPlatform;

    Aws::Vector<GatewayCapabilitySummary> m_gatewayCapabilitySummaries;

    Aws::Utils::DateTime m_creationDate;

    Aws::Utils::DateTime m_lastUpdateDate;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
