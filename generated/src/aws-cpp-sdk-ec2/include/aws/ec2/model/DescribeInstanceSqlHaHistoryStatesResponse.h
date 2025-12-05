/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
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
class DescribeInstanceSqlHaHistoryStatesResponse {
 public:
  AWS_EC2_API DescribeInstanceSqlHaHistoryStatesResponse() = default;
  AWS_EC2_API DescribeInstanceSqlHaHistoryStatesResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_EC2_API DescribeInstanceSqlHaHistoryStatesResponse& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{
  /**
   * <p>Information about the historical SQL Server High Availability states of the
   * SQL Server High Availability instances.</p>
   */
  inline const Aws::Vector<RegisteredInstance>& GetInstances() const { return m_instances; }
  template <typename InstancesT = Aws::Vector<RegisteredInstance>>
  void SetInstances(InstancesT&& value) {
    m_instancesHasBeenSet = true;
    m_instances = std::forward<InstancesT>(value);
  }
  template <typename InstancesT = Aws::Vector<RegisteredInstance>>
  DescribeInstanceSqlHaHistoryStatesResponse& WithInstances(InstancesT&& value) {
    SetInstances(std::forward<InstancesT>(value));
    return *this;
  }
  template <typename InstancesT = RegisteredInstance>
  DescribeInstanceSqlHaHistoryStatesResponse& AddInstances(InstancesT&& value) {
    m_instancesHasBeenSet = true;
    m_instances.emplace_back(std::forward<InstancesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token to use to retrieve the next page of results. This value is
   * <code>null</code> when there are no more results to return.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  DescribeInstanceSqlHaHistoryStatesResponse& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
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
  DescribeInstanceSqlHaHistoryStatesResponse& WithResponseMetadata(ResponseMetadataT&& value) {
    SetResponseMetadata(std::forward<ResponseMetadataT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<RegisteredInstance> m_instances;

  Aws::String m_nextToken;

  ResponseMetadata m_responseMetadata;
  bool m_instancesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_responseMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
