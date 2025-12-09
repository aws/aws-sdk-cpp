/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/IpamPolicyManagedBy.h>
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
class GetEnabledIpamPolicyResponse {
 public:
  AWS_EC2_API GetEnabledIpamPolicyResponse() = default;
  AWS_EC2_API GetEnabledIpamPolicyResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_EC2_API GetEnabledIpamPolicyResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{
  /**
   * <p>Indicates whether the IPAM policy is enabled.</p>
   */
  inline bool GetIpamPolicyEnabled() const { return m_ipamPolicyEnabled; }
  inline void SetIpamPolicyEnabled(bool value) {
    m_ipamPolicyEnabledHasBeenSet = true;
    m_ipamPolicyEnabled = value;
  }
  inline GetEnabledIpamPolicyResponse& WithIpamPolicyEnabled(bool value) {
    SetIpamPolicyEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the enabled IPAM policy.</p>
   */
  inline const Aws::String& GetIpamPolicyId() const { return m_ipamPolicyId; }
  template <typename IpamPolicyIdT = Aws::String>
  void SetIpamPolicyId(IpamPolicyIdT&& value) {
    m_ipamPolicyIdHasBeenSet = true;
    m_ipamPolicyId = std::forward<IpamPolicyIdT>(value);
  }
  template <typename IpamPolicyIdT = Aws::String>
  GetEnabledIpamPolicyResponse& WithIpamPolicyId(IpamPolicyIdT&& value) {
    SetIpamPolicyId(std::forward<IpamPolicyIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The entity that manages the IPAM policy.</p>
   */
  inline IpamPolicyManagedBy GetManagedBy() const { return m_managedBy; }
  inline void SetManagedBy(IpamPolicyManagedBy value) {
    m_managedByHasBeenSet = true;
    m_managedBy = value;
  }
  inline GetEnabledIpamPolicyResponse& WithManagedBy(IpamPolicyManagedBy value) {
    SetManagedBy(value);
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
  GetEnabledIpamPolicyResponse& WithResponseMetadata(ResponseMetadataT&& value) {
    SetResponseMetadata(std::forward<ResponseMetadataT>(value));
    return *this;
  }
  ///@}
 private:
  bool m_ipamPolicyEnabled{false};

  Aws::String m_ipamPolicyId;

  IpamPolicyManagedBy m_managedBy{IpamPolicyManagedBy::NOT_SET};

  ResponseMetadata m_responseMetadata;
  bool m_ipamPolicyEnabledHasBeenSet = false;
  bool m_ipamPolicyIdHasBeenSet = false;
  bool m_managedByHasBeenSet = false;
  bool m_responseMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
