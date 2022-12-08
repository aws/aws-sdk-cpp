/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/IpPermission.h>
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
  class RevokeSecurityGroupIngressResponse
  {
  public:
    AWS_EC2_API RevokeSecurityGroupIngressResponse();
    AWS_EC2_API RevokeSecurityGroupIngressResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API RevokeSecurityGroupIngressResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Returns <code>true</code> if the request succeeds; otherwise, returns an
     * error.</p>
     */
    inline bool GetReturn() const{ return m_return; }

    /**
     * <p>Returns <code>true</code> if the request succeeds; otherwise, returns an
     * error.</p>
     */
    inline void SetReturn(bool value) { m_return = value; }

    /**
     * <p>Returns <code>true</code> if the request succeeds; otherwise, returns an
     * error.</p>
     */
    inline RevokeSecurityGroupIngressResponse& WithReturn(bool value) { SetReturn(value); return *this;}


    /**
     * <p>The inbound rules that were unknown to the service. In some cases,
     * <code>unknownIpPermissionSet</code> might be in a different format from the
     * request parameter. </p>
     */
    inline const Aws::Vector<IpPermission>& GetUnknownIpPermissions() const{ return m_unknownIpPermissions; }

    /**
     * <p>The inbound rules that were unknown to the service. In some cases,
     * <code>unknownIpPermissionSet</code> might be in a different format from the
     * request parameter. </p>
     */
    inline void SetUnknownIpPermissions(const Aws::Vector<IpPermission>& value) { m_unknownIpPermissions = value; }

    /**
     * <p>The inbound rules that were unknown to the service. In some cases,
     * <code>unknownIpPermissionSet</code> might be in a different format from the
     * request parameter. </p>
     */
    inline void SetUnknownIpPermissions(Aws::Vector<IpPermission>&& value) { m_unknownIpPermissions = std::move(value); }

    /**
     * <p>The inbound rules that were unknown to the service. In some cases,
     * <code>unknownIpPermissionSet</code> might be in a different format from the
     * request parameter. </p>
     */
    inline RevokeSecurityGroupIngressResponse& WithUnknownIpPermissions(const Aws::Vector<IpPermission>& value) { SetUnknownIpPermissions(value); return *this;}

    /**
     * <p>The inbound rules that were unknown to the service. In some cases,
     * <code>unknownIpPermissionSet</code> might be in a different format from the
     * request parameter. </p>
     */
    inline RevokeSecurityGroupIngressResponse& WithUnknownIpPermissions(Aws::Vector<IpPermission>&& value) { SetUnknownIpPermissions(std::move(value)); return *this;}

    /**
     * <p>The inbound rules that were unknown to the service. In some cases,
     * <code>unknownIpPermissionSet</code> might be in a different format from the
     * request parameter. </p>
     */
    inline RevokeSecurityGroupIngressResponse& AddUnknownIpPermissions(const IpPermission& value) { m_unknownIpPermissions.push_back(value); return *this; }

    /**
     * <p>The inbound rules that were unknown to the service. In some cases,
     * <code>unknownIpPermissionSet</code> might be in a different format from the
     * request parameter. </p>
     */
    inline RevokeSecurityGroupIngressResponse& AddUnknownIpPermissions(IpPermission&& value) { m_unknownIpPermissions.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline RevokeSecurityGroupIngressResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline RevokeSecurityGroupIngressResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    bool m_return;

    Aws::Vector<IpPermission> m_unknownIpPermissions;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
