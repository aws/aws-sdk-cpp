/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/DescribeFastLaunchImagesSuccessItem.h>
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
  class DescribeFastLaunchImagesResponse
  {
  public:
    AWS_EC2_API DescribeFastLaunchImagesResponse() = default;
    AWS_EC2_API DescribeFastLaunchImagesResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeFastLaunchImagesResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A collection of details about the fast-launch enabled Windows images that
     * meet the requested criteria.</p>
     */
    inline const Aws::Vector<DescribeFastLaunchImagesSuccessItem>& GetFastLaunchImages() const { return m_fastLaunchImages; }
    template<typename FastLaunchImagesT = Aws::Vector<DescribeFastLaunchImagesSuccessItem>>
    void SetFastLaunchImages(FastLaunchImagesT&& value) { m_fastLaunchImagesHasBeenSet = true; m_fastLaunchImages = std::forward<FastLaunchImagesT>(value); }
    template<typename FastLaunchImagesT = Aws::Vector<DescribeFastLaunchImagesSuccessItem>>
    DescribeFastLaunchImagesResponse& WithFastLaunchImages(FastLaunchImagesT&& value) { SetFastLaunchImages(std::forward<FastLaunchImagesT>(value)); return *this;}
    template<typename FastLaunchImagesT = DescribeFastLaunchImagesSuccessItem>
    DescribeFastLaunchImagesResponse& AddFastLaunchImages(FastLaunchImagesT&& value) { m_fastLaunchImagesHasBeenSet = true; m_fastLaunchImages.emplace_back(std::forward<FastLaunchImagesT>(value)); return *this; }
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
    DescribeFastLaunchImagesResponse& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeFastLaunchImagesResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DescribeFastLaunchImagesSuccessItem> m_fastLaunchImages;
    bool m_fastLaunchImagesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
