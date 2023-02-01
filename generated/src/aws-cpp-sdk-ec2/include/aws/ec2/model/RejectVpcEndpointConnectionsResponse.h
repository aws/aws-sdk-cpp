/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/UnsuccessfulItem.h>
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
  class RejectVpcEndpointConnectionsResponse
  {
  public:
    AWS_EC2_API RejectVpcEndpointConnectionsResponse();
    AWS_EC2_API RejectVpcEndpointConnectionsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API RejectVpcEndpointConnectionsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the endpoints that were not rejected, if applicable.</p>
     */
    inline const Aws::Vector<UnsuccessfulItem>& GetUnsuccessful() const{ return m_unsuccessful; }

    /**
     * <p>Information about the endpoints that were not rejected, if applicable.</p>
     */
    inline void SetUnsuccessful(const Aws::Vector<UnsuccessfulItem>& value) { m_unsuccessful = value; }

    /**
     * <p>Information about the endpoints that were not rejected, if applicable.</p>
     */
    inline void SetUnsuccessful(Aws::Vector<UnsuccessfulItem>&& value) { m_unsuccessful = std::move(value); }

    /**
     * <p>Information about the endpoints that were not rejected, if applicable.</p>
     */
    inline RejectVpcEndpointConnectionsResponse& WithUnsuccessful(const Aws::Vector<UnsuccessfulItem>& value) { SetUnsuccessful(value); return *this;}

    /**
     * <p>Information about the endpoints that were not rejected, if applicable.</p>
     */
    inline RejectVpcEndpointConnectionsResponse& WithUnsuccessful(Aws::Vector<UnsuccessfulItem>&& value) { SetUnsuccessful(std::move(value)); return *this;}

    /**
     * <p>Information about the endpoints that were not rejected, if applicable.</p>
     */
    inline RejectVpcEndpointConnectionsResponse& AddUnsuccessful(const UnsuccessfulItem& value) { m_unsuccessful.push_back(value); return *this; }

    /**
     * <p>Information about the endpoints that were not rejected, if applicable.</p>
     */
    inline RejectVpcEndpointConnectionsResponse& AddUnsuccessful(UnsuccessfulItem&& value) { m_unsuccessful.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline RejectVpcEndpointConnectionsResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline RejectVpcEndpointConnectionsResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<UnsuccessfulItem> m_unsuccessful;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
