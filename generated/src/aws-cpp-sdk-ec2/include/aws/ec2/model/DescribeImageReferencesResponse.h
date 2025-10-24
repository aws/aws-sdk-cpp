﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/ImageReference.h>
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
class DescribeImageReferencesResponse {
 public:
  AWS_EC2_API DescribeImageReferencesResponse() = default;
  AWS_EC2_API DescribeImageReferencesResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_EC2_API DescribeImageReferencesResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

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
  DescribeImageReferencesResponse& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The resources that are referencing the specified images.</p>
   */
  inline const Aws::Vector<ImageReference>& GetImageReferences() const { return m_imageReferences; }
  template <typename ImageReferencesT = Aws::Vector<ImageReference>>
  void SetImageReferences(ImageReferencesT&& value) {
    m_imageReferencesHasBeenSet = true;
    m_imageReferences = std::forward<ImageReferencesT>(value);
  }
  template <typename ImageReferencesT = Aws::Vector<ImageReference>>
  DescribeImageReferencesResponse& WithImageReferences(ImageReferencesT&& value) {
    SetImageReferences(std::forward<ImageReferencesT>(value));
    return *this;
  }
  template <typename ImageReferencesT = ImageReference>
  DescribeImageReferencesResponse& AddImageReferences(ImageReferencesT&& value) {
    m_imageReferencesHasBeenSet = true;
    m_imageReferences.emplace_back(std::forward<ImageReferencesT>(value));
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
  DescribeImageReferencesResponse& WithResponseMetadata(ResponseMetadataT&& value) {
    SetResponseMetadata(std::forward<ResponseMetadataT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_nextToken;
  bool m_nextTokenHasBeenSet = false;

  Aws::Vector<ImageReference> m_imageReferences;
  bool m_imageReferencesHasBeenSet = false;

  ResponseMetadata m_responseMetadata;
  bool m_responseMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
