/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/ImageFinding.h>
#include <aws/ec2/model/ResponseMetadata.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Xml {
class XmlDocument;
}  // namespace Xml
}  // namespace Utils
namespace EC2 {
namespace Model {
class GetImageFindingsResponse {
 public:
  AWS_EC2_API GetImageFindingsResponse() = default;
  AWS_EC2_API GetImageFindingsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_EC2_API GetImageFindingsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{
  /**
   * <p>The Amazon Inspector findings for the AMI.</p>
   */
  inline const Aws::Vector<ImageFinding>& GetImageFindings() const { return m_imageFindings; }
  template <typename ImageFindingsT = Aws::Vector<ImageFinding>>
  void SetImageFindings(ImageFindingsT&& value) {
    m_imageFindingsHasBeenSet = true;
    m_imageFindings = std::forward<ImageFindingsT>(value);
  }
  template <typename ImageFindingsT = Aws::Vector<ImageFinding>>
  GetImageFindingsResponse& WithImageFindings(ImageFindingsT&& value) {
    SetImageFindings(std::forward<ImageFindingsT>(value));
    return *this;
  }
  template <typename ImageFindingsT = ImageFinding>
  GetImageFindingsResponse& AddImageFindings(ImageFindingsT&& value) {
    m_imageFindingsHasBeenSet = true;
    m_imageFindings.emplace_back(std::forward<ImageFindingsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token to include in another request to get the next page of items. This
   * value is <code>null</code> when there are no more items to return.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  GetImageFindingsResponse& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
  template <typename ResponseMetadataT = ResponseMetadata>
  void SetResponseMetadata(ResponseMetadataT&& value) {
    m_responseMetadataHasBeenSet = true;
    m_responseMetadata = std::forward<ResponseMetadataT>(value);
  }
  template <typename ResponseMetadataT = ResponseMetadata>
  GetImageFindingsResponse& WithResponseMetadata(ResponseMetadataT&& value) {
    SetResponseMetadata(std::forward<ResponseMetadataT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<ImageFinding> m_imageFindings;

  Aws::String m_nextToken;

  ResponseMetadata m_responseMetadata;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_imageFindingsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_responseMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
