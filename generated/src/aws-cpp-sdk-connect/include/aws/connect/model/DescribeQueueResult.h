/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/Queue.h>
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
  class DescribeQueueResult
  {
  public:
    AWS_CONNECT_API DescribeQueueResult();
    AWS_CONNECT_API DescribeQueueResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API DescribeQueueResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the queue.</p>
     */
    inline const Queue& GetQueue() const{ return m_queue; }

    /**
     * <p>The name of the queue.</p>
     */
    inline void SetQueue(const Queue& value) { m_queue = value; }

    /**
     * <p>The name of the queue.</p>
     */
    inline void SetQueue(Queue&& value) { m_queue = std::move(value); }

    /**
     * <p>The name of the queue.</p>
     */
    inline DescribeQueueResult& WithQueue(const Queue& value) { SetQueue(value); return *this;}

    /**
     * <p>The name of the queue.</p>
     */
    inline DescribeQueueResult& WithQueue(Queue&& value) { SetQueue(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeQueueResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeQueueResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeQueueResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Queue m_queue;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
