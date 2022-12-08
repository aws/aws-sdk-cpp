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
  class ReplaceIamInstanceProfileAssociationResponse
  {
  public:
    AWS_EC2_API ReplaceIamInstanceProfileAssociationResponse();
    AWS_EC2_API ReplaceIamInstanceProfileAssociationResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API ReplaceIamInstanceProfileAssociationResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the IAM instance profile association.</p>
     */
    inline const IamInstanceProfileAssociation& GetIamInstanceProfileAssociation() const{ return m_iamInstanceProfileAssociation; }

    /**
     * <p>Information about the IAM instance profile association.</p>
     */
    inline void SetIamInstanceProfileAssociation(const IamInstanceProfileAssociation& value) { m_iamInstanceProfileAssociation = value; }

    /**
     * <p>Information about the IAM instance profile association.</p>
     */
    inline void SetIamInstanceProfileAssociation(IamInstanceProfileAssociation&& value) { m_iamInstanceProfileAssociation = std::move(value); }

    /**
     * <p>Information about the IAM instance profile association.</p>
     */
    inline ReplaceIamInstanceProfileAssociationResponse& WithIamInstanceProfileAssociation(const IamInstanceProfileAssociation& value) { SetIamInstanceProfileAssociation(value); return *this;}

    /**
     * <p>Information about the IAM instance profile association.</p>
     */
    inline ReplaceIamInstanceProfileAssociationResponse& WithIamInstanceProfileAssociation(IamInstanceProfileAssociation&& value) { SetIamInstanceProfileAssociation(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline ReplaceIamInstanceProfileAssociationResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ReplaceIamInstanceProfileAssociationResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    IamInstanceProfileAssociation m_iamInstanceProfileAssociation;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
