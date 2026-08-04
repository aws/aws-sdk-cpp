/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/ApplicationStatusCheckResponseObject.h>
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
class DeleteApplicationStatusCheckResponse {
 public:
  AWS_EC2_API DeleteApplicationStatusCheckResponse() = default;
  AWS_EC2_API DeleteApplicationStatusCheckResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_EC2_API DeleteApplicationStatusCheckResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{
  /**
   * <p>Information about the deleted application status check.</p>
   */
  inline const ApplicationStatusCheckResponseObject& GetApplicationStatusCheck() const { return m_applicationStatusCheck; }
  template <typename ApplicationStatusCheckT = ApplicationStatusCheckResponseObject>
  void SetApplicationStatusCheck(ApplicationStatusCheckT&& value) {
    m_applicationStatusCheckHasBeenSet = true;
    m_applicationStatusCheck = std::forward<ApplicationStatusCheckT>(value);
  }
  template <typename ApplicationStatusCheckT = ApplicationStatusCheckResponseObject>
  DeleteApplicationStatusCheckResponse& WithApplicationStatusCheck(ApplicationStatusCheckT&& value) {
    SetApplicationStatusCheck(std::forward<ApplicationStatusCheckT>(value));
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
  DeleteApplicationStatusCheckResponse& WithResponseMetadata(ResponseMetadataT&& value) {
    SetResponseMetadata(std::forward<ResponseMetadataT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  ApplicationStatusCheckResponseObject m_applicationStatusCheck;

  ResponseMetadata m_responseMetadata;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_applicationStatusCheckHasBeenSet = false;
  bool m_responseMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
