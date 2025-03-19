/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/auditmanager/model/CreateDelegationRequest.h>
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
   * <p> An error entity for the <code>BatchCreateDelegationByAssessment</code> API.
   * This is used to provide more meaningful errors than a simple string message.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/BatchCreateDelegationByAssessmentError">AWS
   * API Reference</a></p>
   */
  class BatchCreateDelegationByAssessmentError
  {
  public:
    AWS_AUDITMANAGER_API BatchCreateDelegationByAssessmentError() = default;
    AWS_AUDITMANAGER_API BatchCreateDelegationByAssessmentError(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API BatchCreateDelegationByAssessmentError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The API request to batch create delegations in Audit Manager. </p>
     */
    inline const CreateDelegationRequest& GetCreateDelegationRequest() const { return m_createDelegationRequest; }
    inline bool CreateDelegationRequestHasBeenSet() const { return m_createDelegationRequestHasBeenSet; }
    template<typename CreateDelegationRequestT = CreateDelegationRequest>
    void SetCreateDelegationRequest(CreateDelegationRequestT&& value) { m_createDelegationRequestHasBeenSet = true; m_createDelegationRequest = std::forward<CreateDelegationRequestT>(value); }
    template<typename CreateDelegationRequestT = CreateDelegationRequest>
    BatchCreateDelegationByAssessmentError& WithCreateDelegationRequest(CreateDelegationRequestT&& value) { SetCreateDelegationRequest(std::forward<CreateDelegationRequestT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The error code that the <code>BatchCreateDelegationByAssessment</code> API
     * returned. </p>
     */
    inline const Aws::String& GetErrorCode() const { return m_errorCode; }
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
    template<typename ErrorCodeT = Aws::String>
    void SetErrorCode(ErrorCodeT&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::forward<ErrorCodeT>(value); }
    template<typename ErrorCodeT = Aws::String>
    BatchCreateDelegationByAssessmentError& WithErrorCode(ErrorCodeT&& value) { SetErrorCode(std::forward<ErrorCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The error message that the <code>BatchCreateDelegationByAssessment</code>
     * API returned. </p>
     */
    inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    template<typename ErrorMessageT = Aws::String>
    void SetErrorMessage(ErrorMessageT&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::forward<ErrorMessageT>(value); }
    template<typename ErrorMessageT = Aws::String>
    BatchCreateDelegationByAssessmentError& WithErrorMessage(ErrorMessageT&& value) { SetErrorMessage(std::forward<ErrorMessageT>(value)); return *this;}
    ///@}
  private:

    CreateDelegationRequest m_createDelegationRequest;
    bool m_createDelegationRequestHasBeenSet = false;

    Aws::String m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
