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
  class DescribeVpcBlockPublicAccessOptionsResponse
  {
  public:
    AWS_EC2_API DescribeVpcBlockPublicAccessOptionsResponse() = default;
    AWS_EC2_API DescribeVpcBlockPublicAccessOptionsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeVpcBlockPublicAccessOptionsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Details related to the options.</p>
     */
    inline const VpcBlockPublicAccessOptions& GetVpcBlockPublicAccessOptions() const { return m_vpcBlockPublicAccessOptions; }
    template<typename VpcBlockPublicAccessOptionsT = VpcBlockPublicAccessOptions>
    void SetVpcBlockPublicAccessOptions(VpcBlockPublicAccessOptionsT&& value) { m_vpcBlockPublicAccessOptionsHasBeenSet = true; m_vpcBlockPublicAccessOptions = std::forward<VpcBlockPublicAccessOptionsT>(value); }
    template<typename VpcBlockPublicAccessOptionsT = VpcBlockPublicAccessOptions>
    DescribeVpcBlockPublicAccessOptionsResponse& WithVpcBlockPublicAccessOptions(VpcBlockPublicAccessOptionsT&& value) { SetVpcBlockPublicAccessOptions(std::forward<VpcBlockPublicAccessOptionsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeVpcBlockPublicAccessOptionsResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    VpcBlockPublicAccessOptions m_vpcBlockPublicAccessOptions;
    bool m_vpcBlockPublicAccessOptionsHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
