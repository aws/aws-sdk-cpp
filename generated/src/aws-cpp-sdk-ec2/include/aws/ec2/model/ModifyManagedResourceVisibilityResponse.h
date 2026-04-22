/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/ManagedResourceVisibilitySettings.h>
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
class ModifyManagedResourceVisibilityResponse {
 public:
  AWS_EC2_API ModifyManagedResourceVisibilityResponse() = default;
  AWS_EC2_API ModifyManagedResourceVisibilityResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_EC2_API ModifyManagedResourceVisibilityResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{
  /**
   * <p>The updated managed resource visibility settings for the account.</p>
   */
  inline const ManagedResourceVisibilitySettings& GetVisibility() const { return m_visibility; }
  template <typename VisibilityT = ManagedResourceVisibilitySettings>
  void SetVisibility(VisibilityT&& value) {
    m_visibilityHasBeenSet = true;
    m_visibility = std::forward<VisibilityT>(value);
  }
  template <typename VisibilityT = ManagedResourceVisibilitySettings>
  ModifyManagedResourceVisibilityResponse& WithVisibility(VisibilityT&& value) {
    SetVisibility(std::forward<VisibilityT>(value));
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
  ModifyManagedResourceVisibilityResponse& WithResponseMetadata(ResponseMetadataT&& value) {
    SetResponseMetadata(std::forward<ResponseMetadataT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  ManagedResourceVisibilitySettings m_visibility;

  ResponseMetadata m_responseMetadata;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_visibilityHasBeenSet = false;
  bool m_responseMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
