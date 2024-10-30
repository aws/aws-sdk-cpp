/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>The DataSync agents that can connect to your Network File System (NFS) file
   * server.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/OnPremConfig">AWS
   * API Reference</a></p>
   */
  class OnPremConfig
  {
  public:
    AWS_DATASYNC_API OnPremConfig();
    AWS_DATASYNC_API OnPremConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API OnPremConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Names (ARNs) of the DataSync agents that can connect to
     * your NFS file server.</p> <p>You can specify more than one agent. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/do-i-need-datasync-agent.html#multiple-agents">Using
     * multiple DataSync agents</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAgentArns() const{ return m_agentArns; }
    inline bool AgentArnsHasBeenSet() const { return m_agentArnsHasBeenSet; }
    inline void SetAgentArns(const Aws::Vector<Aws::String>& value) { m_agentArnsHasBeenSet = true; m_agentArns = value; }
    inline void SetAgentArns(Aws::Vector<Aws::String>&& value) { m_agentArnsHasBeenSet = true; m_agentArns = std::move(value); }
    inline OnPremConfig& WithAgentArns(const Aws::Vector<Aws::String>& value) { SetAgentArns(value); return *this;}
    inline OnPremConfig& WithAgentArns(Aws::Vector<Aws::String>&& value) { SetAgentArns(std::move(value)); return *this;}
    inline OnPremConfig& AddAgentArns(const Aws::String& value) { m_agentArnsHasBeenSet = true; m_agentArns.push_back(value); return *this; }
    inline OnPremConfig& AddAgentArns(Aws::String&& value) { m_agentArnsHasBeenSet = true; m_agentArns.push_back(std::move(value)); return *this; }
    inline OnPremConfig& AddAgentArns(const char* value) { m_agentArnsHasBeenSet = true; m_agentArns.push_back(value); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_agentArns;
    bool m_agentArnsHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
