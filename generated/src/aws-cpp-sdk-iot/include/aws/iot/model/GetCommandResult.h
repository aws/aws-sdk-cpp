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
    AWS_IOT_API GetCommandResult();
    AWS_IOT_API GetCommandResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API GetCommandResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier of the command.</p>
     */
    inline const Aws::String& GetCommandId() const{ return m_commandId; }
    inline void SetCommandId(const Aws::String& value) { m_commandId = value; }
    inline void SetCommandId(Aws::String&& value) { m_commandId = std::move(value); }
    inline void SetCommandId(const char* value) { m_commandId.assign(value); }
    inline GetCommandResult& WithCommandId(const Aws::String& value) { SetCommandId(value); return *this;}
    inline GetCommandResult& WithCommandId(Aws::String&& value) { SetCommandId(std::move(value)); return *this;}
    inline GetCommandResult& WithCommandId(const char* value) { SetCommandId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Number (ARN) of the command. For example,
     * <code>arn:aws:iot:&lt;region&gt;:&lt;accountid&gt;:command/&lt;commandId&gt;</code>
     * </p>
     */
    inline const Aws::String& GetCommandArn() const{ return m_commandArn; }
    inline void SetCommandArn(const Aws::String& value) { m_commandArn = value; }
    inline void SetCommandArn(Aws::String&& value) { m_commandArn = std::move(value); }
    inline void SetCommandArn(const char* value) { m_commandArn.assign(value); }
    inline GetCommandResult& WithCommandArn(const Aws::String& value) { SetCommandArn(value); return *this;}
    inline GetCommandResult& WithCommandArn(Aws::String&& value) { SetCommandArn(std::move(value)); return *this;}
    inline GetCommandResult& WithCommandArn(const char* value) { SetCommandArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The namespace of the command.</p>
     */
    inline const CommandNamespace& GetNamespace() const{ return m_namespace; }
    inline void SetNamespace(const CommandNamespace& value) { m_namespace = value; }
    inline void SetNamespace(CommandNamespace&& value) { m_namespace = std::move(value); }
    inline GetCommandResult& WithNamespace(const CommandNamespace& value) { SetNamespace(value); return *this;}
    inline GetCommandResult& WithNamespace(CommandNamespace&& value) { SetNamespace(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user-friendly name in the console for the command.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }
    inline void SetDisplayName(const Aws::String& value) { m_displayName = value; }
    inline void SetDisplayName(Aws::String&& value) { m_displayName = std::move(value); }
    inline void SetDisplayName(const char* value) { m_displayName.assign(value); }
    inline GetCommandResult& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}
    inline GetCommandResult& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}
    inline GetCommandResult& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A short text description of the command.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline GetCommandResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline GetCommandResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline GetCommandResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of parameters for the command created.</p>
     */
    inline const Aws::Vector<CommandParameter>& GetMandatoryParameters() const{ return m_mandatoryParameters; }
    inline void SetMandatoryParameters(const Aws::Vector<CommandParameter>& value) { m_mandatoryParameters = value; }
    inline void SetMandatoryParameters(Aws::Vector<CommandParameter>&& value) { m_mandatoryParameters = std::move(value); }
    inline GetCommandResult& WithMandatoryParameters(const Aws::Vector<CommandParameter>& value) { SetMandatoryParameters(value); return *this;}
    inline GetCommandResult& WithMandatoryParameters(Aws::Vector<CommandParameter>&& value) { SetMandatoryParameters(std::move(value)); return *this;}
    inline GetCommandResult& AddMandatoryParameters(const CommandParameter& value) { m_mandatoryParameters.push_back(value); return *this; }
    inline GetCommandResult& AddMandatoryParameters(CommandParameter&& value) { m_mandatoryParameters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The payload object that you provided for the command.</p>
     */
    inline const CommandPayload& GetPayload() const{ return m_payload; }
    inline void SetPayload(const CommandPayload& value) { m_payload = value; }
    inline void SetPayload(CommandPayload&& value) { m_payload = std::move(value); }
    inline GetCommandResult& WithPayload(const CommandPayload& value) { SetPayload(value); return *this;}
    inline GetCommandResult& WithPayload(CommandPayload&& value) { SetPayload(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM role that you provided when creating the command with
     * <code>AWS-IoT-FleetWise</code> as the namespace.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }
    inline GetCommandResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline GetCommandResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline GetCommandResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp, when the command was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline GetCommandResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline GetCommandResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp, when the command was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAt = value; }
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAt = std::move(value); }
    inline GetCommandResult& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}
    inline GetCommandResult& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the command has been deprecated.</p>
     */
    inline bool GetDeprecated() const{ return m_deprecated; }
    inline void SetDeprecated(bool value) { m_deprecated = value; }
    inline GetCommandResult& WithDeprecated(bool value) { SetDeprecated(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the command is being deleted.</p>
     */
    inline bool GetPendingDeletion() const{ return m_pendingDeletion; }
    inline void SetPendingDeletion(bool value) { m_pendingDeletion = value; }
    inline GetCommandResult& WithPendingDeletion(bool value) { SetPendingDeletion(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetCommandResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetCommandResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetCommandResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_commandId;

    Aws::String m_commandArn;

    CommandNamespace m_namespace;

    Aws::String m_displayName;

    Aws::String m_description;

    Aws::Vector<CommandParameter> m_mandatoryParameters;

    CommandPayload m_payload;

    Aws::String m_roleArn;

    Aws::Utils::DateTime m_createdAt;

    Aws::Utils::DateTime m_lastUpdatedAt;

    bool m_deprecated;

    bool m_pendingDeletion;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
