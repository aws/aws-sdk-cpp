/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/EC2_EXPORTS.h>
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
class AttachImageWatermarkResponse {
 public:
  AWS_EC2_API AttachImageWatermarkResponse() = default;
  AWS_EC2_API AttachImageWatermarkResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_EC2_API AttachImageWatermarkResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{
  /**
   * <p>The watermark identifier, in <code>accountId:watermarkName</code> format (for
   * example, <code>123456789012:approvedAmi</code>).</p>
   */
  inline const Aws::String& GetWatermarkKey() const { return m_watermarkKey; }
  template <typename WatermarkKeyT = Aws::String>
  void SetWatermarkKey(WatermarkKeyT&& value) {
    m_watermarkKeyHasBeenSet = true;
    m_watermarkKey = std::forward<WatermarkKeyT>(value);
  }
  template <typename WatermarkKeyT = Aws::String>
  AttachImageWatermarkResponse& WithWatermarkKey(WatermarkKeyT&& value) {
    SetWatermarkKey(std::forward<WatermarkKeyT>(value));
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
  AttachImageWatermarkResponse& WithResponseMetadata(ResponseMetadataT&& value) {
    SetResponseMetadata(std::forward<ResponseMetadataT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_watermarkKey;

  ResponseMetadata m_responseMetadata;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_watermarkKeyHasBeenSet = false;
  bool m_responseMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
