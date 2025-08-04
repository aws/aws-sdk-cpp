/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
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
namespace BedrockAgentCore
{
namespace Model
{

  /**
   * <p>Contains information about a branch in an AgentCore Memory resource. Branches
   * allow for organizing events into different conversation threads or
   * paths.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/Branch">AWS
   * API Reference</a></p>
   */
  class Branch
  {
  public:
    AWS_BEDROCKAGENTCORE_API Branch() = default;
    AWS_BEDROCKAGENTCORE_API Branch(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORE_API Branch& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the root event for this branch.</p>
     */
    inline const Aws::String& GetRootEventId() const { return m_rootEventId; }
    inline bool RootEventIdHasBeenSet() const { return m_rootEventIdHasBeenSet; }
    template<typename RootEventIdT = Aws::String>
    void SetRootEventId(RootEventIdT&& value) { m_rootEventIdHasBeenSet = true; m_rootEventId = std::forward<RootEventIdT>(value); }
    template<typename RootEventIdT = Aws::String>
    Branch& WithRootEventId(RootEventIdT&& value) { SetRootEventId(std::forward<RootEventIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the branch.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Branch& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_rootEventId;
    bool m_rootEventIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCore
} // namespace Aws
