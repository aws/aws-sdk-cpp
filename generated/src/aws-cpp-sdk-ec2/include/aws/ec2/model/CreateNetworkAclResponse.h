/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/NetworkAcl.h>
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
  class CreateNetworkAclResponse
  {
  public:
    AWS_EC2_API CreateNetworkAclResponse();
    AWS_EC2_API CreateNetworkAclResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API CreateNetworkAclResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


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
    inline void SetNetworkAcl(NetworkAcl&& value) { m_networkAcl = std::move(value); }

    /**
     * <p>Information about the network ACL.</p>
     */
    inline CreateNetworkAclResponse& WithNetworkAcl(const NetworkAcl& value) { SetNetworkAcl(value); return *this;}

    /**
     * <p>Information about the network ACL.</p>
     */
    inline CreateNetworkAclResponse& WithNetworkAcl(NetworkAcl&& value) { SetNetworkAcl(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline CreateNetworkAclResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline CreateNetworkAclResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    NetworkAcl m_networkAcl;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
