/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/lambda/LambdaRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda/model/FunctionUrlAuthType.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Lambda
{
namespace Model
{

  /**
   */
  class AddPermissionRequest : public LambdaRequest
  {
  public:
    AWS_LAMBDA_API AddPermissionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AddPermission"; }

    AWS_LAMBDA_API Aws::String SerializePayload() const override;

    AWS_LAMBDA_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The name or ARN of the Lambda function, version, or alias.</p> <p
     * class="title"> <b>Name formats</b> </p> <ul> <li> <p> <b>Function name</b> –
     * <code>my-function</code> (name-only), <code>my-function:v1</code> (with
     * alias).</p> </li> <li> <p> <b>Function ARN</b> –
     * <code>arn:aws:lambda:us-west-2:123456789012:function:my-function</code>.</p>
     * </li> <li> <p> <b>Partial ARN</b> –
     * <code>123456789012:function:my-function</code>.</p> </li> </ul> <p>You can
     * append a version number or alias to any of the formats. The length constraint
     * applies only to the full ARN. If you specify only the function name, it is
     * limited to 64 characters in length.</p>
     */
    inline const Aws::String& GetFunctionName() const { return m_functionName; }
    inline bool FunctionNameHasBeenSet() const { return m_functionNameHasBeenSet; }
    template<typename FunctionNameT = Aws::String>
    void SetFunctionName(FunctionNameT&& value) { m_functionNameHasBeenSet = true; m_functionName = std::forward<FunctionNameT>(value); }
    template<typename FunctionNameT = Aws::String>
    AddPermissionRequest& WithFunctionName(FunctionNameT&& value) { SetFunctionName(std::forward<FunctionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A statement identifier that differentiates the statement from others in the
     * same policy.</p>
     */
    inline const Aws::String& GetStatementId() const { return m_statementId; }
    inline bool StatementIdHasBeenSet() const { return m_statementIdHasBeenSet; }
    template<typename StatementIdT = Aws::String>
    void SetStatementId(StatementIdT&& value) { m_statementIdHasBeenSet = true; m_statementId = std::forward<StatementIdT>(value); }
    template<typename StatementIdT = Aws::String>
    AddPermissionRequest& WithStatementId(StatementIdT&& value) { SetStatementId(std::forward<StatementIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action that the principal can use on the function. For example,
     * <code>lambda:InvokeFunction</code> or <code>lambda:GetFunction</code>.</p>
     */
    inline const Aws::String& GetAction() const { return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    template<typename ActionT = Aws::String>
    void SetAction(ActionT&& value) { m_actionHasBeenSet = true; m_action = std::forward<ActionT>(value); }
    template<typename ActionT = Aws::String>
    AddPermissionRequest& WithAction(ActionT&& value) { SetAction(std::forward<ActionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services service, Amazon Web Services account, IAM user, or
     * IAM role that invokes the function. If you specify a service, use
     * <code>SourceArn</code> or <code>SourceAccount</code> to limit who can invoke the
     * function through that service.</p>
     */
    inline const Aws::String& GetPrincipal() const { return m_principal; }
    inline bool PrincipalHasBeenSet() const { return m_principalHasBeenSet; }
    template<typename PrincipalT = Aws::String>
    void SetPrincipal(PrincipalT&& value) { m_principalHasBeenSet = true; m_principal = std::forward<PrincipalT>(value); }
    template<typename PrincipalT = Aws::String>
    AddPermissionRequest& WithPrincipal(PrincipalT&& value) { SetPrincipal(std::forward<PrincipalT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For Amazon Web Services services, the ARN of the Amazon Web Services resource
     * that invokes the function. For example, an Amazon S3 bucket or Amazon SNS
     * topic.</p> <p>Note that Lambda configures the comparison using the
     * <code>StringLike</code> operator.</p>
     */
    inline const Aws::String& GetSourceArn() const { return m_sourceArn; }
    inline bool SourceArnHasBeenSet() const { return m_sourceArnHasBeenSet; }
    template<typename SourceArnT = Aws::String>
    void SetSourceArn(SourceArnT&& value) { m_sourceArnHasBeenSet = true; m_sourceArn = std::forward<SourceArnT>(value); }
    template<typename SourceArnT = Aws::String>
    AddPermissionRequest& WithSourceArn(SourceArnT&& value) { SetSourceArn(std::forward<SourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For Amazon Web Services service, the ID of the Amazon Web Services account
     * that owns the resource. Use this together with <code>SourceArn</code> to ensure
     * that the specified account owns the resource. It is possible for an Amazon S3
     * bucket to be deleted by its owner and recreated by another account.</p>
     */
    inline const Aws::String& GetSourceAccount() const { return m_sourceAccount; }
    inline bool SourceAccountHasBeenSet() const { return m_sourceAccountHasBeenSet; }
    template<typename SourceAccountT = Aws::String>
    void SetSourceAccount(SourceAccountT&& value) { m_sourceAccountHasBeenSet = true; m_sourceAccount = std::forward<SourceAccountT>(value); }
    template<typename SourceAccountT = Aws::String>
    AddPermissionRequest& WithSourceAccount(SourceAccountT&& value) { SetSourceAccount(std::forward<SourceAccountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For Alexa Smart Home functions, a token that the invoker must supply.</p>
     */
    inline const Aws::String& GetEventSourceToken() const { return m_eventSourceToken; }
    inline bool EventSourceTokenHasBeenSet() const { return m_eventSourceTokenHasBeenSet; }
    template<typename EventSourceTokenT = Aws::String>
    void SetEventSourceToken(EventSourceTokenT&& value) { m_eventSourceTokenHasBeenSet = true; m_eventSourceToken = std::forward<EventSourceTokenT>(value); }
    template<typename EventSourceTokenT = Aws::String>
    AddPermissionRequest& WithEventSourceToken(EventSourceTokenT&& value) { SetEventSourceToken(std::forward<EventSourceTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify a version or alias to add permissions to a published version of the
     * function.</p>
     */
    inline const Aws::String& GetQualifier() const { return m_qualifier; }
    inline bool QualifierHasBeenSet() const { return m_qualifierHasBeenSet; }
    template<typename QualifierT = Aws::String>
    void SetQualifier(QualifierT&& value) { m_qualifierHasBeenSet = true; m_qualifier = std::forward<QualifierT>(value); }
    template<typename QualifierT = Aws::String>
    AddPermissionRequest& WithQualifier(QualifierT&& value) { SetQualifier(std::forward<QualifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Update the policy only if the revision ID matches the ID that's specified.
     * Use this option to avoid modifying a policy that has changed since you last read
     * it.</p>
     */
    inline const Aws::String& GetRevisionId() const { return m_revisionId; }
    inline bool RevisionIdHasBeenSet() const { return m_revisionIdHasBeenSet; }
    template<typename RevisionIdT = Aws::String>
    void SetRevisionId(RevisionIdT&& value) { m_revisionIdHasBeenSet = true; m_revisionId = std::forward<RevisionIdT>(value); }
    template<typename RevisionIdT = Aws::String>
    AddPermissionRequest& WithRevisionId(RevisionIdT&& value) { SetRevisionId(std::forward<RevisionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for your organization in Organizations. Use this to grant
     * permissions to all the Amazon Web Services accounts under this organization.</p>
     */
    inline const Aws::String& GetPrincipalOrgID() const { return m_principalOrgID; }
    inline bool PrincipalOrgIDHasBeenSet() const { return m_principalOrgIDHasBeenSet; }
    template<typename PrincipalOrgIDT = Aws::String>
    void SetPrincipalOrgID(PrincipalOrgIDT&& value) { m_principalOrgIDHasBeenSet = true; m_principalOrgID = std::forward<PrincipalOrgIDT>(value); }
    template<typename PrincipalOrgIDT = Aws::String>
    AddPermissionRequest& WithPrincipalOrgID(PrincipalOrgIDT&& value) { SetPrincipalOrgID(std::forward<PrincipalOrgIDT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of authentication that your function URL uses. Set to
     * <code>AWS_IAM</code> if you want to restrict access to authenticated users only.
     * Set to <code>NONE</code> if you want to bypass IAM authentication to create a
     * public endpoint. For more information, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/urls-auth.html">Security and
     * auth model for Lambda function URLs</a>.</p>
     */
    inline FunctionUrlAuthType GetFunctionUrlAuthType() const { return m_functionUrlAuthType; }
    inline bool FunctionUrlAuthTypeHasBeenSet() const { return m_functionUrlAuthTypeHasBeenSet; }
    inline void SetFunctionUrlAuthType(FunctionUrlAuthType value) { m_functionUrlAuthTypeHasBeenSet = true; m_functionUrlAuthType = value; }
    inline AddPermissionRequest& WithFunctionUrlAuthType(FunctionUrlAuthType value) { SetFunctionUrlAuthType(value); return *this;}
    ///@}
  private:

    Aws::String m_functionName;
    bool m_functionNameHasBeenSet = false;

    Aws::String m_statementId;
    bool m_statementIdHasBeenSet = false;

    Aws::String m_action;
    bool m_actionHasBeenSet = false;

    Aws::String m_principal;
    bool m_principalHasBeenSet = false;

    Aws::String m_sourceArn;
    bool m_sourceArnHasBeenSet = false;

    Aws::String m_sourceAccount;
    bool m_sourceAccountHasBeenSet = false;

    Aws::String m_eventSourceToken;
    bool m_eventSourceTokenHasBeenSet = false;

    Aws::String m_qualifier;
    bool m_qualifierHasBeenSet = false;

    Aws::String m_revisionId;
    bool m_revisionIdHasBeenSet = false;

    Aws::String m_principalOrgID;
    bool m_principalOrgIDHasBeenSet = false;

    FunctionUrlAuthType m_functionUrlAuthType{FunctionUrlAuthType::NOT_SET};
    bool m_functionUrlAuthTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
