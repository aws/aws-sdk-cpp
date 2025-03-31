/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/RouteServerPropagation.h>
#include <aws/ec2/model/ResponseMetadata.h>
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
  class EnableRouteServerPropagationResponse
  {
  public:
    AWS_EC2_API EnableRouteServerPropagationResponse() = default;
    AWS_EC2_API EnableRouteServerPropagationResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API EnableRouteServerPropagationResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the enabled route server propagation.</p>
     */
    inline const RouteServerPropagation& GetRouteServerPropagation() const { return m_routeServerPropagation; }
    template<typename RouteServerPropagationT = RouteServerPropagation>
    void SetRouteServerPropagation(RouteServerPropagationT&& value) { m_routeServerPropagationHasBeenSet = true; m_routeServerPropagation = std::forward<RouteServerPropagationT>(value); }
    template<typename RouteServerPropagationT = RouteServerPropagation>
    EnableRouteServerPropagationResponse& WithRouteServerPropagation(RouteServerPropagationT&& value) { SetRouteServerPropagation(std::forward<RouteServerPropagationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    EnableRouteServerPropagationResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    RouteServerPropagation m_routeServerPropagation;
    bool m_routeServerPropagationHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
