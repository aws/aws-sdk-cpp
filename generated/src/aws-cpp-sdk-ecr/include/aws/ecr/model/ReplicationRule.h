/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/ecr/model/DeleteReplication.h>
#include <aws/ecr/model/ReplicationDestination.h>
#include <aws/ecr/model/RepositoryFilter.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ECR {
namespace Model {

/**
 * <p>An array of objects representing the replication destinations and repository
 * filters for a replication configuration.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/ReplicationRule">AWS
 * API Reference</a></p>
 */
class ReplicationRule {
 public:
  AWS_ECR_API ReplicationRule() = default;
  AWS_ECR_API ReplicationRule(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECR_API ReplicationRule& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECR_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>An array of objects representing the destination for a replication rule.</p>
   */
  inline const Aws::Vector<ReplicationDestination>& GetDestinations() const { return m_destinations; }
  inline bool DestinationsHasBeenSet() const { return m_destinationsHasBeenSet; }
  template <typename DestinationsT = Aws::Vector<ReplicationDestination>>
  void SetDestinations(DestinationsT&& value) {
    m_destinationsHasBeenSet = true;
    m_destinations = std::forward<DestinationsT>(value);
  }
  template <typename DestinationsT = Aws::Vector<ReplicationDestination>>
  ReplicationRule& WithDestinations(DestinationsT&& value) {
    SetDestinations(std::forward<DestinationsT>(value));
    return *this;
  }
  template <typename DestinationsT = ReplicationDestination>
  ReplicationRule& AddDestinations(DestinationsT&& value) {
    m_destinationsHasBeenSet = true;
    m_destinations.emplace_back(std::forward<DestinationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An array of objects representing the filters for a replication rule.
   * Specifying a repository filter for a replication rule provides a method for
   * controlling which repositories in a private registry are replicated.</p>
   */
  inline const Aws::Vector<RepositoryFilter>& GetRepositoryFilters() const { return m_repositoryFilters; }
  inline bool RepositoryFiltersHasBeenSet() const { return m_repositoryFiltersHasBeenSet; }
  template <typename RepositoryFiltersT = Aws::Vector<RepositoryFilter>>
  void SetRepositoryFilters(RepositoryFiltersT&& value) {
    m_repositoryFiltersHasBeenSet = true;
    m_repositoryFilters = std::forward<RepositoryFiltersT>(value);
  }
  template <typename RepositoryFiltersT = Aws::Vector<RepositoryFilter>>
  ReplicationRule& WithRepositoryFilters(RepositoryFiltersT&& value) {
    SetRepositoryFilters(std::forward<RepositoryFiltersT>(value));
    return *this;
  }
  template <typename RepositoryFiltersT = RepositoryFilter>
  ReplicationRule& AddRepositoryFilters(RepositoryFiltersT&& value) {
    m_repositoryFiltersHasBeenSet = true;
    m_repositoryFilters.emplace_back(std::forward<RepositoryFiltersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The delete replication settings for the replication rule. When delete
   * replication is enabled, the service replicates image deletions and image tag
   * removals from the source registry to the replication destinations. If you do not
   * specify this parameter, the service does not replicate image deletions or image
   * tag removals for the replication rule.</p>
   */
  inline const DeleteReplication& GetDeleteReplication() const { return m_deleteReplication; }
  inline bool DeleteReplicationHasBeenSet() const { return m_deleteReplicationHasBeenSet; }
  template <typename DeleteReplicationT = DeleteReplication>
  void SetDeleteReplication(DeleteReplicationT&& value) {
    m_deleteReplicationHasBeenSet = true;
    m_deleteReplication = std::forward<DeleteReplicationT>(value);
  }
  template <typename DeleteReplicationT = DeleteReplication>
  ReplicationRule& WithDeleteReplication(DeleteReplicationT&& value) {
    SetDeleteReplication(std::forward<DeleteReplicationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<ReplicationDestination> m_destinations;

  Aws::Vector<RepositoryFilter> m_repositoryFilters;

  DeleteReplication m_deleteReplication;
  bool m_destinationsHasBeenSet = false;
  bool m_repositoryFiltersHasBeenSet = false;
  bool m_deleteReplicationHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECR
}  // namespace Aws
