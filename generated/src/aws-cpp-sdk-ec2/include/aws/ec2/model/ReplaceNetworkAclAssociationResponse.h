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
    AWS_EC2_API ReplaceNetworkAclAssociationResponse() = default;
    AWS_EC2_API ReplaceNetworkAclAssociationResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API ReplaceNetworkAclAssociationResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The ID of the new association.</p>
     */
    inline const Aws::String& GetNewAssociationId() const { return m_newAssociationId; }
    template<typename NewAssociationIdT = Aws::String>
    void SetNewAssociationId(NewAssociationIdT&& value) { m_newAssociationIdHasBeenSet = true; m_newAssociationId = std::forward<NewAssociationIdT>(value); }
    template<typename NewAssociationIdT = Aws::String>
    ReplaceNetworkAclAssociationResponse& WithNewAssociationId(NewAssociationIdT&& value) { SetNewAssociationId(std::forward<NewAssociationIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    ReplaceNetworkAclAssociationResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_newAssociationId;
    bool m_newAssociationIdHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
