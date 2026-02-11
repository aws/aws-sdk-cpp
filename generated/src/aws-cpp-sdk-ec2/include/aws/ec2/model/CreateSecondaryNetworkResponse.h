/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/SecondaryNetwork.h>

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
class CreateSecondaryNetworkResponse {
 public:
  AWS_EC2_API CreateSecondaryNetworkResponse() = default;
  AWS_EC2_API CreateSecondaryNetworkResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_EC2_API CreateSecondaryNetworkResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{
  /**
   * <p>Information about the secondary network.</p>
   */
  inline const SecondaryNetwork& GetSecondaryNetwork() const { return m_secondaryNetwork; }
  template <typename SecondaryNetworkT = SecondaryNetwork>
  void SetSecondaryNetwork(SecondaryNetworkT&& value) {
    m_secondaryNetworkHasBeenSet = true;
    m_secondaryNetwork = std::forward<SecondaryNetworkT>(value);
  }
  template <typename SecondaryNetworkT = SecondaryNetwork>
  CreateSecondaryNetworkResponse& WithSecondaryNetwork(SecondaryNetworkT&& value) {
    SetSecondaryNetwork(std::forward<SecondaryNetworkT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Unique, case-sensitive identifier to ensure the idempotency of the request.
   * Only returned if a client token was provided in the request.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CreateSecondaryNetworkResponse& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
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
  CreateSecondaryNetworkResponse& WithResponseMetadata(ResponseMetadataT&& value) {
    SetResponseMetadata(std::forward<ResponseMetadataT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetResponseCode() const { return m_responseCode; }

 private:
  SecondaryNetwork m_secondaryNetwork;

  Aws::String m_clientToken;

  ResponseMetadata m_responseMetadata;
  Aws::Http::HttpResponseCode m_responseCode;
  bool m_secondaryNetworkHasBeenSet = false;
  bool m_clientTokenHasBeenSet = false;
  bool m_responseMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
