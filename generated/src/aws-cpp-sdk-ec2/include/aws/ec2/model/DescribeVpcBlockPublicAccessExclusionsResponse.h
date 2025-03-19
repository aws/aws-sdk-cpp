/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/VpcBlockPublicAccessExclusion.h>
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
  class DescribeVpcBlockPublicAccessExclusionsResponse
  {
  public:
    AWS_EC2_API DescribeVpcBlockPublicAccessExclusionsResponse() = default;
    AWS_EC2_API DescribeVpcBlockPublicAccessExclusionsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeVpcBlockPublicAccessExclusionsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Details related to the exclusions.</p>
     */
    inline const Aws::Vector<VpcBlockPublicAccessExclusion>& GetVpcBlockPublicAccessExclusions() const { return m_vpcBlockPublicAccessExclusions; }
    template<typename VpcBlockPublicAccessExclusionsT = Aws::Vector<VpcBlockPublicAccessExclusion>>
    void SetVpcBlockPublicAccessExclusions(VpcBlockPublicAccessExclusionsT&& value) { m_vpcBlockPublicAccessExclusionsHasBeenSet = true; m_vpcBlockPublicAccessExclusions = std::forward<VpcBlockPublicAccessExclusionsT>(value); }
    template<typename VpcBlockPublicAccessExclusionsT = Aws::Vector<VpcBlockPublicAccessExclusion>>
    DescribeVpcBlockPublicAccessExclusionsResponse& WithVpcBlockPublicAccessExclusions(VpcBlockPublicAccessExclusionsT&& value) { SetVpcBlockPublicAccessExclusions(std::forward<VpcBlockPublicAccessExclusionsT>(value)); return *this;}
    template<typename VpcBlockPublicAccessExclusionsT = VpcBlockPublicAccessExclusion>
    DescribeVpcBlockPublicAccessExclusionsResponse& AddVpcBlockPublicAccessExclusions(VpcBlockPublicAccessExclusionsT&& value) { m_vpcBlockPublicAccessExclusionsHasBeenSet = true; m_vpcBlockPublicAccessExclusions.emplace_back(std::forward<VpcBlockPublicAccessExclusionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to include in another request to get the next page of items. This
     * value is <code>null</code> when there are no more items to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeVpcBlockPublicAccessExclusionsResponse& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeVpcBlockPublicAccessExclusionsResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<VpcBlockPublicAccessExclusion> m_vpcBlockPublicAccessExclusions;
    bool m_vpcBlockPublicAccessExclusionsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
