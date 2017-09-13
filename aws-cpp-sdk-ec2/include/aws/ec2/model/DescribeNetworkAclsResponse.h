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
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/NetworkAcl.h>
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
   * <p>Contains the output of DescribeNetworkAcls.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeNetworkAclsResult">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API DescribeNetworkAclsResponse
  {
  public:
    DescribeNetworkAclsResponse();
    DescribeNetworkAclsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeNetworkAclsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about one or more network ACLs.</p>
     */
    inline const Aws::Vector<NetworkAcl>& GetNetworkAcls() const{ return m_networkAcls; }

    /**
     * <p>Information about one or more network ACLs.</p>
     */
    inline void SetNetworkAcls(const Aws::Vector<NetworkAcl>& value) { m_networkAcls = value; }

    /**
     * <p>Information about one or more network ACLs.</p>
     */
    inline void SetNetworkAcls(Aws::Vector<NetworkAcl>&& value) { m_networkAcls = std::move(value); }

    /**
     * <p>Information about one or more network ACLs.</p>
     */
    inline DescribeNetworkAclsResponse& WithNetworkAcls(const Aws::Vector<NetworkAcl>& value) { SetNetworkAcls(value); return *this;}

    /**
     * <p>Information about one or more network ACLs.</p>
     */
    inline DescribeNetworkAclsResponse& WithNetworkAcls(Aws::Vector<NetworkAcl>&& value) { SetNetworkAcls(std::move(value)); return *this;}

    /**
     * <p>Information about one or more network ACLs.</p>
     */
    inline DescribeNetworkAclsResponse& AddNetworkAcls(const NetworkAcl& value) { m_networkAcls.push_back(value); return *this; }

    /**
     * <p>Information about one or more network ACLs.</p>
     */
    inline DescribeNetworkAclsResponse& AddNetworkAcls(NetworkAcl&& value) { m_networkAcls.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeNetworkAclsResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeNetworkAclsResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<NetworkAcl> m_networkAcls;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
