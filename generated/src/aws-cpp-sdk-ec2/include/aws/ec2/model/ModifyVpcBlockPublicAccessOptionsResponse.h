/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/VpcBlockPublicAccessOptions.h>
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
  class ModifyVpcBlockPublicAccessOptionsResponse
  {
  public:
    AWS_EC2_API ModifyVpcBlockPublicAccessOptionsResponse();
    AWS_EC2_API ModifyVpcBlockPublicAccessOptionsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API ModifyVpcBlockPublicAccessOptionsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Details related to the VPC Block Public Access (BPA) options.</p>
     */
    inline const VpcBlockPublicAccessOptions& GetVpcBlockPublicAccessOptions() const{ return m_vpcBlockPublicAccessOptions; }
    inline void SetVpcBlockPublicAccessOptions(const VpcBlockPublicAccessOptions& value) { m_vpcBlockPublicAccessOptions = value; }
    inline void SetVpcBlockPublicAccessOptions(VpcBlockPublicAccessOptions&& value) { m_vpcBlockPublicAccessOptions = std::move(value); }
    inline ModifyVpcBlockPublicAccessOptionsResponse& WithVpcBlockPublicAccessOptions(const VpcBlockPublicAccessOptions& value) { SetVpcBlockPublicAccessOptions(value); return *this;}
    inline ModifyVpcBlockPublicAccessOptionsResponse& WithVpcBlockPublicAccessOptions(VpcBlockPublicAccessOptions&& value) { SetVpcBlockPublicAccessOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline ModifyVpcBlockPublicAccessOptionsResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline ModifyVpcBlockPublicAccessOptionsResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    VpcBlockPublicAccessOptions m_vpcBlockPublicAccessOptions;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
