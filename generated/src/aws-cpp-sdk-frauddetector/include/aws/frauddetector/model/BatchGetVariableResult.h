/**
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
    AWS_FRAUDDETECTOR_API BatchGetVariableResult() = default;
    AWS_FRAUDDETECTOR_API BatchGetVariableResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FRAUDDETECTOR_API BatchGetVariableResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The returned variables.</p>
     */
    inline const Aws::Vector<Variable>& GetVariables() const { return m_variables; }
    template<typename VariablesT = Aws::Vector<Variable>>
    void SetVariables(VariablesT&& value) { m_variablesHasBeenSet = true; m_variables = std::forward<VariablesT>(value); }
    template<typename VariablesT = Aws::Vector<Variable>>
    BatchGetVariableResult& WithVariables(VariablesT&& value) { SetVariables(std::forward<VariablesT>(value)); return *this;}
    template<typename VariablesT = Variable>
    BatchGetVariableResult& AddVariables(VariablesT&& value) { m_variablesHasBeenSet = true; m_variables.emplace_back(std::forward<VariablesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The errors from the request.</p>
     */
    inline const Aws::Vector<BatchGetVariableError>& GetErrors() const { return m_errors; }
    template<typename ErrorsT = Aws::Vector<BatchGetVariableError>>
    void SetErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors = std::forward<ErrorsT>(value); }
    template<typename ErrorsT = Aws::Vector<BatchGetVariableError>>
    BatchGetVariableResult& WithErrors(ErrorsT&& value) { SetErrors(std::forward<ErrorsT>(value)); return *this;}
    template<typename ErrorsT = BatchGetVariableError>
    BatchGetVariableResult& AddErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors.emplace_back(std::forward<ErrorsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchGetVariableResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Variable> m_variables;
    bool m_variablesHasBeenSet = false;

    Aws::Vector<BatchGetVariableError> m_errors;
    bool m_errorsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
