/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecr/ECRRequest.h>
#include <aws/ecr/ECR_EXPORTS.h>

#include <utility>

namespace Aws {
namespace ECR {
namespace Model {

/**
 */
class StopReplicationBackfillRequest : public ECRRequest {
 public:
  AWS_ECR_API StopReplicationBackfillRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "StopReplicationBackfill"; }

  AWS_ECR_API Aws::String SerializePayload() const override;

  AWS_ECR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The Amazon Web Services account ID associated with the registry that contains
   * the replication backfill to stop. If you do not specify a registry, the default
   * registry is assumed.</p>
   */
  inline const Aws::String& GetRegistryId() const { return m_registryId; }
  inline bool RegistryIdHasBeenSet() const { return m_registryIdHasBeenSet; }
  template <typename RegistryIdT = Aws::String>
  void SetRegistryId(RegistryIdT&& value) {
    m_registryIdHasBeenSet = true;
    m_registryId = std::forward<RegistryIdT>(value);
  }
  template <typename RegistryIdT = Aws::String>
  StopReplicationBackfillRequest& WithRegistryId(RegistryIdT&& value) {
    SetRegistryId(std::forward<RegistryIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the replication backfill to stop.</p>
   */
  inline const Aws::String& GetReplicationBackfillId() const { return m_replicationBackfillId; }
  inline bool ReplicationBackfillIdHasBeenSet() const { return m_replicationBackfillIdHasBeenSet; }
  template <typename ReplicationBackfillIdT = Aws::String>
  void SetReplicationBackfillId(ReplicationBackfillIdT&& value) {
    m_replicationBackfillIdHasBeenSet = true;
    m_replicationBackfillId = std::forward<ReplicationBackfillIdT>(value);
  }
  template <typename ReplicationBackfillIdT = Aws::String>
  StopReplicationBackfillRequest& WithReplicationBackfillId(ReplicationBackfillIdT&& value) {
    SetReplicationBackfillId(std::forward<ReplicationBackfillIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_registryId;

  Aws::String m_replicationBackfillId;
  bool m_registryIdHasBeenSet = false;
  bool m_replicationBackfillIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECR
}  // namespace Aws
