/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/autoscaling/model/InstanceCollection.h>
#include <aws/autoscaling/model/LaunchInstancesError.h>
#include <aws/autoscaling/model/ResponseMetadata.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Xml {
class XmlDocument;
}  // namespace Xml
}  // namespace Utils
namespace AutoScaling {
namespace Model {
class LaunchInstancesResult {
 public:
  AWS_AUTOSCALING_API LaunchInstancesResult() = default;
  AWS_AUTOSCALING_API LaunchInstancesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_AUTOSCALING_API LaunchInstancesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{
  /**
   * <p> The name of the Auto Scaling group where the instances were launched. </p>
   */
  inline const Aws::String& GetAutoScalingGroupName() const { return m_autoScalingGroupName; }
  template <typename AutoScalingGroupNameT = Aws::String>
  void SetAutoScalingGroupName(AutoScalingGroupNameT&& value) {
    m_autoScalingGroupNameHasBeenSet = true;
    m_autoScalingGroupName = std::forward<AutoScalingGroupNameT>(value);
  }
  template <typename AutoScalingGroupNameT = Aws::String>
  LaunchInstancesResult& WithAutoScalingGroupName(AutoScalingGroupNameT&& value) {
    SetAutoScalingGroupName(std::forward<AutoScalingGroupNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The idempotency token used for the request, either customer-specified or
   * auto-generated. </p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  LaunchInstancesResult& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> A list of successfully launched instances including details such as instance
   * type, Availability Zone, subnet, lifecycle state, and instance IDs. </p>
   */
  inline const Aws::Vector<InstanceCollection>& GetInstances() const { return m_instances; }
  template <typename InstancesT = Aws::Vector<InstanceCollection>>
  void SetInstances(InstancesT&& value) {
    m_instancesHasBeenSet = true;
    m_instances = std::forward<InstancesT>(value);
  }
  template <typename InstancesT = Aws::Vector<InstanceCollection>>
  LaunchInstancesResult& WithInstances(InstancesT&& value) {
    SetInstances(std::forward<InstancesT>(value));
    return *this;
  }
  template <typename InstancesT = InstanceCollection>
  LaunchInstancesResult& AddInstances(InstancesT&& value) {
    m_instancesHasBeenSet = true;
    m_instances.emplace_back(std::forward<InstancesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> A list of errors encountered during the launch attempt including details
   * about failed instance launches with their corresponding error codes and
   * messages. </p>
   */
  inline const Aws::Vector<LaunchInstancesError>& GetErrors() const { return m_errors; }
  template <typename ErrorsT = Aws::Vector<LaunchInstancesError>>
  void SetErrors(ErrorsT&& value) {
    m_errorsHasBeenSet = true;
    m_errors = std::forward<ErrorsT>(value);
  }
  template <typename ErrorsT = Aws::Vector<LaunchInstancesError>>
  LaunchInstancesResult& WithErrors(ErrorsT&& value) {
    SetErrors(std::forward<ErrorsT>(value));
    return *this;
  }
  template <typename ErrorsT = LaunchInstancesError>
  LaunchInstancesResult& AddErrors(ErrorsT&& value) {
    m_errorsHasBeenSet = true;
    m_errors.emplace_back(std::forward<ErrorsT>(value));
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
  LaunchInstancesResult& WithResponseMetadata(ResponseMetadataT&& value) {
    SetResponseMetadata(std::forward<ResponseMetadataT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_autoScalingGroupName;

  Aws::String m_clientToken;

  Aws::Vector<InstanceCollection> m_instances;

  Aws::Vector<LaunchInstancesError> m_errors;

  ResponseMetadata m_responseMetadata;
  bool m_autoScalingGroupNameHasBeenSet = false;
  bool m_clientTokenHasBeenSet = false;
  bool m_instancesHasBeenSet = false;
  bool m_errorsHasBeenSet = false;
  bool m_responseMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace AutoScaling
}  // namespace Aws
