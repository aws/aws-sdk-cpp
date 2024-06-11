/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dataexchange/DataExchange_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/dataexchange/model/ResponseDetails.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dataexchange/model/State.h>
#include <aws/dataexchange/model/Type.h>
#include <aws/dataexchange/model/JobError.h>
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
namespace DataExchange
{
namespace Model
{
  class GetJobResult
  {
  public:
    AWS_DATAEXCHANGE_API GetJobResult();
    AWS_DATAEXCHANGE_API GetJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAEXCHANGE_API GetJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN for the job.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline GetJobResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline GetJobResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline GetJobResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the job was created, in ISO 8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline GetJobResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline GetJobResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the job.</p>
     */
    inline const ResponseDetails& GetDetails() const{ return m_details; }
    inline void SetDetails(const ResponseDetails& value) { m_details = value; }
    inline void SetDetails(ResponseDetails&& value) { m_details = std::move(value); }
    inline GetJobResult& WithDetails(const ResponseDetails& value) { SetDetails(value); return *this;}
    inline GetJobResult& WithDetails(ResponseDetails&& value) { SetDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The errors associated with jobs.</p>
     */
    inline const Aws::Vector<JobError>& GetErrors() const{ return m_errors; }
    inline void SetErrors(const Aws::Vector<JobError>& value) { m_errors = value; }
    inline void SetErrors(Aws::Vector<JobError>&& value) { m_errors = std::move(value); }
    inline GetJobResult& WithErrors(const Aws::Vector<JobError>& value) { SetErrors(value); return *this;}
    inline GetJobResult& WithErrors(Aws::Vector<JobError>&& value) { SetErrors(std::move(value)); return *this;}
    inline GetJobResult& AddErrors(const JobError& value) { m_errors.push_back(value); return *this; }
    inline GetJobResult& AddErrors(JobError&& value) { m_errors.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the job.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline GetJobResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline GetJobResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline GetJobResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the job.</p>
     */
    inline const State& GetState() const{ return m_state; }
    inline void SetState(const State& value) { m_state = value; }
    inline void SetState(State&& value) { m_state = std::move(value); }
    inline GetJobResult& WithState(const State& value) { SetState(value); return *this;}
    inline GetJobResult& WithState(State&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job type.</p>
     */
    inline const Type& GetType() const{ return m_type; }
    inline void SetType(const Type& value) { m_type = value; }
    inline void SetType(Type&& value) { m_type = std::move(value); }
    inline GetJobResult& WithType(const Type& value) { SetType(value); return *this;}
    inline GetJobResult& WithType(Type&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the job was last updated, in ISO 8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAt = std::move(value); }
    inline GetJobResult& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline GetJobResult& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;

    Aws::Utils::DateTime m_createdAt;

    ResponseDetails m_details;

    Aws::Vector<JobError> m_errors;

    Aws::String m_id;

    State m_state;

    Type m_type;

    Aws::Utils::DateTime m_updatedAt;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
