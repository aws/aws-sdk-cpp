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


    /**
     * <p>The calculation execution UUID.</p>
     */
    inline const Aws::String& GetCalculationExecutionId() const{ return m_calculationExecutionId; }

    /**
     * <p>The calculation execution UUID.</p>
     */
    inline void SetCalculationExecutionId(const Aws::String& value) { m_calculationExecutionId = value; }

    /**
     * <p>The calculation execution UUID.</p>
     */
    inline void SetCalculationExecutionId(Aws::String&& value) { m_calculationExecutionId = std::move(value); }

    /**
     * <p>The calculation execution UUID.</p>
     */
    inline void SetCalculationExecutionId(const char* value) { m_calculationExecutionId.assign(value); }

    /**
     * <p>The calculation execution UUID.</p>
     */
    inline GetCalculationExecutionResult& WithCalculationExecutionId(const Aws::String& value) { SetCalculationExecutionId(value); return *this;}

    /**
     * <p>The calculation execution UUID.</p>
     */
    inline GetCalculationExecutionResult& WithCalculationExecutionId(Aws::String&& value) { SetCalculationExecutionId(std::move(value)); return *this;}

    /**
     * <p>The calculation execution UUID.</p>
     */
    inline GetCalculationExecutionResult& WithCalculationExecutionId(const char* value) { SetCalculationExecutionId(value); return *this;}


    /**
     * <p>The session ID that the calculation ran in.</p>
     */
    inline const Aws::String& GetSessionId() const{ return m_sessionId; }

    /**
     * <p>The session ID that the calculation ran in.</p>
     */
    inline void SetSessionId(const Aws::String& value) { m_sessionId = value; }

    /**
     * <p>The session ID that the calculation ran in.</p>
     */
    inline void SetSessionId(Aws::String&& value) { m_sessionId = std::move(value); }

    /**
     * <p>The session ID that the calculation ran in.</p>
     */
    inline void SetSessionId(const char* value) { m_sessionId.assign(value); }

    /**
     * <p>The session ID that the calculation ran in.</p>
     */
    inline GetCalculationExecutionResult& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}

    /**
     * <p>The session ID that the calculation ran in.</p>
     */
    inline GetCalculationExecutionResult& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}

    /**
     * <p>The session ID that the calculation ran in.</p>
     */
    inline GetCalculationExecutionResult& WithSessionId(const char* value) { SetSessionId(value); return *this;}


    /**
     * <p>The description of the calculation execution.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the calculation execution.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The description of the calculation execution.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The description of the calculation execution.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The description of the calculation execution.</p>
     */
    inline GetCalculationExecutionResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the calculation execution.</p>
     */
    inline GetCalculationExecutionResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the calculation execution.</p>
     */
    inline GetCalculationExecutionResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The Amazon S3 location in which calculation results are stored.</p>
     */
    inline const Aws::String& GetWorkingDirectory() const{ return m_workingDirectory; }

    /**
     * <p>The Amazon S3 location in which calculation results are stored.</p>
     */
    inline void SetWorkingDirectory(const Aws::String& value) { m_workingDirectory = value; }

    /**
     * <p>The Amazon S3 location in which calculation results are stored.</p>
     */
    inline void SetWorkingDirectory(Aws::String&& value) { m_workingDirectory = std::move(value); }

    /**
     * <p>The Amazon S3 location in which calculation results are stored.</p>
     */
    inline void SetWorkingDirectory(const char* value) { m_workingDirectory.assign(value); }

    /**
     * <p>The Amazon S3 location in which calculation results are stored.</p>
     */
    inline GetCalculationExecutionResult& WithWorkingDirectory(const Aws::String& value) { SetWorkingDirectory(value); return *this;}

    /**
     * <p>The Amazon S3 location in which calculation results are stored.</p>
     */
    inline GetCalculationExecutionResult& WithWorkingDirectory(Aws::String&& value) { SetWorkingDirectory(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 location in which calculation results are stored.</p>
     */
    inline GetCalculationExecutionResult& WithWorkingDirectory(const char* value) { SetWorkingDirectory(value); return *this;}


    /**
     * <p>Contains information about the status of the calculation.</p>
     */
    inline const CalculationStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Contains information about the status of the calculation.</p>
     */
    inline void SetStatus(const CalculationStatus& value) { m_status = value; }

    /**
     * <p>Contains information about the status of the calculation.</p>
     */
    inline void SetStatus(CalculationStatus&& value) { m_status = std::move(value); }

    /**
     * <p>Contains information about the status of the calculation.</p>
     */
    inline GetCalculationExecutionResult& WithStatus(const CalculationStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Contains information about the status of the calculation.</p>
     */
    inline GetCalculationExecutionResult& WithStatus(CalculationStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Contains information about the data processing unit (DPU) execution time and
     * progress. This field is populated only when statistics are available.</p>
     */
    inline const CalculationStatistics& GetStatistics() const{ return m_statistics; }

    /**
     * <p>Contains information about the data processing unit (DPU) execution time and
     * progress. This field is populated only when statistics are available.</p>
     */
    inline void SetStatistics(const CalculationStatistics& value) { m_statistics = value; }

    /**
     * <p>Contains information about the data processing unit (DPU) execution time and
     * progress. This field is populated only when statistics are available.</p>
     */
    inline void SetStatistics(CalculationStatistics&& value) { m_statistics = std::move(value); }

    /**
     * <p>Contains information about the data processing unit (DPU) execution time and
     * progress. This field is populated only when statistics are available.</p>
     */
    inline GetCalculationExecutionResult& WithStatistics(const CalculationStatistics& value) { SetStatistics(value); return *this;}

    /**
     * <p>Contains information about the data processing unit (DPU) execution time and
     * progress. This field is populated only when statistics are available.</p>
     */
    inline GetCalculationExecutionResult& WithStatistics(CalculationStatistics&& value) { SetStatistics(std::move(value)); return *this;}


    /**
     * <p>Contains result information. This field is populated only if the calculation
     * is completed.</p>
     */
    inline const CalculationResult& GetResult() const{ return m_result; }

    /**
     * <p>Contains result information. This field is populated only if the calculation
     * is completed.</p>
     */
    inline void SetResult(const CalculationResult& value) { m_result = value; }

    /**
     * <p>Contains result information. This field is populated only if the calculation
     * is completed.</p>
     */
    inline void SetResult(CalculationResult&& value) { m_result = std::move(value); }

    /**
     * <p>Contains result information. This field is populated only if the calculation
     * is completed.</p>
     */
    inline GetCalculationExecutionResult& WithResult(const CalculationResult& value) { SetResult(value); return *this;}

    /**
     * <p>Contains result information. This field is populated only if the calculation
     * is completed.</p>
     */
    inline GetCalculationExecutionResult& WithResult(CalculationResult&& value) { SetResult(std::move(value)); return *this;}

  private:

    Aws::String m_calculationExecutionId;

    Aws::String m_sessionId;

    Aws::String m_description;

    Aws::String m_workingDirectory;

    CalculationStatus m_status;

    CalculationStatistics m_statistics;

    CalculationResult m_result;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
