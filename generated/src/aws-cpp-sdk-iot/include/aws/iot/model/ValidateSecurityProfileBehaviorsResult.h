/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/ValidationError.h>
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
namespace IoT
{
namespace Model
{
  class ValidateSecurityProfileBehaviorsResult
  {
  public:
    AWS_IOT_API ValidateSecurityProfileBehaviorsResult() = default;
    AWS_IOT_API ValidateSecurityProfileBehaviorsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API ValidateSecurityProfileBehaviorsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>True if the behaviors were valid.</p>
     */
    inline bool GetValid() const { return m_valid; }
    inline void SetValid(bool value) { m_validHasBeenSet = true; m_valid = value; }
    inline ValidateSecurityProfileBehaviorsResult& WithValid(bool value) { SetValid(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of any errors found in the behaviors.</p>
     */
    inline const Aws::Vector<ValidationError>& GetValidationErrors() const { return m_validationErrors; }
    template<typename ValidationErrorsT = Aws::Vector<ValidationError>>
    void SetValidationErrors(ValidationErrorsT&& value) { m_validationErrorsHasBeenSet = true; m_validationErrors = std::forward<ValidationErrorsT>(value); }
    template<typename ValidationErrorsT = Aws::Vector<ValidationError>>
    ValidateSecurityProfileBehaviorsResult& WithValidationErrors(ValidationErrorsT&& value) { SetValidationErrors(std::forward<ValidationErrorsT>(value)); return *this;}
    template<typename ValidationErrorsT = ValidationError>
    ValidateSecurityProfileBehaviorsResult& AddValidationErrors(ValidationErrorsT&& value) { m_validationErrorsHasBeenSet = true; m_validationErrors.emplace_back(std::forward<ValidationErrorsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ValidateSecurityProfileBehaviorsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    bool m_valid{false};
    bool m_validHasBeenSet = false;

    Aws::Vector<ValidationError> m_validationErrors;
    bool m_validationErrorsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
