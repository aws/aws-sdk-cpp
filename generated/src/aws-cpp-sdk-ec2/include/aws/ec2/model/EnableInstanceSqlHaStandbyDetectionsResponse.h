/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/RegisteredInstance.h>
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
class EnableInstanceSqlHaStandbyDetectionsResponse {
 public:
  AWS_EC2_API EnableInstanceSqlHaStandbyDetectionsResponse() = default;
  AWS_EC2_API EnableInstanceSqlHaStandbyDetectionsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_EC2_API EnableInstanceSqlHaStandbyDetectionsResponse& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{
  /**
   * <p>Information about the instances that were enabled for SQL Server High
   * Availability standby detection monitoring.</p>
   */
  inline const Aws::Vector<RegisteredInstance>& GetInstances() const { return m_instances; }
  template <typename InstancesT = Aws::Vector<RegisteredInstance>>
  void SetInstances(InstancesT&& value) {
    m_instancesHasBeenSet = true;
    m_instances = std::forward<InstancesT>(value);
  }
  template <typename InstancesT = Aws::Vector<RegisteredInstance>>
  EnableInstanceSqlHaStandbyDetectionsResponse& WithInstances(InstancesT&& value) {
    SetInstances(std::forward<InstancesT>(value));
    return *this;
  }
  template <typename InstancesT = RegisteredInstance>
  EnableInstanceSqlHaStandbyDetectionsResponse& AddInstances(InstancesT&& value) {
    m_instancesHasBeenSet = true;
    m_instances.emplace_back(std::forward<InstancesT>(value));
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
  EnableInstanceSqlHaStandbyDetectionsResponse& WithResponseMetadata(ResponseMetadataT&& value) {
    SetResponseMetadata(std::forward<ResponseMetadataT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<RegisteredInstance> m_instances;
  bool m_instancesHasBeenSet = false;

  ResponseMetadata m_responseMetadata;
  bool m_responseMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
