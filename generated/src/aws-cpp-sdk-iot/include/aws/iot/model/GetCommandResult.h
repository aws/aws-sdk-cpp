/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/CommandNamespace.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iot/model/CommandPayload.h>
#include <aws/core/utils/DateTime.h>
#include <aws/iot/model/CommandParameter.h>
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
namespace IoT
{
namespace Model
{
  class GetCommandResult
  {
  public:
    AWS_IOT_API GetCommandResult() = default;
    AWS_IOT_API GetCommandResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API GetCommandResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier of the command.</p>
     */
    inline const Aws::String& GetCommandId() const { return m_commandId; }
    template<typename CommandIdT = Aws::String>
    void SetCommandId(CommandIdT&& value) { m_commandIdHasBeenSet = true; m_commandId = std::forward<CommandIdT>(value); }
    template<typename CommandIdT = Aws::String>
    GetCommandResult& WithCommandId(CommandIdT&& value) { SetCommandId(std::forward<CommandIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Number (ARN) of the command. For example,
     * <code>arn:aws:iot:&lt;region&gt;:&lt;accountid&gt;:command/&lt;commandId&gt;</code>
     * </p>
     */
    inline const Aws::String& GetCommandArn() const { return m_commandArn; }
    template<typename CommandArnT = Aws::String>
    void SetCommandArn(CommandArnT&& value) { m_commandArnHasBeenSet = true; m_commandArn = std::forward<CommandArnT>(value); }
    template<typename CommandArnT = Aws::String>
    GetCommandResult& WithCommandArn(CommandArnT&& value) { SetCommandArn(std::forward<CommandArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The namespace of the command.</p>
     */
    inline CommandNamespace GetNamespace() const { return m_namespace; }
    inline void SetNamespace(CommandNamespace value) { m_namespaceHasBeenSet = true; m_namespace = value; }
    inline GetCommandResult& WithNamespace(CommandNamespace value) { SetNamespace(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user-friendly name in the console for the command.</p>
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    GetCommandResult& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A short text description of the command.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    GetCommandResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of parameters for the command created.</p>
     */
    inline const Aws::Vector<CommandParameter>& GetMandatoryParameters() const { return m_mandatoryParameters; }
    template<typename MandatoryParametersT = Aws::Vector<CommandParameter>>
    void SetMandatoryParameters(MandatoryParametersT&& value) { m_mandatoryParametersHasBeenSet = true; m_mandatoryParameters = std::forward<MandatoryParametersT>(value); }
    template<typename MandatoryParametersT = Aws::Vector<CommandParameter>>
    GetCommandResult& WithMandatoryParameters(MandatoryParametersT&& value) { SetMandatoryParameters(std::forward<MandatoryParametersT>(value)); return *this;}
    template<typename MandatoryParametersT = CommandParameter>
    GetCommandResult& AddMandatoryParameters(MandatoryParametersT&& value) { m_mandatoryParametersHasBeenSet = true; m_mandatoryParameters.emplace_back(std::forward<MandatoryParametersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The payload object that you provided for the command.</p>
     */
    inline const CommandPayload& GetPayload() const { return m_payload; }
    template<typename PayloadT = CommandPayload>
    void SetPayload(PayloadT&& value) { m_payloadHasBeenSet = true; m_payload = std::forward<PayloadT>(value); }
    template<typename PayloadT = CommandPayload>
    GetCommandResult& WithPayload(PayloadT&& value) { SetPayload(std::forward<PayloadT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM role that you provided when creating the command with
     * <code>AWS-IoT-FleetWise</code> as the namespace.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    GetCommandResult& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp, when the command was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    GetCommandResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp, when the command was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const { return m_lastUpdatedAt; }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    void SetLastUpdatedAt(LastUpdatedAtT&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::forward<LastUpdatedAtT>(value); }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    GetCommandResult& WithLastUpdatedAt(LastUpdatedAtT&& value) { SetLastUpdatedAt(std::forward<LastUpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the command has been deprecated.</p>
     */
    inline bool GetDeprecated() const { return m_deprecated; }
    inline void SetDeprecated(bool value) { m_deprecatedHasBeenSet = true; m_deprecated = value; }
    inline GetCommandResult& WithDeprecated(bool value) { SetDeprecated(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the command is being deleted.</p>
     */
    inline bool GetPendingDeletion() const { return m_pendingDeletion; }
    inline void SetPendingDeletion(bool value) { m_pendingDeletionHasBeenSet = true; m_pendingDeletion = value; }
    inline GetCommandResult& WithPendingDeletion(bool value) { SetPendingDeletion(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetCommandResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_commandId;
    bool m_commandIdHasBeenSet = false;

    Aws::String m_commandArn;
    bool m_commandArnHasBeenSet = false;

    CommandNamespace m_namespace{CommandNamespace::NOT_SET};
    bool m_namespaceHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<CommandParameter> m_mandatoryParameters;
    bool m_mandatoryParametersHasBeenSet = false;

    CommandPayload m_payload;
    bool m_payloadHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt{};
    bool m_lastUpdatedAtHasBeenSet = false;

    bool m_deprecated{false};
    bool m_deprecatedHasBeenSet = false;

    bool m_pendingDeletion{false};
    bool m_pendingDeletionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
