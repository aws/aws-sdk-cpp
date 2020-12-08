/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecr/model/ReplicationDestination.h>
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
   * <p>An array of objects representing the replication destinations for a
   * replication configuration. A replication configuration may contain only one
   * replication rule but the rule may contain one or more replication
   * destinations.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/ReplicationRule">AWS
   * API Reference</a></p>
   */
  class AWS_ECR_API ReplicationRule
  {
  public:
    ReplicationRule();
    ReplicationRule(Aws::Utils::Json::JsonView jsonValue);
    ReplicationRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An array of objects representing the details of a replication
     * destination.</p>
     */
    inline const Aws::Vector<ReplicationDestination>& GetDestinations() const{ return m_destinations; }

    /**
     * <p>An array of objects representing the details of a replication
     * destination.</p>
     */
    inline bool DestinationsHasBeenSet() const { return m_destinationsHasBeenSet; }

    /**
     * <p>An array of objects representing the details of a replication
     * destination.</p>
     */
    inline void SetDestinations(const Aws::Vector<ReplicationDestination>& value) { m_destinationsHasBeenSet = true; m_destinations = value; }

    /**
     * <p>An array of objects representing the details of a replication
     * destination.</p>
     */
    inline void SetDestinations(Aws::Vector<ReplicationDestination>&& value) { m_destinationsHasBeenSet = true; m_destinations = std::move(value); }

    /**
     * <p>An array of objects representing the details of a replication
     * destination.</p>
     */
    inline ReplicationRule& WithDestinations(const Aws::Vector<ReplicationDestination>& value) { SetDestinations(value); return *this;}

    /**
     * <p>An array of objects representing the details of a replication
     * destination.</p>
     */
    inline ReplicationRule& WithDestinations(Aws::Vector<ReplicationDestination>&& value) { SetDestinations(std::move(value)); return *this;}

    /**
     * <p>An array of objects representing the details of a replication
     * destination.</p>
     */
    inline ReplicationRule& AddDestinations(const ReplicationDestination& value) { m_destinationsHasBeenSet = true; m_destinations.push_back(value); return *this; }

    /**
     * <p>An array of objects representing the details of a replication
     * destination.</p>
     */
    inline ReplicationRule& AddDestinations(ReplicationDestination&& value) { m_destinationsHasBeenSet = true; m_destinations.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<ReplicationDestination> m_destinations;
    bool m_destinationsHasBeenSet;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
