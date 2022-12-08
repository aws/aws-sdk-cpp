/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class AssociateAddressResponse
  {
  public:
    AWS_EC2_API AssociateAddressResponse();
    AWS_EC2_API AssociateAddressResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API AssociateAddressResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>[EC2-VPC] The ID that represents the association of the Elastic IP address
     * with an instance.</p>
     */
    inline const Aws::String& GetAssociationId() const{ return m_associationId; }

    /**
     * <p>[EC2-VPC] The ID that represents the association of the Elastic IP address
     * with an instance.</p>
     */
    inline void SetAssociationId(const Aws::String& value) { m_associationId = value; }

    /**
     * <p>[EC2-VPC] The ID that represents the association of the Elastic IP address
     * with an instance.</p>
     */
    inline void SetAssociationId(Aws::String&& value) { m_associationId = std::move(value); }

    /**
     * <p>[EC2-VPC] The ID that represents the association of the Elastic IP address
     * with an instance.</p>
     */
    inline void SetAssociationId(const char* value) { m_associationId.assign(value); }

    /**
     * <p>[EC2-VPC] The ID that represents the association of the Elastic IP address
     * with an instance.</p>
     */
    inline AssociateAddressResponse& WithAssociationId(const Aws::String& value) { SetAssociationId(value); return *this;}

    /**
     * <p>[EC2-VPC] The ID that represents the association of the Elastic IP address
     * with an instance.</p>
     */
    inline AssociateAddressResponse& WithAssociationId(Aws::String&& value) { SetAssociationId(std::move(value)); return *this;}

    /**
     * <p>[EC2-VPC] The ID that represents the association of the Elastic IP address
     * with an instance.</p>
     */
    inline AssociateAddressResponse& WithAssociationId(const char* value) { SetAssociationId(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline AssociateAddressResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline AssociateAddressResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_associationId;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
