/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudcontrol/CloudControlApi_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudcontrol/model/Operation.h>
#include <aws/cloudcontrol/model/OperationStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/cloudcontrol/model/HandlerErrorCode.h>
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
namespace CloudControlApi
{
namespace Model
{

  /**
   * <p>Represents the current status of a resource operation request. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/cloudcontrolapi/latest/userguide/resource-operations-manage-requests.html">Managing
   * resource operation requests</a> in the <i>Amazon Web Services Cloud Control API
   * User Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudcontrol-2021-09-30/ProgressEvent">AWS
   * API Reference</a></p>
   */
  class ProgressEvent
  {
  public:
    AWS_CLOUDCONTROLAPI_API ProgressEvent();
    AWS_CLOUDCONTROLAPI_API ProgressEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDCONTROLAPI_API ProgressEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDCONTROLAPI_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the resource type used in the operation.</p>
     */
    inline const Aws::String& GetTypeName() const{ return m_typeName; }
    inline bool TypeNameHasBeenSet() const { return m_typeNameHasBeenSet; }
    inline void SetTypeName(const Aws::String& value) { m_typeNameHasBeenSet = true; m_typeName = value; }
    inline void SetTypeName(Aws::String&& value) { m_typeNameHasBeenSet = true; m_typeName = std::move(value); }
    inline void SetTypeName(const char* value) { m_typeNameHasBeenSet = true; m_typeName.assign(value); }
    inline ProgressEvent& WithTypeName(const Aws::String& value) { SetTypeName(value); return *this;}
    inline ProgressEvent& WithTypeName(Aws::String&& value) { SetTypeName(std::move(value)); return *this;}
    inline ProgressEvent& WithTypeName(const char* value) { SetTypeName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The primary identifier for the resource.</p>  <p>In some cases, the
     * resource identifier may be available before the resource operation has reached a
     * status of <code>SUCCESS</code>.</p> 
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }
    inline ProgressEvent& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}
    inline ProgressEvent& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}
    inline ProgressEvent& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique token representing this resource operation request.</p> <p>Use the
     * <code>RequestToken</code> with <a
     * href="https://docs.aws.amazon.com/cloudcontrolapi/latest/APIReference/API_GetResourceRequestStatus.html">GetResourceRequestStatus</a>
     * to return the current status of a resource operation request.</p>
     */
    inline const Aws::String& GetRequestToken() const{ return m_requestToken; }
    inline bool RequestTokenHasBeenSet() const { return m_requestTokenHasBeenSet; }
    inline void SetRequestToken(const Aws::String& value) { m_requestTokenHasBeenSet = true; m_requestToken = value; }
    inline void SetRequestToken(Aws::String&& value) { m_requestTokenHasBeenSet = true; m_requestToken = std::move(value); }
    inline void SetRequestToken(const char* value) { m_requestTokenHasBeenSet = true; m_requestToken.assign(value); }
    inline ProgressEvent& WithRequestToken(const Aws::String& value) { SetRequestToken(value); return *this;}
    inline ProgressEvent& WithRequestToken(Aws::String&& value) { SetRequestToken(std::move(value)); return *this;}
    inline ProgressEvent& WithRequestToken(const char* value) { SetRequestToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique token representing the Hooks operation for the request.</p>
     */
    inline const Aws::String& GetHooksRequestToken() const{ return m_hooksRequestToken; }
    inline bool HooksRequestTokenHasBeenSet() const { return m_hooksRequestTokenHasBeenSet; }
    inline void SetHooksRequestToken(const Aws::String& value) { m_hooksRequestTokenHasBeenSet = true; m_hooksRequestToken = value; }
    inline void SetHooksRequestToken(Aws::String&& value) { m_hooksRequestTokenHasBeenSet = true; m_hooksRequestToken = std::move(value); }
    inline void SetHooksRequestToken(const char* value) { m_hooksRequestTokenHasBeenSet = true; m_hooksRequestToken.assign(value); }
    inline ProgressEvent& WithHooksRequestToken(const Aws::String& value) { SetHooksRequestToken(value); return *this;}
    inline ProgressEvent& WithHooksRequestToken(Aws::String&& value) { SetHooksRequestToken(std::move(value)); return *this;}
    inline ProgressEvent& WithHooksRequestToken(const char* value) { SetHooksRequestToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource operation type.</p>
     */
    inline const Operation& GetOperation() const{ return m_operation; }
    inline bool OperationHasBeenSet() const { return m_operationHasBeenSet; }
    inline void SetOperation(const Operation& value) { m_operationHasBeenSet = true; m_operation = value; }
    inline void SetOperation(Operation&& value) { m_operationHasBeenSet = true; m_operation = std::move(value); }
    inline ProgressEvent& WithOperation(const Operation& value) { SetOperation(value); return *this;}
    inline ProgressEvent& WithOperation(Operation&& value) { SetOperation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the resource operation request.</p> <ul> <li> <p>
     * <code>PENDING</code>: The resource operation hasn't yet started.</p> </li> <li>
     * <p> <code>IN_PROGRESS</code>: The resource operation is currently in
     * progress.</p> </li> <li> <p> <code>SUCCESS</code>: The resource operation has
     * successfully completed.</p> </li> <li> <p> <code>FAILED</code>: The resource
     * operation has failed. Refer to the error code and status message for more
     * information.</p> </li> <li> <p> <code>CANCEL_IN_PROGRESS</code>: The resource
     * operation is in the process of being canceled.</p> </li> <li> <p>
     * <code>CANCEL_COMPLETE</code>: The resource operation has been canceled.</p>
     * </li> </ul>
     */
    inline const OperationStatus& GetOperationStatus() const{ return m_operationStatus; }
    inline bool OperationStatusHasBeenSet() const { return m_operationStatusHasBeenSet; }
    inline void SetOperationStatus(const OperationStatus& value) { m_operationStatusHasBeenSet = true; m_operationStatus = value; }
    inline void SetOperationStatus(OperationStatus&& value) { m_operationStatusHasBeenSet = true; m_operationStatus = std::move(value); }
    inline ProgressEvent& WithOperationStatus(const OperationStatus& value) { SetOperationStatus(value); return *this;}
    inline ProgressEvent& WithOperationStatus(OperationStatus&& value) { SetOperationStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the resource operation request was initiated.</p>
     */
    inline const Aws::Utils::DateTime& GetEventTime() const{ return m_eventTime; }
    inline bool EventTimeHasBeenSet() const { return m_eventTimeHasBeenSet; }
    inline void SetEventTime(const Aws::Utils::DateTime& value) { m_eventTimeHasBeenSet = true; m_eventTime = value; }
    inline void SetEventTime(Aws::Utils::DateTime&& value) { m_eventTimeHasBeenSet = true; m_eventTime = std::move(value); }
    inline ProgressEvent& WithEventTime(const Aws::Utils::DateTime& value) { SetEventTime(value); return *this;}
    inline ProgressEvent& WithEventTime(Aws::Utils::DateTime&& value) { SetEventTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A JSON string containing the resource model, consisting of each resource
     * property and its current value.</p>
     */
    inline const Aws::String& GetResourceModel() const{ return m_resourceModel; }
    inline bool ResourceModelHasBeenSet() const { return m_resourceModelHasBeenSet; }
    inline void SetResourceModel(const Aws::String& value) { m_resourceModelHasBeenSet = true; m_resourceModel = value; }
    inline void SetResourceModel(Aws::String&& value) { m_resourceModelHasBeenSet = true; m_resourceModel = std::move(value); }
    inline void SetResourceModel(const char* value) { m_resourceModelHasBeenSet = true; m_resourceModel.assign(value); }
    inline ProgressEvent& WithResourceModel(const Aws::String& value) { SetResourceModel(value); return *this;}
    inline ProgressEvent& WithResourceModel(Aws::String&& value) { SetResourceModel(std::move(value)); return *this;}
    inline ProgressEvent& WithResourceModel(const char* value) { SetResourceModel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any message explaining the current status.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }
    inline ProgressEvent& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}
    inline ProgressEvent& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}
    inline ProgressEvent& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>For requests with a status of <code>FAILED</code>, the associated error
     * code.</p> <p>For error code definitions, see <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/resource-type-test-contract-errors.html">Handler
     * error codes</a> in the <i>CloudFormation Command Line Interface User Guide for
     * Extension Development</i>.</p>
     */
    inline const HandlerErrorCode& GetErrorCode() const{ return m_errorCode; }
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
    inline void SetErrorCode(const HandlerErrorCode& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }
    inline void SetErrorCode(HandlerErrorCode&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }
    inline ProgressEvent& WithErrorCode(const HandlerErrorCode& value) { SetErrorCode(value); return *this;}
    inline ProgressEvent& WithErrorCode(HandlerErrorCode&& value) { SetErrorCode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When to next request the status of this resource operation request.</p>
     */
    inline const Aws::Utils::DateTime& GetRetryAfter() const{ return m_retryAfter; }
    inline bool RetryAfterHasBeenSet() const { return m_retryAfterHasBeenSet; }
    inline void SetRetryAfter(const Aws::Utils::DateTime& value) { m_retryAfterHasBeenSet = true; m_retryAfter = value; }
    inline void SetRetryAfter(Aws::Utils::DateTime&& value) { m_retryAfterHasBeenSet = true; m_retryAfter = std::move(value); }
    inline ProgressEvent& WithRetryAfter(const Aws::Utils::DateTime& value) { SetRetryAfter(value); return *this;}
    inline ProgressEvent& WithRetryAfter(Aws::Utils::DateTime&& value) { SetRetryAfter(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_typeName;
    bool m_typeNameHasBeenSet = false;

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    Aws::String m_requestToken;
    bool m_requestTokenHasBeenSet = false;

    Aws::String m_hooksRequestToken;
    bool m_hooksRequestTokenHasBeenSet = false;

    Operation m_operation;
    bool m_operationHasBeenSet = false;

    OperationStatus m_operationStatus;
    bool m_operationStatusHasBeenSet = false;

    Aws::Utils::DateTime m_eventTime;
    bool m_eventTimeHasBeenSet = false;

    Aws::String m_resourceModel;
    bool m_resourceModelHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    HandlerErrorCode m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::Utils::DateTime m_retryAfter;
    bool m_retryAfterHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudControlApi
} // namespace Aws
