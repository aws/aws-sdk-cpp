﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/ec2/model/VpcEndpoint.h>

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
   * <p>Contains the output of DescribeVpcEndpoints.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeVpcEndpointsResult">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API DescribeVpcEndpointsResponse
  {
  public:
    DescribeVpcEndpointsResponse();
    DescribeVpcEndpointsResponse(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeVpcEndpointsResponse& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * <p>Information about the endpoints.</p>
     */
    inline const Aws::Vector<VpcEndpoint>& GetVpcEndpoints() const{ return m_vpcEndpoints; }

    /**
     * <p>Information about the endpoints.</p>
     */
    inline void SetVpcEndpoints(const Aws::Vector<VpcEndpoint>& value) { m_vpcEndpoints = value; }

    /**
     * <p>Information about the endpoints.</p>
     */
    inline void SetVpcEndpoints(Aws::Vector<VpcEndpoint>&& value) { m_vpcEndpoints = value; }

    /**
     * <p>Information about the endpoints.</p>
     */
    inline DescribeVpcEndpointsResponse& WithVpcEndpoints(const Aws::Vector<VpcEndpoint>& value) { SetVpcEndpoints(value); return *this;}

    /**
     * <p>Information about the endpoints.</p>
     */
    inline DescribeVpcEndpointsResponse& WithVpcEndpoints(Aws::Vector<VpcEndpoint>&& value) { SetVpcEndpoints(value); return *this;}

    /**
     * <p>Information about the endpoints.</p>
     */
    inline DescribeVpcEndpointsResponse& AddVpcEndpoints(const VpcEndpoint& value) { m_vpcEndpoints.push_back(value); return *this; }

    /**
     * <p>Information about the endpoints.</p>
     */
    inline DescribeVpcEndpointsResponse& AddVpcEndpoints(VpcEndpoint&& value) { m_vpcEndpoints.push_back(value); return *this; }

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
    inline void SetNextToken(Aws::String&& value) { m_nextToken = value; }

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline DescribeVpcEndpointsResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline DescribeVpcEndpointsResponse& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline DescribeVpcEndpointsResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline DescribeVpcEndpointsResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeVpcEndpointsResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    Aws::Vector<VpcEndpoint> m_vpcEndpoints;
    Aws::String m_nextToken;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws