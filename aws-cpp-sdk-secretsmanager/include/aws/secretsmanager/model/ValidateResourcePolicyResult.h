/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/secretsmanager/SecretsManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/secretsmanager/model/ValidationErrorsEntry.h>
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
namespace SecretsManager
{
namespace Model
{
  class AWS_SECRETSMANAGER_API ValidateResourcePolicyResult
  {
  public:
    ValidateResourcePolicyResult();
    ValidateResourcePolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ValidateResourcePolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Returns a message stating that your Reource Policy passed validation. </p>
     */
    inline bool GetPolicyValidationPassed() const{ return m_policyValidationPassed; }

    /**
     * <p>Returns a message stating that your Reource Policy passed validation. </p>
     */
    inline void SetPolicyValidationPassed(bool value) { m_policyValidationPassed = value; }

    /**
     * <p>Returns a message stating that your Reource Policy passed validation. </p>
     */
    inline ValidateResourcePolicyResult& WithPolicyValidationPassed(bool value) { SetPolicyValidationPassed(value); return *this;}


    /**
     * <p>Returns an error message if your policy doesn't pass validatation.</p>
     */
    inline const Aws::Vector<ValidationErrorsEntry>& GetValidationErrors() const{ return m_validationErrors; }

    /**
     * <p>Returns an error message if your policy doesn't pass validatation.</p>
     */
    inline void SetValidationErrors(const Aws::Vector<ValidationErrorsEntry>& value) { m_validationErrors = value; }

    /**
     * <p>Returns an error message if your policy doesn't pass validatation.</p>
     */
    inline void SetValidationErrors(Aws::Vector<ValidationErrorsEntry>&& value) { m_validationErrors = std::move(value); }

    /**
     * <p>Returns an error message if your policy doesn't pass validatation.</p>
     */
    inline ValidateResourcePolicyResult& WithValidationErrors(const Aws::Vector<ValidationErrorsEntry>& value) { SetValidationErrors(value); return *this;}

    /**
     * <p>Returns an error message if your policy doesn't pass validatation.</p>
     */
    inline ValidateResourcePolicyResult& WithValidationErrors(Aws::Vector<ValidationErrorsEntry>&& value) { SetValidationErrors(std::move(value)); return *this;}

    /**
     * <p>Returns an error message if your policy doesn't pass validatation.</p>
     */
    inline ValidateResourcePolicyResult& AddValidationErrors(const ValidationErrorsEntry& value) { m_validationErrors.push_back(value); return *this; }

    /**
     * <p>Returns an error message if your policy doesn't pass validatation.</p>
     */
    inline ValidateResourcePolicyResult& AddValidationErrors(ValidationErrorsEntry&& value) { m_validationErrors.push_back(std::move(value)); return *this; }

  private:

    bool m_policyValidationPassed;

    Aws::Vector<ValidationErrorsEntry> m_validationErrors;
  };

} // namespace Model
} // namespace SecretsManager
} // namespace Aws
