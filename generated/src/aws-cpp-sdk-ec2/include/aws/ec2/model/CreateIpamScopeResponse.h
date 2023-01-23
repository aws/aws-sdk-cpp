/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/IpamScope.h>
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
  class CreateIpamScopeResponse
  {
  public:
    AWS_EC2_API CreateIpamScopeResponse();
    AWS_EC2_API CreateIpamScopeResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API CreateIpamScopeResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the created scope.</p>
     */
    inline const IpamScope& GetIpamScope() const{ return m_ipamScope; }

    /**
     * <p>Information about the created scope.</p>
     */
    inline void SetIpamScope(const IpamScope& value) { m_ipamScope = value; }

    /**
     * <p>Information about the created scope.</p>
     */
    inline void SetIpamScope(IpamScope&& value) { m_ipamScope = std::move(value); }

    /**
     * <p>Information about the created scope.</p>
     */
    inline CreateIpamScopeResponse& WithIpamScope(const IpamScope& value) { SetIpamScope(value); return *this;}

    /**
     * <p>Information about the created scope.</p>
     */
    inline CreateIpamScopeResponse& WithIpamScope(IpamScope&& value) { SetIpamScope(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline CreateIpamScopeResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline CreateIpamScopeResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    IpamScope m_ipamScope;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
