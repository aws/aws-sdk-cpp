/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/IpamInternetRegistryAssociation.h>
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
class EnableIpamInternetRegistryAssociationResponse {
 public:
  AWS_EC2_API EnableIpamInternetRegistryAssociationResponse() = default;
  AWS_EC2_API EnableIpamInternetRegistryAssociationResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_EC2_API EnableIpamInternetRegistryAssociationResponse& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{
  /**
   * <p>Information about the enabled internet registry association.</p>
   */
  inline const IpamInternetRegistryAssociation& GetIpamInternetRegistryAssociation() const { return m_ipamInternetRegistryAssociation; }
  template <typename IpamInternetRegistryAssociationT = IpamInternetRegistryAssociation>
  void SetIpamInternetRegistryAssociation(IpamInternetRegistryAssociationT&& value) {
    m_ipamInternetRegistryAssociationHasBeenSet = true;
    m_ipamInternetRegistryAssociation = std::forward<IpamInternetRegistryAssociationT>(value);
  }
  template <typename IpamInternetRegistryAssociationT = IpamInternetRegistryAssociation>
  EnableIpamInternetRegistryAssociationResponse& WithIpamInternetRegistryAssociation(IpamInternetRegistryAssociationT&& value) {
    SetIpamInternetRegistryAssociation(std::forward<IpamInternetRegistryAssociationT>(value));
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
  EnableIpamInternetRegistryAssociationResponse& WithResponseMetadata(ResponseMetadataT&& value) {
    SetResponseMetadata(std::forward<ResponseMetadataT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  IpamInternetRegistryAssociation m_ipamInternetRegistryAssociation;

  ResponseMetadata m_responseMetadata;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_ipamInternetRegistryAssociationHasBeenSet = false;
  bool m_responseMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
