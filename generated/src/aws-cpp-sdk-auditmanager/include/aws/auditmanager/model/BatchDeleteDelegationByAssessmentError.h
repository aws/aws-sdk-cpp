/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace AuditManager
{
namespace Model
{

  /**
   * <p> An error entity for the <code>BatchDeleteDelegationByAssessment</code> API.
   * This is used to provide more meaningful errors than a simple string message.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/BatchDeleteDelegationByAssessmentError">AWS
   * API Reference</a></p>
   */
  class BatchDeleteDelegationByAssessmentError
  {
  public:
    AWS_AUDITMANAGER_API BatchDeleteDelegationByAssessmentError();
    AWS_AUDITMANAGER_API BatchDeleteDelegationByAssessmentError(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API BatchDeleteDelegationByAssessmentError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The identifier for the delegation. </p>
     */
    inline const Aws::String& GetDelegationId() const{ return m_delegationId; }

    /**
     * <p> The identifier for the delegation. </p>
     */
    inline bool DelegationIdHasBeenSet() const { return m_delegationIdHasBeenSet; }

    /**
     * <p> The identifier for the delegation. </p>
     */
    inline void SetDelegationId(const Aws::String& value) { m_delegationIdHasBeenSet = true; m_delegationId = value; }

    /**
     * <p> The identifier for the delegation. </p>
     */
    inline void SetDelegationId(Aws::String&& value) { m_delegationIdHasBeenSet = true; m_delegationId = std::move(value); }

    /**
     * <p> The identifier for the delegation. </p>
     */
    inline void SetDelegationId(const char* value) { m_delegationIdHasBeenSet = true; m_delegationId.assign(value); }

    /**
     * <p> The identifier for the delegation. </p>
     */
    inline BatchDeleteDelegationByAssessmentError& WithDelegationId(const Aws::String& value) { SetDelegationId(value); return *this;}

    /**
     * <p> The identifier for the delegation. </p>
     */
    inline BatchDeleteDelegationByAssessmentError& WithDelegationId(Aws::String&& value) { SetDelegationId(std::move(value)); return *this;}

    /**
     * <p> The identifier for the delegation. </p>
     */
    inline BatchDeleteDelegationByAssessmentError& WithDelegationId(const char* value) { SetDelegationId(value); return *this;}


    /**
     * <p> The error code that the <code>BatchDeleteDelegationByAssessment</code> API
     * returned. </p>
     */
    inline const Aws::String& GetErrorCode() const{ return m_errorCode; }

    /**
     * <p> The error code that the <code>BatchDeleteDelegationByAssessment</code> API
     * returned. </p>
     */
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }

    /**
     * <p> The error code that the <code>BatchDeleteDelegationByAssessment</code> API
     * returned. </p>
     */
    inline void SetErrorCode(const Aws::String& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    /**
     * <p> The error code that the <code>BatchDeleteDelegationByAssessment</code> API
     * returned. </p>
     */
    inline void SetErrorCode(Aws::String&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }

    /**
     * <p> The error code that the <code>BatchDeleteDelegationByAssessment</code> API
     * returned. </p>
     */
    inline void SetErrorCode(const char* value) { m_errorCodeHasBeenSet = true; m_errorCode.assign(value); }

    /**
     * <p> The error code that the <code>BatchDeleteDelegationByAssessment</code> API
     * returned. </p>
     */
    inline BatchDeleteDelegationByAssessmentError& WithErrorCode(const Aws::String& value) { SetErrorCode(value); return *this;}

    /**
     * <p> The error code that the <code>BatchDeleteDelegationByAssessment</code> API
     * returned. </p>
     */
    inline BatchDeleteDelegationByAssessmentError& WithErrorCode(Aws::String&& value) { SetErrorCode(std::move(value)); return *this;}

    /**
     * <p> The error code that the <code>BatchDeleteDelegationByAssessment</code> API
     * returned. </p>
     */
    inline BatchDeleteDelegationByAssessmentError& WithErrorCode(const char* value) { SetErrorCode(value); return *this;}


    /**
     * <p> The error message that the <code>BatchDeleteDelegationByAssessment</code>
     * API returned. </p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p> The error message that the <code>BatchDeleteDelegationByAssessment</code>
     * API returned. </p>
     */
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }

    /**
     * <p> The error message that the <code>BatchDeleteDelegationByAssessment</code>
     * API returned. </p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }

    /**
     * <p> The error message that the <code>BatchDeleteDelegationByAssessment</code>
     * API returned. </p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }

    /**
     * <p> The error message that the <code>BatchDeleteDelegationByAssessment</code>
     * API returned. </p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }

    /**
     * <p> The error message that the <code>BatchDeleteDelegationByAssessment</code>
     * API returned. </p>
     */
    inline BatchDeleteDelegationByAssessmentError& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p> The error message that the <code>BatchDeleteDelegationByAssessment</code>
     * API returned. </p>
     */
    inline BatchDeleteDelegationByAssessmentError& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p> The error message that the <code>BatchDeleteDelegationByAssessment</code>
     * API returned. </p>
     */
    inline BatchDeleteDelegationByAssessmentError& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}

  private:

    Aws::String m_delegationId;
    bool m_delegationIdHasBeenSet = false;

    Aws::String m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
