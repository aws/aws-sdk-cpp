﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/athena/model/CalculationExecutionState.h>
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
  class StartCalculationExecutionResult
  {
  public:
    AWS_ATHENA_API StartCalculationExecutionResult();
    AWS_ATHENA_API StartCalculationExecutionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ATHENA_API StartCalculationExecutionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The calculation execution UUID.</p>
     */
    inline const Aws::String& GetCalculationExecutionId() const{ return m_calculationExecutionId; }
    inline void SetCalculationExecutionId(const Aws::String& value) { m_calculationExecutionId = value; }
    inline void SetCalculationExecutionId(Aws::String&& value) { m_calculationExecutionId = std::move(value); }
    inline void SetCalculationExecutionId(const char* value) { m_calculationExecutionId.assign(value); }
    inline StartCalculationExecutionResult& WithCalculationExecutionId(const Aws::String& value) { SetCalculationExecutionId(value); return *this;}
    inline StartCalculationExecutionResult& WithCalculationExecutionId(Aws::String&& value) { SetCalculationExecutionId(std::move(value)); return *this;}
    inline StartCalculationExecutionResult& WithCalculationExecutionId(const char* value) { SetCalculationExecutionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <code>CREATING</code> - The calculation is in the process of being
     * created.</p> <p> <code>CREATED</code> - The calculation has been created and is
     * ready to run.</p> <p> <code>QUEUED</code> - The calculation has been queued for
     * processing.</p> <p> <code>RUNNING</code> - The calculation is running.</p> <p>
     * <code>CANCELING</code> - A request to cancel the calculation has been received
     * and the system is working to stop it.</p> <p> <code>CANCELED</code> - The
     * calculation is no longer running as the result of a cancel request.</p> <p>
     * <code>COMPLETED</code> - The calculation has completed without error.</p> <p>
     * <code>FAILED</code> - The calculation failed and is no longer running.</p>
     */
    inline const CalculationExecutionState& GetState() const{ return m_state; }
    inline void SetState(const CalculationExecutionState& value) { m_state = value; }
    inline void SetState(CalculationExecutionState&& value) { m_state = std::move(value); }
    inline StartCalculationExecutionResult& WithState(const CalculationExecutionState& value) { SetState(value); return *this;}
    inline StartCalculationExecutionResult& WithState(CalculationExecutionState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline StartCalculationExecutionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline StartCalculationExecutionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline StartCalculationExecutionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_calculationExecutionId;

    CalculationExecutionState m_state;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
