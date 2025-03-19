/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/customer-profiles/model/ConditionOverrides.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/customer-profiles/model/BatchGetCalculatedAttributeForProfileError.h>
#include <aws/customer-profiles/model/CalculatedAttributeValue.h>
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
namespace CustomerProfiles
{
namespace Model
{
  class BatchGetCalculatedAttributeForProfileResult
  {
  public:
    AWS_CUSTOMERPROFILES_API BatchGetCalculatedAttributeForProfileResult() = default;
    AWS_CUSTOMERPROFILES_API BatchGetCalculatedAttributeForProfileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CUSTOMERPROFILES_API BatchGetCalculatedAttributeForProfileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>List of errors for calculated attribute values that could not be
     * retrieved.</p>
     */
    inline const Aws::Vector<BatchGetCalculatedAttributeForProfileError>& GetErrors() const { return m_errors; }
    template<typename ErrorsT = Aws::Vector<BatchGetCalculatedAttributeForProfileError>>
    void SetErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors = std::forward<ErrorsT>(value); }
    template<typename ErrorsT = Aws::Vector<BatchGetCalculatedAttributeForProfileError>>
    BatchGetCalculatedAttributeForProfileResult& WithErrors(ErrorsT&& value) { SetErrors(std::forward<ErrorsT>(value)); return *this;}
    template<typename ErrorsT = BatchGetCalculatedAttributeForProfileError>
    BatchGetCalculatedAttributeForProfileResult& AddErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors.emplace_back(std::forward<ErrorsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>List of calculated attribute values retrieved.</p>
     */
    inline const Aws::Vector<CalculatedAttributeValue>& GetCalculatedAttributeValues() const { return m_calculatedAttributeValues; }
    template<typename CalculatedAttributeValuesT = Aws::Vector<CalculatedAttributeValue>>
    void SetCalculatedAttributeValues(CalculatedAttributeValuesT&& value) { m_calculatedAttributeValuesHasBeenSet = true; m_calculatedAttributeValues = std::forward<CalculatedAttributeValuesT>(value); }
    template<typename CalculatedAttributeValuesT = Aws::Vector<CalculatedAttributeValue>>
    BatchGetCalculatedAttributeForProfileResult& WithCalculatedAttributeValues(CalculatedAttributeValuesT&& value) { SetCalculatedAttributeValues(std::forward<CalculatedAttributeValuesT>(value)); return *this;}
    template<typename CalculatedAttributeValuesT = CalculatedAttributeValue>
    BatchGetCalculatedAttributeForProfileResult& AddCalculatedAttributeValues(CalculatedAttributeValuesT&& value) { m_calculatedAttributeValuesHasBeenSet = true; m_calculatedAttributeValues.emplace_back(std::forward<CalculatedAttributeValuesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Overrides the condition block within the original calculated attribute
     * definition.</p>
     */
    inline const ConditionOverrides& GetConditionOverrides() const { return m_conditionOverrides; }
    template<typename ConditionOverridesT = ConditionOverrides>
    void SetConditionOverrides(ConditionOverridesT&& value) { m_conditionOverridesHasBeenSet = true; m_conditionOverrides = std::forward<ConditionOverridesT>(value); }
    template<typename ConditionOverridesT = ConditionOverrides>
    BatchGetCalculatedAttributeForProfileResult& WithConditionOverrides(ConditionOverridesT&& value) { SetConditionOverrides(std::forward<ConditionOverridesT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchGetCalculatedAttributeForProfileResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<BatchGetCalculatedAttributeForProfileError> m_errors;
    bool m_errorsHasBeenSet = false;

    Aws::Vector<CalculatedAttributeValue> m_calculatedAttributeValues;
    bool m_calculatedAttributeValuesHasBeenSet = false;

    ConditionOverrides m_conditionOverrides;
    bool m_conditionOverridesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
