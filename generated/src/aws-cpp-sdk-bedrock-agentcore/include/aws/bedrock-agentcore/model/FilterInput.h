/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/BranchFilter.h>
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
   * <p>Contains filter criteria for listing events.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/FilterInput">AWS
   * API Reference</a></p>
   */
  class FilterInput
  {
  public:
    AWS_BEDROCKAGENTCORE_API FilterInput() = default;
    AWS_BEDROCKAGENTCORE_API FilterInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORE_API FilterInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The branch filter criteria to apply when listing events.</p>
     */
    inline const BranchFilter& GetBranch() const { return m_branch; }
    inline bool BranchHasBeenSet() const { return m_branchHasBeenSet; }
    template<typename BranchT = BranchFilter>
    void SetBranch(BranchT&& value) { m_branchHasBeenSet = true; m_branch = std::forward<BranchT>(value); }
    template<typename BranchT = BranchFilter>
    FilterInput& WithBranch(BranchT&& value) { SetBranch(std::forward<BranchT>(value)); return *this;}
    ///@}
  private:

    BranchFilter m_branch;
    bool m_branchHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCore
} // namespace Aws
