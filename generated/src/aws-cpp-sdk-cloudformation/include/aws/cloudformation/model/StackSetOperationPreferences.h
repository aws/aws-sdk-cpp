/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/cloudformation/model/RegionConcurrencyType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace CloudFormation
{
namespace Model
{

  /**
   * <p>The user-specified preferences for how CloudFormation performs a stack set
   * operation.</p> <p>For more information about maximum concurrent accounts and
   * failure tolerance, see <a
   * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/stacksets-concepts.html#stackset-ops-options">Stack
   * set operation options</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/StackSetOperationPreferences">AWS
   * API Reference</a></p>
   */
  class StackSetOperationPreferences
  {
  public:
    AWS_CLOUDFORMATION_API StackSetOperationPreferences();
    AWS_CLOUDFORMATION_API StackSetOperationPreferences(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFORMATION_API StackSetOperationPreferences& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The concurrency type of deploying StackSets operations in Regions, could be
     * in parallel or one Region at a time.</p>
     */
    inline const RegionConcurrencyType& GetRegionConcurrencyType() const{ return m_regionConcurrencyType; }

    /**
     * <p>The concurrency type of deploying StackSets operations in Regions, could be
     * in parallel or one Region at a time.</p>
     */
    inline bool RegionConcurrencyTypeHasBeenSet() const { return m_regionConcurrencyTypeHasBeenSet; }

    /**
     * <p>The concurrency type of deploying StackSets operations in Regions, could be
     * in parallel or one Region at a time.</p>
     */
    inline void SetRegionConcurrencyType(const RegionConcurrencyType& value) { m_regionConcurrencyTypeHasBeenSet = true; m_regionConcurrencyType = value; }

    /**
     * <p>The concurrency type of deploying StackSets operations in Regions, could be
     * in parallel or one Region at a time.</p>
     */
    inline void SetRegionConcurrencyType(RegionConcurrencyType&& value) { m_regionConcurrencyTypeHasBeenSet = true; m_regionConcurrencyType = std::move(value); }

    /**
     * <p>The concurrency type of deploying StackSets operations in Regions, could be
     * in parallel or one Region at a time.</p>
     */
    inline StackSetOperationPreferences& WithRegionConcurrencyType(const RegionConcurrencyType& value) { SetRegionConcurrencyType(value); return *this;}

    /**
     * <p>The concurrency type of deploying StackSets operations in Regions, could be
     * in parallel or one Region at a time.</p>
     */
    inline StackSetOperationPreferences& WithRegionConcurrencyType(RegionConcurrencyType&& value) { SetRegionConcurrencyType(std::move(value)); return *this;}


    /**
     * <p>The order of the Regions where you want to perform the stack operation.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRegionOrder() const{ return m_regionOrder; }

    /**
     * <p>The order of the Regions where you want to perform the stack operation.</p>
     */
    inline bool RegionOrderHasBeenSet() const { return m_regionOrderHasBeenSet; }

    /**
     * <p>The order of the Regions where you want to perform the stack operation.</p>
     */
    inline void SetRegionOrder(const Aws::Vector<Aws::String>& value) { m_regionOrderHasBeenSet = true; m_regionOrder = value; }

    /**
     * <p>The order of the Regions where you want to perform the stack operation.</p>
     */
    inline void SetRegionOrder(Aws::Vector<Aws::String>&& value) { m_regionOrderHasBeenSet = true; m_regionOrder = std::move(value); }

    /**
     * <p>The order of the Regions where you want to perform the stack operation.</p>
     */
    inline StackSetOperationPreferences& WithRegionOrder(const Aws::Vector<Aws::String>& value) { SetRegionOrder(value); return *this;}

    /**
     * <p>The order of the Regions where you want to perform the stack operation.</p>
     */
    inline StackSetOperationPreferences& WithRegionOrder(Aws::Vector<Aws::String>&& value) { SetRegionOrder(std::move(value)); return *this;}

    /**
     * <p>The order of the Regions where you want to perform the stack operation.</p>
     */
    inline StackSetOperationPreferences& AddRegionOrder(const Aws::String& value) { m_regionOrderHasBeenSet = true; m_regionOrder.push_back(value); return *this; }

    /**
     * <p>The order of the Regions where you want to perform the stack operation.</p>
     */
    inline StackSetOperationPreferences& AddRegionOrder(Aws::String&& value) { m_regionOrderHasBeenSet = true; m_regionOrder.push_back(std::move(value)); return *this; }

    /**
     * <p>The order of the Regions where you want to perform the stack operation.</p>
     */
    inline StackSetOperationPreferences& AddRegionOrder(const char* value) { m_regionOrderHasBeenSet = true; m_regionOrder.push_back(value); return *this; }


    /**
     * <p>The number of accounts, per Region, for which this operation can fail before
     * CloudFormation stops the operation in that Region. If the operation is stopped
     * in a Region, CloudFormation doesn't attempt the operation in any subsequent
     * Regions.</p> <p>Conditional: You must specify either
     * <code>FailureToleranceCount</code> or <code>FailureTolerancePercentage</code>
     * (but not both).</p> <p>By default, <code>0</code> is specified.</p>
     */
    inline int GetFailureToleranceCount() const{ return m_failureToleranceCount; }

    /**
     * <p>The number of accounts, per Region, for which this operation can fail before
     * CloudFormation stops the operation in that Region. If the operation is stopped
     * in a Region, CloudFormation doesn't attempt the operation in any subsequent
     * Regions.</p> <p>Conditional: You must specify either
     * <code>FailureToleranceCount</code> or <code>FailureTolerancePercentage</code>
     * (but not both).</p> <p>By default, <code>0</code> is specified.</p>
     */
    inline bool FailureToleranceCountHasBeenSet() const { return m_failureToleranceCountHasBeenSet; }

    /**
     * <p>The number of accounts, per Region, for which this operation can fail before
     * CloudFormation stops the operation in that Region. If the operation is stopped
     * in a Region, CloudFormation doesn't attempt the operation in any subsequent
     * Regions.</p> <p>Conditional: You must specify either
     * <code>FailureToleranceCount</code> or <code>FailureTolerancePercentage</code>
     * (but not both).</p> <p>By default, <code>0</code> is specified.</p>
     */
    inline void SetFailureToleranceCount(int value) { m_failureToleranceCountHasBeenSet = true; m_failureToleranceCount = value; }

    /**
     * <p>The number of accounts, per Region, for which this operation can fail before
     * CloudFormation stops the operation in that Region. If the operation is stopped
     * in a Region, CloudFormation doesn't attempt the operation in any subsequent
     * Regions.</p> <p>Conditional: You must specify either
     * <code>FailureToleranceCount</code> or <code>FailureTolerancePercentage</code>
     * (but not both).</p> <p>By default, <code>0</code> is specified.</p>
     */
    inline StackSetOperationPreferences& WithFailureToleranceCount(int value) { SetFailureToleranceCount(value); return *this;}


    /**
     * <p>The percentage of accounts, per Region, for which this stack operation can
     * fail before CloudFormation stops the operation in that Region. If the operation
     * is stopped in a Region, CloudFormation doesn't attempt the operation in any
     * subsequent Regions.</p> <p>When calculating the number of accounts based on the
     * specified percentage, CloudFormation rounds <i>down</i> to the next whole
     * number.</p> <p>Conditional: You must specify either
     * <code>FailureToleranceCount</code> or <code>FailureTolerancePercentage</code>,
     * but not both.</p> <p>By default, <code>0</code> is specified.</p>
     */
    inline int GetFailureTolerancePercentage() const{ return m_failureTolerancePercentage; }

    /**
     * <p>The percentage of accounts, per Region, for which this stack operation can
     * fail before CloudFormation stops the operation in that Region. If the operation
     * is stopped in a Region, CloudFormation doesn't attempt the operation in any
     * subsequent Regions.</p> <p>When calculating the number of accounts based on the
     * specified percentage, CloudFormation rounds <i>down</i> to the next whole
     * number.</p> <p>Conditional: You must specify either
     * <code>FailureToleranceCount</code> or <code>FailureTolerancePercentage</code>,
     * but not both.</p> <p>By default, <code>0</code> is specified.</p>
     */
    inline bool FailureTolerancePercentageHasBeenSet() const { return m_failureTolerancePercentageHasBeenSet; }

    /**
     * <p>The percentage of accounts, per Region, for which this stack operation can
     * fail before CloudFormation stops the operation in that Region. If the operation
     * is stopped in a Region, CloudFormation doesn't attempt the operation in any
     * subsequent Regions.</p> <p>When calculating the number of accounts based on the
     * specified percentage, CloudFormation rounds <i>down</i> to the next whole
     * number.</p> <p>Conditional: You must specify either
     * <code>FailureToleranceCount</code> or <code>FailureTolerancePercentage</code>,
     * but not both.</p> <p>By default, <code>0</code> is specified.</p>
     */
    inline void SetFailureTolerancePercentage(int value) { m_failureTolerancePercentageHasBeenSet = true; m_failureTolerancePercentage = value; }

    /**
     * <p>The percentage of accounts, per Region, for which this stack operation can
     * fail before CloudFormation stops the operation in that Region. If the operation
     * is stopped in a Region, CloudFormation doesn't attempt the operation in any
     * subsequent Regions.</p> <p>When calculating the number of accounts based on the
     * specified percentage, CloudFormation rounds <i>down</i> to the next whole
     * number.</p> <p>Conditional: You must specify either
     * <code>FailureToleranceCount</code> or <code>FailureTolerancePercentage</code>,
     * but not both.</p> <p>By default, <code>0</code> is specified.</p>
     */
    inline StackSetOperationPreferences& WithFailureTolerancePercentage(int value) { SetFailureTolerancePercentage(value); return *this;}


    /**
     * <p>The maximum number of accounts in which to perform this operation at one
     * time. This is dependent on the value of
     * <code>FailureToleranceCount</code>.<code>MaxConcurrentCount</code> is at most
     * one more than the <code>FailureToleranceCount</code>.</p> <p>Note that this
     * setting lets you specify the <i>maximum</i> for operations. For large
     * deployments, under certain circumstances the actual number of accounts acted
     * upon concurrently may be lower due to service throttling.</p> <p>Conditional:
     * You must specify either <code>MaxConcurrentCount</code> or
     * <code>MaxConcurrentPercentage</code>, but not both.</p> <p>By default,
     * <code>1</code> is specified.</p>
     */
    inline int GetMaxConcurrentCount() const{ return m_maxConcurrentCount; }

    /**
     * <p>The maximum number of accounts in which to perform this operation at one
     * time. This is dependent on the value of
     * <code>FailureToleranceCount</code>.<code>MaxConcurrentCount</code> is at most
     * one more than the <code>FailureToleranceCount</code>.</p> <p>Note that this
     * setting lets you specify the <i>maximum</i> for operations. For large
     * deployments, under certain circumstances the actual number of accounts acted
     * upon concurrently may be lower due to service throttling.</p> <p>Conditional:
     * You must specify either <code>MaxConcurrentCount</code> or
     * <code>MaxConcurrentPercentage</code>, but not both.</p> <p>By default,
     * <code>1</code> is specified.</p>
     */
    inline bool MaxConcurrentCountHasBeenSet() const { return m_maxConcurrentCountHasBeenSet; }

    /**
     * <p>The maximum number of accounts in which to perform this operation at one
     * time. This is dependent on the value of
     * <code>FailureToleranceCount</code>.<code>MaxConcurrentCount</code> is at most
     * one more than the <code>FailureToleranceCount</code>.</p> <p>Note that this
     * setting lets you specify the <i>maximum</i> for operations. For large
     * deployments, under certain circumstances the actual number of accounts acted
     * upon concurrently may be lower due to service throttling.</p> <p>Conditional:
     * You must specify either <code>MaxConcurrentCount</code> or
     * <code>MaxConcurrentPercentage</code>, but not both.</p> <p>By default,
     * <code>1</code> is specified.</p>
     */
    inline void SetMaxConcurrentCount(int value) { m_maxConcurrentCountHasBeenSet = true; m_maxConcurrentCount = value; }

    /**
     * <p>The maximum number of accounts in which to perform this operation at one
     * time. This is dependent on the value of
     * <code>FailureToleranceCount</code>.<code>MaxConcurrentCount</code> is at most
     * one more than the <code>FailureToleranceCount</code>.</p> <p>Note that this
     * setting lets you specify the <i>maximum</i> for operations. For large
     * deployments, under certain circumstances the actual number of accounts acted
     * upon concurrently may be lower due to service throttling.</p> <p>Conditional:
     * You must specify either <code>MaxConcurrentCount</code> or
     * <code>MaxConcurrentPercentage</code>, but not both.</p> <p>By default,
     * <code>1</code> is specified.</p>
     */
    inline StackSetOperationPreferences& WithMaxConcurrentCount(int value) { SetMaxConcurrentCount(value); return *this;}


    /**
     * <p>The maximum percentage of accounts in which to perform this operation at one
     * time.</p> <p>When calculating the number of accounts based on the specified
     * percentage, CloudFormation rounds down to the next whole number. This is true
     * except in cases where rounding down would result is zero. In this case,
     * CloudFormation sets the number as one instead.</p> <p>Note that this setting
     * lets you specify the <i>maximum</i> for operations. For large deployments, under
     * certain circumstances the actual number of accounts acted upon concurrently may
     * be lower due to service throttling.</p> <p>Conditional: You must specify either
     * <code>MaxConcurrentCount</code> or <code>MaxConcurrentPercentage</code>, but not
     * both.</p> <p>By default, <code>1</code> is specified.</p>
     */
    inline int GetMaxConcurrentPercentage() const{ return m_maxConcurrentPercentage; }

    /**
     * <p>The maximum percentage of accounts in which to perform this operation at one
     * time.</p> <p>When calculating the number of accounts based on the specified
     * percentage, CloudFormation rounds down to the next whole number. This is true
     * except in cases where rounding down would result is zero. In this case,
     * CloudFormation sets the number as one instead.</p> <p>Note that this setting
     * lets you specify the <i>maximum</i> for operations. For large deployments, under
     * certain circumstances the actual number of accounts acted upon concurrently may
     * be lower due to service throttling.</p> <p>Conditional: You must specify either
     * <code>MaxConcurrentCount</code> or <code>MaxConcurrentPercentage</code>, but not
     * both.</p> <p>By default, <code>1</code> is specified.</p>
     */
    inline bool MaxConcurrentPercentageHasBeenSet() const { return m_maxConcurrentPercentageHasBeenSet; }

    /**
     * <p>The maximum percentage of accounts in which to perform this operation at one
     * time.</p> <p>When calculating the number of accounts based on the specified
     * percentage, CloudFormation rounds down to the next whole number. This is true
     * except in cases where rounding down would result is zero. In this case,
     * CloudFormation sets the number as one instead.</p> <p>Note that this setting
     * lets you specify the <i>maximum</i> for operations. For large deployments, under
     * certain circumstances the actual number of accounts acted upon concurrently may
     * be lower due to service throttling.</p> <p>Conditional: You must specify either
     * <code>MaxConcurrentCount</code> or <code>MaxConcurrentPercentage</code>, but not
     * both.</p> <p>By default, <code>1</code> is specified.</p>
     */
    inline void SetMaxConcurrentPercentage(int value) { m_maxConcurrentPercentageHasBeenSet = true; m_maxConcurrentPercentage = value; }

    /**
     * <p>The maximum percentage of accounts in which to perform this operation at one
     * time.</p> <p>When calculating the number of accounts based on the specified
     * percentage, CloudFormation rounds down to the next whole number. This is true
     * except in cases where rounding down would result is zero. In this case,
     * CloudFormation sets the number as one instead.</p> <p>Note that this setting
     * lets you specify the <i>maximum</i> for operations. For large deployments, under
     * certain circumstances the actual number of accounts acted upon concurrently may
     * be lower due to service throttling.</p> <p>Conditional: You must specify either
     * <code>MaxConcurrentCount</code> or <code>MaxConcurrentPercentage</code>, but not
     * both.</p> <p>By default, <code>1</code> is specified.</p>
     */
    inline StackSetOperationPreferences& WithMaxConcurrentPercentage(int value) { SetMaxConcurrentPercentage(value); return *this;}

  private:

    RegionConcurrencyType m_regionConcurrencyType;
    bool m_regionConcurrencyTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_regionOrder;
    bool m_regionOrderHasBeenSet = false;

    int m_failureToleranceCount;
    bool m_failureToleranceCountHasBeenSet = false;

    int m_failureTolerancePercentage;
    bool m_failureTolerancePercentageHasBeenSet = false;

    int m_maxConcurrentCount;
    bool m_maxConcurrentCountHasBeenSet = false;

    int m_maxConcurrentPercentage;
    bool m_maxConcurrentPercentageHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
