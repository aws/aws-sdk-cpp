/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
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
namespace deadline
{
namespace Model
{
  class CreateQueueEnvironmentResult
  {
  public:
    AWS_DEADLINE_API CreateQueueEnvironmentResult();
    AWS_DEADLINE_API CreateQueueEnvironmentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEADLINE_API CreateQueueEnvironmentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The queue environment ID.</p>
     */
    inline const Aws::String& GetQueueEnvironmentId() const{ return m_queueEnvironmentId; }

    /**
     * <p>The queue environment ID.</p>
     */
    inline void SetQueueEnvironmentId(const Aws::String& value) { m_queueEnvironmentId = value; }

    /**
     * <p>The queue environment ID.</p>
     */
    inline void SetQueueEnvironmentId(Aws::String&& value) { m_queueEnvironmentId = std::move(value); }

    /**
     * <p>The queue environment ID.</p>
     */
    inline void SetQueueEnvironmentId(const char* value) { m_queueEnvironmentId.assign(value); }

    /**
     * <p>The queue environment ID.</p>
     */
    inline CreateQueueEnvironmentResult& WithQueueEnvironmentId(const Aws::String& value) { SetQueueEnvironmentId(value); return *this;}

    /**
     * <p>The queue environment ID.</p>
     */
    inline CreateQueueEnvironmentResult& WithQueueEnvironmentId(Aws::String&& value) { SetQueueEnvironmentId(std::move(value)); return *this;}

    /**
     * <p>The queue environment ID.</p>
     */
    inline CreateQueueEnvironmentResult& WithQueueEnvironmentId(const char* value) { SetQueueEnvironmentId(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateQueueEnvironmentResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateQueueEnvironmentResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateQueueEnvironmentResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_queueEnvironmentId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
