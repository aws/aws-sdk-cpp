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
    AWS_EC2_API GetCoipPoolUsageResponse() = default;
    AWS_EC2_API GetCoipPoolUsageResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API GetCoipPoolUsageResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The ID of the customer-owned address pool.</p>
     */
    inline const Aws::String& GetCoipPoolId() const { return m_coipPoolId; }
    template<typename CoipPoolIdT = Aws::String>
    void SetCoipPoolId(CoipPoolIdT&& value) { m_coipPoolIdHasBeenSet = true; m_coipPoolId = std::forward<CoipPoolIdT>(value); }
    template<typename CoipPoolIdT = Aws::String>
    GetCoipPoolUsageResponse& WithCoipPoolId(CoipPoolIdT&& value) { SetCoipPoolId(std::forward<CoipPoolIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the address usage.</p>
     */
    inline const Aws::Vector<CoipAddressUsage>& GetCoipAddressUsages() const { return m_coipAddressUsages; }
    template<typename CoipAddressUsagesT = Aws::Vector<CoipAddressUsage>>
    void SetCoipAddressUsages(CoipAddressUsagesT&& value) { m_coipAddressUsagesHasBeenSet = true; m_coipAddressUsages = std::forward<CoipAddressUsagesT>(value); }
    template<typename CoipAddressUsagesT = Aws::Vector<CoipAddressUsage>>
    GetCoipPoolUsageResponse& WithCoipAddressUsages(CoipAddressUsagesT&& value) { SetCoipAddressUsages(std::forward<CoipAddressUsagesT>(value)); return *this;}
    template<typename CoipAddressUsagesT = CoipAddressUsage>
    GetCoipPoolUsageResponse& AddCoipAddressUsages(CoipAddressUsagesT&& value) { m_coipAddressUsagesHasBeenSet = true; m_coipAddressUsages.emplace_back(std::forward<CoipAddressUsagesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the local gateway route table.</p>
     */
    inline const Aws::String& GetLocalGatewayRouteTableId() const { return m_localGatewayRouteTableId; }
    template<typename LocalGatewayRouteTableIdT = Aws::String>
    void SetLocalGatewayRouteTableId(LocalGatewayRouteTableIdT&& value) { m_localGatewayRouteTableIdHasBeenSet = true; m_localGatewayRouteTableId = std::forward<LocalGatewayRouteTableIdT>(value); }
    template<typename LocalGatewayRouteTableIdT = Aws::String>
    GetCoipPoolUsageResponse& WithLocalGatewayRouteTableId(LocalGatewayRouteTableIdT&& value) { SetLocalGatewayRouteTableId(std::forward<LocalGatewayRouteTableIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetCoipPoolUsageResponse& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    GetCoipPoolUsageResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_coipPoolId;
    bool m_coipPoolIdHasBeenSet = false;

    Aws::Vector<CoipAddressUsage> m_coipAddressUsages;
    bool m_coipAddressUsagesHasBeenSet = false;

    Aws::String m_localGatewayRouteTableId;
    bool m_localGatewayRouteTableIdHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
