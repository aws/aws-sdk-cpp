/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/VerifiedAccessGroup.h>
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
  class DeleteVerifiedAccessGroupResponse
  {
  public:
    AWS_EC2_API DeleteVerifiedAccessGroupResponse() = default;
    AWS_EC2_API DeleteVerifiedAccessGroupResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DeleteVerifiedAccessGroupResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Details about the Verified Access group.</p>
     */
    inline const VerifiedAccessGroup& GetVerifiedAccessGroup() const { return m_verifiedAccessGroup; }
    template<typename VerifiedAccessGroupT = VerifiedAccessGroup>
    void SetVerifiedAccessGroup(VerifiedAccessGroupT&& value) { m_verifiedAccessGroupHasBeenSet = true; m_verifiedAccessGroup = std::forward<VerifiedAccessGroupT>(value); }
    template<typename VerifiedAccessGroupT = VerifiedAccessGroup>
    DeleteVerifiedAccessGroupResponse& WithVerifiedAccessGroup(VerifiedAccessGroupT&& value) { SetVerifiedAccessGroup(std::forward<VerifiedAccessGroupT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DeleteVerifiedAccessGroupResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    VerifiedAccessGroup m_verifiedAccessGroup;
    bool m_verifiedAccessGroupHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
