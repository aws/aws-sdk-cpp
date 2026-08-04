/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/ApplicationStatusesResponseType.h>
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
class DescribeApplicationStatusResponse {
 public:
  AWS_EC2_API DescribeApplicationStatusResponse() = default;
  AWS_EC2_API DescribeApplicationStatusResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_EC2_API DescribeApplicationStatusResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{
  /**
   * <p>The application statuses for the specified instances.</p>
   */
  inline const ApplicationStatusesResponseType& GetApplicationStatuses() const { return m_applicationStatuses; }
  template <typename ApplicationStatusesT = ApplicationStatusesResponseType>
  void SetApplicationStatuses(ApplicationStatusesT&& value) {
    m_applicationStatusesHasBeenSet = true;
    m_applicationStatuses = std::forward<ApplicationStatusesT>(value);
  }
  template <typename ApplicationStatusesT = ApplicationStatusesResponseType>
  DescribeApplicationStatusResponse& WithApplicationStatuses(ApplicationStatusesT&& value) {
    SetApplicationStatuses(std::forward<ApplicationStatusesT>(value));
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
  DescribeApplicationStatusResponse& WithNextToken(NextTokenT&& value) {
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
  DescribeApplicationStatusResponse& WithResponseMetadata(ResponseMetadataT&& value) {
    SetResponseMetadata(std::forward<ResponseMetadataT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  ApplicationStatusesResponseType m_applicationStatuses;

  Aws::String m_nextToken;

  ResponseMetadata m_responseMetadata;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_applicationStatusesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_responseMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
