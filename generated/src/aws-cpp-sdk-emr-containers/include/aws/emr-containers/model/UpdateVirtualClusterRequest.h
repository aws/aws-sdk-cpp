/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/emr-containers/EMRContainersRequest.h>
#include <aws/emr-containers/EMRContainers_EXPORTS.h>
#include <aws/emr-containers/model/SchedulerConfiguration.h>

#include <utility>

namespace Aws {
namespace EMRContainers {
namespace Model {

/**
 * <p>Contains the parameters for a request to update a virtual cluster on Amazon
 * EMR on EKS.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/UpdateVirtualClusterRequest">AWS
 * API Reference</a></p>
 */
class UpdateVirtualClusterRequest : public EMRContainersRequest {
 public:
  AWS_EMRCONTAINERS_API UpdateVirtualClusterRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateVirtualCluster"; }

  AWS_EMRCONTAINERS_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The ID of the virtual cluster to update.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  UpdateVirtualClusterRequest& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The scheduler configuration to apply to the virtual cluster. The new
   * configuration fully replaces the existing one. If you omit a field, the
   * corresponding limit is removed.</p>
   */
  inline const SchedulerConfiguration& GetSchedulerConfiguration() const { return m_schedulerConfiguration; }
  inline bool SchedulerConfigurationHasBeenSet() const { return m_schedulerConfigurationHasBeenSet; }
  template <typename SchedulerConfigurationT = SchedulerConfiguration>
  void SetSchedulerConfiguration(SchedulerConfigurationT&& value) {
    m_schedulerConfigurationHasBeenSet = true;
    m_schedulerConfiguration = std::forward<SchedulerConfigurationT>(value);
  }
  template <typename SchedulerConfigurationT = SchedulerConfiguration>
  UpdateVirtualClusterRequest& WithSchedulerConfiguration(SchedulerConfigurationT&& value) {
    SetSchedulerConfiguration(std::forward<SchedulerConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier that you provide to ensure that the
   * operation completes no more than one time. If this token matches a previous
   * request, the service ignores the request, but does not return an error.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  UpdateVirtualClusterRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_id;

  SchedulerConfiguration m_schedulerConfiguration;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_idHasBeenSet = false;
  bool m_schedulerConfigurationHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace EMRContainers
}  // namespace Aws
