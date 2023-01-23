/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/athena/model/CalculationStatus.h>
#include <aws/athena/model/CalculationStatistics.h>
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
  class GetCalculationExecutionStatusResult
  {
  public:
    AWS_ATHENA_API GetCalculationExecutionStatusResult();
    AWS_ATHENA_API GetCalculationExecutionStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ATHENA_API GetCalculationExecutionStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Contains information about the calculation execution status.</p>
     */
    inline const CalculationStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Contains information about the calculation execution status.</p>
     */
    inline void SetStatus(const CalculationStatus& value) { m_status = value; }

    /**
     * <p>Contains information about the calculation execution status.</p>
     */
    inline void SetStatus(CalculationStatus&& value) { m_status = std::move(value); }

    /**
     * <p>Contains information about the calculation execution status.</p>
     */
    inline GetCalculationExecutionStatusResult& WithStatus(const CalculationStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Contains information about the calculation execution status.</p>
     */
    inline GetCalculationExecutionStatusResult& WithStatus(CalculationStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Contains information about the DPU execution time and progress.</p>
     */
    inline const CalculationStatistics& GetStatistics() const{ return m_statistics; }

    /**
     * <p>Contains information about the DPU execution time and progress.</p>
     */
    inline void SetStatistics(const CalculationStatistics& value) { m_statistics = value; }

    /**
     * <p>Contains information about the DPU execution time and progress.</p>
     */
    inline void SetStatistics(CalculationStatistics&& value) { m_statistics = std::move(value); }

    /**
     * <p>Contains information about the DPU execution time and progress.</p>
     */
    inline GetCalculationExecutionStatusResult& WithStatistics(const CalculationStatistics& value) { SetStatistics(value); return *this;}

    /**
     * <p>Contains information about the DPU execution time and progress.</p>
     */
    inline GetCalculationExecutionStatusResult& WithStatistics(CalculationStatistics&& value) { SetStatistics(std::move(value)); return *this;}

  private:

    CalculationStatus m_status;

    CalculationStatistics m_statistics;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
