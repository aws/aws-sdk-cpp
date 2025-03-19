/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/VerifiedAccessTrustProvider.h>
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
  class DescribeVerifiedAccessTrustProvidersResponse
  {
  public:
    AWS_EC2_API DescribeVerifiedAccessTrustProvidersResponse() = default;
    AWS_EC2_API DescribeVerifiedAccessTrustProvidersResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeVerifiedAccessTrustProvidersResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Details about the Verified Access trust providers.</p>
     */
    inline const Aws::Vector<VerifiedAccessTrustProvider>& GetVerifiedAccessTrustProviders() const { return m_verifiedAccessTrustProviders; }
    template<typename VerifiedAccessTrustProvidersT = Aws::Vector<VerifiedAccessTrustProvider>>
    void SetVerifiedAccessTrustProviders(VerifiedAccessTrustProvidersT&& value) { m_verifiedAccessTrustProvidersHasBeenSet = true; m_verifiedAccessTrustProviders = std::forward<VerifiedAccessTrustProvidersT>(value); }
    template<typename VerifiedAccessTrustProvidersT = Aws::Vector<VerifiedAccessTrustProvider>>
    DescribeVerifiedAccessTrustProvidersResponse& WithVerifiedAccessTrustProviders(VerifiedAccessTrustProvidersT&& value) { SetVerifiedAccessTrustProviders(std::forward<VerifiedAccessTrustProvidersT>(value)); return *this;}
    template<typename VerifiedAccessTrustProvidersT = VerifiedAccessTrustProvider>
    DescribeVerifiedAccessTrustProvidersResponse& AddVerifiedAccessTrustProviders(VerifiedAccessTrustProvidersT&& value) { m_verifiedAccessTrustProvidersHasBeenSet = true; m_verifiedAccessTrustProviders.emplace_back(std::forward<VerifiedAccessTrustProvidersT>(value)); return *this; }
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
    DescribeVerifiedAccessTrustProvidersResponse& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeVerifiedAccessTrustProvidersResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<VerifiedAccessTrustProvider> m_verifiedAccessTrustProviders;
    bool m_verifiedAccessTrustProvidersHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
