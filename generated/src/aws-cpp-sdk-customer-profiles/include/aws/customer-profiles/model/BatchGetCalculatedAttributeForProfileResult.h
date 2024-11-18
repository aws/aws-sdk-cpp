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
    AWS_CUSTOMERPROFILES_API BatchGetCalculatedAttributeForProfileResult();
    AWS_CUSTOMERPROFILES_API BatchGetCalculatedAttributeForProfileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CUSTOMERPROFILES_API BatchGetCalculatedAttributeForProfileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>List of errors for calculated attribute values that could not be
     * retrieved.</p>
     */
    inline const Aws::Vector<BatchGetCalculatedAttributeForProfileError>& GetErrors() const{ return m_errors; }
    inline void SetErrors(const Aws::Vector<BatchGetCalculatedAttributeForProfileError>& value) { m_errors = value; }
    inline void SetErrors(Aws::Vector<BatchGetCalculatedAttributeForProfileError>&& value) { m_errors = std::move(value); }
    inline BatchGetCalculatedAttributeForProfileResult& WithErrors(const Aws::Vector<BatchGetCalculatedAttributeForProfileError>& value) { SetErrors(value); return *this;}
    inline BatchGetCalculatedAttributeForProfileResult& WithErrors(Aws::Vector<BatchGetCalculatedAttributeForProfileError>&& value) { SetErrors(std::move(value)); return *this;}
    inline BatchGetCalculatedAttributeForProfileResult& AddErrors(const BatchGetCalculatedAttributeForProfileError& value) { m_errors.push_back(value); return *this; }
    inline BatchGetCalculatedAttributeForProfileResult& AddErrors(BatchGetCalculatedAttributeForProfileError&& value) { m_errors.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>List of calculated attribute values retrieved.</p>
     */
    inline const Aws::Vector<CalculatedAttributeValue>& GetCalculatedAttributeValues() const{ return m_calculatedAttributeValues; }
    inline void SetCalculatedAttributeValues(const Aws::Vector<CalculatedAttributeValue>& value) { m_calculatedAttributeValues = value; }
    inline void SetCalculatedAttributeValues(Aws::Vector<CalculatedAttributeValue>&& value) { m_calculatedAttributeValues = std::move(value); }
    inline BatchGetCalculatedAttributeForProfileResult& WithCalculatedAttributeValues(const Aws::Vector<CalculatedAttributeValue>& value) { SetCalculatedAttributeValues(value); return *this;}
    inline BatchGetCalculatedAttributeForProfileResult& WithCalculatedAttributeValues(Aws::Vector<CalculatedAttributeValue>&& value) { SetCalculatedAttributeValues(std::move(value)); return *this;}
    inline BatchGetCalculatedAttributeForProfileResult& AddCalculatedAttributeValues(const CalculatedAttributeValue& value) { m_calculatedAttributeValues.push_back(value); return *this; }
    inline BatchGetCalculatedAttributeForProfileResult& AddCalculatedAttributeValues(CalculatedAttributeValue&& value) { m_calculatedAttributeValues.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Overrides the condition block within the original calculated attribute
     * definition.</p>
     */
    inline const ConditionOverrides& GetConditionOverrides() const{ return m_conditionOverrides; }
    inline void SetConditionOverrides(const ConditionOverrides& value) { m_conditionOverrides = value; }
    inline void SetConditionOverrides(ConditionOverrides&& value) { m_conditionOverrides = std::move(value); }
    inline BatchGetCalculatedAttributeForProfileResult& WithConditionOverrides(const ConditionOverrides& value) { SetConditionOverrides(value); return *this;}
    inline BatchGetCalculatedAttributeForProfileResult& WithConditionOverrides(ConditionOverrides&& value) { SetConditionOverrides(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline BatchGetCalculatedAttributeForProfileResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline BatchGetCalculatedAttributeForProfileResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline BatchGetCalculatedAttributeForProfileResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<BatchGetCalculatedAttributeForProfileError> m_errors;

    Aws::Vector<CalculatedAttributeValue> m_calculatedAttributeValues;

    ConditionOverrides m_conditionOverrides;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
