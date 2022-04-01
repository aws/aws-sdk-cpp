﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/compute-optimizer/ComputeOptimizerRequest.h>
#include <aws/compute-optimizer/model/ResourceType.h>
#include <aws/compute-optimizer/model/Scope.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/compute-optimizer/model/RecommendationPreferenceName.h>
#include <utility>

namespace Aws
{
namespace ComputeOptimizer
{
namespace Model
{

  /**
   */
  class AWS_COMPUTEOPTIMIZER_API DeleteRecommendationPreferencesRequest : public ComputeOptimizerRequest
  {
  public:
    DeleteRecommendationPreferencesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteRecommendationPreferences"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The target resource type of the recommendation preference to delete.</p>
     * <p>The <code>Ec2Instance</code> option encompasses standalone instances and
     * instances that are part of Auto Scaling groups. The
     * <code>AutoScalingGroup</code> option encompasses only instances that are part of
     * an Auto Scaling group.</p>
     */
    inline const ResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The target resource type of the recommendation preference to delete.</p>
     * <p>The <code>Ec2Instance</code> option encompasses standalone instances and
     * instances that are part of Auto Scaling groups. The
     * <code>AutoScalingGroup</code> option encompasses only instances that are part of
     * an Auto Scaling group.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The target resource type of the recommendation preference to delete.</p>
     * <p>The <code>Ec2Instance</code> option encompasses standalone instances and
     * instances that are part of Auto Scaling groups. The
     * <code>AutoScalingGroup</code> option encompasses only instances that are part of
     * an Auto Scaling group.</p>
     */
    inline void SetResourceType(const ResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The target resource type of the recommendation preference to delete.</p>
     * <p>The <code>Ec2Instance</code> option encompasses standalone instances and
     * instances that are part of Auto Scaling groups. The
     * <code>AutoScalingGroup</code> option encompasses only instances that are part of
     * an Auto Scaling group.</p>
     */
    inline void SetResourceType(ResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The target resource type of the recommendation preference to delete.</p>
     * <p>The <code>Ec2Instance</code> option encompasses standalone instances and
     * instances that are part of Auto Scaling groups. The
     * <code>AutoScalingGroup</code> option encompasses only instances that are part of
     * an Auto Scaling group.</p>
     */
    inline DeleteRecommendationPreferencesRequest& WithResourceType(const ResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>The target resource type of the recommendation preference to delete.</p>
     * <p>The <code>Ec2Instance</code> option encompasses standalone instances and
     * instances that are part of Auto Scaling groups. The
     * <code>AutoScalingGroup</code> option encompasses only instances that are part of
     * an Auto Scaling group.</p>
     */
    inline DeleteRecommendationPreferencesRequest& WithResourceType(ResourceType&& value) { SetResourceType(std::move(value)); return *this;}


    /**
     * <p>An object that describes the scope of the recommendation preference to
     * delete.</p> <p>You can delete recommendation preferences that are created at the
     * organization level (for management accounts of an organization only), account
     * level, and resource level. For more information, see <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/enhanced-infrastructure-metrics.html">Activating
     * enhanced infrastructure metrics</a> in the <i>Compute Optimizer User
     * Guide</i>.</p>
     */
    inline const Scope& GetScope() const{ return m_scope; }

    /**
     * <p>An object that describes the scope of the recommendation preference to
     * delete.</p> <p>You can delete recommendation preferences that are created at the
     * organization level (for management accounts of an organization only), account
     * level, and resource level. For more information, see <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/enhanced-infrastructure-metrics.html">Activating
     * enhanced infrastructure metrics</a> in the <i>Compute Optimizer User
     * Guide</i>.</p>
     */
    inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }

    /**
     * <p>An object that describes the scope of the recommendation preference to
     * delete.</p> <p>You can delete recommendation preferences that are created at the
     * organization level (for management accounts of an organization only), account
     * level, and resource level. For more information, see <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/enhanced-infrastructure-metrics.html">Activating
     * enhanced infrastructure metrics</a> in the <i>Compute Optimizer User
     * Guide</i>.</p>
     */
    inline void SetScope(const Scope& value) { m_scopeHasBeenSet = true; m_scope = value; }

    /**
     * <p>An object that describes the scope of the recommendation preference to
     * delete.</p> <p>You can delete recommendation preferences that are created at the
     * organization level (for management accounts of an organization only), account
     * level, and resource level. For more information, see <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/enhanced-infrastructure-metrics.html">Activating
     * enhanced infrastructure metrics</a> in the <i>Compute Optimizer User
     * Guide</i>.</p>
     */
    inline void SetScope(Scope&& value) { m_scopeHasBeenSet = true; m_scope = std::move(value); }

    /**
     * <p>An object that describes the scope of the recommendation preference to
     * delete.</p> <p>You can delete recommendation preferences that are created at the
     * organization level (for management accounts of an organization only), account
     * level, and resource level. For more information, see <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/enhanced-infrastructure-metrics.html">Activating
     * enhanced infrastructure metrics</a> in the <i>Compute Optimizer User
     * Guide</i>.</p>
     */
    inline DeleteRecommendationPreferencesRequest& WithScope(const Scope& value) { SetScope(value); return *this;}

    /**
     * <p>An object that describes the scope of the recommendation preference to
     * delete.</p> <p>You can delete recommendation preferences that are created at the
     * organization level (for management accounts of an organization only), account
     * level, and resource level. For more information, see <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/enhanced-infrastructure-metrics.html">Activating
     * enhanced infrastructure metrics</a> in the <i>Compute Optimizer User
     * Guide</i>.</p>
     */
    inline DeleteRecommendationPreferencesRequest& WithScope(Scope&& value) { SetScope(std::move(value)); return *this;}


    /**
     * <p>The name of the recommendation preference to delete.</p> <p>Enhanced
     * infrastructure metrics (<code>EnhancedInfrastructureMetrics</code>) is the only
     * feature that can be activated through preferences. Therefore, it is also the
     * only recommendation preference that can be deleted.</p>
     */
    inline const Aws::Vector<RecommendationPreferenceName>& GetRecommendationPreferenceNames() const{ return m_recommendationPreferenceNames; }

    /**
     * <p>The name of the recommendation preference to delete.</p> <p>Enhanced
     * infrastructure metrics (<code>EnhancedInfrastructureMetrics</code>) is the only
     * feature that can be activated through preferences. Therefore, it is also the
     * only recommendation preference that can be deleted.</p>
     */
    inline bool RecommendationPreferenceNamesHasBeenSet() const { return m_recommendationPreferenceNamesHasBeenSet; }

    /**
     * <p>The name of the recommendation preference to delete.</p> <p>Enhanced
     * infrastructure metrics (<code>EnhancedInfrastructureMetrics</code>) is the only
     * feature that can be activated through preferences. Therefore, it is also the
     * only recommendation preference that can be deleted.</p>
     */
    inline void SetRecommendationPreferenceNames(const Aws::Vector<RecommendationPreferenceName>& value) { m_recommendationPreferenceNamesHasBeenSet = true; m_recommendationPreferenceNames = value; }

    /**
     * <p>The name of the recommendation preference to delete.</p> <p>Enhanced
     * infrastructure metrics (<code>EnhancedInfrastructureMetrics</code>) is the only
     * feature that can be activated through preferences. Therefore, it is also the
     * only recommendation preference that can be deleted.</p>
     */
    inline void SetRecommendationPreferenceNames(Aws::Vector<RecommendationPreferenceName>&& value) { m_recommendationPreferenceNamesHasBeenSet = true; m_recommendationPreferenceNames = std::move(value); }

    /**
     * <p>The name of the recommendation preference to delete.</p> <p>Enhanced
     * infrastructure metrics (<code>EnhancedInfrastructureMetrics</code>) is the only
     * feature that can be activated through preferences. Therefore, it is also the
     * only recommendation preference that can be deleted.</p>
     */
    inline DeleteRecommendationPreferencesRequest& WithRecommendationPreferenceNames(const Aws::Vector<RecommendationPreferenceName>& value) { SetRecommendationPreferenceNames(value); return *this;}

    /**
     * <p>The name of the recommendation preference to delete.</p> <p>Enhanced
     * infrastructure metrics (<code>EnhancedInfrastructureMetrics</code>) is the only
     * feature that can be activated through preferences. Therefore, it is also the
     * only recommendation preference that can be deleted.</p>
     */
    inline DeleteRecommendationPreferencesRequest& WithRecommendationPreferenceNames(Aws::Vector<RecommendationPreferenceName>&& value) { SetRecommendationPreferenceNames(std::move(value)); return *this;}

    /**
     * <p>The name of the recommendation preference to delete.</p> <p>Enhanced
     * infrastructure metrics (<code>EnhancedInfrastructureMetrics</code>) is the only
     * feature that can be activated through preferences. Therefore, it is also the
     * only recommendation preference that can be deleted.</p>
     */
    inline DeleteRecommendationPreferencesRequest& AddRecommendationPreferenceNames(const RecommendationPreferenceName& value) { m_recommendationPreferenceNamesHasBeenSet = true; m_recommendationPreferenceNames.push_back(value); return *this; }

    /**
     * <p>The name of the recommendation preference to delete.</p> <p>Enhanced
     * infrastructure metrics (<code>EnhancedInfrastructureMetrics</code>) is the only
     * feature that can be activated through preferences. Therefore, it is also the
     * only recommendation preference that can be deleted.</p>
     */
    inline DeleteRecommendationPreferencesRequest& AddRecommendationPreferenceNames(RecommendationPreferenceName&& value) { m_recommendationPreferenceNamesHasBeenSet = true; m_recommendationPreferenceNames.push_back(std::move(value)); return *this; }

  private:

    ResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet;

    Scope m_scope;
    bool m_scopeHasBeenSet;

    Aws::Vector<RecommendationPreferenceName> m_recommendationPreferenceNames;
    bool m_recommendationPreferenceNamesHasBeenSet;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
