/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/TransitGateway.h>
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
  class ModifyTransitGatewayResponse
  {
  public:
    AWS_EC2_API ModifyTransitGatewayResponse();
    AWS_EC2_API ModifyTransitGatewayResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API ModifyTransitGatewayResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the transit gateway.</p>
     */
    inline const TransitGateway& GetTransitGateway() const{ return m_transitGateway; }

    /**
     * <p>Information about the transit gateway.</p>
     */
    inline void SetTransitGateway(const TransitGateway& value) { m_transitGateway = value; }

    /**
     * <p>Information about the transit gateway.</p>
     */
    inline void SetTransitGateway(TransitGateway&& value) { m_transitGateway = std::move(value); }

    /**
     * <p>Information about the transit gateway.</p>
     */
    inline ModifyTransitGatewayResponse& WithTransitGateway(const TransitGateway& value) { SetTransitGateway(value); return *this;}

    /**
     * <p>Information about the transit gateway.</p>
     */
    inline ModifyTransitGatewayResponse& WithTransitGateway(TransitGateway&& value) { SetTransitGateway(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline ModifyTransitGatewayResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ModifyTransitGatewayResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    TransitGateway m_transitGateway;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
