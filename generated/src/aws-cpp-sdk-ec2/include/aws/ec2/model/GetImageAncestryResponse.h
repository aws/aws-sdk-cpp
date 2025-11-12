/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/ImageAncestryEntry.h>
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
class GetImageAncestryResponse {
 public:
  AWS_EC2_API GetImageAncestryResponse() = default;
  AWS_EC2_API GetImageAncestryResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_EC2_API GetImageAncestryResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{
  /**
   * <p>A list of entries in the AMI ancestry chain, from the specified AMI to the
   * root AMI.</p>
   */
  inline const Aws::Vector<ImageAncestryEntry>& GetImageAncestryEntries() const { return m_imageAncestryEntries; }
  template <typename ImageAncestryEntriesT = Aws::Vector<ImageAncestryEntry>>
  void SetImageAncestryEntries(ImageAncestryEntriesT&& value) {
    m_imageAncestryEntriesHasBeenSet = true;
    m_imageAncestryEntries = std::forward<ImageAncestryEntriesT>(value);
  }
  template <typename ImageAncestryEntriesT = Aws::Vector<ImageAncestryEntry>>
  GetImageAncestryResponse& WithImageAncestryEntries(ImageAncestryEntriesT&& value) {
    SetImageAncestryEntries(std::forward<ImageAncestryEntriesT>(value));
    return *this;
  }
  template <typename ImageAncestryEntriesT = ImageAncestryEntry>
  GetImageAncestryResponse& AddImageAncestryEntries(ImageAncestryEntriesT&& value) {
    m_imageAncestryEntriesHasBeenSet = true;
    m_imageAncestryEntries.emplace_back(std::forward<ImageAncestryEntriesT>(value));
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
  GetImageAncestryResponse& WithResponseMetadata(ResponseMetadataT&& value) {
    SetResponseMetadata(std::forward<ResponseMetadataT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<ImageAncestryEntry> m_imageAncestryEntries;
  bool m_imageAncestryEntriesHasBeenSet = false;

  ResponseMetadata m_responseMetadata;
  bool m_responseMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
