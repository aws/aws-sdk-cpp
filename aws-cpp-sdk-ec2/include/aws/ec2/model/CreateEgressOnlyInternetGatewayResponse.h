/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/EgressOnlyInternetGateway.h>
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
  class AWS_EC2_API CreateEgressOnlyInternetGatewayResponse
  {
  public:
    CreateEgressOnlyInternetGatewayResponse();
    CreateEgressOnlyInternetGatewayResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    CreateEgressOnlyInternetGatewayResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientToken = value; }

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientToken = std::move(value); }

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request.</p>
     */
    inline void SetClientToken(const char* value) { m_clientToken.assign(value); }

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request.</p>
     */
    inline CreateEgressOnlyInternetGatewayResponse& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request.</p>
     */
    inline CreateEgressOnlyInternetGatewayResponse& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request.</p>
     */
    inline CreateEgressOnlyInternetGatewayResponse& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>Information about the egress-only Internet gateway.</p>
     */
    inline const EgressOnlyInternetGateway& GetEgressOnlyInternetGateway() const{ return m_egressOnlyInternetGateway; }

    /**
     * <p>Information about the egress-only Internet gateway.</p>
     */
    inline void SetEgressOnlyInternetGateway(const EgressOnlyInternetGateway& value) { m_egressOnlyInternetGateway = value; }

    /**
     * <p>Information about the egress-only Internet gateway.</p>
     */
    inline void SetEgressOnlyInternetGateway(EgressOnlyInternetGateway&& value) { m_egressOnlyInternetGateway = std::move(value); }

    /**
     * <p>Information about the egress-only Internet gateway.</p>
     */
    inline CreateEgressOnlyInternetGatewayResponse& WithEgressOnlyInternetGateway(const EgressOnlyInternetGateway& value) { SetEgressOnlyInternetGateway(value); return *this;}

    /**
     * <p>Information about the egress-only Internet gateway.</p>
     */
    inline CreateEgressOnlyInternetGatewayResponse& WithEgressOnlyInternetGateway(EgressOnlyInternetGateway&& value) { SetEgressOnlyInternetGateway(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline CreateEgressOnlyInternetGatewayResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline CreateEgressOnlyInternetGatewayResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_clientToken;

    EgressOnlyInternetGateway m_egressOnlyInternetGateway;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
