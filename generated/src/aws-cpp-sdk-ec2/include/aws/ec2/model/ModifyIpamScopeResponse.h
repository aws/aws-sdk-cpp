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
  class ModifyIpamScopeResponse
  {
  public:
    AWS_EC2_API ModifyIpamScopeResponse();
    AWS_EC2_API ModifyIpamScopeResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API ModifyIpamScopeResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The results of the modification.</p>
     */
    inline const IpamScope& GetIpamScope() const{ return m_ipamScope; }

    /**
     * <p>The results of the modification.</p>
     */
    inline void SetIpamScope(const IpamScope& value) { m_ipamScope = value; }

    /**
     * <p>The results of the modification.</p>
     */
    inline void SetIpamScope(IpamScope&& value) { m_ipamScope = std::move(value); }

    /**
     * <p>The results of the modification.</p>
     */
    inline ModifyIpamScopeResponse& WithIpamScope(const IpamScope& value) { SetIpamScope(value); return *this;}

    /**
     * <p>The results of the modification.</p>
     */
    inline ModifyIpamScopeResponse& WithIpamScope(IpamScope&& value) { SetIpamScope(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline ModifyIpamScopeResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ModifyIpamScopeResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    IpamScope m_ipamScope;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
