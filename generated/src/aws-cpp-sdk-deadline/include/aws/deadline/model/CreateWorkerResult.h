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
  class CreateWorkerResult
  {
  public:
    AWS_DEADLINE_API CreateWorkerResult();
    AWS_DEADLINE_API CreateWorkerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEADLINE_API CreateWorkerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The worker ID.</p>
     */
    inline const Aws::String& GetWorkerId() const{ return m_workerId; }

    /**
     * <p>The worker ID.</p>
     */
    inline void SetWorkerId(const Aws::String& value) { m_workerId = value; }

    /**
     * <p>The worker ID.</p>
     */
    inline void SetWorkerId(Aws::String&& value) { m_workerId = std::move(value); }

    /**
     * <p>The worker ID.</p>
     */
    inline void SetWorkerId(const char* value) { m_workerId.assign(value); }

    /**
     * <p>The worker ID.</p>
     */
    inline CreateWorkerResult& WithWorkerId(const Aws::String& value) { SetWorkerId(value); return *this;}

    /**
     * <p>The worker ID.</p>
     */
    inline CreateWorkerResult& WithWorkerId(Aws::String&& value) { SetWorkerId(std::move(value)); return *this;}

    /**
     * <p>The worker ID.</p>
     */
    inline CreateWorkerResult& WithWorkerId(const char* value) { SetWorkerId(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateWorkerResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateWorkerResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateWorkerResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_workerId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
