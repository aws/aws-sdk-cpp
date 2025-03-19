/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kafka/model/ReplicatorState.h>
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
  class UpdateReplicationInfoResult
  {
  public:
    AWS_KAFKA_API UpdateReplicationInfoResult() = default;
    AWS_KAFKA_API UpdateReplicationInfoResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KAFKA_API UpdateReplicationInfoResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the replicator.</p>
     */
    inline const Aws::String& GetReplicatorArn() const { return m_replicatorArn; }
    template<typename ReplicatorArnT = Aws::String>
    void SetReplicatorArn(ReplicatorArnT&& value) { m_replicatorArnHasBeenSet = true; m_replicatorArn = std::forward<ReplicatorArnT>(value); }
    template<typename ReplicatorArnT = Aws::String>
    UpdateReplicationInfoResult& WithReplicatorArn(ReplicatorArnT&& value) { SetReplicatorArn(std::forward<ReplicatorArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>State of the replicator.</p>
     */
    inline ReplicatorState GetReplicatorState() const { return m_replicatorState; }
    inline void SetReplicatorState(ReplicatorState value) { m_replicatorStateHasBeenSet = true; m_replicatorState = value; }
    inline UpdateReplicationInfoResult& WithReplicatorState(ReplicatorState value) { SetReplicatorState(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateReplicationInfoResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_replicatorArn;
    bool m_replicatorArnHasBeenSet = false;

    ReplicatorState m_replicatorState{ReplicatorState::NOT_SET};
    bool m_replicatorStateHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
