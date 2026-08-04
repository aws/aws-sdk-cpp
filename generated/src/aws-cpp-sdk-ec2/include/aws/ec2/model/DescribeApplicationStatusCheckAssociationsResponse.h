/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/ApplicationStatusCheckAssociationObject.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/Tag.h>

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
class DescribeApplicationStatusCheckAssociationsResponse {
 public:
  AWS_EC2_API DescribeApplicationStatusCheckAssociationsResponse() = default;
  AWS_EC2_API DescribeApplicationStatusCheckAssociationsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_EC2_API DescribeApplicationStatusCheckAssociationsResponse& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{
  /**
   * <p>The associations for the specified application status checks.</p>
   */
  inline const Aws::Vector<ApplicationStatusCheckAssociationObject>& GetAssociations() const { return m_associations; }
  template <typename AssociationsT = Aws::Vector<ApplicationStatusCheckAssociationObject>>
  void SetAssociations(AssociationsT&& value) {
    m_associationsHasBeenSet = true;
    m_associations = std::forward<AssociationsT>(value);
  }
  template <typename AssociationsT = Aws::Vector<ApplicationStatusCheckAssociationObject>>
  DescribeApplicationStatusCheckAssociationsResponse& WithAssociations(AssociationsT&& value) {
    SetAssociations(std::forward<AssociationsT>(value));
    return *this;
  }
  template <typename AssociationsT = ApplicationStatusCheckAssociationObject>
  DescribeApplicationStatusCheckAssociationsResponse& AddAssociations(AssociationsT&& value) {
    m_associationsHasBeenSet = true;
    m_associations.emplace_back(std::forward<AssociationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token to include in another request to get the next page of items. This
   * value is &lt;code&gt;null&lt;/code&gt; when there are no more items to
   * return.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  DescribeApplicationStatusCheckAssociationsResponse& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags associated with the application status checks.</p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  DescribeApplicationStatusCheckAssociationsResponse& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  DescribeApplicationStatusCheckAssociationsResponse& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
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
  DescribeApplicationStatusCheckAssociationsResponse& WithResponseMetadata(ResponseMetadataT&& value) {
    SetResponseMetadata(std::forward<ResponseMetadataT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<ApplicationStatusCheckAssociationObject> m_associations;

  Aws::String m_nextToken;

  Aws::Vector<Tag> m_tags;

  ResponseMetadata m_responseMetadata;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_associationsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_responseMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
