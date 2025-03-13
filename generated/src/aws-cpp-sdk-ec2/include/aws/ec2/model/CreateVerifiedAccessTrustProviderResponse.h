/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/VerifiedAccessTrustProvider.h>
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
  class CreateVerifiedAccessTrustProviderResponse
  {
  public:
    AWS_EC2_API CreateVerifiedAccessTrustProviderResponse() = default;
    AWS_EC2_API CreateVerifiedAccessTrustProviderResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API CreateVerifiedAccessTrustProviderResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Details about the Verified Access trust provider.</p>
     */
    inline const VerifiedAccessTrustProvider& GetVerifiedAccessTrustProvider() const { return m_verifiedAccessTrustProvider; }
    template<typename VerifiedAccessTrustProviderT = VerifiedAccessTrustProvider>
    void SetVerifiedAccessTrustProvider(VerifiedAccessTrustProviderT&& value) { m_verifiedAccessTrustProviderHasBeenSet = true; m_verifiedAccessTrustProvider = std::forward<VerifiedAccessTrustProviderT>(value); }
    template<typename VerifiedAccessTrustProviderT = VerifiedAccessTrustProvider>
    CreateVerifiedAccessTrustProviderResponse& WithVerifiedAccessTrustProvider(VerifiedAccessTrustProviderT&& value) { SetVerifiedAccessTrustProvider(std::forward<VerifiedAccessTrustProviderT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    CreateVerifiedAccessTrustProviderResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    VerifiedAccessTrustProvider m_verifiedAccessTrustProvider;
    bool m_verifiedAccessTrustProviderHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
