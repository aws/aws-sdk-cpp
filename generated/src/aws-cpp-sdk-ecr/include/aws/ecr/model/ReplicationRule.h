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
    AWS_ECR_API ReplicationRule();
    AWS_ECR_API ReplicationRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECR_API ReplicationRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An array of objects representing the destination for a replication rule.</p>
     */
    inline const Aws::Vector<ReplicationDestination>& GetDestinations() const{ return m_destinations; }
    inline bool DestinationsHasBeenSet() const { return m_destinationsHasBeenSet; }
    inline void SetDestinations(const Aws::Vector<ReplicationDestination>& value) { m_destinationsHasBeenSet = true; m_destinations = value; }
    inline void SetDestinations(Aws::Vector<ReplicationDestination>&& value) { m_destinationsHasBeenSet = true; m_destinations = std::move(value); }
    inline ReplicationRule& WithDestinations(const Aws::Vector<ReplicationDestination>& value) { SetDestinations(value); return *this;}
    inline ReplicationRule& WithDestinations(Aws::Vector<ReplicationDestination>&& value) { SetDestinations(std::move(value)); return *this;}
    inline ReplicationRule& AddDestinations(const ReplicationDestination& value) { m_destinationsHasBeenSet = true; m_destinations.push_back(value); return *this; }
    inline ReplicationRule& AddDestinations(ReplicationDestination&& value) { m_destinationsHasBeenSet = true; m_destinations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of objects representing the filters for a replication rule.
     * Specifying a repository filter for a replication rule provides a method for
     * controlling which repositories in a private registry are replicated.</p>
     */
    inline const Aws::Vector<RepositoryFilter>& GetRepositoryFilters() const{ return m_repositoryFilters; }
    inline bool RepositoryFiltersHasBeenSet() const { return m_repositoryFiltersHasBeenSet; }
    inline void SetRepositoryFilters(const Aws::Vector<RepositoryFilter>& value) { m_repositoryFiltersHasBeenSet = true; m_repositoryFilters = value; }
    inline void SetRepositoryFilters(Aws::Vector<RepositoryFilter>&& value) { m_repositoryFiltersHasBeenSet = true; m_repositoryFilters = std::move(value); }
    inline ReplicationRule& WithRepositoryFilters(const Aws::Vector<RepositoryFilter>& value) { SetRepositoryFilters(value); return *this;}
    inline ReplicationRule& WithRepositoryFilters(Aws::Vector<RepositoryFilter>&& value) { SetRepositoryFilters(std::move(value)); return *this;}
    inline ReplicationRule& AddRepositoryFilters(const RepositoryFilter& value) { m_repositoryFiltersHasBeenSet = true; m_repositoryFilters.push_back(value); return *this; }
    inline ReplicationRule& AddRepositoryFilters(RepositoryFilter&& value) { m_repositoryFiltersHasBeenSet = true; m_repositoryFilters.push_back(std::move(value)); return *this; }
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
