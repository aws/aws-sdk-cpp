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
    AWS_KAFKA_API CreateReplicatorResult();
    AWS_KAFKA_API CreateReplicatorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KAFKA_API CreateReplicatorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline CreateReplicatorResult& WithReplicatorArn(const Aws::String& value) { SetReplicatorArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the replicator.</p>
     */
    inline CreateReplicatorResult& WithReplicatorArn(Aws::String&& value) { SetReplicatorArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the replicator.</p>
     */
    inline CreateReplicatorResult& WithReplicatorArn(const char* value) { SetReplicatorArn(value); return *this;}


    /**
     * <p>Name of the replicator provided by the customer.</p>
     */
    inline const Aws::String& GetReplicatorName() const{ return m_replicatorName; }

    /**
     * <p>Name of the replicator provided by the customer.</p>
     */
    inline void SetReplicatorName(const Aws::String& value) { m_replicatorName = value; }

    /**
     * <p>Name of the replicator provided by the customer.</p>
     */
    inline void SetReplicatorName(Aws::String&& value) { m_replicatorName = std::move(value); }

    /**
     * <p>Name of the replicator provided by the customer.</p>
     */
    inline void SetReplicatorName(const char* value) { m_replicatorName.assign(value); }

    /**
     * <p>Name of the replicator provided by the customer.</p>
     */
    inline CreateReplicatorResult& WithReplicatorName(const Aws::String& value) { SetReplicatorName(value); return *this;}

    /**
     * <p>Name of the replicator provided by the customer.</p>
     */
    inline CreateReplicatorResult& WithReplicatorName(Aws::String&& value) { SetReplicatorName(std::move(value)); return *this;}

    /**
     * <p>Name of the replicator provided by the customer.</p>
     */
    inline CreateReplicatorResult& WithReplicatorName(const char* value) { SetReplicatorName(value); return *this;}


    /**
     * <p>State of the replicator.</p>
     */
    inline const ReplicatorState& GetReplicatorState() const{ return m_replicatorState; }

    /**
     * <p>State of the replicator.</p>
     */
    inline void SetReplicatorState(const ReplicatorState& value) { m_replicatorState = value; }

    /**
     * <p>State of the replicator.</p>
     */
    inline void SetReplicatorState(ReplicatorState&& value) { m_replicatorState = std::move(value); }

    /**
     * <p>State of the replicator.</p>
     */
    inline CreateReplicatorResult& WithReplicatorState(const ReplicatorState& value) { SetReplicatorState(value); return *this;}

    /**
     * <p>State of the replicator.</p>
     */
    inline CreateReplicatorResult& WithReplicatorState(ReplicatorState&& value) { SetReplicatorState(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateReplicatorResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateReplicatorResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateReplicatorResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_replicatorArn;

    Aws::String m_replicatorName;

    ReplicatorState m_replicatorState;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
