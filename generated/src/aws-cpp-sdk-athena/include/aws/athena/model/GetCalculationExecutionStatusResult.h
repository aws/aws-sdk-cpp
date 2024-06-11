﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/athena/model/CalculationStatus.h>
#include <aws/athena/model/CalculationStatistics.h>
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


    ///@{
    /**
     * <p>Contains information about the calculation execution status.</p>
     */
    inline const CalculationStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const CalculationStatus& value) { m_status = value; }
    inline void SetStatus(CalculationStatus&& value) { m_status = std::move(value); }
    inline GetCalculationExecutionStatusResult& WithStatus(const CalculationStatus& value) { SetStatus(value); return *this;}
    inline GetCalculationExecutionStatusResult& WithStatus(CalculationStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the DPU execution time and progress.</p>
     */
    inline const CalculationStatistics& GetStatistics() const{ return m_statistics; }
    inline void SetStatistics(const CalculationStatistics& value) { m_statistics = value; }
    inline void SetStatistics(CalculationStatistics&& value) { m_statistics = std::move(value); }
    inline GetCalculationExecutionStatusResult& WithStatistics(const CalculationStatistics& value) { SetStatistics(value); return *this;}
    inline GetCalculationExecutionStatusResult& WithStatistics(CalculationStatistics&& value) { SetStatistics(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetCalculationExecutionStatusResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetCalculationExecutionStatusResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetCalculationExecutionStatusResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    CalculationStatus m_status;

    CalculationStatistics m_statistics;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
