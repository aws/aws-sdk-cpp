/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/InternetGateway.h>
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
  class CreateInternetGatewayResponse
  {
  public:
    AWS_EC2_API CreateInternetGatewayResponse();
    AWS_EC2_API CreateInternetGatewayResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API CreateInternetGatewayResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the internet gateway.</p>
     */
    inline const InternetGateway& GetInternetGateway() const{ return m_internetGateway; }

    /**
     * <p>Information about the internet gateway.</p>
     */
    inline void SetInternetGateway(const InternetGateway& value) { m_internetGateway = value; }

    /**
     * <p>Information about the internet gateway.</p>
     */
    inline void SetInternetGateway(InternetGateway&& value) { m_internetGateway = std::move(value); }

    /**
     * <p>Information about the internet gateway.</p>
     */
    inline CreateInternetGatewayResponse& WithInternetGateway(const InternetGateway& value) { SetInternetGateway(value); return *this;}

    /**
     * <p>Information about the internet gateway.</p>
     */
    inline CreateInternetGatewayResponse& WithInternetGateway(InternetGateway&& value) { SetInternetGateway(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline CreateInternetGatewayResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline CreateInternetGatewayResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    InternetGateway m_internetGateway;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
