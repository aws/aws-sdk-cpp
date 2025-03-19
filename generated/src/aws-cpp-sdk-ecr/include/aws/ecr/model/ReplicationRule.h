/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecr/model/ReplicationDestination.h>
#include <aws/ecr/model/RepositoryFilter.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ECR
{
namespace Model
{

  /**
   * <p>An array of objects representing the replication destinations and repository
   * filters for a replication configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/ReplicationRule">AWS
   * API Reference</a></p>
   */
  class ReplicationRule
  {
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
    template<typename DestinationsT = Aws::Vector<ReplicationDestination>>
    void SetDestinations(DestinationsT&& value) { m_destinationsHasBeenSet = true; m_destinations = std::forward<DestinationsT>(value); }
    template<typename DestinationsT = Aws::Vector<ReplicationDestination>>
    ReplicationRule& WithDestinations(DestinationsT&& value) { SetDestinations(std::forward<DestinationsT>(value)); return *this;}
    template<typename DestinationsT = ReplicationDestination>
    ReplicationRule& AddDestinations(DestinationsT&& value) { m_destinationsHasBeenSet = true; m_destinations.emplace_back(std::forward<DestinationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of objects representing the filters for a replication rule.
     * Specifying a repository filter for a replication rule provides a method for
     * controlling which repositories in a private registry are replicated.</p>
     */
    inline const Aws::Vector<RepositoryFilter>& GetRepositoryFilters() const { return m_repositoryFilters; }
    inline bool RepositoryFiltersHasBeenSet() const { return m_repositoryFiltersHasBeenSet; }
    template<typename RepositoryFiltersT = Aws::Vector<RepositoryFilter>>
    void SetRepositoryFilters(RepositoryFiltersT&& value) { m_repositoryFiltersHasBeenSet = true; m_repositoryFilters = std::forward<RepositoryFiltersT>(value); }
    template<typename RepositoryFiltersT = Aws::Vector<RepositoryFilter>>
    ReplicationRule& WithRepositoryFilters(RepositoryFiltersT&& value) { SetRepositoryFilters(std::forward<RepositoryFiltersT>(value)); return *this;}
    template<typename RepositoryFiltersT = RepositoryFilter>
    ReplicationRule& AddRepositoryFilters(RepositoryFiltersT&& value) { m_repositoryFiltersHasBeenSet = true; m_repositoryFilters.emplace_back(std::forward<RepositoryFiltersT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<ReplicationDestination> m_destinations;
    bool m_destinationsHasBeenSet = false;

    Aws::Vector<RepositoryFilter> m_repositoryFilters;
    bool m_repositoryFiltersHasBeenSet = false;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
