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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/ServiceDetail.h>
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
   * <p>Contains the output of DescribeVpcEndpointServices.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeVpcEndpointServicesResult">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API DescribeVpcEndpointServicesResponse
  {
  public:
    DescribeVpcEndpointServicesResponse();
    DescribeVpcEndpointServicesResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeVpcEndpointServicesResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>A list of supported services.</p>
     */
    inline const Aws::Vector<Aws::String>& GetServiceNames() const{ return m_serviceNames; }

    /**
     * <p>A list of supported services.</p>
     */
    inline void SetServiceNames(const Aws::Vector<Aws::String>& value) { m_serviceNames = value; }

    /**
     * <p>A list of supported services.</p>
     */
    inline void SetServiceNames(Aws::Vector<Aws::String>&& value) { m_serviceNames = std::move(value); }

    /**
     * <p>A list of supported services.</p>
     */
    inline DescribeVpcEndpointServicesResponse& WithServiceNames(const Aws::Vector<Aws::String>& value) { SetServiceNames(value); return *this;}

    /**
     * <p>A list of supported services.</p>
     */
    inline DescribeVpcEndpointServicesResponse& WithServiceNames(Aws::Vector<Aws::String>&& value) { SetServiceNames(std::move(value)); return *this;}

    /**
     * <p>A list of supported services.</p>
     */
    inline DescribeVpcEndpointServicesResponse& AddServiceNames(const Aws::String& value) { m_serviceNames.push_back(value); return *this; }

    /**
     * <p>A list of supported services.</p>
     */
    inline DescribeVpcEndpointServicesResponse& AddServiceNames(Aws::String&& value) { m_serviceNames.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of supported services.</p>
     */
    inline DescribeVpcEndpointServicesResponse& AddServiceNames(const char* value) { m_serviceNames.push_back(value); return *this; }


    /**
     * <p>Information about the service.</p>
     */
    inline const Aws::Vector<ServiceDetail>& GetServiceDetails() const{ return m_serviceDetails; }

    /**
     * <p>Information about the service.</p>
     */
    inline void SetServiceDetails(const Aws::Vector<ServiceDetail>& value) { m_serviceDetails = value; }

    /**
     * <p>Information about the service.</p>
     */
    inline void SetServiceDetails(Aws::Vector<ServiceDetail>&& value) { m_serviceDetails = std::move(value); }

    /**
     * <p>Information about the service.</p>
     */
    inline DescribeVpcEndpointServicesResponse& WithServiceDetails(const Aws::Vector<ServiceDetail>& value) { SetServiceDetails(value); return *this;}

    /**
     * <p>Information about the service.</p>
     */
    inline DescribeVpcEndpointServicesResponse& WithServiceDetails(Aws::Vector<ServiceDetail>&& value) { SetServiceDetails(std::move(value)); return *this;}

    /**
     * <p>Information about the service.</p>
     */
    inline DescribeVpcEndpointServicesResponse& AddServiceDetails(const ServiceDetail& value) { m_serviceDetails.push_back(value); return *this; }

    /**
     * <p>Information about the service.</p>
     */
    inline DescribeVpcEndpointServicesResponse& AddServiceDetails(ServiceDetail&& value) { m_serviceDetails.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline DescribeVpcEndpointServicesResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline DescribeVpcEndpointServicesResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline DescribeVpcEndpointServicesResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeVpcEndpointServicesResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeVpcEndpointServicesResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<Aws::String> m_serviceNames;

    Aws::Vector<ServiceDetail> m_serviceDetails;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
