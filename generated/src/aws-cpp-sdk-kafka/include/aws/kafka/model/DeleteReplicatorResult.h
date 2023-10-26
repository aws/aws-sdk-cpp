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
  class DeleteReplicatorResult
  {
  public:
    AWS_KAFKA_API DeleteReplicatorResult();
    AWS_KAFKA_API DeleteReplicatorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KAFKA_API DeleteReplicatorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the replicator.</p>
     */
    inline const Aws::String& GetReplicatorArn() const{ return m_replicatorArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the replicator.</p>
     */
    inline void SetReplicatorArn(const Aws::String& value) { m_replicatorArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the replicator.</p>
     */
    inline void SetReplicatorArn(Aws::String&& value) { m_replicatorArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the replicator.</p>
     */
    inline void SetReplicatorArn(const char* value) { m_replicatorArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the replicator.</p>
     */
    inline DeleteReplicatorResult& WithReplicatorArn(const Aws::String& value) { SetReplicatorArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the replicator.</p>
     */
    inline DeleteReplicatorResult& WithReplicatorArn(Aws::String&& value) { SetReplicatorArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the replicator.</p>
     */
    inline DeleteReplicatorResult& WithReplicatorArn(const char* value) { SetReplicatorArn(value); return *this;}


    /**
     * <p>The state of the replicator.</p>
     */
    inline const ReplicatorState& GetReplicatorState() const{ return m_replicatorState; }

    /**
     * <p>The state of the replicator.</p>
     */
    inline void SetReplicatorState(const ReplicatorState& value) { m_replicatorState = value; }

    /**
     * <p>The state of the replicator.</p>
     */
    inline void SetReplicatorState(ReplicatorState&& value) { m_replicatorState = std::move(value); }

    /**
     * <p>The state of the replicator.</p>
     */
    inline DeleteReplicatorResult& WithReplicatorState(const ReplicatorState& value) { SetReplicatorState(value); return *this;}

    /**
     * <p>The state of the replicator.</p>
     */
    inline DeleteReplicatorResult& WithReplicatorState(ReplicatorState&& value) { SetReplicatorState(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DeleteReplicatorResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DeleteReplicatorResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DeleteReplicatorResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_replicatorArn;

    ReplicatorState m_replicatorState;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
