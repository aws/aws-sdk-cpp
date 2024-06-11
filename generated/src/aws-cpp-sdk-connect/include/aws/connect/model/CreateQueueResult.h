/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
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
  class CreateQueueResult
  {
  public:
    AWS_CONNECT_API CreateQueueResult();
    AWS_CONNECT_API CreateQueueResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API CreateQueueResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the queue.</p>
     */
    inline const Aws::String& GetQueueArn() const{ return m_queueArn; }
    inline void SetQueueArn(const Aws::String& value) { m_queueArn = value; }
    inline void SetQueueArn(Aws::String&& value) { m_queueArn = std::move(value); }
    inline void SetQueueArn(const char* value) { m_queueArn.assign(value); }
    inline CreateQueueResult& WithQueueArn(const Aws::String& value) { SetQueueArn(value); return *this;}
    inline CreateQueueResult& WithQueueArn(Aws::String&& value) { SetQueueArn(std::move(value)); return *this;}
    inline CreateQueueResult& WithQueueArn(const char* value) { SetQueueArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the queue.</p>
     */
    inline const Aws::String& GetQueueId() const{ return m_queueId; }
    inline void SetQueueId(const Aws::String& value) { m_queueId = value; }
    inline void SetQueueId(Aws::String&& value) { m_queueId = std::move(value); }
    inline void SetQueueId(const char* value) { m_queueId.assign(value); }
    inline CreateQueueResult& WithQueueId(const Aws::String& value) { SetQueueId(value); return *this;}
    inline CreateQueueResult& WithQueueId(Aws::String&& value) { SetQueueId(std::move(value)); return *this;}
    inline CreateQueueResult& WithQueueId(const char* value) { SetQueueId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateQueueResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateQueueResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateQueueResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_queueArn;

    Aws::String m_queueId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
