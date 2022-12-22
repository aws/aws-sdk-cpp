/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class StartSessionRequest : public SSMRequest
  {
  public:
    AWS_SSM_API StartSessionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartSession"; }

    AWS_SSM_API Aws::String SerializePayload() const override;

    AWS_SSM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The managed node to connect to for the session.</p>
     */
    inline const Aws::String& GetTarget() const{ return m_target; }

    /**
     * <p>The managed node to connect to for the session.</p>
     */
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }

    /**
     * <p>The managed node to connect to for the session.</p>
     */
    inline void SetTarget(const Aws::String& value) { m_targetHasBeenSet = true; m_target = value; }

    /**
     * <p>The managed node to connect to for the session.</p>
     */
    inline void SetTarget(Aws::String&& value) { m_targetHasBeenSet = true; m_target = std::move(value); }

    /**
     * <p>The managed node to connect to for the session.</p>
     */
    inline void SetTarget(const char* value) { m_targetHasBeenSet = true; m_target.assign(value); }

    /**
     * <p>The managed node to connect to for the session.</p>
     */
    inline StartSessionRequest& WithTarget(const Aws::String& value) { SetTarget(value); return *this;}

    /**
     * <p>The managed node to connect to for the session.</p>
     */
    inline StartSessionRequest& WithTarget(Aws::String&& value) { SetTarget(std::move(value)); return *this;}

    /**
     * <p>The managed node to connect to for the session.</p>
     */
    inline StartSessionRequest& WithTarget(const char* value) { SetTarget(value); return *this;}


    /**
     * <p>The name of the SSM document you want to use to define the type of session,
     * input parameters, or preferences for the session. For example,
     * <code>SSM-SessionManagerRunShell</code>. You can call the <a>GetDocument</a> API
     * to verify the document exists before attempting to start a session. If no
     * document name is provided, a shell to the managed node is launched by default.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/session-manager-working-with-sessions-start.html">Start
     * a session</a> in the <i>Amazon Web Services Systems Manager User Guide</i>.</p>
     */
    inline const Aws::String& GetDocumentName() const{ return m_documentName; }

    /**
     * <p>The name of the SSM document you want to use to define the type of session,
     * input parameters, or preferences for the session. For example,
     * <code>SSM-SessionManagerRunShell</code>. You can call the <a>GetDocument</a> API
     * to verify the document exists before attempting to start a session. If no
     * document name is provided, a shell to the managed node is launched by default.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/session-manager-working-with-sessions-start.html">Start
     * a session</a> in the <i>Amazon Web Services Systems Manager User Guide</i>.</p>
     */
    inline bool DocumentNameHasBeenSet() const { return m_documentNameHasBeenSet; }

    /**
     * <p>The name of the SSM document you want to use to define the type of session,
     * input parameters, or preferences for the session. For example,
     * <code>SSM-SessionManagerRunShell</code>. You can call the <a>GetDocument</a> API
     * to verify the document exists before attempting to start a session. If no
     * document name is provided, a shell to the managed node is launched by default.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/session-manager-working-with-sessions-start.html">Start
     * a session</a> in the <i>Amazon Web Services Systems Manager User Guide</i>.</p>
     */
    inline void SetDocumentName(const Aws::String& value) { m_documentNameHasBeenSet = true; m_documentName = value; }

    /**
     * <p>The name of the SSM document you want to use to define the type of session,
     * input parameters, or preferences for the session. For example,
     * <code>SSM-SessionManagerRunShell</code>. You can call the <a>GetDocument</a> API
     * to verify the document exists before attempting to start a session. If no
     * document name is provided, a shell to the managed node is launched by default.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/session-manager-working-with-sessions-start.html">Start
     * a session</a> in the <i>Amazon Web Services Systems Manager User Guide</i>.</p>
     */
    inline void SetDocumentName(Aws::String&& value) { m_documentNameHasBeenSet = true; m_documentName = std::move(value); }

    /**
     * <p>The name of the SSM document you want to use to define the type of session,
     * input parameters, or preferences for the session. For example,
     * <code>SSM-SessionManagerRunShell</code>. You can call the <a>GetDocument</a> API
     * to verify the document exists before attempting to start a session. If no
     * document name is provided, a shell to the managed node is launched by default.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/session-manager-working-with-sessions-start.html">Start
     * a session</a> in the <i>Amazon Web Services Systems Manager User Guide</i>.</p>
     */
    inline void SetDocumentName(const char* value) { m_documentNameHasBeenSet = true; m_documentName.assign(value); }

    /**
     * <p>The name of the SSM document you want to use to define the type of session,
     * input parameters, or preferences for the session. For example,
     * <code>SSM-SessionManagerRunShell</code>. You can call the <a>GetDocument</a> API
     * to verify the document exists before attempting to start a session. If no
     * document name is provided, a shell to the managed node is launched by default.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/session-manager-working-with-sessions-start.html">Start
     * a session</a> in the <i>Amazon Web Services Systems Manager User Guide</i>.</p>
     */
    inline StartSessionRequest& WithDocumentName(const Aws::String& value) { SetDocumentName(value); return *this;}

    /**
     * <p>The name of the SSM document you want to use to define the type of session,
     * input parameters, or preferences for the session. For example,
     * <code>SSM-SessionManagerRunShell</code>. You can call the <a>GetDocument</a> API
     * to verify the document exists before attempting to start a session. If no
     * document name is provided, a shell to the managed node is launched by default.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/session-manager-working-with-sessions-start.html">Start
     * a session</a> in the <i>Amazon Web Services Systems Manager User Guide</i>.</p>
     */
    inline StartSessionRequest& WithDocumentName(Aws::String&& value) { SetDocumentName(std::move(value)); return *this;}

    /**
     * <p>The name of the SSM document you want to use to define the type of session,
     * input parameters, or preferences for the session. For example,
     * <code>SSM-SessionManagerRunShell</code>. You can call the <a>GetDocument</a> API
     * to verify the document exists before attempting to start a session. If no
     * document name is provided, a shell to the managed node is launched by default.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/session-manager-working-with-sessions-start.html">Start
     * a session</a> in the <i>Amazon Web Services Systems Manager User Guide</i>.</p>
     */
    inline StartSessionRequest& WithDocumentName(const char* value) { SetDocumentName(value); return *this;}


    /**
     * <p>The reason for connecting to the instance. This value is included in the
     * details for the Amazon CloudWatch Events event created when you start the
     * session.</p>
     */
    inline const Aws::String& GetReason() const{ return m_reason; }

    /**
     * <p>The reason for connecting to the instance. This value is included in the
     * details for the Amazon CloudWatch Events event created when you start the
     * session.</p>
     */
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }

    /**
     * <p>The reason for connecting to the instance. This value is included in the
     * details for the Amazon CloudWatch Events event created when you start the
     * session.</p>
     */
    inline void SetReason(const Aws::String& value) { m_reasonHasBeenSet = true; m_reason = value; }

    /**
     * <p>The reason for connecting to the instance. This value is included in the
     * details for the Amazon CloudWatch Events event created when you start the
     * session.</p>
     */
    inline void SetReason(Aws::String&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }

    /**
     * <p>The reason for connecting to the instance. This value is included in the
     * details for the Amazon CloudWatch Events event created when you start the
     * session.</p>
     */
    inline void SetReason(const char* value) { m_reasonHasBeenSet = true; m_reason.assign(value); }

    /**
     * <p>The reason for connecting to the instance. This value is included in the
     * details for the Amazon CloudWatch Events event created when you start the
     * session.</p>
     */
    inline StartSessionRequest& WithReason(const Aws::String& value) { SetReason(value); return *this;}

    /**
     * <p>The reason for connecting to the instance. This value is included in the
     * details for the Amazon CloudWatch Events event created when you start the
     * session.</p>
     */
    inline StartSessionRequest& WithReason(Aws::String&& value) { SetReason(std::move(value)); return *this;}

    /**
     * <p>The reason for connecting to the instance. This value is included in the
     * details for the Amazon CloudWatch Events event created when you start the
     * session.</p>
     */
    inline StartSessionRequest& WithReason(const char* value) { SetReason(value); return *this;}


    /**
     * <p>The values you want to specify for the parameters defined in the Session
     * document.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetParameters() const{ return m_parameters; }

    /**
     * <p>The values you want to specify for the parameters defined in the Session
     * document.</p>
     */
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }

    /**
     * <p>The values you want to specify for the parameters defined in the Session
     * document.</p>
     */
    inline void SetParameters(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>The values you want to specify for the parameters defined in the Session
     * document.</p>
     */
    inline void SetParameters(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }

    /**
     * <p>The values you want to specify for the parameters defined in the Session
     * document.</p>
     */
    inline StartSessionRequest& WithParameters(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetParameters(value); return *this;}

    /**
     * <p>The values you want to specify for the parameters defined in the Session
     * document.</p>
     */
    inline StartSessionRequest& WithParameters(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetParameters(std::move(value)); return *this;}

    /**
     * <p>The values you want to specify for the parameters defined in the Session
     * document.</p>
     */
    inline StartSessionRequest& AddParameters(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }

    /**
     * <p>The values you want to specify for the parameters defined in the Session
     * document.</p>
     */
    inline StartSessionRequest& AddParameters(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>The values you want to specify for the parameters defined in the Session
     * document.</p>
     */
    inline StartSessionRequest& AddParameters(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The values you want to specify for the parameters defined in the Session
     * document.</p>
     */
    inline StartSessionRequest& AddParameters(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The values you want to specify for the parameters defined in the Session
     * document.</p>
     */
    inline StartSessionRequest& AddParameters(const char* key, Aws::Vector<Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The values you want to specify for the parameters defined in the Session
     * document.</p>
     */
    inline StartSessionRequest& AddParameters(const char* key, const Aws::Vector<Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }

  private:

    Aws::String m_target;
    bool m_targetHasBeenSet = false;

    Aws::String m_documentName;
    bool m_documentNameHasBeenSet = false;

    Aws::String m_reason;
    bool m_reasonHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_parameters;
    bool m_parametersHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
