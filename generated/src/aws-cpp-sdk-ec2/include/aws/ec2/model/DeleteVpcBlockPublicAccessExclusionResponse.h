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
  class DeleteVpcBlockPublicAccessExclusionResponse
  {
  public:
    AWS_EC2_API DeleteVpcBlockPublicAccessExclusionResponse();
    AWS_EC2_API DeleteVpcBlockPublicAccessExclusionResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DeleteVpcBlockPublicAccessExclusionResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Details about an exclusion.</p>
     */
    inline const VpcBlockPublicAccessExclusion& GetVpcBlockPublicAccessExclusion() const{ return m_vpcBlockPublicAccessExclusion; }
    inline void SetVpcBlockPublicAccessExclusion(const VpcBlockPublicAccessExclusion& value) { m_vpcBlockPublicAccessExclusion = value; }
    inline void SetVpcBlockPublicAccessExclusion(VpcBlockPublicAccessExclusion&& value) { m_vpcBlockPublicAccessExclusion = std::move(value); }
    inline DeleteVpcBlockPublicAccessExclusionResponse& WithVpcBlockPublicAccessExclusion(const VpcBlockPublicAccessExclusion& value) { SetVpcBlockPublicAccessExclusion(value); return *this;}
    inline DeleteVpcBlockPublicAccessExclusionResponse& WithVpcBlockPublicAccessExclusion(VpcBlockPublicAccessExclusion&& value) { SetVpcBlockPublicAccessExclusion(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline DeleteVpcBlockPublicAccessExclusionResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline DeleteVpcBlockPublicAccessExclusionResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    VpcBlockPublicAccessExclusion m_vpcBlockPublicAccessExclusion;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
