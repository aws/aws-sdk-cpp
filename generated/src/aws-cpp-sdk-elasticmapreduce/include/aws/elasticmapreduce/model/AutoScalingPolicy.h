/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/elasticmapreduce/model/ScalingConstraints.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticmapreduce/model/ScalingRule.h>
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
namespace EMR
{
namespace Model
{

  /**
   * <p>An automatic scaling policy for a core instance group or task instance group
   * in an Amazon EMR cluster. An automatic scaling policy defines how an instance
   * group dynamically adds and terminates EC2 instances in response to the value of
   * a CloudWatch metric. See <a>PutAutoScalingPolicy</a>.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/AutoScalingPolicy">AWS
   * API Reference</a></p>
   */
  class AutoScalingPolicy
  {
  public:
    AWS_EMR_API AutoScalingPolicy();
    AWS_EMR_API AutoScalingPolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API AutoScalingPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The upper and lower EC2 instance limits for an automatic scaling policy.
     * Automatic scaling activity will not cause an instance group to grow above or
     * below these limits.</p>
     */
    inline const ScalingConstraints& GetConstraints() const{ return m_constraints; }

    /**
     * <p>The upper and lower EC2 instance limits for an automatic scaling policy.
     * Automatic scaling activity will not cause an instance group to grow above or
     * below these limits.</p>
     */
    inline bool ConstraintsHasBeenSet() const { return m_constraintsHasBeenSet; }

    /**
     * <p>The upper and lower EC2 instance limits for an automatic scaling policy.
     * Automatic scaling activity will not cause an instance group to grow above or
     * below these limits.</p>
     */
    inline void SetConstraints(const ScalingConstraints& value) { m_constraintsHasBeenSet = true; m_constraints = value; }

    /**
     * <p>The upper and lower EC2 instance limits for an automatic scaling policy.
     * Automatic scaling activity will not cause an instance group to grow above or
     * below these limits.</p>
     */
    inline void SetConstraints(ScalingConstraints&& value) { m_constraintsHasBeenSet = true; m_constraints = std::move(value); }

    /**
     * <p>The upper and lower EC2 instance limits for an automatic scaling policy.
     * Automatic scaling activity will not cause an instance group to grow above or
     * below these limits.</p>
     */
    inline AutoScalingPolicy& WithConstraints(const ScalingConstraints& value) { SetConstraints(value); return *this;}

    /**
     * <p>The upper and lower EC2 instance limits for an automatic scaling policy.
     * Automatic scaling activity will not cause an instance group to grow above or
     * below these limits.</p>
     */
    inline AutoScalingPolicy& WithConstraints(ScalingConstraints&& value) { SetConstraints(std::move(value)); return *this;}


    /**
     * <p>The scale-in and scale-out rules that comprise the automatic scaling
     * policy.</p>
     */
    inline const Aws::Vector<ScalingRule>& GetRules() const{ return m_rules; }

    /**
     * <p>The scale-in and scale-out rules that comprise the automatic scaling
     * policy.</p>
     */
    inline bool RulesHasBeenSet() const { return m_rulesHasBeenSet; }

    /**
     * <p>The scale-in and scale-out rules that comprise the automatic scaling
     * policy.</p>
     */
    inline void SetRules(const Aws::Vector<ScalingRule>& value) { m_rulesHasBeenSet = true; m_rules = value; }

    /**
     * <p>The scale-in and scale-out rules that comprise the automatic scaling
     * policy.</p>
     */
    inline void SetRules(Aws::Vector<ScalingRule>&& value) { m_rulesHasBeenSet = true; m_rules = std::move(value); }

    /**
     * <p>The scale-in and scale-out rules that comprise the automatic scaling
     * policy.</p>
     */
    inline AutoScalingPolicy& WithRules(const Aws::Vector<ScalingRule>& value) { SetRules(value); return *this;}

    /**
     * <p>The scale-in and scale-out rules that comprise the automatic scaling
     * policy.</p>
     */
    inline AutoScalingPolicy& WithRules(Aws::Vector<ScalingRule>&& value) { SetRules(std::move(value)); return *this;}

    /**
     * <p>The scale-in and scale-out rules that comprise the automatic scaling
     * policy.</p>
     */
    inline AutoScalingPolicy& AddRules(const ScalingRule& value) { m_rulesHasBeenSet = true; m_rules.push_back(value); return *this; }

    /**
     * <p>The scale-in and scale-out rules that comprise the automatic scaling
     * policy.</p>
     */
    inline AutoScalingPolicy& AddRules(ScalingRule&& value) { m_rulesHasBeenSet = true; m_rules.push_back(std::move(value)); return *this; }

  private:

    ScalingConstraints m_constraints;
    bool m_constraintsHasBeenSet = false;

    Aws::Vector<ScalingRule> m_rules;
    bool m_rulesHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
