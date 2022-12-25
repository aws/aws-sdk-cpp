/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datasync/model/AgentStatus.h>
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
   * <p>Represents a single entry in a list of agents. <code>AgentListEntry</code>
   * returns an array that contains a list of agents when the <a
   * href="https://docs.aws.amazon.com/datasync/latest/userguide/API_ListAgents.html">ListAgents</a>
   * operation is called.</p><p><h3>See Also:</h3>   <a
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


    /**
     * <p>The Amazon Resource Name (ARN) of the agent.</p>
     */
    inline const Aws::String& GetAgentArn() const{ return m_agentArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the agent.</p>
     */
    inline bool AgentArnHasBeenSet() const { return m_agentArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the agent.</p>
     */
    inline void SetAgentArn(const Aws::String& value) { m_agentArnHasBeenSet = true; m_agentArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the agent.</p>
     */
    inline void SetAgentArn(Aws::String&& value) { m_agentArnHasBeenSet = true; m_agentArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the agent.</p>
     */
    inline void SetAgentArn(const char* value) { m_agentArnHasBeenSet = true; m_agentArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the agent.</p>
     */
    inline AgentListEntry& WithAgentArn(const Aws::String& value) { SetAgentArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the agent.</p>
     */
    inline AgentListEntry& WithAgentArn(Aws::String&& value) { SetAgentArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the agent.</p>
     */
    inline AgentListEntry& WithAgentArn(const char* value) { SetAgentArn(value); return *this;}


    /**
     * <p>The name of the agent.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the agent.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the agent.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the agent.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the agent.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the agent.</p>
     */
    inline AgentListEntry& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the agent.</p>
     */
    inline AgentListEntry& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the agent.</p>
     */
    inline AgentListEntry& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The status of the agent.</p>
     */
    inline const AgentStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the agent.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the agent.</p>
     */
    inline void SetStatus(const AgentStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the agent.</p>
     */
    inline void SetStatus(AgentStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the agent.</p>
     */
    inline AgentListEntry& WithStatus(const AgentStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the agent.</p>
     */
    inline AgentListEntry& WithStatus(AgentStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_agentArn;
    bool m_agentArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    AgentStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
