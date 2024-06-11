/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datasync/model/AgentStatus.h>
#include <aws/datasync/model/Platform.h>
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
namespace DataSync
{
namespace Model
{

  /**
   * <p>Represents a single entry in a list (or array) of DataSync agents when you
   * call the <a
   * href="https://docs.aws.amazon.com/datasync/latest/userguide/API_ListAgents.html">ListAgents</a>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/AgentListEntry">AWS
   * API Reference</a></p>
   */
  class AgentListEntry
  {
  public:
    AWS_DATASYNC_API AgentListEntry();
    AWS_DATASYNC_API AgentListEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API AgentListEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of a DataSync agent.</p>
     */
    inline const Aws::String& GetAgentArn() const{ return m_agentArn; }
    inline bool AgentArnHasBeenSet() const { return m_agentArnHasBeenSet; }
    inline void SetAgentArn(const Aws::String& value) { m_agentArnHasBeenSet = true; m_agentArn = value; }
    inline void SetAgentArn(Aws::String&& value) { m_agentArnHasBeenSet = true; m_agentArn = std::move(value); }
    inline void SetAgentArn(const char* value) { m_agentArnHasBeenSet = true; m_agentArn.assign(value); }
    inline AgentListEntry& WithAgentArn(const Aws::String& value) { SetAgentArn(value); return *this;}
    inline AgentListEntry& WithAgentArn(Aws::String&& value) { SetAgentArn(std::move(value)); return *this;}
    inline AgentListEntry& WithAgentArn(const char* value) { SetAgentArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of an agent.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline AgentListEntry& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline AgentListEntry& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline AgentListEntry& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of an agent.</p> <ul> <li> <p>If the status is
     * <code>ONLINE</code>, the agent is configured properly and ready to use.</p>
     * </li> <li> <p>If the status is <code>OFFLINE</code>, the agent has been out of
     * contact with DataSync for five minutes or longer. This can happen for a few
     * reasons. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/troubleshooting-datasync-agents.html#troubleshoot-agent-offline">What
     * do I do if my agent is offline?</a> </p> </li> </ul>
     */
    inline const AgentStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const AgentStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(AgentStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline AgentListEntry& WithStatus(const AgentStatus& value) { SetStatus(value); return *this;}
    inline AgentListEntry& WithStatus(AgentStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The platform-related details about the agent, such as the version number.</p>
     */
    inline const Platform& GetPlatform() const{ return m_platform; }
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }
    inline void SetPlatform(const Platform& value) { m_platformHasBeenSet = true; m_platform = value; }
    inline void SetPlatform(Platform&& value) { m_platformHasBeenSet = true; m_platform = std::move(value); }
    inline AgentListEntry& WithPlatform(const Platform& value) { SetPlatform(value); return *this;}
    inline AgentListEntry& WithPlatform(Platform&& value) { SetPlatform(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_agentArn;
    bool m_agentArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    AgentStatus m_status;
    bool m_statusHasBeenSet = false;

    Platform m_platform;
    bool m_platformHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
