﻿/*
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
#include <aws/ec2/model/ServiceConfiguration.h>
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
  class AWS_EC2_API CreateVpcEndpointServiceConfigurationResponse
  {
  public:
    CreateVpcEndpointServiceConfigurationResponse();
    CreateVpcEndpointServiceConfigurationResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    CreateVpcEndpointServiceConfigurationResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the service configuration.</p>
     */
    inline const ServiceConfiguration& GetServiceConfiguration() const{ return m_serviceConfiguration; }

    /**
     * <p>Information about the service configuration.</p>
     */
    inline void SetServiceConfiguration(const ServiceConfiguration& value) { m_serviceConfiguration = value; }

    /**
     * <p>Information about the service configuration.</p>
     */
    inline void SetServiceConfiguration(ServiceConfiguration&& value) { m_serviceConfiguration = std::move(value); }

    /**
     * <p>Information about the service configuration.</p>
     */
    inline CreateVpcEndpointServiceConfigurationResponse& WithServiceConfiguration(const ServiceConfiguration& value) { SetServiceConfiguration(value); return *this;}

    /**
     * <p>Information about the service configuration.</p>
     */
    inline CreateVpcEndpointServiceConfigurationResponse& WithServiceConfiguration(ServiceConfiguration&& value) { SetServiceConfiguration(std::move(value)); return *this;}


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
    inline CreateVpcEndpointServiceConfigurationResponse& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request.</p>
     */
    inline CreateVpcEndpointServiceConfigurationResponse& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request.</p>
     */
    inline CreateVpcEndpointServiceConfigurationResponse& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline CreateVpcEndpointServiceConfigurationResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline CreateVpcEndpointServiceConfigurationResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    ServiceConfiguration m_serviceConfiguration;

    Aws::String m_clientToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
