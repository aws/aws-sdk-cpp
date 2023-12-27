﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticloadbalancingv2/model/TargetDescription.h>
#include <aws/elasticloadbalancingv2/model/DescribeTargetHealthInputIncludeEnum.h>
#include <utility>

namespace Aws
{
namespace ElasticLoadBalancingv2
{
namespace Model
{

  /**
   */
  class DescribeTargetHealthRequest : public ElasticLoadBalancingv2Request
  {
  public:
    AWS_ELASTICLOADBALANCINGV2_API DescribeTargetHealthRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeTargetHealth"; }

    AWS_ELASTICLOADBALANCINGV2_API Aws::String SerializePayload() const override;

  protected:
    AWS_ELASTICLOADBALANCINGV2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The Amazon Resource Name (ARN) of the target group.</p>
     */
    inline const Aws::String& GetTargetGroupArn() const{ return m_targetGroupArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the target group.</p>
     */
    inline bool TargetGroupArnHasBeenSet() const { return m_targetGroupArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the target group.</p>
     */
    inline void SetTargetGroupArn(const Aws::String& value) { m_targetGroupArnHasBeenSet = true; m_targetGroupArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the target group.</p>
     */
    inline void SetTargetGroupArn(Aws::String&& value) { m_targetGroupArnHasBeenSet = true; m_targetGroupArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the target group.</p>
     */
    inline void SetTargetGroupArn(const char* value) { m_targetGroupArnHasBeenSet = true; m_targetGroupArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the target group.</p>
     */
    inline DescribeTargetHealthRequest& WithTargetGroupArn(const Aws::String& value) { SetTargetGroupArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the target group.</p>
     */
    inline DescribeTargetHealthRequest& WithTargetGroupArn(Aws::String&& value) { SetTargetGroupArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the target group.</p>
     */
    inline DescribeTargetHealthRequest& WithTargetGroupArn(const char* value) { SetTargetGroupArn(value); return *this;}


    /**
     * <p>The targets.</p>
     */
    inline const Aws::Vector<TargetDescription>& GetTargets() const{ return m_targets; }

    /**
     * <p>The targets.</p>
     */
    inline bool TargetsHasBeenSet() const { return m_targetsHasBeenSet; }

    /**
     * <p>The targets.</p>
     */
    inline void SetTargets(const Aws::Vector<TargetDescription>& value) { m_targetsHasBeenSet = true; m_targets = value; }

    /**
     * <p>The targets.</p>
     */
    inline void SetTargets(Aws::Vector<TargetDescription>&& value) { m_targetsHasBeenSet = true; m_targets = std::move(value); }

    /**
     * <p>The targets.</p>
     */
    inline DescribeTargetHealthRequest& WithTargets(const Aws::Vector<TargetDescription>& value) { SetTargets(value); return *this;}

    /**
     * <p>The targets.</p>
     */
    inline DescribeTargetHealthRequest& WithTargets(Aws::Vector<TargetDescription>&& value) { SetTargets(std::move(value)); return *this;}

    /**
     * <p>The targets.</p>
     */
    inline DescribeTargetHealthRequest& AddTargets(const TargetDescription& value) { m_targetsHasBeenSet = true; m_targets.push_back(value); return *this; }

    /**
     * <p>The targets.</p>
     */
    inline DescribeTargetHealthRequest& AddTargets(TargetDescription&& value) { m_targetsHasBeenSet = true; m_targets.push_back(std::move(value)); return *this; }


    /**
     * <p>Used to inclue anomaly detection information.</p>
     */
    inline const Aws::Vector<DescribeTargetHealthInputIncludeEnum>& GetInclude() const{ return m_include; }

    /**
     * <p>Used to inclue anomaly detection information.</p>
     */
    inline bool IncludeHasBeenSet() const { return m_includeHasBeenSet; }

    /**
     * <p>Used to inclue anomaly detection information.</p>
     */
    inline void SetInclude(const Aws::Vector<DescribeTargetHealthInputIncludeEnum>& value) { m_includeHasBeenSet = true; m_include = value; }

    /**
     * <p>Used to inclue anomaly detection information.</p>
     */
    inline void SetInclude(Aws::Vector<DescribeTargetHealthInputIncludeEnum>&& value) { m_includeHasBeenSet = true; m_include = std::move(value); }

    /**
     * <p>Used to inclue anomaly detection information.</p>
     */
    inline DescribeTargetHealthRequest& WithInclude(const Aws::Vector<DescribeTargetHealthInputIncludeEnum>& value) { SetInclude(value); return *this;}

    /**
     * <p>Used to inclue anomaly detection information.</p>
     */
    inline DescribeTargetHealthRequest& WithInclude(Aws::Vector<DescribeTargetHealthInputIncludeEnum>&& value) { SetInclude(std::move(value)); return *this;}

    /**
     * <p>Used to inclue anomaly detection information.</p>
     */
    inline DescribeTargetHealthRequest& AddInclude(const DescribeTargetHealthInputIncludeEnum& value) { m_includeHasBeenSet = true; m_include.push_back(value); return *this; }

    /**
     * <p>Used to inclue anomaly detection information.</p>
     */
    inline DescribeTargetHealthRequest& AddInclude(DescribeTargetHealthInputIncludeEnum&& value) { m_includeHasBeenSet = true; m_include.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_targetGroupArn;
    bool m_targetGroupArnHasBeenSet = false;

    Aws::Vector<TargetDescription> m_targets;
    bool m_targetsHasBeenSet = false;

    Aws::Vector<DescribeTargetHealthInputIncludeEnum> m_include;
    bool m_includeHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
