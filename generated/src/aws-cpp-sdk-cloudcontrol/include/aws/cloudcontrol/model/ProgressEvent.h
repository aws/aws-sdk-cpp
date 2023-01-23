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


    /**
     * <p>The name of the resource type used in the operation.</p>
     */
    inline const Aws::String& GetTypeName() const{ return m_typeName; }

    /**
     * <p>The name of the resource type used in the operation.</p>
     */
    inline bool TypeNameHasBeenSet() const { return m_typeNameHasBeenSet; }

    /**
     * <p>The name of the resource type used in the operation.</p>
     */
    inline void SetTypeName(const Aws::String& value) { m_typeNameHasBeenSet = true; m_typeName = value; }

    /**
     * <p>The name of the resource type used in the operation.</p>
     */
    inline void SetTypeName(Aws::String&& value) { m_typeNameHasBeenSet = true; m_typeName = std::move(value); }

    /**
     * <p>The name of the resource type used in the operation.</p>
     */
    inline void SetTypeName(const char* value) { m_typeNameHasBeenSet = true; m_typeName.assign(value); }

    /**
     * <p>The name of the resource type used in the operation.</p>
     */
    inline ProgressEvent& WithTypeName(const Aws::String& value) { SetTypeName(value); return *this;}

    /**
     * <p>The name of the resource type used in the operation.</p>
     */
    inline ProgressEvent& WithTypeName(Aws::String&& value) { SetTypeName(std::move(value)); return *this;}

    /**
     * <p>The name of the resource type used in the operation.</p>
     */
    inline ProgressEvent& WithTypeName(const char* value) { SetTypeName(value); return *this;}


    /**
     * <p>The primary identifier for the resource.</p>  <p>In some cases, the
     * resource identifier may be available before the resource operation has reached a
     * status of <code>SUCCESS</code>.</p> 
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }

    /**
     * <p>The primary identifier for the resource.</p>  <p>In some cases, the
     * resource identifier may be available before the resource operation has reached a
     * status of <code>SUCCESS</code>.</p> 
     */
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }

    /**
     * <p>The primary identifier for the resource.</p>  <p>In some cases, the
     * resource identifier may be available before the resource operation has reached a
     * status of <code>SUCCESS</code>.</p> 
     */
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }

    /**
     * <p>The primary identifier for the resource.</p>  <p>In some cases, the
     * resource identifier may be available before the resource operation has reached a
     * status of <code>SUCCESS</code>.</p> 
     */
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }

    /**
     * <p>The primary identifier for the resource.</p>  <p>In some cases, the
     * resource identifier may be available before the resource operation has reached a
     * status of <code>SUCCESS</code>.</p> 
     */
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }

    /**
     * <p>The primary identifier for the resource.</p>  <p>In some cases, the
     * resource identifier may be available before the resource operation has reached a
     * status of <code>SUCCESS</code>.</p> 
     */
    inline ProgressEvent& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}

    /**
     * <p>The primary identifier for the resource.</p>  <p>In some cases, the
     * resource identifier may be available before the resource operation has reached a
     * status of <code>SUCCESS</code>.</p> 
     */
    inline ProgressEvent& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}

    /**
     * <p>The primary identifier for the resource.</p>  <p>In some cases, the
     * resource identifier may be available before the resource operation has reached a
     * status of <code>SUCCESS</code>.</p> 
     */
    inline ProgressEvent& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}


    /**
     * <p>The unique token representing this resource operation request.</p> <p>Use the
     * <code>RequestToken</code> with <a
     * href="https://docs.aws.amazon.com/cloudcontrolapi/latest/APIReference/API_GetResourceRequestStatus.html">GetResourceRequestStatus</a>
     * to return the current status of a resource operation request.</p>
     */
    inline const Aws::String& GetRequestToken() const{ return m_requestToken; }

    /**
     * <p>The unique token representing this resource operation request.</p> <p>Use the
     * <code>RequestToken</code> with <a
     * href="https://docs.aws.amazon.com/cloudcontrolapi/latest/APIReference/API_GetResourceRequestStatus.html">GetResourceRequestStatus</a>
     * to return the current status of a resource operation request.</p>
     */
    inline bool RequestTokenHasBeenSet() const { return m_requestTokenHasBeenSet; }

    /**
     * <p>The unique token representing this resource operation request.</p> <p>Use the
     * <code>RequestToken</code> with <a
     * href="https://docs.aws.amazon.com/cloudcontrolapi/latest/APIReference/API_GetResourceRequestStatus.html">GetResourceRequestStatus</a>
     * to return the current status of a resource operation request.</p>
     */
    inline void SetRequestToken(const Aws::String& value) { m_requestTokenHasBeenSet = true; m_requestToken = value; }

    /**
     * <p>The unique token representing this resource operation request.</p> <p>Use the
     * <code>RequestToken</code> with <a
     * href="https://docs.aws.amazon.com/cloudcontrolapi/latest/APIReference/API_GetResourceRequestStatus.html">GetResourceRequestStatus</a>
     * to return the current status of a resource operation request.</p>
     */
    inline void SetRequestToken(Aws::String&& value) { m_requestTokenHasBeenSet = true; m_requestToken = std::move(value); }

    /**
     * <p>The unique token representing this resource operation request.</p> <p>Use the
     * <code>RequestToken</code> with <a
     * href="https://docs.aws.amazon.com/cloudcontrolapi/latest/APIReference/API_GetResourceRequestStatus.html">GetResourceRequestStatus</a>
     * to return the current status of a resource operation request.</p>
     */
    inline void SetRequestToken(const char* value) { m_requestTokenHasBeenSet = true; m_requestToken.assign(value); }

    /**
     * <p>The unique token representing this resource operation request.</p> <p>Use the
     * <code>RequestToken</code> with <a
     * href="https://docs.aws.amazon.com/cloudcontrolapi/latest/APIReference/API_GetResourceRequestStatus.html">GetResourceRequestStatus</a>
     * to return the current status of a resource operation request.</p>
     */
    inline ProgressEvent& WithRequestToken(const Aws::String& value) { SetRequestToken(value); return *this;}

    /**
     * <p>The unique token representing this resource operation request.</p> <p>Use the
     * <code>RequestToken</code> with <a
     * href="https://docs.aws.amazon.com/cloudcontrolapi/latest/APIReference/API_GetResourceRequestStatus.html">GetResourceRequestStatus</a>
     * to return the current status of a resource operation request.</p>
     */
    inline ProgressEvent& WithRequestToken(Aws::String&& value) { SetRequestToken(std::move(value)); return *this;}

    /**
     * <p>The unique token representing this resource operation request.</p> <p>Use the
     * <code>RequestToken</code> with <a
     * href="https://docs.aws.amazon.com/cloudcontrolapi/latest/APIReference/API_GetResourceRequestStatus.html">GetResourceRequestStatus</a>
     * to return the current status of a resource operation request.</p>
     */
    inline ProgressEvent& WithRequestToken(const char* value) { SetRequestToken(value); return *this;}


    /**
     * <p>The resource operation type.</p>
     */
    inline const Operation& GetOperation() const{ return m_operation; }

    /**
     * <p>The resource operation type.</p>
     */
    inline bool OperationHasBeenSet() const { return m_operationHasBeenSet; }

    /**
     * <p>The resource operation type.</p>
     */
    inline void SetOperation(const Operation& value) { m_operationHasBeenSet = true; m_operation = value; }

    /**
     * <p>The resource operation type.</p>
     */
    inline void SetOperation(Operation&& value) { m_operationHasBeenSet = true; m_operation = std::move(value); }

    /**
     * <p>The resource operation type.</p>
     */
    inline ProgressEvent& WithOperation(const Operation& value) { SetOperation(value); return *this;}

    /**
     * <p>The resource operation type.</p>
     */
    inline ProgressEvent& WithOperation(Operation&& value) { SetOperation(std::move(value)); return *this;}


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
    inline bool OperationStatusHasBeenSet() const { return m_operationStatusHasBeenSet; }

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
    inline void SetOperationStatus(const OperationStatus& value) { m_operationStatusHasBeenSet = true; m_operationStatus = value; }

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
    inline void SetOperationStatus(OperationStatus&& value) { m_operationStatusHasBeenSet = true; m_operationStatus = std::move(value); }

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
    inline ProgressEvent& WithOperationStatus(const OperationStatus& value) { SetOperationStatus(value); return *this;}

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
    inline ProgressEvent& WithOperationStatus(OperationStatus&& value) { SetOperationStatus(std::move(value)); return *this;}


    /**
     * <p>When the resource operation request was initiated.</p>
     */
    inline const Aws::Utils::DateTime& GetEventTime() const{ return m_eventTime; }

    /**
     * <p>When the resource operation request was initiated.</p>
     */
    inline bool EventTimeHasBeenSet() const { return m_eventTimeHasBeenSet; }

    /**
     * <p>When the resource operation request was initiated.</p>
     */
    inline void SetEventTime(const Aws::Utils::DateTime& value) { m_eventTimeHasBeenSet = true; m_eventTime = value; }

    /**
     * <p>When the resource operation request was initiated.</p>
     */
    inline void SetEventTime(Aws::Utils::DateTime&& value) { m_eventTimeHasBeenSet = true; m_eventTime = std::move(value); }

    /**
     * <p>When the resource operation request was initiated.</p>
     */
    inline ProgressEvent& WithEventTime(const Aws::Utils::DateTime& value) { SetEventTime(value); return *this;}

    /**
     * <p>When the resource operation request was initiated.</p>
     */
    inline ProgressEvent& WithEventTime(Aws::Utils::DateTime&& value) { SetEventTime(std::move(value)); return *this;}


    /**
     * <p>A JSON string containing the resource model, consisting of each resource
     * property and its current value.</p>
     */
    inline const Aws::String& GetResourceModel() const{ return m_resourceModel; }

    /**
     * <p>A JSON string containing the resource model, consisting of each resource
     * property and its current value.</p>
     */
    inline bool ResourceModelHasBeenSet() const { return m_resourceModelHasBeenSet; }

    /**
     * <p>A JSON string containing the resource model, consisting of each resource
     * property and its current value.</p>
     */
    inline void SetResourceModel(const Aws::String& value) { m_resourceModelHasBeenSet = true; m_resourceModel = value; }

    /**
     * <p>A JSON string containing the resource model, consisting of each resource
     * property and its current value.</p>
     */
    inline void SetResourceModel(Aws::String&& value) { m_resourceModelHasBeenSet = true; m_resourceModel = std::move(value); }

    /**
     * <p>A JSON string containing the resource model, consisting of each resource
     * property and its current value.</p>
     */
    inline void SetResourceModel(const char* value) { m_resourceModelHasBeenSet = true; m_resourceModel.assign(value); }

    /**
     * <p>A JSON string containing the resource model, consisting of each resource
     * property and its current value.</p>
     */
    inline ProgressEvent& WithResourceModel(const Aws::String& value) { SetResourceModel(value); return *this;}

    /**
     * <p>A JSON string containing the resource model, consisting of each resource
     * property and its current value.</p>
     */
    inline ProgressEvent& WithResourceModel(Aws::String&& value) { SetResourceModel(std::move(value)); return *this;}

    /**
     * <p>A JSON string containing the resource model, consisting of each resource
     * property and its current value.</p>
     */
    inline ProgressEvent& WithResourceModel(const char* value) { SetResourceModel(value); return *this;}


    /**
     * <p>Any message explaining the current status.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>Any message explaining the current status.</p>
     */
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }

    /**
     * <p>Any message explaining the current status.</p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }

    /**
     * <p>Any message explaining the current status.</p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }

    /**
     * <p>Any message explaining the current status.</p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }

    /**
     * <p>Any message explaining the current status.</p>
     */
    inline ProgressEvent& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>Any message explaining the current status.</p>
     */
    inline ProgressEvent& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>Any message explaining the current status.</p>
     */
    inline ProgressEvent& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}


    /**
     * <p>For requests with a status of <code>FAILED</code>, the associated error
     * code.</p> <p>For error code definitions, see <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/resource-type-test-contract-errors.html">Handler
     * error codes</a> in the <i>CloudFormation Command Line Interface User Guide for
     * Extension Development</i>.</p>
     */
    inline const HandlerErrorCode& GetErrorCode() const{ return m_errorCode; }

    /**
     * <p>For requests with a status of <code>FAILED</code>, the associated error
     * code.</p> <p>For error code definitions, see <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/resource-type-test-contract-errors.html">Handler
     * error codes</a> in the <i>CloudFormation Command Line Interface User Guide for
     * Extension Development</i>.</p>
     */
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }

    /**
     * <p>For requests with a status of <code>FAILED</code>, the associated error
     * code.</p> <p>For error code definitions, see <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/resource-type-test-contract-errors.html">Handler
     * error codes</a> in the <i>CloudFormation Command Line Interface User Guide for
     * Extension Development</i>.</p>
     */
    inline void SetErrorCode(const HandlerErrorCode& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    /**
     * <p>For requests with a status of <code>FAILED</code>, the associated error
     * code.</p> <p>For error code definitions, see <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/resource-type-test-contract-errors.html">Handler
     * error codes</a> in the <i>CloudFormation Command Line Interface User Guide for
     * Extension Development</i>.</p>
     */
    inline void SetErrorCode(HandlerErrorCode&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }

    /**
     * <p>For requests with a status of <code>FAILED</code>, the associated error
     * code.</p> <p>For error code definitions, see <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/resource-type-test-contract-errors.html">Handler
     * error codes</a> in the <i>CloudFormation Command Line Interface User Guide for
     * Extension Development</i>.</p>
     */
    inline ProgressEvent& WithErrorCode(const HandlerErrorCode& value) { SetErrorCode(value); return *this;}

    /**
     * <p>For requests with a status of <code>FAILED</code>, the associated error
     * code.</p> <p>For error code definitions, see <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/resource-type-test-contract-errors.html">Handler
     * error codes</a> in the <i>CloudFormation Command Line Interface User Guide for
     * Extension Development</i>.</p>
     */
    inline ProgressEvent& WithErrorCode(HandlerErrorCode&& value) { SetErrorCode(std::move(value)); return *this;}


    /**
     * <p>When to next request the status of this resource operation request.</p>
     */
    inline const Aws::Utils::DateTime& GetRetryAfter() const{ return m_retryAfter; }

    /**
     * <p>When to next request the status of this resource operation request.</p>
     */
    inline bool RetryAfterHasBeenSet() const { return m_retryAfterHasBeenSet; }

    /**
     * <p>When to next request the status of this resource operation request.</p>
     */
    inline void SetRetryAfter(const Aws::Utils::DateTime& value) { m_retryAfterHasBeenSet = true; m_retryAfter = value; }

    /**
     * <p>When to next request the status of this resource operation request.</p>
     */
    inline void SetRetryAfter(Aws::Utils::DateTime&& value) { m_retryAfterHasBeenSet = true; m_retryAfter = std::move(value); }

    /**
     * <p>When to next request the status of this resource operation request.</p>
     */
    inline ProgressEvent& WithRetryAfter(const Aws::Utils::DateTime& value) { SetRetryAfter(value); return *this;}

    /**
     * <p>When to next request the status of this resource operation request.</p>
     */
    inline ProgressEvent& WithRetryAfter(Aws::Utils::DateTime&& value) { SetRetryAfter(std::move(value)); return *this;}

  private:

    Aws::String m_typeName;
    bool m_typeNameHasBeenSet = false;

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    Aws::String m_requestToken;
    bool m_requestTokenHasBeenSet = false;

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
