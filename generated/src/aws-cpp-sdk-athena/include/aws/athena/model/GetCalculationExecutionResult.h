/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/athena/model/CalculationStatus.h>
#include <aws/athena/model/CalculationStatistics.h>
#include <aws/athena/model/CalculationResult.h>
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
namespace Athena
{
namespace Model
{
  class GetCalculationExecutionResult
  {
  public:
    AWS_ATHENA_API GetCalculationExecutionResult();
    AWS_ATHENA_API GetCalculationExecutionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ATHENA_API GetCalculationExecutionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The calculation execution UUID.</p>
     */
    inline const Aws::String& GetCalculationExecutionId() const{ return m_calculationExecutionId; }
    inline void SetCalculationExecutionId(const Aws::String& value) { m_calculationExecutionId = value; }
    inline void SetCalculationExecutionId(Aws::String&& value) { m_calculationExecutionId = std::move(value); }
    inline void SetCalculationExecutionId(const char* value) { m_calculationExecutionId.assign(value); }
    inline GetCalculationExecutionResult& WithCalculationExecutionId(const Aws::String& value) { SetCalculationExecutionId(value); return *this;}
    inline GetCalculationExecutionResult& WithCalculationExecutionId(Aws::String&& value) { SetCalculationExecutionId(std::move(value)); return *this;}
    inline GetCalculationExecutionResult& WithCalculationExecutionId(const char* value) { SetCalculationExecutionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The session ID that the calculation ran in.</p>
     */
    inline const Aws::String& GetSessionId() const{ return m_sessionId; }
    inline void SetSessionId(const Aws::String& value) { m_sessionId = value; }
    inline void SetSessionId(Aws::String&& value) { m_sessionId = std::move(value); }
    inline void SetSessionId(const char* value) { m_sessionId.assign(value); }
    inline GetCalculationExecutionResult& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}
    inline GetCalculationExecutionResult& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}
    inline GetCalculationExecutionResult& WithSessionId(const char* value) { SetSessionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the calculation execution.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline GetCalculationExecutionResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline GetCalculationExecutionResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline GetCalculationExecutionResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 location in which calculation results are stored.</p>
     */
    inline const Aws::String& GetWorkingDirectory() const{ return m_workingDirectory; }
    inline void SetWorkingDirectory(const Aws::String& value) { m_workingDirectory = value; }
    inline void SetWorkingDirectory(Aws::String&& value) { m_workingDirectory = std::move(value); }
    inline void SetWorkingDirectory(const char* value) { m_workingDirectory.assign(value); }
    inline GetCalculationExecutionResult& WithWorkingDirectory(const Aws::String& value) { SetWorkingDirectory(value); return *this;}
    inline GetCalculationExecutionResult& WithWorkingDirectory(Aws::String&& value) { SetWorkingDirectory(std::move(value)); return *this;}
    inline GetCalculationExecutionResult& WithWorkingDirectory(const char* value) { SetWorkingDirectory(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the status of the calculation.</p>
     */
    inline const CalculationStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const CalculationStatus& value) { m_status = value; }
    inline void SetStatus(CalculationStatus&& value) { m_status = std::move(value); }
    inline GetCalculationExecutionResult& WithStatus(const CalculationStatus& value) { SetStatus(value); return *this;}
    inline GetCalculationExecutionResult& WithStatus(CalculationStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the data processing unit (DPU) execution time and
     * progress. This field is populated only when statistics are available.</p>
     */
    inline const CalculationStatistics& GetStatistics() const{ return m_statistics; }
    inline void SetStatistics(const CalculationStatistics& value) { m_statistics = value; }
    inline void SetStatistics(CalculationStatistics&& value) { m_statistics = std::move(value); }
    inline GetCalculationExecutionResult& WithStatistics(const CalculationStatistics& value) { SetStatistics(value); return *this;}
    inline GetCalculationExecutionResult& WithStatistics(CalculationStatistics&& value) { SetStatistics(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains result information. This field is populated only if the calculation
     * is completed.</p>
     */
    inline const CalculationResult& GetResult() const{ return m_result; }
    inline void SetResult(const CalculationResult& value) { m_result = value; }
    inline void SetResult(CalculationResult&& value) { m_result = std::move(value); }
    inline GetCalculationExecutionResult& WithResult(const CalculationResult& value) { SetResult(value); return *this;}
    inline GetCalculationExecutionResult& WithResult(CalculationResult&& value) { SetResult(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetCalculationExecutionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetCalculationExecutionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetCalculationExecutionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_calculationExecutionId;

    Aws::String m_sessionId;

    Aws::String m_description;

    Aws::String m_workingDirectory;

    CalculationStatus m_status;

    CalculationStatistics m_statistics;

    CalculationResult m_result;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
