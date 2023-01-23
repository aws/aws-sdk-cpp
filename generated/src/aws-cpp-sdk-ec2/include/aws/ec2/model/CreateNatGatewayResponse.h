/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/NatGateway.h>
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
  class CreateNatGatewayResponse
  {
  public:
    AWS_EC2_API CreateNatGatewayResponse();
    AWS_EC2_API CreateNatGatewayResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API CreateNatGatewayResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Unique, case-sensitive identifier to ensure the idempotency of the request.
     * Only returned if a client token was provided in the request.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>Unique, case-sensitive identifier to ensure the idempotency of the request.
     * Only returned if a client token was provided in the request.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientToken = value; }

    /**
     * <p>Unique, case-sensitive identifier to ensure the idempotency of the request.
     * Only returned if a client token was provided in the request.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientToken = std::move(value); }

    /**
     * <p>Unique, case-sensitive identifier to ensure the idempotency of the request.
     * Only returned if a client token was provided in the request.</p>
     */
    inline void SetClientToken(const char* value) { m_clientToken.assign(value); }

    /**
     * <p>Unique, case-sensitive identifier to ensure the idempotency of the request.
     * Only returned if a client token was provided in the request.</p>
     */
    inline CreateNatGatewayResponse& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>Unique, case-sensitive identifier to ensure the idempotency of the request.
     * Only returned if a client token was provided in the request.</p>
     */
    inline CreateNatGatewayResponse& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>Unique, case-sensitive identifier to ensure the idempotency of the request.
     * Only returned if a client token was provided in the request.</p>
     */
    inline CreateNatGatewayResponse& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>Information about the NAT gateway.</p>
     */
    inline const NatGateway& GetNatGateway() const{ return m_natGateway; }

    /**
     * <p>Information about the NAT gateway.</p>
     */
    inline void SetNatGateway(const NatGateway& value) { m_natGateway = value; }

    /**
     * <p>Information about the NAT gateway.</p>
     */
    inline void SetNatGateway(NatGateway&& value) { m_natGateway = std::move(value); }

    /**
     * <p>Information about the NAT gateway.</p>
     */
    inline CreateNatGatewayResponse& WithNatGateway(const NatGateway& value) { SetNatGateway(value); return *this;}

    /**
     * <p>Information about the NAT gateway.</p>
     */
    inline CreateNatGatewayResponse& WithNatGateway(NatGateway&& value) { SetNatGateway(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline CreateNatGatewayResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline CreateNatGatewayResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_clientToken;

    NatGateway m_natGateway;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
