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
    AWS_CLOUDFORMATION_API RecordHandlerProgressRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RecordHandlerProgress"; }

    AWS_CLOUDFORMATION_API Aws::String SerializePayload() const override;

  protected:
    AWS_CLOUDFORMATION_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>Reserved for use by the <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/what-is-cloudformation-cli.html">CloudFormation
     * CLI</a>.</p>
     */
    inline const Aws::String& GetBearerToken() const { return m_bearerToken; }
    inline bool BearerTokenHasBeenSet() const { return m_bearerTokenHasBeenSet; }
    template<typename BearerTokenT = Aws::String>
    void SetBearerToken(BearerTokenT&& value) { m_bearerTokenHasBeenSet = true; m_bearerToken = std::forward<BearerTokenT>(value); }
    template<typename BearerTokenT = Aws::String>
    RecordHandlerProgressRequest& WithBearerToken(BearerTokenT&& value) { SetBearerToken(std::forward<BearerTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reserved for use by the <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/what-is-cloudformation-cli.html">CloudFormation
     * CLI</a>.</p>
     */
    inline OperationStatus GetOperationStatus() const { return m_operationStatus; }
    inline bool OperationStatusHasBeenSet() const { return m_operationStatusHasBeenSet; }
    inline void SetOperationStatus(OperationStatus value) { m_operationStatusHasBeenSet = true; m_operationStatus = value; }
    inline RecordHandlerProgressRequest& WithOperationStatus(OperationStatus value) { SetOperationStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reserved for use by the <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/what-is-cloudformation-cli.html">CloudFormation
     * CLI</a>.</p>
     */
    inline OperationStatus GetCurrentOperationStatus() const { return m_currentOperationStatus; }
    inline bool CurrentOperationStatusHasBeenSet() const { return m_currentOperationStatusHasBeenSet; }
    inline void SetCurrentOperationStatus(OperationStatus value) { m_currentOperationStatusHasBeenSet = true; m_currentOperationStatus = value; }
    inline RecordHandlerProgressRequest& WithCurrentOperationStatus(OperationStatus value) { SetCurrentOperationStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reserved for use by the <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/what-is-cloudformation-cli.html">CloudFormation
     * CLI</a>.</p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    RecordHandlerProgressRequest& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reserved for use by the <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/what-is-cloudformation-cli.html">CloudFormation
     * CLI</a>.</p>
     */
    inline HandlerErrorCode GetErrorCode() const { return m_errorCode; }
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
    inline void SetErrorCode(HandlerErrorCode value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }
    inline RecordHandlerProgressRequest& WithErrorCode(HandlerErrorCode value) { SetErrorCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reserved for use by the <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/what-is-cloudformation-cli.html">CloudFormation
     * CLI</a>.</p>
     */
    inline const Aws::String& GetResourceModel() const { return m_resourceModel; }
    inline bool ResourceModelHasBeenSet() const { return m_resourceModelHasBeenSet; }
    template<typename ResourceModelT = Aws::String>
    void SetResourceModel(ResourceModelT&& value) { m_resourceModelHasBeenSet = true; m_resourceModel = std::forward<ResourceModelT>(value); }
    template<typename ResourceModelT = Aws::String>
    RecordHandlerProgressRequest& WithResourceModel(ResourceModelT&& value) { SetResourceModel(std::forward<ResourceModelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reserved for use by the <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/what-is-cloudformation-cli.html">CloudFormation
     * CLI</a>.</p>
     */
    inline const Aws::String& GetClientRequestToken() const { return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    template<typename ClientRequestTokenT = Aws::String>
    void SetClientRequestToken(ClientRequestTokenT&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::forward<ClientRequestTokenT>(value); }
    template<typename ClientRequestTokenT = Aws::String>
    RecordHandlerProgressRequest& WithClientRequestToken(ClientRequestTokenT&& value) { SetClientRequestToken(std::forward<ClientRequestTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_bearerToken;
    bool m_bearerTokenHasBeenSet = false;

    OperationStatus m_operationStatus{OperationStatus::NOT_SET};
    bool m_operationStatusHasBeenSet = false;

    OperationStatus m_currentOperationStatus{OperationStatus::NOT_SET};
    bool m_currentOperationStatusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    HandlerErrorCode m_errorCode{HandlerErrorCode::NOT_SET};
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_resourceModel;
    bool m_resourceModelHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
