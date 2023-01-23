/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/ecr/model/ReplicationConfiguration.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ECR
{
namespace Model
{
  class PutReplicationConfigurationResult
  {
  public:
    AWS_ECR_API PutReplicationConfigurationResult();
    AWS_ECR_API PutReplicationConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECR_API PutReplicationConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The contents of the replication configuration for the registry.</p>
     */
    inline const ReplicationConfiguration& GetReplicationConfiguration() const{ return m_replicationConfiguration; }

    /**
     * <p>The contents of the replication configuration for the registry.</p>
     */
    inline void SetReplicationConfiguration(const ReplicationConfiguration& value) { m_replicationConfiguration = value; }

    /**
     * <p>The contents of the replication configuration for the registry.</p>
     */
    inline void SetReplicationConfiguration(ReplicationConfiguration&& value) { m_replicationConfiguration = std::move(value); }

    /**
     * <p>The contents of the replication configuration for the registry.</p>
     */
    inline PutReplicationConfigurationResult& WithReplicationConfiguration(const ReplicationConfiguration& value) { SetReplicationConfiguration(value); return *this;}

    /**
     * <p>The contents of the replication configuration for the registry.</p>
     */
    inline PutReplicationConfigurationResult& WithReplicationConfiguration(ReplicationConfiguration&& value) { SetReplicationConfiguration(std::move(value)); return *this;}

  private:

    ReplicationConfiguration m_replicationConfiguration;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
