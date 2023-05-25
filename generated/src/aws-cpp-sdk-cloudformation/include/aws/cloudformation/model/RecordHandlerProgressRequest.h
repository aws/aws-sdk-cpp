/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/cloudformation/CloudFormationRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudformation/model/OperationStatus.h>
#include <aws/cloudformation/model/HandlerErrorCode.h>
#include <utility>

namespace Aws
{
namespace CloudFormation
{
namespace Model
{

  /**
   */
  class RecordHandlerProgressRequest : public CloudFormationRequest
  {
  public:
    AWS_CLOUDFORMATION_API RecordHandlerProgressRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RecordHandlerProgress"; }

    AWS_CLOUDFORMATION_API Aws::String SerializePayload() const override;

  protected:
    AWS_CLOUDFORMATION_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>Reserved for use by the <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/what-is-cloudformation-cli.html">CloudFormation
     * CLI</a>.</p>
     */
    inline const Aws::String& GetBearerToken() const{ return m_bearerToken; }

    /**
     * <p>Reserved for use by the <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/what-is-cloudformation-cli.html">CloudFormation
     * CLI</a>.</p>
     */
    inline bool BearerTokenHasBeenSet() const { return m_bearerTokenHasBeenSet; }

    /**
     * <p>Reserved for use by the <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/what-is-cloudformation-cli.html">CloudFormation
     * CLI</a>.</p>
     */
    inline void SetBearerToken(const Aws::String& value) { m_bearerTokenHasBeenSet = true; m_bearerToken = value; }

    /**
     * <p>Reserved for use by the <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/what-is-cloudformation-cli.html">CloudFormation
     * CLI</a>.</p>
     */
    inline void SetBearerToken(Aws::String&& value) { m_bearerTokenHasBeenSet = true; m_bearerToken = std::move(value); }

    /**
     * <p>Reserved for use by the <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/what-is-cloudformation-cli.html">CloudFormation
     * CLI</a>.</p>
     */
    inline void SetBearerToken(const char* value) { m_bearerTokenHasBeenSet = true; m_bearerToken.assign(value); }

    /**
     * <p>Reserved for use by the <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/what-is-cloudformation-cli.html">CloudFormation
     * CLI</a>.</p>
     */
    inline RecordHandlerProgressRequest& WithBearerToken(const Aws::String& value) { SetBearerToken(value); return *this;}

    /**
     * <p>Reserved for use by the <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/what-is-cloudformation-cli.html">CloudFormation
     * CLI</a>.</p>
     */
    inline RecordHandlerProgressRequest& WithBearerToken(Aws::String&& value) { SetBearerToken(std::move(value)); return *this;}

    /**
     * <p>Reserved for use by the <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/what-is-cloudformation-cli.html">CloudFormation
     * CLI</a>.</p>
     */
    inline RecordHandlerProgressRequest& WithBearerToken(const char* value) { SetBearerToken(value); return *this;}


    /**
     * <p>Reserved for use by the <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/what-is-cloudformation-cli.html">CloudFormation
     * CLI</a>.</p>
     */
    inline const OperationStatus& GetOperationStatus() const{ return m_operationStatus; }

    /**
     * <p>Reserved for use by the <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/what-is-cloudformation-cli.html">CloudFormation
     * CLI</a>.</p>
     */
    inline bool OperationStatusHasBeenSet() const { return m_operationStatusHasBeenSet; }

    /**
     * <p>Reserved for use by the <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/what-is-cloudformation-cli.html">CloudFormation
     * CLI</a>.</p>
     */
    inline void SetOperationStatus(const OperationStatus& value) { m_operationStatusHasBeenSet = true; m_operationStatus = value; }

    /**
     * <p>Reserved for use by the <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/what-is-cloudformation-cli.html">CloudFormation
     * CLI</a>.</p>
     */
    inline void SetOperationStatus(OperationStatus&& value) { m_operationStatusHasBeenSet = true; m_operationStatus = std::move(value); }

    /**
     * <p>Reserved for use by the <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/what-is-cloudformation-cli.html">CloudFormation
     * CLI</a>.</p>
     */
    inline RecordHandlerProgressRequest& WithOperationStatus(const OperationStatus& value) { SetOperationStatus(value); return *this;}

    /**
     * <p>Reserved for use by the <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/what-is-cloudformation-cli.html">CloudFormation
     * CLI</a>.</p>
     */
    inline RecordHandlerProgressRequest& WithOperationStatus(OperationStatus&& value) { SetOperationStatus(std::move(value)); return *this;}


    /**
     * <p>Reserved for use by the <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/what-is-cloudformation-cli.html">CloudFormation
     * CLI</a>.</p>
     */
    inline const OperationStatus& GetCurrentOperationStatus() const{ return m_currentOperationStatus; }

    /**
     * <p>Reserved for use by the <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/what-is-cloudformation-cli.html">CloudFormation
     * CLI</a>.</p>
     */
    inline bool CurrentOperationStatusHasBeenSet() const { return m_currentOperationStatusHasBeenSet; }

    /**
     * <p>Reserved for use by the <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/what-is-cloudformation-cli.html">CloudFormation
     * CLI</a>.</p>
     */
    inline void SetCurrentOperationStatus(const OperationStatus& value) { m_currentOperationStatusHasBeenSet = true; m_currentOperationStatus = value; }

    /**
     * <p>Reserved for use by the <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/what-is-cloudformation-cli.html">CloudFormation
     * CLI</a>.</p>
     */
    inline void SetCurrentOperationStatus(OperationStatus&& value) { m_currentOperationStatusHasBeenSet = true; m_currentOperationStatus = std::move(value); }

    /**
     * <p>Reserved for use by the <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/what-is-cloudformation-cli.html">CloudFormation
     * CLI</a>.</p>
     */
    inline RecordHandlerProgressRequest& WithCurrentOperationStatus(const OperationStatus& value) { SetCurrentOperationStatus(value); return *this;}

    /**
     * <p>Reserved for use by the <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/what-is-cloudformation-cli.html">CloudFormation
     * CLI</a>.</p>
     */
    inline RecordHandlerProgressRequest& WithCurrentOperationStatus(OperationStatus&& value) { SetCurrentOperationStatus(std::move(value)); return *this;}


    /**
     * <p>Reserved for use by the <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/what-is-cloudformation-cli.html">CloudFormation
     * CLI</a>.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>Reserved for use by the <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/what-is-cloudformation-cli.html">CloudFormation
     * CLI</a>.</p>
     */
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }

    /**
     * <p>Reserved for use by the <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/what-is-cloudformation-cli.html">CloudFormation
     * CLI</a>.</p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }

    /**
     * <p>Reserved for use by the <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/what-is-cloudformation-cli.html">CloudFormation
     * CLI</a>.</p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }

    /**
     * <p>Reserved for use by the <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/what-is-cloudformation-cli.html">CloudFormation
     * CLI</a>.</p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }

    /**
     * <p>Reserved for use by the <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/what-is-cloudformation-cli.html">CloudFormation
     * CLI</a>.</p>
     */
    inline RecordHandlerProgressRequest& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>Reserved for use by the <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/what-is-cloudformation-cli.html">CloudFormation
     * CLI</a>.</p>
     */
    inline RecordHandlerProgressRequest& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>Reserved for use by the <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/what-is-cloudformation-cli.html">CloudFormation
     * CLI</a>.</p>
     */
    inline RecordHandlerProgressRequest& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}


    /**
     * <p>Reserved for use by the <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/what-is-cloudformation-cli.html">CloudFormation
     * CLI</a>.</p>
     */
    inline const HandlerErrorCode& GetErrorCode() const{ return m_errorCode; }

    /**
     * <p>Reserved for use by the <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/what-is-cloudformation-cli.html">CloudFormation
     * CLI</a>.</p>
     */
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }

    /**
     * <p>Reserved for use by the <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/what-is-cloudformation-cli.html">CloudFormation
     * CLI</a>.</p>
     */
    inline void SetErrorCode(const HandlerErrorCode& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    /**
     * <p>Reserved for use by the <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/what-is-cloudformation-cli.html">CloudFormation
     * CLI</a>.</p>
     */
    inline void SetErrorCode(HandlerErrorCode&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }

    /**
     * <p>Reserved for use by the <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/what-is-cloudformation-cli.html">CloudFormation
     * CLI</a>.</p>
     */
    inline RecordHandlerProgressRequest& WithErrorCode(const HandlerErrorCode& value) { SetErrorCode(value); return *this;}

    /**
     * <p>Reserved for use by the <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/what-is-cloudformation-cli.html">CloudFormation
     * CLI</a>.</p>
     */
    inline RecordHandlerProgressRequest& WithErrorCode(HandlerErrorCode&& value) { SetErrorCode(std::move(value)); return *this;}


    /**
     * <p>Reserved for use by the <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/what-is-cloudformation-cli.html">CloudFormation
     * CLI</a>.</p>
     */
    inline const Aws::String& GetResourceModel() const{ return m_resourceModel; }

    /**
     * <p>Reserved for use by the <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/what-is-cloudformation-cli.html">CloudFormation
     * CLI</a>.</p>
     */
    inline bool ResourceModelHasBeenSet() const { return m_resourceModelHasBeenSet; }

    /**
     * <p>Reserved for use by the <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/what-is-cloudformation-cli.html">CloudFormation
     * CLI</a>.</p>
     */
    inline void SetResourceModel(const Aws::String& value) { m_resourceModelHasBeenSet = true; m_resourceModel = value; }

    /**
     * <p>Reserved for use by the <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/what-is-cloudformation-cli.html">CloudFormation
     * CLI</a>.</p>
     */
    inline void SetResourceModel(Aws::String&& value) { m_resourceModelHasBeenSet = true; m_resourceModel = std::move(value); }

    /**
     * <p>Reserved for use by the <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/what-is-cloudformation-cli.html">CloudFormation
     * CLI</a>.</p>
     */
    inline void SetResourceModel(const char* value) { m_resourceModelHasBeenSet = true; m_resourceModel.assign(value); }

    /**
     * <p>Reserved for use by the <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/what-is-cloudformation-cli.html">CloudFormation
     * CLI</a>.</p>
     */
    inline RecordHandlerProgressRequest& WithResourceModel(const Aws::String& value) { SetResourceModel(value); return *this;}

    /**
     * <p>Reserved for use by the <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/what-is-cloudformation-cli.html">CloudFormation
     * CLI</a>.</p>
     */
    inline RecordHandlerProgressRequest& WithResourceModel(Aws::String&& value) { SetResourceModel(std::move(value)); return *this;}

    /**
     * <p>Reserved for use by the <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/what-is-cloudformation-cli.html">CloudFormation
     * CLI</a>.</p>
     */
    inline RecordHandlerProgressRequest& WithResourceModel(const char* value) { SetResourceModel(value); return *this;}


    /**
     * <p>Reserved for use by the <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/what-is-cloudformation-cli.html">CloudFormation
     * CLI</a>.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>Reserved for use by the <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/what-is-cloudformation-cli.html">CloudFormation
     * CLI</a>.</p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>Reserved for use by the <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/what-is-cloudformation-cli.html">CloudFormation
     * CLI</a>.</p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>Reserved for use by the <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/what-is-cloudformation-cli.html">CloudFormation
     * CLI</a>.</p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>Reserved for use by the <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/what-is-cloudformation-cli.html">CloudFormation
     * CLI</a>.</p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>Reserved for use by the <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/what-is-cloudformation-cli.html">CloudFormation
     * CLI</a>.</p>
     */
    inline RecordHandlerProgressRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>Reserved for use by the <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/what-is-cloudformation-cli.html">CloudFormation
     * CLI</a>.</p>
     */
    inline RecordHandlerProgressRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>Reserved for use by the <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/what-is-cloudformation-cli.html">CloudFormation
     * CLI</a>.</p>
     */
    inline RecordHandlerProgressRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}

  private:

    Aws::String m_bearerToken;
    bool m_bearerTokenHasBeenSet = false;

    OperationStatus m_operationStatus;
    bool m_operationStatusHasBeenSet = false;

    OperationStatus m_currentOperationStatus;
    bool m_currentOperationStatusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    HandlerErrorCode m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_resourceModel;
    bool m_resourceModelHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
