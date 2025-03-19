/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/FpgaImage.h>
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
  class DescribeFpgaImagesResponse
  {
  public:
    AWS_EC2_API DescribeFpgaImagesResponse() = default;
    AWS_EC2_API DescribeFpgaImagesResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeFpgaImagesResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the FPGA images.</p>
     */
    inline const Aws::Vector<FpgaImage>& GetFpgaImages() const { return m_fpgaImages; }
    template<typename FpgaImagesT = Aws::Vector<FpgaImage>>
    void SetFpgaImages(FpgaImagesT&& value) { m_fpgaImagesHasBeenSet = true; m_fpgaImages = std::forward<FpgaImagesT>(value); }
    template<typename FpgaImagesT = Aws::Vector<FpgaImage>>
    DescribeFpgaImagesResponse& WithFpgaImages(FpgaImagesT&& value) { SetFpgaImages(std::forward<FpgaImagesT>(value)); return *this;}
    template<typename FpgaImagesT = FpgaImage>
    DescribeFpgaImagesResponse& AddFpgaImages(FpgaImagesT&& value) { m_fpgaImagesHasBeenSet = true; m_fpgaImages.emplace_back(std::forward<FpgaImagesT>(value)); return *this; }
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
    DescribeFpgaImagesResponse& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeFpgaImagesResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<FpgaImage> m_fpgaImages;
    bool m_fpgaImagesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
