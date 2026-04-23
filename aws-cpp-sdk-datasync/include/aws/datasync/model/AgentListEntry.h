/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   * returns an array that contains a list of agents when the <a>ListAgents</a>
   * operation is called.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/AgentListEntry">AWS
   * API Reference</a></p>
   */
  class AWS_DATASYNC_API AgentListEntry
  {
  public:
    AgentListEntry();
    AgentListEntry(Aws::Utils::Json::JsonView jsonValue);
    AgentListEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_agentArnHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    AgentStatus m_status;
    bool m_statusHasBeenSet;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
