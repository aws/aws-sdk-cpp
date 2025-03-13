/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/ByoipCidr.h>
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
  class DescribeByoipCidrsResponse
  {
  public:
    AWS_EC2_API DescribeByoipCidrsResponse() = default;
    AWS_EC2_API DescribeByoipCidrsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeByoipCidrsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about your address ranges.</p>
     */
    inline const Aws::Vector<ByoipCidr>& GetByoipCidrs() const { return m_byoipCidrs; }
    template<typename ByoipCidrsT = Aws::Vector<ByoipCidr>>
    void SetByoipCidrs(ByoipCidrsT&& value) { m_byoipCidrsHasBeenSet = true; m_byoipCidrs = std::forward<ByoipCidrsT>(value); }
    template<typename ByoipCidrsT = Aws::Vector<ByoipCidr>>
    DescribeByoipCidrsResponse& WithByoipCidrs(ByoipCidrsT&& value) { SetByoipCidrs(std::forward<ByoipCidrsT>(value)); return *this;}
    template<typename ByoipCidrsT = ByoipCidr>
    DescribeByoipCidrsResponse& AddByoipCidrs(ByoipCidrsT&& value) { m_byoipCidrsHasBeenSet = true; m_byoipCidrs.emplace_back(std::forward<ByoipCidrsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeByoipCidrsResponse& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeByoipCidrsResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ByoipCidr> m_byoipCidrs;
    bool m_byoipCidrsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
