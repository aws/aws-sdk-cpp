/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/cloudformation/model/RegionConcurrencyType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudformation/model/ConcurrencyMode.h>
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
   * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/what-is-cfnstacksets.html#stackset-ops-options">Stack
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


    ///@{
    /**
     * <p>The concurrency type of deploying StackSets operations in Regions, could be
     * in parallel or one Region at a time.</p>
     */
    inline const RegionConcurrencyType& GetRegionConcurrencyType() const{ return m_regionConcurrencyType; }
    inline bool RegionConcurrencyTypeHasBeenSet() const { return m_regionConcurrencyTypeHasBeenSet; }
    inline void SetRegionConcurrencyType(const RegionConcurrencyType& value) { m_regionConcurrencyTypeHasBeenSet = true; m_regionConcurrencyType = value; }
    inline void SetRegionConcurrencyType(RegionConcurrencyType&& value) { m_regionConcurrencyTypeHasBeenSet = true; m_regionConcurrencyType = std::move(value); }
    inline StackSetOperationPreferences& WithRegionConcurrencyType(const RegionConcurrencyType& value) { SetRegionConcurrencyType(value); return *this;}
    inline StackSetOperationPreferences& WithRegionConcurrencyType(RegionConcurrencyType&& value) { SetRegionConcurrencyType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The order of the Regions where you want to perform the stack operation.</p>
     *  <p> <code>RegionOrder</code> isn't followed if
     * <code>AutoDeployment</code> is enabled.</p> 
     */
    inline const Aws::Vector<Aws::String>& GetRegionOrder() const{ return m_regionOrder; }
    inline bool RegionOrderHasBeenSet() const { return m_regionOrderHasBeenSet; }
    inline void SetRegionOrder(const Aws::Vector<Aws::String>& value) { m_regionOrderHasBeenSet = true; m_regionOrder = value; }
    inline void SetRegionOrder(Aws::Vector<Aws::String>&& value) { m_regionOrderHasBeenSet = true; m_regionOrder = std::move(value); }
    inline StackSetOperationPreferences& WithRegionOrder(const Aws::Vector<Aws::String>& value) { SetRegionOrder(value); return *this;}
    inline StackSetOperationPreferences& WithRegionOrder(Aws::Vector<Aws::String>&& value) { SetRegionOrder(std::move(value)); return *this;}
    inline StackSetOperationPreferences& AddRegionOrder(const Aws::String& value) { m_regionOrderHasBeenSet = true; m_regionOrder.push_back(value); return *this; }
    inline StackSetOperationPreferences& AddRegionOrder(Aws::String&& value) { m_regionOrderHasBeenSet = true; m_regionOrder.push_back(std::move(value)); return *this; }
    inline StackSetOperationPreferences& AddRegionOrder(const char* value) { m_regionOrderHasBeenSet = true; m_regionOrder.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of accounts, per Region, for which this operation can fail before
     * CloudFormation stops the operation in that Region. If the operation is stopped
     * in a Region, CloudFormation doesn't attempt the operation in any subsequent
     * Regions.</p> <p>Conditional: You must specify either
     * <code>FailureToleranceCount</code> or <code>FailureTolerancePercentage</code>
     * (but not both).</p> <p>By default, <code>0</code> is specified.</p>
     */
    inline int GetFailureToleranceCount() const{ return m_failureToleranceCount; }
    inline bool FailureToleranceCountHasBeenSet() const { return m_failureToleranceCountHasBeenSet; }
    inline void SetFailureToleranceCount(int value) { m_failureToleranceCountHasBeenSet = true; m_failureToleranceCount = value; }
    inline StackSetOperationPreferences& WithFailureToleranceCount(int value) { SetFailureToleranceCount(value); return *this;}
    ///@}

    ///@{
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
    inline bool FailureTolerancePercentageHasBeenSet() const { return m_failureTolerancePercentageHasBeenSet; }
    inline void SetFailureTolerancePercentage(int value) { m_failureTolerancePercentageHasBeenSet = true; m_failureTolerancePercentage = value; }
    inline StackSetOperationPreferences& WithFailureTolerancePercentage(int value) { SetFailureTolerancePercentage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of accounts in which to perform this operation at one
     * time. This can depend on the value of <code>FailureToleranceCount</code>
     * depending on your <code>ConcurrencyMode</code>. <code>MaxConcurrentCount</code>
     * is at most one more than the <code>FailureToleranceCount</code> if you're using
     * <code>STRICT_FAILURE_TOLERANCE</code>.</p> <p>Note that this setting lets you
     * specify the <i>maximum</i> for operations. For large deployments, under certain
     * circumstances the actual number of accounts acted upon concurrently may be lower
     * due to service throttling.</p> <p>Conditional: You must specify either
     * <code>MaxConcurrentCount</code> or <code>MaxConcurrentPercentage</code>, but not
     * both.</p> <p>By default, <code>1</code> is specified.</p>
     */
    inline int GetMaxConcurrentCount() const{ return m_maxConcurrentCount; }
    inline bool MaxConcurrentCountHasBeenSet() const { return m_maxConcurrentCountHasBeenSet; }
    inline void SetMaxConcurrentCount(int value) { m_maxConcurrentCountHasBeenSet = true; m_maxConcurrentCount = value; }
    inline StackSetOperationPreferences& WithMaxConcurrentCount(int value) { SetMaxConcurrentCount(value); return *this;}
    ///@}

    ///@{
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
    inline bool MaxConcurrentPercentageHasBeenSet() const { return m_maxConcurrentPercentageHasBeenSet; }
    inline void SetMaxConcurrentPercentage(int value) { m_maxConcurrentPercentageHasBeenSet = true; m_maxConcurrentPercentage = value; }
    inline StackSetOperationPreferences& WithMaxConcurrentPercentage(int value) { SetMaxConcurrentPercentage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies how the concurrency level behaves during the operation
     * execution.</p> <ul> <li> <p> <code>STRICT_FAILURE_TOLERANCE</code>: This option
     * dynamically lowers the concurrency level to ensure the number of failed accounts
     * never exceeds the value of <code>FailureToleranceCount</code> +1. The initial
     * actual concurrency is set to the lower of either the value of the
     * <code>MaxConcurrentCount</code>, or the value of
     * <code>FailureToleranceCount</code> +1. The actual concurrency is then reduced
     * proportionally by the number of failures. This is the default behavior.</p>
     * <p>If failure tolerance or Maximum concurrent accounts are set to percentages,
     * the behavior is similar.</p> </li> <li> <p> <code>SOFT_FAILURE_TOLERANCE</code>:
     * This option decouples <code>FailureToleranceCount</code> from the actual
     * concurrency. This allows stack set operations to run at the concurrency level
     * set by the <code>MaxConcurrentCount</code> value, or
     * <code>MaxConcurrentPercentage</code>, regardless of the number of failures.</p>
     * </li> </ul>
     */
    inline const ConcurrencyMode& GetConcurrencyMode() const{ return m_concurrencyMode; }
    inline bool ConcurrencyModeHasBeenSet() const { return m_concurrencyModeHasBeenSet; }
    inline void SetConcurrencyMode(const ConcurrencyMode& value) { m_concurrencyModeHasBeenSet = true; m_concurrencyMode = value; }
    inline void SetConcurrencyMode(ConcurrencyMode&& value) { m_concurrencyModeHasBeenSet = true; m_concurrencyMode = std::move(value); }
    inline StackSetOperationPreferences& WithConcurrencyMode(const ConcurrencyMode& value) { SetConcurrencyMode(value); return *this;}
    inline StackSetOperationPreferences& WithConcurrencyMode(ConcurrencyMode&& value) { SetConcurrencyMode(std::move(value)); return *this;}
    ///@}
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

    ConcurrencyMode m_concurrencyMode;
    bool m_concurrencyModeHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
