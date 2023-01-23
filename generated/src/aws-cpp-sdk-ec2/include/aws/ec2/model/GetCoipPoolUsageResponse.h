/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/CoipAddressUsage.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{
  class GetCoipPoolUsageResponse
  {
  public:
    AWS_EC2_API GetCoipPoolUsageResponse();
    AWS_EC2_API GetCoipPoolUsageResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API GetCoipPoolUsageResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The ID of the customer-owned address pool.</p>
     */
    inline const Aws::String& GetCoipPoolId() const{ return m_coipPoolId; }

    /**
     * <p>The ID of the customer-owned address pool.</p>
     */
    inline void SetCoipPoolId(const Aws::String& value) { m_coipPoolId = value; }

    /**
     * <p>The ID of the customer-owned address pool.</p>
     */
    inline void SetCoipPoolId(Aws::String&& value) { m_coipPoolId = std::move(value); }

    /**
     * <p>The ID of the customer-owned address pool.</p>
     */
    inline void SetCoipPoolId(const char* value) { m_coipPoolId.assign(value); }

    /**
     * <p>The ID of the customer-owned address pool.</p>
     */
    inline GetCoipPoolUsageResponse& WithCoipPoolId(const Aws::String& value) { SetCoipPoolId(value); return *this;}

    /**
     * <p>The ID of the customer-owned address pool.</p>
     */
    inline GetCoipPoolUsageResponse& WithCoipPoolId(Aws::String&& value) { SetCoipPoolId(std::move(value)); return *this;}

    /**
     * <p>The ID of the customer-owned address pool.</p>
     */
    inline GetCoipPoolUsageResponse& WithCoipPoolId(const char* value) { SetCoipPoolId(value); return *this;}


    /**
     * <p>Information about the address usage.</p>
     */
    inline const Aws::Vector<CoipAddressUsage>& GetCoipAddressUsages() const{ return m_coipAddressUsages; }

    /**
     * <p>Information about the address usage.</p>
     */
    inline void SetCoipAddressUsages(const Aws::Vector<CoipAddressUsage>& value) { m_coipAddressUsages = value; }

    /**
     * <p>Information about the address usage.</p>
     */
    inline void SetCoipAddressUsages(Aws::Vector<CoipAddressUsage>&& value) { m_coipAddressUsages = std::move(value); }

    /**
     * <p>Information about the address usage.</p>
     */
    inline GetCoipPoolUsageResponse& WithCoipAddressUsages(const Aws::Vector<CoipAddressUsage>& value) { SetCoipAddressUsages(value); return *this;}

    /**
     * <p>Information about the address usage.</p>
     */
    inline GetCoipPoolUsageResponse& WithCoipAddressUsages(Aws::Vector<CoipAddressUsage>&& value) { SetCoipAddressUsages(std::move(value)); return *this;}

    /**
     * <p>Information about the address usage.</p>
     */
    inline GetCoipPoolUsageResponse& AddCoipAddressUsages(const CoipAddressUsage& value) { m_coipAddressUsages.push_back(value); return *this; }

    /**
     * <p>Information about the address usage.</p>
     */
    inline GetCoipPoolUsageResponse& AddCoipAddressUsages(CoipAddressUsage&& value) { m_coipAddressUsages.push_back(std::move(value)); return *this; }


    /**
     * <p>The ID of the local gateway route table.</p>
     */
    inline const Aws::String& GetLocalGatewayRouteTableId() const{ return m_localGatewayRouteTableId; }

    /**
     * <p>The ID of the local gateway route table.</p>
     */
    inline void SetLocalGatewayRouteTableId(const Aws::String& value) { m_localGatewayRouteTableId = value; }

    /**
     * <p>The ID of the local gateway route table.</p>
     */
    inline void SetLocalGatewayRouteTableId(Aws::String&& value) { m_localGatewayRouteTableId = std::move(value); }

    /**
     * <p>The ID of the local gateway route table.</p>
     */
    inline void SetLocalGatewayRouteTableId(const char* value) { m_localGatewayRouteTableId.assign(value); }

    /**
     * <p>The ID of the local gateway route table.</p>
     */
    inline GetCoipPoolUsageResponse& WithLocalGatewayRouteTableId(const Aws::String& value) { SetLocalGatewayRouteTableId(value); return *this;}

    /**
     * <p>The ID of the local gateway route table.</p>
     */
    inline GetCoipPoolUsageResponse& WithLocalGatewayRouteTableId(Aws::String&& value) { SetLocalGatewayRouteTableId(std::move(value)); return *this;}

    /**
     * <p>The ID of the local gateway route table.</p>
     */
    inline GetCoipPoolUsageResponse& WithLocalGatewayRouteTableId(const char* value) { SetLocalGatewayRouteTableId(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline GetCoipPoolUsageResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline GetCoipPoolUsageResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_coipPoolId;

    Aws::Vector<CoipAddressUsage> m_coipAddressUsages;

    Aws::String m_localGatewayRouteTableId;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
