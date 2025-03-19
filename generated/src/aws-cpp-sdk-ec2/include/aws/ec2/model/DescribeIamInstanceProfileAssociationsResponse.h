/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/IamInstanceProfileAssociation.h>
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
  class DescribeIamInstanceProfileAssociationsResponse
  {
  public:
    AWS_EC2_API DescribeIamInstanceProfileAssociationsResponse() = default;
    AWS_EC2_API DescribeIamInstanceProfileAssociationsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeIamInstanceProfileAssociationsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the IAM instance profile associations.</p>
     */
    inline const Aws::Vector<IamInstanceProfileAssociation>& GetIamInstanceProfileAssociations() const { return m_iamInstanceProfileAssociations; }
    template<typename IamInstanceProfileAssociationsT = Aws::Vector<IamInstanceProfileAssociation>>
    void SetIamInstanceProfileAssociations(IamInstanceProfileAssociationsT&& value) { m_iamInstanceProfileAssociationsHasBeenSet = true; m_iamInstanceProfileAssociations = std::forward<IamInstanceProfileAssociationsT>(value); }
    template<typename IamInstanceProfileAssociationsT = Aws::Vector<IamInstanceProfileAssociation>>
    DescribeIamInstanceProfileAssociationsResponse& WithIamInstanceProfileAssociations(IamInstanceProfileAssociationsT&& value) { SetIamInstanceProfileAssociations(std::forward<IamInstanceProfileAssociationsT>(value)); return *this;}
    template<typename IamInstanceProfileAssociationsT = IamInstanceProfileAssociation>
    DescribeIamInstanceProfileAssociationsResponse& AddIamInstanceProfileAssociations(IamInstanceProfileAssociationsT&& value) { m_iamInstanceProfileAssociationsHasBeenSet = true; m_iamInstanceProfileAssociations.emplace_back(std::forward<IamInstanceProfileAssociationsT>(value)); return *this; }
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
    DescribeIamInstanceProfileAssociationsResponse& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeIamInstanceProfileAssociationsResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<IamInstanceProfileAssociation> m_iamInstanceProfileAssociations;
    bool m_iamInstanceProfileAssociationsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
