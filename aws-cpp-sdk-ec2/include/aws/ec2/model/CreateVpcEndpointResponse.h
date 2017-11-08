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
#include <aws/ec2/model/VpcEndpoint.h>
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
  /**
   * <p>Contains the output of CreateVpcEndpoint.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateVpcEndpointResult">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API CreateVpcEndpointResponse
  {
  public:
    CreateVpcEndpointResponse();
    CreateVpcEndpointResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    CreateVpcEndpointResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the endpoint.</p>
     */
    inline const VpcEndpoint& GetVpcEndpoint() const{ return m_vpcEndpoint; }

    /**
     * <p>Information about the endpoint.</p>
     */
    inline void SetVpcEndpoint(const VpcEndpoint& value) { m_vpcEndpoint = value; }

    /**
     * <p>Information about the endpoint.</p>
     */
    inline void SetVpcEndpoint(VpcEndpoint&& value) { m_vpcEndpoint = std::move(value); }

    /**
     * <p>Information about the endpoint.</p>
     */
    inline CreateVpcEndpointResponse& WithVpcEndpoint(const VpcEndpoint& value) { SetVpcEndpoint(value); return *this;}

    /**
     * <p>Information about the endpoint.</p>
     */
    inline CreateVpcEndpointResponse& WithVpcEndpoint(VpcEndpoint&& value) { SetVpcEndpoint(std::move(value)); return *this;}


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
    inline CreateVpcEndpointResponse& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request.</p>
     */
    inline CreateVpcEndpointResponse& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request.</p>
     */
    inline CreateVpcEndpointResponse& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline CreateVpcEndpointResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline CreateVpcEndpointResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    VpcEndpoint m_vpcEndpoint;

    Aws::String m_clientToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
