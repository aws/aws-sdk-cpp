/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/EC2Request.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/CustomTagKeyValueRequestPair.h>

#include <utility>

namespace Aws {
namespace EC2 {
namespace Model {

/**
 */
class AssociateApplicationStatusCheckRequest : public EC2Request {
 public:
  AWS_EC2_API AssociateApplicationStatusCheckRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "AssociateApplicationStatusCheck"; }

  AWS_EC2_API Aws::String SerializePayload() const override;

 protected:
  AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri) const override;

 public:
  ///@{
  /**
   * <p>The ID of the application status check to associate.</p>
   */
  inline const Aws::String& GetApplicationStatusCheckId() const { return m_applicationStatusCheckId; }
  inline bool ApplicationStatusCheckIdHasBeenSet() const { return m_applicationStatusCheckIdHasBeenSet; }
  template <typename ApplicationStatusCheckIdT = Aws::String>
  void SetApplicationStatusCheckId(ApplicationStatusCheckIdT&& value) {
    m_applicationStatusCheckIdHasBeenSet = true;
    m_applicationStatusCheckId = std::forward<ApplicationStatusCheckIdT>(value);
  }
  template <typename ApplicationStatusCheckIdT = Aws::String>
  AssociateApplicationStatusCheckRequest& WithApplicationStatusCheckId(ApplicationStatusCheckIdT&& value) {
    SetApplicationStatusCheckId(std::forward<ApplicationStatusCheckIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The <a
   * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_Tags.html">tags</a>
   * to associate the application status check with. Each tag is a key-value pair.
   * When you associate tags, the application status check automatically monitors all
   * instances that have the specified tags.</p>
   */
  inline const Aws::Vector<CustomTagKeyValueRequestPair>& GetTargetTagAssociations() const { return m_targetTagAssociations; }
  inline bool TargetTagAssociationsHasBeenSet() const { return m_targetTagAssociationsHasBeenSet; }
  template <typename TargetTagAssociationsT = Aws::Vector<CustomTagKeyValueRequestPair>>
  void SetTargetTagAssociations(TargetTagAssociationsT&& value) {
    m_targetTagAssociationsHasBeenSet = true;
    m_targetTagAssociations = std::forward<TargetTagAssociationsT>(value);
  }
  template <typename TargetTagAssociationsT = Aws::Vector<CustomTagKeyValueRequestPair>>
  AssociateApplicationStatusCheckRequest& WithTargetTagAssociations(TargetTagAssociationsT&& value) {
    SetTargetTagAssociations(std::forward<TargetTagAssociationsT>(value));
    return *this;
  }
  template <typename TargetTagAssociationsT = CustomTagKeyValueRequestPair>
  AssociateApplicationStatusCheckRequest& AddTargetTagAssociations(TargetTagAssociationsT&& value) {
    m_targetTagAssociationsHasBeenSet = true;
    m_targetTagAssociations.emplace_back(std::forward<TargetTagAssociationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IDs of the instances to associate with the application status check.</p>
   */
  inline const Aws::Vector<Aws::String>& GetInstanceIds() const { return m_instanceIds; }
  inline bool InstanceIdsHasBeenSet() const { return m_instanceIdsHasBeenSet; }
  template <typename InstanceIdsT = Aws::Vector<Aws::String>>
  void SetInstanceIds(InstanceIdsT&& value) {
    m_instanceIdsHasBeenSet = true;
    m_instanceIds = std::forward<InstanceIdsT>(value);
  }
  template <typename InstanceIdsT = Aws::Vector<Aws::String>>
  AssociateApplicationStatusCheckRequest& WithInstanceIds(InstanceIdsT&& value) {
    SetInstanceIds(std::forward<InstanceIdsT>(value));
    return *this;
  }
  template <typename InstanceIdsT = Aws::String>
  AssociateApplicationStatusCheckRequest& AddInstanceIds(InstanceIdsT&& value) {
    m_instanceIdsHasBeenSet = true;
    m_instanceIds.emplace_back(std::forward<InstanceIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier that you provide to ensure that the
   * operation completes no more than one time. If you retry a request with the same
   * token, the service ignores the request but does not return an error. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
   * idempotency</a>.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  AssociateApplicationStatusCheckRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Checks whether you have the required permissions for the operation, without
   * actually making the request, and provides an error response. If you have the
   * required permissions, the error response is <code>DryRunOperation</code>.
   * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
   */
  inline bool GetDryRun() const { return m_dryRun; }
  inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
  inline void SetDryRun(bool value) {
    m_dryRunHasBeenSet = true;
    m_dryRun = value;
  }
  inline AssociateApplicationStatusCheckRequest& WithDryRun(bool value) {
    SetDryRun(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_applicationStatusCheckId;

  Aws::Vector<CustomTagKeyValueRequestPair> m_targetTagAssociations;

  Aws::Vector<Aws::String> m_instanceIds;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};

  bool m_dryRun{false};
  bool m_applicationStatusCheckIdHasBeenSet = false;
  bool m_targetTagAssociationsHasBeenSet = false;
  bool m_instanceIdsHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
  bool m_dryRunHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
