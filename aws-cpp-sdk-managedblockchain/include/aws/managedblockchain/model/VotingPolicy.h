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
#include <aws/managedblockchain/ManagedBlockchain_EXPORTS.h>
#include <aws/managedblockchain/model/ApprovalThresholdPolicy.h>
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
namespace ManagedBlockchain
{
namespace Model
{

  /**
   * <p> The voting rules for the network to decide if a proposal is accepted
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/VotingPolicy">AWS
   * API Reference</a></p>
   */
  class AWS_MANAGEDBLOCKCHAIN_API VotingPolicy
  {
  public:
    VotingPolicy();
    VotingPolicy(Aws::Utils::Json::JsonView jsonValue);
    VotingPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Defines the rules for the network for voting on proposals, such as the
     * percentage of <code>YES</code> votes required for the proposal to be approved
     * and the duration of the proposal. The policy applies to all proposals and is
     * specified when the network is created.</p>
     */
    inline const ApprovalThresholdPolicy& GetApprovalThresholdPolicy() const{ return m_approvalThresholdPolicy; }

    /**
     * <p>Defines the rules for the network for voting on proposals, such as the
     * percentage of <code>YES</code> votes required for the proposal to be approved
     * and the duration of the proposal. The policy applies to all proposals and is
     * specified when the network is created.</p>
     */
    inline bool ApprovalThresholdPolicyHasBeenSet() const { return m_approvalThresholdPolicyHasBeenSet; }

    /**
     * <p>Defines the rules for the network for voting on proposals, such as the
     * percentage of <code>YES</code> votes required for the proposal to be approved
     * and the duration of the proposal. The policy applies to all proposals and is
     * specified when the network is created.</p>
     */
    inline void SetApprovalThresholdPolicy(const ApprovalThresholdPolicy& value) { m_approvalThresholdPolicyHasBeenSet = true; m_approvalThresholdPolicy = value; }

    /**
     * <p>Defines the rules for the network for voting on proposals, such as the
     * percentage of <code>YES</code> votes required for the proposal to be approved
     * and the duration of the proposal. The policy applies to all proposals and is
     * specified when the network is created.</p>
     */
    inline void SetApprovalThresholdPolicy(ApprovalThresholdPolicy&& value) { m_approvalThresholdPolicyHasBeenSet = true; m_approvalThresholdPolicy = std::move(value); }

    /**
     * <p>Defines the rules for the network for voting on proposals, such as the
     * percentage of <code>YES</code> votes required for the proposal to be approved
     * and the duration of the proposal. The policy applies to all proposals and is
     * specified when the network is created.</p>
     */
    inline VotingPolicy& WithApprovalThresholdPolicy(const ApprovalThresholdPolicy& value) { SetApprovalThresholdPolicy(value); return *this;}

    /**
     * <p>Defines the rules for the network for voting on proposals, such as the
     * percentage of <code>YES</code> votes required for the proposal to be approved
     * and the duration of the proposal. The policy applies to all proposals and is
     * specified when the network is created.</p>
     */
    inline VotingPolicy& WithApprovalThresholdPolicy(ApprovalThresholdPolicy&& value) { SetApprovalThresholdPolicy(std::move(value)); return *this;}

  private:

    ApprovalThresholdPolicy m_approvalThresholdPolicy;
    bool m_approvalThresholdPolicyHasBeenSet;
  };

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
