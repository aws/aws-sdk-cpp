/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Array.h>
#include <aws/ec2-protocol/EC2Protocol_EXPORTS.h>
#include <aws/ec2-protocol/model/ResponseMetadata.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Xml {
class XmlDocument;
}  // namespace Xml
}  // namespace Utils
namespace EC2Protocol {
namespace Model {
class XmlEmptyBlobsResponse {
 public:
  AWS_EC2PROTOCOL_API XmlEmptyBlobsResponse() = default;
  AWS_EC2PROTOCOL_API XmlEmptyBlobsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_EC2PROTOCOL_API XmlEmptyBlobsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{

  inline const Aws::Utils::ByteBuffer& GetData() const { return m_data; }
  template <typename DataT = Aws::Utils::ByteBuffer>
  void SetData(DataT&& value) {
    m_dataHasBeenSet = true;
    m_data = std::forward<DataT>(value);
  }
  template <typename DataT = Aws::Utils::ByteBuffer>
  XmlEmptyBlobsResponse& WithData(DataT&& value) {
    SetData(std::forward<DataT>(value));
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
  XmlEmptyBlobsResponse& WithResponseMetadata(ResponseMetadataT&& value) {
    SetResponseMetadata(std::forward<ResponseMetadataT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Utils::ByteBuffer m_data{};
  bool m_dataHasBeenSet = false;

  ResponseMetadata m_responseMetadata;
  bool m_responseMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2Protocol
}  // namespace Aws
