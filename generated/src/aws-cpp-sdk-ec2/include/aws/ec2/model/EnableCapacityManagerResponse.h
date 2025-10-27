/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/CapacityManagerStatus.h>
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
class EnableCapacityManagerResponse {
 public:
  AWS_EC2_API EnableCapacityManagerResponse() = default;
  AWS_EC2_API EnableCapacityManagerResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_EC2_API EnableCapacityManagerResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{
  /**
   * <p> The current status of Capacity Manager after the enable operation. </p>
   */
  inline CapacityManagerStatus GetCapacityManagerStatus() const { return m_capacityManagerStatus; }
  inline void SetCapacityManagerStatus(CapacityManagerStatus value) {
    m_capacityManagerStatusHasBeenSet = true;
    m_capacityManagerStatus = value;
  }
  inline EnableCapacityManagerResponse& WithCapacityManagerStatus(CapacityManagerStatus value) {
    SetCapacityManagerStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> Indicates whether Organizations access is enabled for cross-account data
   * aggregation. </p>
   */
  inline bool GetOrganizationsAccess() const { return m_organizationsAccess; }
  inline void SetOrganizationsAccess(bool value) {
    m_organizationsAccessHasBeenSet = true;
    m_organizationsAccess = value;
  }
  inline EnableCapacityManagerResponse& WithOrganizationsAccess(bool value) {
    SetOrganizationsAccess(value);
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
  EnableCapacityManagerResponse& WithResponseMetadata(ResponseMetadataT&& value) {
    SetResponseMetadata(std::forward<ResponseMetadataT>(value));
    return *this;
  }
  ///@}
 private:
  CapacityManagerStatus m_capacityManagerStatus{CapacityManagerStatus::NOT_SET};
  bool m_capacityManagerStatusHasBeenSet = false;

  bool m_organizationsAccess{false};
  bool m_organizationsAccessHasBeenSet = false;

  ResponseMetadata m_responseMetadata;
  bool m_responseMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
