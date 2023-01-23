/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/RouteTable.h>
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
  class CreateRouteTableResponse
  {
  public:
    AWS_EC2_API CreateRouteTableResponse();
    AWS_EC2_API CreateRouteTableResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API CreateRouteTableResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the route table.</p>
     */
    inline const RouteTable& GetRouteTable() const{ return m_routeTable; }

    /**
     * <p>Information about the route table.</p>
     */
    inline void SetRouteTable(const RouteTable& value) { m_routeTable = value; }

    /**
     * <p>Information about the route table.</p>
     */
    inline void SetRouteTable(RouteTable&& value) { m_routeTable = std::move(value); }

    /**
     * <p>Information about the route table.</p>
     */
    inline CreateRouteTableResponse& WithRouteTable(const RouteTable& value) { SetRouteTable(value); return *this;}

    /**
     * <p>Information about the route table.</p>
     */
    inline CreateRouteTableResponse& WithRouteTable(RouteTable&& value) { SetRouteTable(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline CreateRouteTableResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline CreateRouteTableResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    RouteTable m_routeTable;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
