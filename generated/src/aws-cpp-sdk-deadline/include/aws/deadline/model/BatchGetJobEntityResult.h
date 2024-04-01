/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/deadline/model/JobEntity.h>
#include <aws/deadline/model/GetJobEntityError.h>
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
  class BatchGetJobEntityResult
  {
  public:
    AWS_DEADLINE_API BatchGetJobEntityResult();
    AWS_DEADLINE_API BatchGetJobEntityResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEADLINE_API BatchGetJobEntityResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of the job entities, or details, in the batch.</p>
     */
    inline const Aws::Vector<JobEntity>& GetEntities() const{ return m_entities; }

    /**
     * <p>A list of the job entities, or details, in the batch.</p>
     */
    inline void SetEntities(const Aws::Vector<JobEntity>& value) { m_entities = value; }

    /**
     * <p>A list of the job entities, or details, in the batch.</p>
     */
    inline void SetEntities(Aws::Vector<JobEntity>&& value) { m_entities = std::move(value); }

    /**
     * <p>A list of the job entities, or details, in the batch.</p>
     */
    inline BatchGetJobEntityResult& WithEntities(const Aws::Vector<JobEntity>& value) { SetEntities(value); return *this;}

    /**
     * <p>A list of the job entities, or details, in the batch.</p>
     */
    inline BatchGetJobEntityResult& WithEntities(Aws::Vector<JobEntity>&& value) { SetEntities(std::move(value)); return *this;}

    /**
     * <p>A list of the job entities, or details, in the batch.</p>
     */
    inline BatchGetJobEntityResult& AddEntities(const JobEntity& value) { m_entities.push_back(value); return *this; }

    /**
     * <p>A list of the job entities, or details, in the batch.</p>
     */
    inline BatchGetJobEntityResult& AddEntities(JobEntity&& value) { m_entities.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of errors from the job error logs for the batch.</p>
     */
    inline const Aws::Vector<GetJobEntityError>& GetErrors() const{ return m_errors; }

    /**
     * <p>A list of errors from the job error logs for the batch.</p>
     */
    inline void SetErrors(const Aws::Vector<GetJobEntityError>& value) { m_errors = value; }

    /**
     * <p>A list of errors from the job error logs for the batch.</p>
     */
    inline void SetErrors(Aws::Vector<GetJobEntityError>&& value) { m_errors = std::move(value); }

    /**
     * <p>A list of errors from the job error logs for the batch.</p>
     */
    inline BatchGetJobEntityResult& WithErrors(const Aws::Vector<GetJobEntityError>& value) { SetErrors(value); return *this;}

    /**
     * <p>A list of errors from the job error logs for the batch.</p>
     */
    inline BatchGetJobEntityResult& WithErrors(Aws::Vector<GetJobEntityError>&& value) { SetErrors(std::move(value)); return *this;}

    /**
     * <p>A list of errors from the job error logs for the batch.</p>
     */
    inline BatchGetJobEntityResult& AddErrors(const GetJobEntityError& value) { m_errors.push_back(value); return *this; }

    /**
     * <p>A list of errors from the job error logs for the batch.</p>
     */
    inline BatchGetJobEntityResult& AddErrors(GetJobEntityError&& value) { m_errors.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline BatchGetJobEntityResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline BatchGetJobEntityResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline BatchGetJobEntityResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<JobEntity> m_entities;

    Aws::Vector<GetJobEntityError> m_errors;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
