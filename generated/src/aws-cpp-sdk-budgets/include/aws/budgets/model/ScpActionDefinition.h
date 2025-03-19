/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/budgets/Budgets_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Budgets
{
namespace Model
{

  /**
   * <p>The service control policies (SCP) action definition details. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/ScpActionDefinition">AWS
   * API Reference</a></p>
   */
  class ScpActionDefinition
  {
  public:
    AWS_BUDGETS_API ScpActionDefinition() = default;
    AWS_BUDGETS_API ScpActionDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_BUDGETS_API ScpActionDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BUDGETS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The policy ID attached. </p>
     */
    inline const Aws::String& GetPolicyId() const { return m_policyId; }
    inline bool PolicyIdHasBeenSet() const { return m_policyIdHasBeenSet; }
    template<typename PolicyIdT = Aws::String>
    void SetPolicyId(PolicyIdT&& value) { m_policyIdHasBeenSet = true; m_policyId = std::forward<PolicyIdT>(value); }
    template<typename PolicyIdT = Aws::String>
    ScpActionDefinition& WithPolicyId(PolicyIdT&& value) { SetPolicyId(std::forward<PolicyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of target IDs. </p>
     */
    inline const Aws::Vector<Aws::String>& GetTargetIds() const { return m_targetIds; }
    inline bool TargetIdsHasBeenSet() const { return m_targetIdsHasBeenSet; }
    template<typename TargetIdsT = Aws::Vector<Aws::String>>
    void SetTargetIds(TargetIdsT&& value) { m_targetIdsHasBeenSet = true; m_targetIds = std::forward<TargetIdsT>(value); }
    template<typename TargetIdsT = Aws::Vector<Aws::String>>
    ScpActionDefinition& WithTargetIds(TargetIdsT&& value) { SetTargetIds(std::forward<TargetIdsT>(value)); return *this;}
    template<typename TargetIdsT = Aws::String>
    ScpActionDefinition& AddTargetIds(TargetIdsT&& value) { m_targetIdsHasBeenSet = true; m_targetIds.emplace_back(std::forward<TargetIdsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_policyId;
    bool m_policyIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_targetIds;
    bool m_targetIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace Budgets
} // namespace Aws
