/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecr/ECRRequest.h>
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/ecr/model/ReplicationDestination.h>

#include <utility>

namespace Aws {
namespace ECR {
namespace Model {

/**
 */
class StartReplicationBackfillRequest : public ECRRequest {
 public:
  AWS_ECR_API StartReplicationBackfillRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "StartReplicationBackfill"; }

  AWS_ECR_API Aws::String SerializePayload() const override;

  AWS_ECR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The Amazon Web Services account ID associated with the registry from which to
   * start the replication backfill. If you do not specify a registry, the default
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
  StartReplicationBackfillRequest& WithRegistryId(RegistryIdT&& value) {
    SetRegistryId(std::forward<RegistryIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The destination Region and registry to which the images are replicated.</p>
   */
  inline const ReplicationDestination& GetDestination() const { return m_destination; }
  inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }
  template <typename DestinationT = ReplicationDestination>
  void SetDestination(DestinationT&& value) {
    m_destinationHasBeenSet = true;
    m_destination = std::forward<DestinationT>(value);
  }
  template <typename DestinationT = ReplicationDestination>
  StartReplicationBackfillRequest& WithDestination(DestinationT&& value) {
    SetDestination(std::forward<DestinationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_registryId;

  ReplicationDestination m_destination;
  bool m_registryIdHasBeenSet = false;
  bool m_destinationHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECR
}  // namespace Aws
