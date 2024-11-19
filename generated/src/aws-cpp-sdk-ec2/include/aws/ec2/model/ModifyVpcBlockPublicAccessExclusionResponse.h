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
  class ModifyVpcBlockPublicAccessExclusionResponse
  {
  public:
    AWS_EC2_API ModifyVpcBlockPublicAccessExclusionResponse();
    AWS_EC2_API ModifyVpcBlockPublicAccessExclusionResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API ModifyVpcBlockPublicAccessExclusionResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Details related to the exclusion.</p>
     */
    inline const VpcBlockPublicAccessExclusion& GetVpcBlockPublicAccessExclusion() const{ return m_vpcBlockPublicAccessExclusion; }
    inline void SetVpcBlockPublicAccessExclusion(const VpcBlockPublicAccessExclusion& value) { m_vpcBlockPublicAccessExclusion = value; }
    inline void SetVpcBlockPublicAccessExclusion(VpcBlockPublicAccessExclusion&& value) { m_vpcBlockPublicAccessExclusion = std::move(value); }
    inline ModifyVpcBlockPublicAccessExclusionResponse& WithVpcBlockPublicAccessExclusion(const VpcBlockPublicAccessExclusion& value) { SetVpcBlockPublicAccessExclusion(value); return *this;}
    inline ModifyVpcBlockPublicAccessExclusionResponse& WithVpcBlockPublicAccessExclusion(VpcBlockPublicAccessExclusion&& value) { SetVpcBlockPublicAccessExclusion(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline ModifyVpcBlockPublicAccessExclusionResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline ModifyVpcBlockPublicAccessExclusionResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    VpcBlockPublicAccessExclusion m_vpcBlockPublicAccessExclusion;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
