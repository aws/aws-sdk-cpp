/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rest-xml-protocol/RestXmlProtocolRequest.h>
#include <aws/rest-xml-protocol/RestXmlProtocol_EXPORTS.h>

#include <utility>

namespace Aws {
namespace RestXmlProtocol {
namespace Model {

/**
 */
class PutWithContentEncodingRequest : public RestXmlProtocolRequest {
 public:
  AWS_RESTXMLPROTOCOL_API PutWithContentEncodingRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "PutWithContentEncoding"; }

  AWS_RESTXMLPROTOCOL_API Aws::String SerializePayload() const override;

  AWS_RESTXMLPROTOCOL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

#ifdef ENABLED_ZLIB_REQUEST_COMPRESSION
  virtual Aws::Client::CompressionAlgorithm GetSelectedCompressionAlgorithm(Aws::Client::RequestCompressionConfig config) const override;
#endif

  ///@{

  inline const Aws::String& GetEncoding() const { return m_encoding; }
  inline bool EncodingHasBeenSet() const { return m_encodingHasBeenSet; }
  template <typename EncodingT = Aws::String>
  void SetEncoding(EncodingT&& value) {
    m_encodingHasBeenSet = true;
    m_encoding = std::forward<EncodingT>(value);
  }
  template <typename EncodingT = Aws::String>
  PutWithContentEncodingRequest& WithEncoding(EncodingT&& value) {
    SetEncoding(std::forward<EncodingT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetData() const { return m_data; }
  inline bool DataHasBeenSet() const { return m_dataHasBeenSet; }
  template <typename DataT = Aws::String>
  void SetData(DataT&& value) {
    m_dataHasBeenSet = true;
    m_data = std::forward<DataT>(value);
  }
  template <typename DataT = Aws::String>
  PutWithContentEncodingRequest& WithData(DataT&& value) {
    SetData(std::forward<DataT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_encoding;
  bool m_encodingHasBeenSet = false;

  Aws::String m_data;
  bool m_dataHasBeenSet = false;
};

}  // namespace Model
}  // namespace RestXmlProtocol
}  // namespace Aws
