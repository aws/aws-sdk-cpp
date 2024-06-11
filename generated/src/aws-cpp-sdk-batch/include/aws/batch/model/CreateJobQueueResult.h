﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
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
namespace Batch
{
namespace Model
{
  class CreateJobQueueResult
  {
  public:
    AWS_BATCH_API CreateJobQueueResult();
    AWS_BATCH_API CreateJobQueueResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BATCH_API CreateJobQueueResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the job queue.</p>
     */
    inline const Aws::String& GetJobQueueName() const{ return m_jobQueueName; }
    inline void SetJobQueueName(const Aws::String& value) { m_jobQueueName = value; }
    inline void SetJobQueueName(Aws::String&& value) { m_jobQueueName = std::move(value); }
    inline void SetJobQueueName(const char* value) { m_jobQueueName.assign(value); }
    inline CreateJobQueueResult& WithJobQueueName(const Aws::String& value) { SetJobQueueName(value); return *this;}
    inline CreateJobQueueResult& WithJobQueueName(Aws::String&& value) { SetJobQueueName(std::move(value)); return *this;}
    inline CreateJobQueueResult& WithJobQueueName(const char* value) { SetJobQueueName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the job queue.</p>
     */
    inline const Aws::String& GetJobQueueArn() const{ return m_jobQueueArn; }
    inline void SetJobQueueArn(const Aws::String& value) { m_jobQueueArn = value; }
    inline void SetJobQueueArn(Aws::String&& value) { m_jobQueueArn = std::move(value); }
    inline void SetJobQueueArn(const char* value) { m_jobQueueArn.assign(value); }
    inline CreateJobQueueResult& WithJobQueueArn(const Aws::String& value) { SetJobQueueArn(value); return *this;}
    inline CreateJobQueueResult& WithJobQueueArn(Aws::String&& value) { SetJobQueueArn(std::move(value)); return *this;}
    inline CreateJobQueueResult& WithJobQueueArn(const char* value) { SetJobQueueArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateJobQueueResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateJobQueueResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateJobQueueResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_jobQueueName;

    Aws::String m_jobQueueArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
