﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/elasticmapreduce/model/AutoScalingPolicyStatus.h>
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
   * in an Amazon EMR cluster. The automatic scaling policy defines how an instance
   * group dynamically adds and terminates Amazon EC2 instances in response to the
   * value of a CloudWatch metric. See <a>PutAutoScalingPolicy</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/AutoScalingPolicyDescription">AWS
   * API Reference</a></p>
   */
  class AutoScalingPolicyDescription
  {
  public:
    AWS_EMR_API AutoScalingPolicyDescription();
    AWS_EMR_API AutoScalingPolicyDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API AutoScalingPolicyDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The status of an automatic scaling policy. </p>
     */
    inline const AutoScalingPolicyStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const AutoScalingPolicyStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(AutoScalingPolicyStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline AutoScalingPolicyDescription& WithStatus(const AutoScalingPolicyStatus& value) { SetStatus(value); return *this;}
    inline AutoScalingPolicyDescription& WithStatus(AutoScalingPolicyStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The upper and lower Amazon EC2 instance limits for an automatic scaling
     * policy. Automatic scaling activity will not cause an instance group to grow
     * above or below these limits.</p>
     */
    inline const ScalingConstraints& GetConstraints() const{ return m_constraints; }
    inline bool ConstraintsHasBeenSet() const { return m_constraintsHasBeenSet; }
    inline void SetConstraints(const ScalingConstraints& value) { m_constraintsHasBeenSet = true; m_constraints = value; }
    inline void SetConstraints(ScalingConstraints&& value) { m_constraintsHasBeenSet = true; m_constraints = std::move(value); }
    inline AutoScalingPolicyDescription& WithConstraints(const ScalingConstraints& value) { SetConstraints(value); return *this;}
    inline AutoScalingPolicyDescription& WithConstraints(ScalingConstraints&& value) { SetConstraints(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The scale-in and scale-out rules that comprise the automatic scaling
     * policy.</p>
     */
    inline const Aws::Vector<ScalingRule>& GetRules() const{ return m_rules; }
    inline bool RulesHasBeenSet() const { return m_rulesHasBeenSet; }
    inline void SetRules(const Aws::Vector<ScalingRule>& value) { m_rulesHasBeenSet = true; m_rules = value; }
    inline void SetRules(Aws::Vector<ScalingRule>&& value) { m_rulesHasBeenSet = true; m_rules = std::move(value); }
    inline AutoScalingPolicyDescription& WithRules(const Aws::Vector<ScalingRule>& value) { SetRules(value); return *this;}
    inline AutoScalingPolicyDescription& WithRules(Aws::Vector<ScalingRule>&& value) { SetRules(std::move(value)); return *this;}
    inline AutoScalingPolicyDescription& AddRules(const ScalingRule& value) { m_rulesHasBeenSet = true; m_rules.push_back(value); return *this; }
    inline AutoScalingPolicyDescription& AddRules(ScalingRule&& value) { m_rulesHasBeenSet = true; m_rules.push_back(std::move(value)); return *this; }
    ///@}
  private:

    AutoScalingPolicyStatus m_status;
    bool m_statusHasBeenSet = false;

    ScalingConstraints m_constraints;
    bool m_constraintsHasBeenSet = false;

    Aws::Vector<ScalingRule> m_rules;
    bool m_rulesHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
