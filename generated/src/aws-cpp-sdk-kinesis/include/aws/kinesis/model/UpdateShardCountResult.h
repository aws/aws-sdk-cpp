/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesis/Kinesis_EXPORTS.h>
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
namespace Kinesis
{
namespace Model
{
  class UpdateShardCountResult
  {
  public:
    AWS_KINESIS_API UpdateShardCountResult();
    AWS_KINESIS_API UpdateShardCountResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KINESIS_API UpdateShardCountResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the stream.</p>
     */
    inline const Aws::String& GetStreamName() const{ return m_streamName; }

    /**
     * <p>The name of the stream.</p>
     */
    inline void SetStreamName(const Aws::String& value) { m_streamName = value; }

    /**
     * <p>The name of the stream.</p>
     */
    inline void SetStreamName(Aws::String&& value) { m_streamName = std::move(value); }

    /**
     * <p>The name of the stream.</p>
     */
    inline void SetStreamName(const char* value) { m_streamName.assign(value); }

    /**
     * <p>The name of the stream.</p>
     */
    inline UpdateShardCountResult& WithStreamName(const Aws::String& value) { SetStreamName(value); return *this;}

    /**
     * <p>The name of the stream.</p>
     */
    inline UpdateShardCountResult& WithStreamName(Aws::String&& value) { SetStreamName(std::move(value)); return *this;}

    /**
     * <p>The name of the stream.</p>
     */
    inline UpdateShardCountResult& WithStreamName(const char* value) { SetStreamName(value); return *this;}


    /**
     * <p>The current number of shards.</p>
     */
    inline int GetCurrentShardCount() const{ return m_currentShardCount; }

    /**
     * <p>The current number of shards.</p>
     */
    inline void SetCurrentShardCount(int value) { m_currentShardCount = value; }

    /**
     * <p>The current number of shards.</p>
     */
    inline UpdateShardCountResult& WithCurrentShardCount(int value) { SetCurrentShardCount(value); return *this;}


    /**
     * <p>The updated number of shards.</p>
     */
    inline int GetTargetShardCount() const{ return m_targetShardCount; }

    /**
     * <p>The updated number of shards.</p>
     */
    inline void SetTargetShardCount(int value) { m_targetShardCount = value; }

    /**
     * <p>The updated number of shards.</p>
     */
    inline UpdateShardCountResult& WithTargetShardCount(int value) { SetTargetShardCount(value); return *this;}


    /**
     * <p>The ARN of the stream.</p>
     */
    inline const Aws::String& GetStreamARN() const{ return m_streamARN; }

    /**
     * <p>The ARN of the stream.</p>
     */
    inline void SetStreamARN(const Aws::String& value) { m_streamARN = value; }

    /**
     * <p>The ARN of the stream.</p>
     */
    inline void SetStreamARN(Aws::String&& value) { m_streamARN = std::move(value); }

    /**
     * <p>The ARN of the stream.</p>
     */
    inline void SetStreamARN(const char* value) { m_streamARN.assign(value); }

    /**
     * <p>The ARN of the stream.</p>
     */
    inline UpdateShardCountResult& WithStreamARN(const Aws::String& value) { SetStreamARN(value); return *this;}

    /**
     * <p>The ARN of the stream.</p>
     */
    inline UpdateShardCountResult& WithStreamARN(Aws::String&& value) { SetStreamARN(std::move(value)); return *this;}

    /**
     * <p>The ARN of the stream.</p>
     */
    inline UpdateShardCountResult& WithStreamARN(const char* value) { SetStreamARN(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateShardCountResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateShardCountResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateShardCountResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_streamName;

    int m_currentShardCount;

    int m_targetShardCount;

    Aws::String m_streamARN;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Kinesis
} // namespace Aws
