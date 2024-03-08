/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/discovery/ApplicationDiscoveryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/discovery/model/DeleteAgentErrorCode.h>
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
namespace ApplicationDiscoveryService
{
namespace Model
{

  /**
   * <p> An object representing the agent or data collector that failed to delete,
   * each containing agentId, errorMessage, and errorCode. </p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/BatchDeleteAgentError">AWS
   * API Reference</a></p>
   */
  class BatchDeleteAgentError
  {
  public:
    AWS_APPLICATIONDISCOVERYSERVICE_API BatchDeleteAgentError();
    AWS_APPLICATIONDISCOVERYSERVICE_API BatchDeleteAgentError(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONDISCOVERYSERVICE_API BatchDeleteAgentError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONDISCOVERYSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The ID of the agent or data collector to delete. </p>
     */
    inline const Aws::String& GetAgentId() const{ return m_agentId; }

    /**
     * <p> The ID of the agent or data collector to delete. </p>
     */
    inline bool AgentIdHasBeenSet() const { return m_agentIdHasBeenSet; }

    /**
     * <p> The ID of the agent or data collector to delete. </p>
     */
    inline void SetAgentId(const Aws::String& value) { m_agentIdHasBeenSet = true; m_agentId = value; }

    /**
     * <p> The ID of the agent or data collector to delete. </p>
     */
    inline void SetAgentId(Aws::String&& value) { m_agentIdHasBeenSet = true; m_agentId = std::move(value); }

    /**
     * <p> The ID of the agent or data collector to delete. </p>
     */
    inline void SetAgentId(const char* value) { m_agentIdHasBeenSet = true; m_agentId.assign(value); }

    /**
     * <p> The ID of the agent or data collector to delete. </p>
     */
    inline BatchDeleteAgentError& WithAgentId(const Aws::String& value) { SetAgentId(value); return *this;}

    /**
     * <p> The ID of the agent or data collector to delete. </p>
     */
    inline BatchDeleteAgentError& WithAgentId(Aws::String&& value) { SetAgentId(std::move(value)); return *this;}

    /**
     * <p> The ID of the agent or data collector to delete. </p>
     */
    inline BatchDeleteAgentError& WithAgentId(const char* value) { SetAgentId(value); return *this;}


    /**
     * <p> The description of the error that occurred for the delete failed agent. </p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p> The description of the error that occurred for the delete failed agent. </p>
     */
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }

    /**
     * <p> The description of the error that occurred for the delete failed agent. </p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }

    /**
     * <p> The description of the error that occurred for the delete failed agent. </p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }

    /**
     * <p> The description of the error that occurred for the delete failed agent. </p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }

    /**
     * <p> The description of the error that occurred for the delete failed agent. </p>
     */
    inline BatchDeleteAgentError& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p> The description of the error that occurred for the delete failed agent. </p>
     */
    inline BatchDeleteAgentError& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p> The description of the error that occurred for the delete failed agent. </p>
     */
    inline BatchDeleteAgentError& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}


    /**
     * <p> The type of error that occurred for the delete failed agent. Valid status
     * are: AGENT_IN_USE | NOT_FOUND | INTERNAL_SERVER_ERROR. </p>
     */
    inline const DeleteAgentErrorCode& GetErrorCode() const{ return m_errorCode; }

    /**
     * <p> The type of error that occurred for the delete failed agent. Valid status
     * are: AGENT_IN_USE | NOT_FOUND | INTERNAL_SERVER_ERROR. </p>
     */
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }

    /**
     * <p> The type of error that occurred for the delete failed agent. Valid status
     * are: AGENT_IN_USE | NOT_FOUND | INTERNAL_SERVER_ERROR. </p>
     */
    inline void SetErrorCode(const DeleteAgentErrorCode& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    /**
     * <p> The type of error that occurred for the delete failed agent. Valid status
     * are: AGENT_IN_USE | NOT_FOUND | INTERNAL_SERVER_ERROR. </p>
     */
    inline void SetErrorCode(DeleteAgentErrorCode&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }

    /**
     * <p> The type of error that occurred for the delete failed agent. Valid status
     * are: AGENT_IN_USE | NOT_FOUND | INTERNAL_SERVER_ERROR. </p>
     */
    inline BatchDeleteAgentError& WithErrorCode(const DeleteAgentErrorCode& value) { SetErrorCode(value); return *this;}

    /**
     * <p> The type of error that occurred for the delete failed agent. Valid status
     * are: AGENT_IN_USE | NOT_FOUND | INTERNAL_SERVER_ERROR. </p>
     */
    inline BatchDeleteAgentError& WithErrorCode(DeleteAgentErrorCode&& value) { SetErrorCode(std::move(value)); return *this;}

  private:

    Aws::String m_agentId;
    bool m_agentIdHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    DeleteAgentErrorCode m_errorCode;
    bool m_errorCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
