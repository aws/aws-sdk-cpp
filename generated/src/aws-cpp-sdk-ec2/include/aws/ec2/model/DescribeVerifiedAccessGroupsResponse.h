/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/VerifiedAccessGroup.h>
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
  class DescribeVerifiedAccessGroupsResponse
  {
  public:
    AWS_EC2_API DescribeVerifiedAccessGroupsResponse() = default;
    AWS_EC2_API DescribeVerifiedAccessGroupsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeVerifiedAccessGroupsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Details about the Verified Access groups.</p>
     */
    inline const Aws::Vector<VerifiedAccessGroup>& GetVerifiedAccessGroups() const { return m_verifiedAccessGroups; }
    template<typename VerifiedAccessGroupsT = Aws::Vector<VerifiedAccessGroup>>
    void SetVerifiedAccessGroups(VerifiedAccessGroupsT&& value) { m_verifiedAccessGroupsHasBeenSet = true; m_verifiedAccessGroups = std::forward<VerifiedAccessGroupsT>(value); }
    template<typename VerifiedAccessGroupsT = Aws::Vector<VerifiedAccessGroup>>
    DescribeVerifiedAccessGroupsResponse& WithVerifiedAccessGroups(VerifiedAccessGroupsT&& value) { SetVerifiedAccessGroups(std::forward<VerifiedAccessGroupsT>(value)); return *this;}
    template<typename VerifiedAccessGroupsT = VerifiedAccessGroup>
    DescribeVerifiedAccessGroupsResponse& AddVerifiedAccessGroups(VerifiedAccessGroupsT&& value) { m_verifiedAccessGroupsHasBeenSet = true; m_verifiedAccessGroups.emplace_back(std::forward<VerifiedAccessGroupsT>(value)); return *this; }
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
    DescribeVerifiedAccessGroupsResponse& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeVerifiedAccessGroupsResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<VerifiedAccessGroup> m_verifiedAccessGroups;
    bool m_verifiedAccessGroupsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
