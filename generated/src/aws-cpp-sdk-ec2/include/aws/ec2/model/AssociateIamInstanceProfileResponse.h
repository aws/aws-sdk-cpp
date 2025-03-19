/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/IamInstanceProfileAssociation.h>
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
  class AssociateIamInstanceProfileResponse
  {
  public:
    AWS_EC2_API AssociateIamInstanceProfileResponse() = default;
    AWS_EC2_API AssociateIamInstanceProfileResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API AssociateIamInstanceProfileResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the IAM instance profile association.</p>
     */
    inline const IamInstanceProfileAssociation& GetIamInstanceProfileAssociation() const { return m_iamInstanceProfileAssociation; }
    template<typename IamInstanceProfileAssociationT = IamInstanceProfileAssociation>
    void SetIamInstanceProfileAssociation(IamInstanceProfileAssociationT&& value) { m_iamInstanceProfileAssociationHasBeenSet = true; m_iamInstanceProfileAssociation = std::forward<IamInstanceProfileAssociationT>(value); }
    template<typename IamInstanceProfileAssociationT = IamInstanceProfileAssociation>
    AssociateIamInstanceProfileResponse& WithIamInstanceProfileAssociation(IamInstanceProfileAssociationT&& value) { SetIamInstanceProfileAssociation(std::forward<IamInstanceProfileAssociationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    AssociateIamInstanceProfileResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    IamInstanceProfileAssociation m_iamInstanceProfileAssociation;
    bool m_iamInstanceProfileAssociationHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
