/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/Instance.h>
#include <aws/connect/model/ReplicationConfiguration.h>
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
namespace Connect
{
namespace Model
{
  class DescribeInstanceResult
  {
  public:
    AWS_CONNECT_API DescribeInstanceResult();
    AWS_CONNECT_API DescribeInstanceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API DescribeInstanceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the instance.</p>
     */
    inline const Instance& GetInstance() const{ return m_instance; }
    inline void SetInstance(const Instance& value) { m_instance = value; }
    inline void SetInstance(Instance&& value) { m_instance = std::move(value); }
    inline DescribeInstanceResult& WithInstance(const Instance& value) { SetInstance(value); return *this;}
    inline DescribeInstanceResult& WithInstance(Instance&& value) { SetInstance(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status information about the replication process. This field is included only
     * when you are using the <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_ReplicateInstance.html">ReplicateInstance</a>
     * API to replicate an Amazon Connect instance across Amazon Web Services Regions.
     * For information about replicating Amazon Connect instances, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/create-replica-connect-instance.html">Create
     * a replica of your existing Amazon Connect instance</a> in the <i>Amazon Connect
     * Administrator Guide</i>.</p>
     */
    inline const ReplicationConfiguration& GetReplicationConfiguration() const{ return m_replicationConfiguration; }
    inline void SetReplicationConfiguration(const ReplicationConfiguration& value) { m_replicationConfiguration = value; }
    inline void SetReplicationConfiguration(ReplicationConfiguration&& value) { m_replicationConfiguration = std::move(value); }
    inline DescribeInstanceResult& WithReplicationConfiguration(const ReplicationConfiguration& value) { SetReplicationConfiguration(value); return *this;}
    inline DescribeInstanceResult& WithReplicationConfiguration(ReplicationConfiguration&& value) { SetReplicationConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeInstanceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeInstanceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeInstanceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Instance m_instance;

    ReplicationConfiguration m_replicationConfiguration;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
