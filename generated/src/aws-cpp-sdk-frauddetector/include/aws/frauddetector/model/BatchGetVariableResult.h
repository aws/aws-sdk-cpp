﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/frauddetector/model/Variable.h>
#include <aws/frauddetector/model/BatchGetVariableError.h>
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
namespace FraudDetector
{
namespace Model
{
  class BatchGetVariableResult
  {
  public:
    AWS_FRAUDDETECTOR_API BatchGetVariableResult();
    AWS_FRAUDDETECTOR_API BatchGetVariableResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FRAUDDETECTOR_API BatchGetVariableResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The returned variables.</p>
     */
    inline const Aws::Vector<Variable>& GetVariables() const{ return m_variables; }
    inline void SetVariables(const Aws::Vector<Variable>& value) { m_variables = value; }
    inline void SetVariables(Aws::Vector<Variable>&& value) { m_variables = std::move(value); }
    inline BatchGetVariableResult& WithVariables(const Aws::Vector<Variable>& value) { SetVariables(value); return *this;}
    inline BatchGetVariableResult& WithVariables(Aws::Vector<Variable>&& value) { SetVariables(std::move(value)); return *this;}
    inline BatchGetVariableResult& AddVariables(const Variable& value) { m_variables.push_back(value); return *this; }
    inline BatchGetVariableResult& AddVariables(Variable&& value) { m_variables.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The errors from the request.</p>
     */
    inline const Aws::Vector<BatchGetVariableError>& GetErrors() const{ return m_errors; }
    inline void SetErrors(const Aws::Vector<BatchGetVariableError>& value) { m_errors = value; }
    inline void SetErrors(Aws::Vector<BatchGetVariableError>&& value) { m_errors = std::move(value); }
    inline BatchGetVariableResult& WithErrors(const Aws::Vector<BatchGetVariableError>& value) { SetErrors(value); return *this;}
    inline BatchGetVariableResult& WithErrors(Aws::Vector<BatchGetVariableError>&& value) { SetErrors(std::move(value)); return *this;}
    inline BatchGetVariableResult& AddErrors(const BatchGetVariableError& value) { m_errors.push_back(value); return *this; }
    inline BatchGetVariableResult& AddErrors(BatchGetVariableError&& value) { m_errors.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline BatchGetVariableResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline BatchGetVariableResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline BatchGetVariableResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Variable> m_variables;

    Aws::Vector<BatchGetVariableError> m_errors;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
