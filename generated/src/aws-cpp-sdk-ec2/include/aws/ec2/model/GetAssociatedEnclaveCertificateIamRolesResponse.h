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
    AWS_EC2_API GetAssociatedEnclaveCertificateIamRolesResponse() = default;
    AWS_EC2_API GetAssociatedEnclaveCertificateIamRolesResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API GetAssociatedEnclaveCertificateIamRolesResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the associated IAM roles.</p>
     */
    inline const Aws::Vector<AssociatedRole>& GetAssociatedRoles() const { return m_associatedRoles; }
    template<typename AssociatedRolesT = Aws::Vector<AssociatedRole>>
    void SetAssociatedRoles(AssociatedRolesT&& value) { m_associatedRolesHasBeenSet = true; m_associatedRoles = std::forward<AssociatedRolesT>(value); }
    template<typename AssociatedRolesT = Aws::Vector<AssociatedRole>>
    GetAssociatedEnclaveCertificateIamRolesResponse& WithAssociatedRoles(AssociatedRolesT&& value) { SetAssociatedRoles(std::forward<AssociatedRolesT>(value)); return *this;}
    template<typename AssociatedRolesT = AssociatedRole>
    GetAssociatedEnclaveCertificateIamRolesResponse& AddAssociatedRoles(AssociatedRolesT&& value) { m_associatedRolesHasBeenSet = true; m_associatedRoles.emplace_back(std::forward<AssociatedRolesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    GetAssociatedEnclaveCertificateIamRolesResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AssociatedRole> m_associatedRoles;
    bool m_associatedRolesHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
