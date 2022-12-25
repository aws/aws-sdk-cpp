/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/managedblockchain/ManagedBlockchain_EXPORTS.h>
#include <aws/managedblockchain/model/ThresholdComparator.h>
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
   * <p>A policy type that defines the voting rules for the network. The rules decide
   * if a proposal is approved. Approval may be based on criteria such as the
   * percentage of <code>YES</code> votes and the duration of the proposal. The
   * policy applies to all proposals and is specified when the network is
   * created.</p> <p>Applies only to Hyperledger Fabric.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/ApprovalThresholdPolicy">AWS
   * API Reference</a></p>
   */
  class ApprovalThresholdPolicy
  {
  public:
    AWS_MANAGEDBLOCKCHAIN_API ApprovalThresholdPolicy();
    AWS_MANAGEDBLOCKCHAIN_API ApprovalThresholdPolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAIN_API ApprovalThresholdPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The percentage of votes among all members that must be <code>YES</code> for a
     * proposal to be approved. For example, a <code>ThresholdPercentage</code> value
     * of <code>50</code> indicates 50%. The <code>ThresholdComparator</code>
     * determines the precise comparison. If a <code>ThresholdPercentage</code> value
     * of <code>50</code> is specified on a network with 10 members, along with a
     * <code>ThresholdComparator</code> value of <code>GREATER_THAN</code>, this
     * indicates that 6 <code>YES</code> votes are required for the proposal to be
     * approved.</p>
     */
    inline int GetThresholdPercentage() const{ return m_thresholdPercentage; }

    /**
     * <p>The percentage of votes among all members that must be <code>YES</code> for a
     * proposal to be approved. For example, a <code>ThresholdPercentage</code> value
     * of <code>50</code> indicates 50%. The <code>ThresholdComparator</code>
     * determines the precise comparison. If a <code>ThresholdPercentage</code> value
     * of <code>50</code> is specified on a network with 10 members, along with a
     * <code>ThresholdComparator</code> value of <code>GREATER_THAN</code>, this
     * indicates that 6 <code>YES</code> votes are required for the proposal to be
     * approved.</p>
     */
    inline bool ThresholdPercentageHasBeenSet() const { return m_thresholdPercentageHasBeenSet; }

    /**
     * <p>The percentage of votes among all members that must be <code>YES</code> for a
     * proposal to be approved. For example, a <code>ThresholdPercentage</code> value
     * of <code>50</code> indicates 50%. The <code>ThresholdComparator</code>
     * determines the precise comparison. If a <code>ThresholdPercentage</code> value
     * of <code>50</code> is specified on a network with 10 members, along with a
     * <code>ThresholdComparator</code> value of <code>GREATER_THAN</code>, this
     * indicates that 6 <code>YES</code> votes are required for the proposal to be
     * approved.</p>
     */
    inline void SetThresholdPercentage(int value) { m_thresholdPercentageHasBeenSet = true; m_thresholdPercentage = value; }

    /**
     * <p>The percentage of votes among all members that must be <code>YES</code> for a
     * proposal to be approved. For example, a <code>ThresholdPercentage</code> value
     * of <code>50</code> indicates 50%. The <code>ThresholdComparator</code>
     * determines the precise comparison. If a <code>ThresholdPercentage</code> value
     * of <code>50</code> is specified on a network with 10 members, along with a
     * <code>ThresholdComparator</code> value of <code>GREATER_THAN</code>, this
     * indicates that 6 <code>YES</code> votes are required for the proposal to be
     * approved.</p>
     */
    inline ApprovalThresholdPolicy& WithThresholdPercentage(int value) { SetThresholdPercentage(value); return *this;}


    /**
     * <p>The duration from the time that a proposal is created until it expires. If
     * members cast neither the required number of <code>YES</code> votes to approve
     * the proposal nor the number of <code>NO</code> votes required to reject it
     * before the duration expires, the proposal is <code>EXPIRED</code> and
     * <code>ProposalActions</code> aren't carried out.</p>
     */
    inline int GetProposalDurationInHours() const{ return m_proposalDurationInHours; }

    /**
     * <p>The duration from the time that a proposal is created until it expires. If
     * members cast neither the required number of <code>YES</code> votes to approve
     * the proposal nor the number of <code>NO</code> votes required to reject it
     * before the duration expires, the proposal is <code>EXPIRED</code> and
     * <code>ProposalActions</code> aren't carried out.</p>
     */
    inline bool ProposalDurationInHoursHasBeenSet() const { return m_proposalDurationInHoursHasBeenSet; }

    /**
     * <p>The duration from the time that a proposal is created until it expires. If
     * members cast neither the required number of <code>YES</code> votes to approve
     * the proposal nor the number of <code>NO</code> votes required to reject it
     * before the duration expires, the proposal is <code>EXPIRED</code> and
     * <code>ProposalActions</code> aren't carried out.</p>
     */
    inline void SetProposalDurationInHours(int value) { m_proposalDurationInHoursHasBeenSet = true; m_proposalDurationInHours = value; }

    /**
     * <p>The duration from the time that a proposal is created until it expires. If
     * members cast neither the required number of <code>YES</code> votes to approve
     * the proposal nor the number of <code>NO</code> votes required to reject it
     * before the duration expires, the proposal is <code>EXPIRED</code> and
     * <code>ProposalActions</code> aren't carried out.</p>
     */
    inline ApprovalThresholdPolicy& WithProposalDurationInHours(int value) { SetProposalDurationInHours(value); return *this;}


    /**
     * <p>Determines whether the vote percentage must be greater than the
     * <code>ThresholdPercentage</code> or must be greater than or equal to the
     * <code>ThreholdPercentage</code> to be approved.</p>
     */
    inline const ThresholdComparator& GetThresholdComparator() const{ return m_thresholdComparator; }

    /**
     * <p>Determines whether the vote percentage must be greater than the
     * <code>ThresholdPercentage</code> or must be greater than or equal to the
     * <code>ThreholdPercentage</code> to be approved.</p>
     */
    inline bool ThresholdComparatorHasBeenSet() const { return m_thresholdComparatorHasBeenSet; }

    /**
     * <p>Determines whether the vote percentage must be greater than the
     * <code>ThresholdPercentage</code> or must be greater than or equal to the
     * <code>ThreholdPercentage</code> to be approved.</p>
     */
    inline void SetThresholdComparator(const ThresholdComparator& value) { m_thresholdComparatorHasBeenSet = true; m_thresholdComparator = value; }

    /**
     * <p>Determines whether the vote percentage must be greater than the
     * <code>ThresholdPercentage</code> or must be greater than or equal to the
     * <code>ThreholdPercentage</code> to be approved.</p>
     */
    inline void SetThresholdComparator(ThresholdComparator&& value) { m_thresholdComparatorHasBeenSet = true; m_thresholdComparator = std::move(value); }

    /**
     * <p>Determines whether the vote percentage must be greater than the
     * <code>ThresholdPercentage</code> or must be greater than or equal to the
     * <code>ThreholdPercentage</code> to be approved.</p>
     */
    inline ApprovalThresholdPolicy& WithThresholdComparator(const ThresholdComparator& value) { SetThresholdComparator(value); return *this;}

    /**
     * <p>Determines whether the vote percentage must be greater than the
     * <code>ThresholdPercentage</code> or must be greater than or equal to the
     * <code>ThreholdPercentage</code> to be approved.</p>
     */
    inline ApprovalThresholdPolicy& WithThresholdComparator(ThresholdComparator&& value) { SetThresholdComparator(std::move(value)); return *this;}

  private:

    int m_thresholdPercentage;
    bool m_thresholdPercentageHasBeenSet = false;

    int m_proposalDurationInHours;
    bool m_proposalDurationInHoursHasBeenSet = false;

    ThresholdComparator m_thresholdComparator;
    bool m_thresholdComparatorHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
