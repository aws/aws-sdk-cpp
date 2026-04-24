/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/CapacityManagerMonitoredTagKey.h>
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
class UpdateCapacityManagerMonitoredTagKeysResponse {
 public:
  AWS_EC2_API UpdateCapacityManagerMonitoredTagKeysResponse() = default;
  AWS_EC2_API UpdateCapacityManagerMonitoredTagKeysResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_EC2_API UpdateCapacityManagerMonitoredTagKeysResponse& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{
  /**
   * <p> The list of tag keys affected by the update, including their current status
   * and metadata. </p>
   */
  inline const Aws::Vector<CapacityManagerMonitoredTagKey>& GetCapacityManagerTagKeys() const { return m_capacityManagerTagKeys; }
  template <typename CapacityManagerTagKeysT = Aws::Vector<CapacityManagerMonitoredTagKey>>
  void SetCapacityManagerTagKeys(CapacityManagerTagKeysT&& value) {
    m_capacityManagerTagKeysHasBeenSet = true;
    m_capacityManagerTagKeys = std::forward<CapacityManagerTagKeysT>(value);
  }
  template <typename CapacityManagerTagKeysT = Aws::Vector<CapacityManagerMonitoredTagKey>>
  UpdateCapacityManagerMonitoredTagKeysResponse& WithCapacityManagerTagKeys(CapacityManagerTagKeysT&& value) {
    SetCapacityManagerTagKeys(std::forward<CapacityManagerTagKeysT>(value));
    return *this;
  }
  template <typename CapacityManagerTagKeysT = CapacityManagerMonitoredTagKey>
  UpdateCapacityManagerMonitoredTagKeysResponse& AddCapacityManagerTagKeys(CapacityManagerTagKeysT&& value) {
    m_capacityManagerTagKeysHasBeenSet = true;
    m_capacityManagerTagKeys.emplace_back(std::forward<CapacityManagerTagKeysT>(value));
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
  UpdateCapacityManagerMonitoredTagKeysResponse& WithResponseMetadata(ResponseMetadataT&& value) {
    SetResponseMetadata(std::forward<ResponseMetadataT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<CapacityManagerMonitoredTagKey> m_capacityManagerTagKeys;

  ResponseMetadata m_responseMetadata;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_capacityManagerTagKeysHasBeenSet = false;
  bool m_responseMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
