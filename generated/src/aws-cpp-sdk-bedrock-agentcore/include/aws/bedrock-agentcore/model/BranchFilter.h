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
   * <p>Contains filter criteria for branches when listing events.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/BranchFilter">AWS
   * API Reference</a></p>
   */
  class BranchFilter
  {
  public:
    AWS_BEDROCKAGENTCORE_API BranchFilter() = default;
    AWS_BEDROCKAGENTCORE_API BranchFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORE_API BranchFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the branch to filter by.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    BranchFilter& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to include parent branches in the results. Set to true to
     * include parent branches, or false to exclude them.</p>
     */
    inline bool GetIncludeParentBranches() const { return m_includeParentBranches; }
    inline bool IncludeParentBranchesHasBeenSet() const { return m_includeParentBranchesHasBeenSet; }
    inline void SetIncludeParentBranches(bool value) { m_includeParentBranchesHasBeenSet = true; m_includeParentBranches = value; }
    inline BranchFilter& WithIncludeParentBranches(bool value) { SetIncludeParentBranches(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    bool m_includeParentBranches{false};
    bool m_includeParentBranchesHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCore
} // namespace Aws
