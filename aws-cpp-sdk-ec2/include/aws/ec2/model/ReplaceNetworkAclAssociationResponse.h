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
  class ReplaceNetworkAclAssociationResponse
  {
  public:
    AWS_EC2_API ReplaceNetworkAclAssociationResponse();
    AWS_EC2_API ReplaceNetworkAclAssociationResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API ReplaceNetworkAclAssociationResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The ID of the new association.</p>
     */
    inline const Aws::String& GetNewAssociationId() const{ return m_newAssociationId; }

    /**
     * <p>The ID of the new association.</p>
     */
    inline void SetNewAssociationId(const Aws::String& value) { m_newAssociationId = value; }

    /**
     * <p>The ID of the new association.</p>
     */
    inline void SetNewAssociationId(Aws::String&& value) { m_newAssociationId = std::move(value); }

    /**
     * <p>The ID of the new association.</p>
     */
    inline void SetNewAssociationId(const char* value) { m_newAssociationId.assign(value); }

    /**
     * <p>The ID of the new association.</p>
     */
    inline ReplaceNetworkAclAssociationResponse& WithNewAssociationId(const Aws::String& value) { SetNewAssociationId(value); return *this;}

    /**
     * <p>The ID of the new association.</p>
     */
    inline ReplaceNetworkAclAssociationResponse& WithNewAssociationId(Aws::String&& value) { SetNewAssociationId(std::move(value)); return *this;}

    /**
     * <p>The ID of the new association.</p>
     */
    inline ReplaceNetworkAclAssociationResponse& WithNewAssociationId(const char* value) { SetNewAssociationId(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline ReplaceNetworkAclAssociationResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ReplaceNetworkAclAssociationResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_newAssociationId;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
