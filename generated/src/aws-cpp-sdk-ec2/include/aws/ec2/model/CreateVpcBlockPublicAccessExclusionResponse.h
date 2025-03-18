/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/VpcBlockPublicAccessExclusion.h>
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
  class CreateVpcBlockPublicAccessExclusionResponse
  {
  public:
    AWS_EC2_API CreateVpcBlockPublicAccessExclusionResponse() = default;
    AWS_EC2_API CreateVpcBlockPublicAccessExclusionResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API CreateVpcBlockPublicAccessExclusionResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Details about an exclusion.</p>
     */
    inline const VpcBlockPublicAccessExclusion& GetVpcBlockPublicAccessExclusion() const { return m_vpcBlockPublicAccessExclusion; }
    template<typename VpcBlockPublicAccessExclusionT = VpcBlockPublicAccessExclusion>
    void SetVpcBlockPublicAccessExclusion(VpcBlockPublicAccessExclusionT&& value) { m_vpcBlockPublicAccessExclusionHasBeenSet = true; m_vpcBlockPublicAccessExclusion = std::forward<VpcBlockPublicAccessExclusionT>(value); }
    template<typename VpcBlockPublicAccessExclusionT = VpcBlockPublicAccessExclusion>
    CreateVpcBlockPublicAccessExclusionResponse& WithVpcBlockPublicAccessExclusion(VpcBlockPublicAccessExclusionT&& value) { SetVpcBlockPublicAccessExclusion(std::forward<VpcBlockPublicAccessExclusionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    CreateVpcBlockPublicAccessExclusionResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    VpcBlockPublicAccessExclusion m_vpcBlockPublicAccessExclusion;
    bool m_vpcBlockPublicAccessExclusionHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
