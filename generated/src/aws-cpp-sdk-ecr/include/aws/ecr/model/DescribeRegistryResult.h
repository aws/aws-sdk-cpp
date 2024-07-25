/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class DescribeRegistryResult
  {
  public:
    AWS_ECR_API DescribeRegistryResult();
    AWS_ECR_API DescribeRegistryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECR_API DescribeRegistryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The registry ID associated with the request.</p>
     */
    inline const Aws::String& GetRegistryId() const{ return m_registryId; }
    inline void SetRegistryId(const Aws::String& value) { m_registryId = value; }
    inline void SetRegistryId(Aws::String&& value) { m_registryId = std::move(value); }
    inline void SetRegistryId(const char* value) { m_registryId.assign(value); }
    inline DescribeRegistryResult& WithRegistryId(const Aws::String& value) { SetRegistryId(value); return *this;}
    inline DescribeRegistryResult& WithRegistryId(Aws::String&& value) { SetRegistryId(std::move(value)); return *this;}
    inline DescribeRegistryResult& WithRegistryId(const char* value) { SetRegistryId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The replication configuration for the registry.</p>
     */
    inline const ReplicationConfiguration& GetReplicationConfiguration() const{ return m_replicationConfiguration; }
    inline void SetReplicationConfiguration(const ReplicationConfiguration& value) { m_replicationConfiguration = value; }
    inline void SetReplicationConfiguration(ReplicationConfiguration&& value) { m_replicationConfiguration = std::move(value); }
    inline DescribeRegistryResult& WithReplicationConfiguration(const ReplicationConfiguration& value) { SetReplicationConfiguration(value); return *this;}
    inline DescribeRegistryResult& WithReplicationConfiguration(ReplicationConfiguration&& value) { SetReplicationConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeRegistryResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeRegistryResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeRegistryResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_registryId;

    ReplicationConfiguration m_replicationConfiguration;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
