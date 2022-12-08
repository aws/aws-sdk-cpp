/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/AssociatedRole.h>
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
  class GetAssociatedEnclaveCertificateIamRolesResponse
  {
  public:
    AWS_EC2_API GetAssociatedEnclaveCertificateIamRolesResponse();
    AWS_EC2_API GetAssociatedEnclaveCertificateIamRolesResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API GetAssociatedEnclaveCertificateIamRolesResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the associated IAM roles.</p>
     */
    inline const Aws::Vector<AssociatedRole>& GetAssociatedRoles() const{ return m_associatedRoles; }

    /**
     * <p>Information about the associated IAM roles.</p>
     */
    inline void SetAssociatedRoles(const Aws::Vector<AssociatedRole>& value) { m_associatedRoles = value; }

    /**
     * <p>Information about the associated IAM roles.</p>
     */
    inline void SetAssociatedRoles(Aws::Vector<AssociatedRole>&& value) { m_associatedRoles = std::move(value); }

    /**
     * <p>Information about the associated IAM roles.</p>
     */
    inline GetAssociatedEnclaveCertificateIamRolesResponse& WithAssociatedRoles(const Aws::Vector<AssociatedRole>& value) { SetAssociatedRoles(value); return *this;}

    /**
     * <p>Information about the associated IAM roles.</p>
     */
    inline GetAssociatedEnclaveCertificateIamRolesResponse& WithAssociatedRoles(Aws::Vector<AssociatedRole>&& value) { SetAssociatedRoles(std::move(value)); return *this;}

    /**
     * <p>Information about the associated IAM roles.</p>
     */
    inline GetAssociatedEnclaveCertificateIamRolesResponse& AddAssociatedRoles(const AssociatedRole& value) { m_associatedRoles.push_back(value); return *this; }

    /**
     * <p>Information about the associated IAM roles.</p>
     */
    inline GetAssociatedEnclaveCertificateIamRolesResponse& AddAssociatedRoles(AssociatedRole&& value) { m_associatedRoles.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline GetAssociatedEnclaveCertificateIamRolesResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline GetAssociatedEnclaveCertificateIamRolesResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<AssociatedRole> m_associatedRoles;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
