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
#include <aws/ec2/model/NetworkAcl.h>
#include <aws/ec2/model/ResponseMetadata.h>

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
   * <p>Contains the output of CreateNetworkAcl.</p>
   */
  class AWS_EC2_API CreateNetworkAclResponse
  {
  public:
    CreateNetworkAclResponse();
    CreateNetworkAclResponse(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    CreateNetworkAclResponse& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * <p>Information about the network ACL.</p>
     */
    inline const NetworkAcl& GetNetworkAcl() const{ return m_networkAcl; }

    /**
     * <p>Information about the network ACL.</p>
     */
    inline void SetNetworkAcl(const NetworkAcl& value) { m_networkAcl = value; }

    /**
     * <p>Information about the network ACL.</p>
     */
    inline void SetNetworkAcl(NetworkAcl&& value) { m_networkAcl = value; }

    /**
     * <p>Information about the network ACL.</p>
     */
    inline CreateNetworkAclResponse& WithNetworkAcl(const NetworkAcl& value) { SetNetworkAcl(value); return *this;}

    /**
     * <p>Information about the network ACL.</p>
     */
    inline CreateNetworkAclResponse& WithNetworkAcl(NetworkAcl&& value) { SetNetworkAcl(value); return *this;}

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline CreateNetworkAclResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline CreateNetworkAclResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    NetworkAcl m_networkAcl;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws