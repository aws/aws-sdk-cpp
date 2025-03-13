/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/ecr/model/ReplicationConfiguration.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
    AWS_ECR_API PutReplicationConfigurationResult() = default;
    AWS_ECR_API PutReplicationConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECR_API PutReplicationConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The contents of the replication configuration for the registry.</p>
     */
    inline const ReplicationConfiguration& GetReplicationConfiguration() const { return m_replicationConfiguration; }
    template<typename ReplicationConfigurationT = ReplicationConfiguration>
    void SetReplicationConfiguration(ReplicationConfigurationT&& value) { m_replicationConfigurationHasBeenSet = true; m_replicationConfiguration = std::forward<ReplicationConfigurationT>(value); }
    template<typename ReplicationConfigurationT = ReplicationConfiguration>
    PutReplicationConfigurationResult& WithReplicationConfiguration(ReplicationConfigurationT&& value) { SetReplicationConfiguration(std::forward<ReplicationConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    PutReplicationConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ReplicationConfiguration m_replicationConfiguration;
    bool m_replicationConfigurationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
