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
   * <p>A list of Amazon Resource Names (ARNs) of agents to use for a Network File
   * System (NFS) location.</p><p><h3>See Also:</h3>   <a
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


    /**
     * <p>ARNs of the agents to use for an NFS location.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAgentArns() const{ return m_agentArns; }

    /**
     * <p>ARNs of the agents to use for an NFS location.</p>
     */
    inline bool AgentArnsHasBeenSet() const { return m_agentArnsHasBeenSet; }

    /**
     * <p>ARNs of the agents to use for an NFS location.</p>
     */
    inline void SetAgentArns(const Aws::Vector<Aws::String>& value) { m_agentArnsHasBeenSet = true; m_agentArns = value; }

    /**
     * <p>ARNs of the agents to use for an NFS location.</p>
     */
    inline void SetAgentArns(Aws::Vector<Aws::String>&& value) { m_agentArnsHasBeenSet = true; m_agentArns = std::move(value); }

    /**
     * <p>ARNs of the agents to use for an NFS location.</p>
     */
    inline OnPremConfig& WithAgentArns(const Aws::Vector<Aws::String>& value) { SetAgentArns(value); return *this;}

    /**
     * <p>ARNs of the agents to use for an NFS location.</p>
     */
    inline OnPremConfig& WithAgentArns(Aws::Vector<Aws::String>&& value) { SetAgentArns(std::move(value)); return *this;}

    /**
     * <p>ARNs of the agents to use for an NFS location.</p>
     */
    inline OnPremConfig& AddAgentArns(const Aws::String& value) { m_agentArnsHasBeenSet = true; m_agentArns.push_back(value); return *this; }

    /**
     * <p>ARNs of the agents to use for an NFS location.</p>
     */
    inline OnPremConfig& AddAgentArns(Aws::String&& value) { m_agentArnsHasBeenSet = true; m_agentArns.push_back(std::move(value)); return *this; }

    /**
     * <p>ARNs of the agents to use for an NFS location.</p>
     */
    inline OnPremConfig& AddAgentArns(const char* value) { m_agentArnsHasBeenSet = true; m_agentArns.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_agentArns;
    bool m_agentArnsHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
