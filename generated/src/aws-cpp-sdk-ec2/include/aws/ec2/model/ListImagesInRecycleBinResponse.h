/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/ImageRecycleBinInfo.h>
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
  class ListImagesInRecycleBinResponse
  {
  public:
    AWS_EC2_API ListImagesInRecycleBinResponse() = default;
    AWS_EC2_API ListImagesInRecycleBinResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API ListImagesInRecycleBinResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the AMIs.</p>
     */
    inline const Aws::Vector<ImageRecycleBinInfo>& GetImages() const { return m_images; }
    template<typename ImagesT = Aws::Vector<ImageRecycleBinInfo>>
    void SetImages(ImagesT&& value) { m_imagesHasBeenSet = true; m_images = std::forward<ImagesT>(value); }
    template<typename ImagesT = Aws::Vector<ImageRecycleBinInfo>>
    ListImagesInRecycleBinResponse& WithImages(ImagesT&& value) { SetImages(std::forward<ImagesT>(value)); return *this;}
    template<typename ImagesT = ImageRecycleBinInfo>
    ListImagesInRecycleBinResponse& AddImages(ImagesT&& value) { m_imagesHasBeenSet = true; m_images.emplace_back(std::forward<ImagesT>(value)); return *this; }
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
    ListImagesInRecycleBinResponse& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    ListImagesInRecycleBinResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ImageRecycleBinInfo> m_images;
    bool m_imagesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
