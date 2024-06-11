/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kafka/model/ClusterState.h>
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
namespace Kafka
{
namespace Model
{
  class DeleteClusterResult
  {
  public:
    AWS_KAFKA_API DeleteClusterResult();
    AWS_KAFKA_API DeleteClusterResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KAFKA_API DeleteClusterResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * 
            <p>The Amazon Resource Name (ARN) of the cluster.</p>
         
     */
    inline const Aws::String& GetClusterArn() const{ return m_clusterArn; }
    inline void SetClusterArn(const Aws::String& value) { m_clusterArn = value; }
    inline void SetClusterArn(Aws::String&& value) { m_clusterArn = std::move(value); }
    inline void SetClusterArn(const char* value) { m_clusterArn.assign(value); }
    inline DeleteClusterResult& WithClusterArn(const Aws::String& value) { SetClusterArn(value); return *this;}
    inline DeleteClusterResult& WithClusterArn(Aws::String&& value) { SetClusterArn(std::move(value)); return *this;}
    inline DeleteClusterResult& WithClusterArn(const char* value) { SetClusterArn(value); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>The state of the cluster. The possible states are ACTIVE,
     * CREATING, DELETING, FAILED, HEALING, MAINTENANCE, REBOOTING_BROKER, and
     * UPDATING.</p>
         
     */
    inline const ClusterState& GetState() const{ return m_state; }
    inline void SetState(const ClusterState& value) { m_state = value; }
    inline void SetState(ClusterState&& value) { m_state = std::move(value); }
    inline DeleteClusterResult& WithState(const ClusterState& value) { SetState(value); return *this;}
    inline DeleteClusterResult& WithState(ClusterState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DeleteClusterResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DeleteClusterResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DeleteClusterResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_clusterArn;

    ClusterState m_state;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
