/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/TransitGatewayRoute.h>
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
  class SearchTransitGatewayRoutesResponse
  {
  public:
    AWS_EC2_API SearchTransitGatewayRoutesResponse() = default;
    AWS_EC2_API SearchTransitGatewayRoutesResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API SearchTransitGatewayRoutesResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the routes.</p>
     */
    inline const Aws::Vector<TransitGatewayRoute>& GetRoutes() const { return m_routes; }
    template<typename RoutesT = Aws::Vector<TransitGatewayRoute>>
    void SetRoutes(RoutesT&& value) { m_routesHasBeenSet = true; m_routes = std::forward<RoutesT>(value); }
    template<typename RoutesT = Aws::Vector<TransitGatewayRoute>>
    SearchTransitGatewayRoutesResponse& WithRoutes(RoutesT&& value) { SetRoutes(std::forward<RoutesT>(value)); return *this;}
    template<typename RoutesT = TransitGatewayRoute>
    SearchTransitGatewayRoutesResponse& AddRoutes(RoutesT&& value) { m_routesHasBeenSet = true; m_routes.emplace_back(std::forward<RoutesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether there are additional routes available.</p>
     */
    inline bool GetAdditionalRoutesAvailable() const { return m_additionalRoutesAvailable; }
    inline void SetAdditionalRoutesAvailable(bool value) { m_additionalRoutesAvailableHasBeenSet = true; m_additionalRoutesAvailable = value; }
    inline SearchTransitGatewayRoutesResponse& WithAdditionalRoutesAvailable(bool value) { SetAdditionalRoutesAvailable(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    SearchTransitGatewayRoutesResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<TransitGatewayRoute> m_routes;
    bool m_routesHasBeenSet = false;

    bool m_additionalRoutesAvailable{false};
    bool m_additionalRoutesAvailableHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
