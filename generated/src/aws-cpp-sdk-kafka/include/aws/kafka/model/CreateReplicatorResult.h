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
  class CreateReplicatorResult
  {
  public:
    AWS_KAFKA_API CreateReplicatorResult() = default;
    AWS_KAFKA_API CreateReplicatorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KAFKA_API CreateReplicatorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the replicator.</p>
     */
    inline const Aws::String& GetReplicatorArn() const { return m_replicatorArn; }
    template<typename ReplicatorArnT = Aws::String>
    void SetReplicatorArn(ReplicatorArnT&& value) { m_replicatorArnHasBeenSet = true; m_replicatorArn = std::forward<ReplicatorArnT>(value); }
    template<typename ReplicatorArnT = Aws::String>
    CreateReplicatorResult& WithReplicatorArn(ReplicatorArnT&& value) { SetReplicatorArn(std::forward<ReplicatorArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the replicator provided by the customer.</p>
     */
    inline const Aws::String& GetReplicatorName() const { return m_replicatorName; }
    template<typename ReplicatorNameT = Aws::String>
    void SetReplicatorName(ReplicatorNameT&& value) { m_replicatorNameHasBeenSet = true; m_replicatorName = std::forward<ReplicatorNameT>(value); }
    template<typename ReplicatorNameT = Aws::String>
    CreateReplicatorResult& WithReplicatorName(ReplicatorNameT&& value) { SetReplicatorName(std::forward<ReplicatorNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>State of the replicator.</p>
     */
    inline ReplicatorState GetReplicatorState() const { return m_replicatorState; }
    inline void SetReplicatorState(ReplicatorState value) { m_replicatorStateHasBeenSet = true; m_replicatorState = value; }
    inline CreateReplicatorResult& WithReplicatorState(ReplicatorState value) { SetReplicatorState(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateReplicatorResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_replicatorArn;
    bool m_replicatorArnHasBeenSet = false;

    Aws::String m_replicatorName;
    bool m_replicatorNameHasBeenSet = false;

    ReplicatorState m_replicatorState{ReplicatorState::NOT_SET};
    bool m_replicatorStateHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
