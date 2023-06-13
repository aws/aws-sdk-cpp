/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/Ec2InstanceConnectEndpoint.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class CreateInstanceConnectEndpointResponse
  {
  public:
    AWS_EC2_API CreateInstanceConnectEndpointResponse();
    AWS_EC2_API CreateInstanceConnectEndpointResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API CreateInstanceConnectEndpointResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the EC2 Instance Connect Endpoint.</p>
     */
    inline const Ec2InstanceConnectEndpoint& GetInstanceConnectEndpoint() const{ return m_instanceConnectEndpoint; }

    /**
     * <p>Information about the EC2 Instance Connect Endpoint.</p>
     */
    inline void SetInstanceConnectEndpoint(const Ec2InstanceConnectEndpoint& value) { m_instanceConnectEndpoint = value; }

    /**
     * <p>Information about the EC2 Instance Connect Endpoint.</p>
     */
    inline void SetInstanceConnectEndpoint(Ec2InstanceConnectEndpoint&& value) { m_instanceConnectEndpoint = std::move(value); }

    /**
     * <p>Information about the EC2 Instance Connect Endpoint.</p>
     */
    inline CreateInstanceConnectEndpointResponse& WithInstanceConnectEndpoint(const Ec2InstanceConnectEndpoint& value) { SetInstanceConnectEndpoint(value); return *this;}

    /**
     * <p>Information about the EC2 Instance Connect Endpoint.</p>
     */
    inline CreateInstanceConnectEndpointResponse& WithInstanceConnectEndpoint(Ec2InstanceConnectEndpoint&& value) { SetInstanceConnectEndpoint(std::move(value)); return *this;}


    /**
     * <p>Unique, case-sensitive idempotency token provided by the client in the the
     * request.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>Unique, case-sensitive idempotency token provided by the client in the the
     * request.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientToken = value; }

    /**
     * <p>Unique, case-sensitive idempotency token provided by the client in the the
     * request.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientToken = std::move(value); }

    /**
     * <p>Unique, case-sensitive idempotency token provided by the client in the the
     * request.</p>
     */
    inline void SetClientToken(const char* value) { m_clientToken.assign(value); }

    /**
     * <p>Unique, case-sensitive idempotency token provided by the client in the the
     * request.</p>
     */
    inline CreateInstanceConnectEndpointResponse& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>Unique, case-sensitive idempotency token provided by the client in the the
     * request.</p>
     */
    inline CreateInstanceConnectEndpointResponse& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>Unique, case-sensitive idempotency token provided by the client in the the
     * request.</p>
     */
    inline CreateInstanceConnectEndpointResponse& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline CreateInstanceConnectEndpointResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline CreateInstanceConnectEndpointResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Ec2InstanceConnectEndpoint m_instanceConnectEndpoint;

    Aws::String m_clientToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
