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
    AWS_CLOUDCONTROLAPI_API ProgressEvent() = default;
    AWS_CLOUDCONTROLAPI_API ProgressEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDCONTROLAPI_API ProgressEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDCONTROLAPI_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the resource type used in the operation.</p>
     */
    inline const Aws::String& GetTypeName() const { return m_typeName; }
    inline bool TypeNameHasBeenSet() const { return m_typeNameHasBeenSet; }
    template<typename TypeNameT = Aws::String>
    void SetTypeName(TypeNameT&& value) { m_typeNameHasBeenSet = true; m_typeName = std::forward<TypeNameT>(value); }
    template<typename TypeNameT = Aws::String>
    ProgressEvent& WithTypeName(TypeNameT&& value) { SetTypeName(std::forward<TypeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The primary identifier for the resource.</p>  <p>In some cases, the
     * resource identifier may be available before the resource operation has reached a
     * status of <code>SUCCESS</code>.</p> 
     */
    inline const Aws::String& GetIdentifier() const { return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    template<typename IdentifierT = Aws::String>
    void SetIdentifier(IdentifierT&& value) { m_identifierHasBeenSet = true; m_identifier = std::forward<IdentifierT>(value); }
    template<typename IdentifierT = Aws::String>
    ProgressEvent& WithIdentifier(IdentifierT&& value) { SetIdentifier(std::forward<IdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique token representing this resource operation request.</p> <p>Use the
     * <code>RequestToken</code> with <a
     * href="https://docs.aws.amazon.com/cloudcontrolapi/latest/APIReference/API_GetResourceRequestStatus.html">GetResourceRequestStatus</a>
     * to return the current status of a resource operation request.</p>
     */
    inline const Aws::String& GetRequestToken() const { return m_requestToken; }
    inline bool RequestTokenHasBeenSet() const { return m_requestTokenHasBeenSet; }
    template<typename RequestTokenT = Aws::String>
    void SetRequestToken(RequestTokenT&& value) { m_requestTokenHasBeenSet = true; m_requestToken = std::forward<RequestTokenT>(value); }
    template<typename RequestTokenT = Aws::String>
    ProgressEvent& WithRequestToken(RequestTokenT&& value) { SetRequestToken(std::forward<RequestTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique token representing the Hooks operation for the request.</p>
     */
    inline const Aws::String& GetHooksRequestToken() const { return m_hooksRequestToken; }
    inline bool HooksRequestTokenHasBeenSet() const { return m_hooksRequestTokenHasBeenSet; }
    template<typename HooksRequestTokenT = Aws::String>
    void SetHooksRequestToken(HooksRequestTokenT&& value) { m_hooksRequestTokenHasBeenSet = true; m_hooksRequestToken = std::forward<HooksRequestTokenT>(value); }
    template<typename HooksRequestTokenT = Aws::String>
    ProgressEvent& WithHooksRequestToken(HooksRequestTokenT&& value) { SetHooksRequestToken(std::forward<HooksRequestTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource operation type.</p>
     */
    inline Operation GetOperation() const { return m_operation; }
    inline bool OperationHasBeenSet() const { return m_operationHasBeenSet; }
    inline void SetOperation(Operation value) { m_operationHasBeenSet = true; m_operation = value; }
    inline ProgressEvent& WithOperation(Operation value) { SetOperation(value); return *this;}
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
    inline OperationStatus GetOperationStatus() const { return m_operationStatus; }
    inline bool OperationStatusHasBeenSet() const { return m_operationStatusHasBeenSet; }
    inline void SetOperationStatus(OperationStatus value) { m_operationStatusHasBeenSet = true; m_operationStatus = value; }
    inline ProgressEvent& WithOperationStatus(OperationStatus value) { SetOperationStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the resource operation request was initiated.</p>
     */
    inline const Aws::Utils::DateTime& GetEventTime() const { return m_eventTime; }
    inline bool EventTimeHasBeenSet() const { return m_eventTimeHasBeenSet; }
    template<typename EventTimeT = Aws::Utils::DateTime>
    void SetEventTime(EventTimeT&& value) { m_eventTimeHasBeenSet = true; m_eventTime = std::forward<EventTimeT>(value); }
    template<typename EventTimeT = Aws::Utils::DateTime>
    ProgressEvent& WithEventTime(EventTimeT&& value) { SetEventTime(std::forward<EventTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A JSON string containing the resource model, consisting of each resource
     * property and its current value.</p>
     */
    inline const Aws::String& GetResourceModel() const { return m_resourceModel; }
    inline bool ResourceModelHasBeenSet() const { return m_resourceModelHasBeenSet; }
    template<typename ResourceModelT = Aws::String>
    void SetResourceModel(ResourceModelT&& value) { m_resourceModelHasBeenSet = true; m_resourceModel = std::forward<ResourceModelT>(value); }
    template<typename ResourceModelT = Aws::String>
    ProgressEvent& WithResourceModel(ResourceModelT&& value) { SetResourceModel(std::forward<ResourceModelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any message explaining the current status.</p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    ProgressEvent& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For requests with a status of <code>FAILED</code>, the associated error
     * code.</p> <p>For error code definitions, see <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/resource-type-test-contract-errors.html">Handler
     * error codes</a> in the <i>CloudFormation Command Line Interface User Guide for
     * Extension Development</i>.</p>
     */
    inline HandlerErrorCode GetErrorCode() const { return m_errorCode; }
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
    inline void SetErrorCode(HandlerErrorCode value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }
    inline ProgressEvent& WithErrorCode(HandlerErrorCode value) { SetErrorCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When to next request the status of this resource operation request.</p>
     */
    inline const Aws::Utils::DateTime& GetRetryAfter() const { return m_retryAfter; }
    inline bool RetryAfterHasBeenSet() const { return m_retryAfterHasBeenSet; }
    template<typename RetryAfterT = Aws::Utils::DateTime>
    void SetRetryAfter(RetryAfterT&& value) { m_retryAfterHasBeenSet = true; m_retryAfter = std::forward<RetryAfterT>(value); }
    template<typename RetryAfterT = Aws::Utils::DateTime>
    ProgressEvent& WithRetryAfter(RetryAfterT&& value) { SetRetryAfter(std::forward<RetryAfterT>(value)); return *this;}
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

    Operation m_operation{Operation::NOT_SET};
    bool m_operationHasBeenSet = false;

    OperationStatus m_operationStatus{OperationStatus::NOT_SET};
    bool m_operationStatusHasBeenSet = false;

    Aws::Utils::DateTime m_eventTime{};
    bool m_eventTimeHasBeenSet = false;

    Aws::String m_resourceModel;
    bool m_resourceModelHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    HandlerErrorCode m_errorCode{HandlerErrorCode::NOT_SET};
    bool m_errorCodeHasBeenSet = false;

    Aws::Utils::DateTime m_retryAfter{};
    bool m_retryAfterHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudControlApi
} // namespace Aws
