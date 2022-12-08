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
    AWS_BUDGETS_API ScpActionDefinition();
    AWS_BUDGETS_API ScpActionDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_BUDGETS_API ScpActionDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BUDGETS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The policy ID attached. </p>
     */
    inline const Aws::String& GetPolicyId() const{ return m_policyId; }

    /**
     * <p>The policy ID attached. </p>
     */
    inline bool PolicyIdHasBeenSet() const { return m_policyIdHasBeenSet; }

    /**
     * <p>The policy ID attached. </p>
     */
    inline void SetPolicyId(const Aws::String& value) { m_policyIdHasBeenSet = true; m_policyId = value; }

    /**
     * <p>The policy ID attached. </p>
     */
    inline void SetPolicyId(Aws::String&& value) { m_policyIdHasBeenSet = true; m_policyId = std::move(value); }

    /**
     * <p>The policy ID attached. </p>
     */
    inline void SetPolicyId(const char* value) { m_policyIdHasBeenSet = true; m_policyId.assign(value); }

    /**
     * <p>The policy ID attached. </p>
     */
    inline ScpActionDefinition& WithPolicyId(const Aws::String& value) { SetPolicyId(value); return *this;}

    /**
     * <p>The policy ID attached. </p>
     */
    inline ScpActionDefinition& WithPolicyId(Aws::String&& value) { SetPolicyId(std::move(value)); return *this;}

    /**
     * <p>The policy ID attached. </p>
     */
    inline ScpActionDefinition& WithPolicyId(const char* value) { SetPolicyId(value); return *this;}


    /**
     * <p>A list of target IDs. </p>
     */
    inline const Aws::Vector<Aws::String>& GetTargetIds() const{ return m_targetIds; }

    /**
     * <p>A list of target IDs. </p>
     */
    inline bool TargetIdsHasBeenSet() const { return m_targetIdsHasBeenSet; }

    /**
     * <p>A list of target IDs. </p>
     */
    inline void SetTargetIds(const Aws::Vector<Aws::String>& value) { m_targetIdsHasBeenSet = true; m_targetIds = value; }

    /**
     * <p>A list of target IDs. </p>
     */
    inline void SetTargetIds(Aws::Vector<Aws::String>&& value) { m_targetIdsHasBeenSet = true; m_targetIds = std::move(value); }

    /**
     * <p>A list of target IDs. </p>
     */
    inline ScpActionDefinition& WithTargetIds(const Aws::Vector<Aws::String>& value) { SetTargetIds(value); return *this;}

    /**
     * <p>A list of target IDs. </p>
     */
    inline ScpActionDefinition& WithTargetIds(Aws::Vector<Aws::String>&& value) { SetTargetIds(std::move(value)); return *this;}

    /**
     * <p>A list of target IDs. </p>
     */
    inline ScpActionDefinition& AddTargetIds(const Aws::String& value) { m_targetIdsHasBeenSet = true; m_targetIds.push_back(value); return *this; }

    /**
     * <p>A list of target IDs. </p>
     */
    inline ScpActionDefinition& AddTargetIds(Aws::String&& value) { m_targetIdsHasBeenSet = true; m_targetIds.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of target IDs. </p>
     */
    inline ScpActionDefinition& AddTargetIds(const char* value) { m_targetIdsHasBeenSet = true; m_targetIds.push_back(value); return *this; }

  private:

    Aws::String m_policyId;
    bool m_policyIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_targetIds;
    bool m_targetIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace Budgets
} // namespace Aws
