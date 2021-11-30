/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/compute-optimizer/ComputeOptimizerRequest.h>
#include <aws/compute-optimizer/model/ResourceType.h>
#include <aws/compute-optimizer/model/Scope.h>
#include <aws/compute-optimizer/model/EnhancedInfrastructureMetrics.h>
#include <utility>

namespace Aws
{
namespace ComputeOptimizer
{
namespace Model
{

  /**
   */
  class AWS_COMPUTEOPTIMIZER_API PutRecommendationPreferencesRequest : public ComputeOptimizerRequest
  {
  public:
    PutRecommendationPreferencesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutRecommendationPreferences"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The target resource type of the recommendation preference to create.</p>
     * <p>The <code>Ec2Instance</code> option encompasses standalone instances and
     * instances that are part of Auto Scaling groups. The
     * <code>AutoScalingGroup</code> option encompasses only instances that are part of
     * an Auto Scaling group.</p>
     */
    inline const ResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The target resource type of the recommendation preference to create.</p>
     * <p>The <code>Ec2Instance</code> option encompasses standalone instances and
     * instances that are part of Auto Scaling groups. The
     * <code>AutoScalingGroup</code> option encompasses only instances that are part of
     * an Auto Scaling group.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The target resource type of the recommendation preference to create.</p>
     * <p>The <code>Ec2Instance</code> option encompasses standalone instances and
     * instances that are part of Auto Scaling groups. The
     * <code>AutoScalingGroup</code> option encompasses only instances that are part of
     * an Auto Scaling group.</p>
     */
    inline void SetResourceType(const ResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The target resource type of the recommendation preference to create.</p>
     * <p>The <code>Ec2Instance</code> option encompasses standalone instances and
     * instances that are part of Auto Scaling groups. The
     * <code>AutoScalingGroup</code> option encompasses only instances that are part of
     * an Auto Scaling group.</p>
     */
    inline void SetResourceType(ResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The target resource type of the recommendation preference to create.</p>
     * <p>The <code>Ec2Instance</code> option encompasses standalone instances and
     * instances that are part of Auto Scaling groups. The
     * <code>AutoScalingGroup</code> option encompasses only instances that are part of
     * an Auto Scaling group.</p>
     */
    inline PutRecommendationPreferencesRequest& WithResourceType(const ResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>The target resource type of the recommendation preference to create.</p>
     * <p>The <code>Ec2Instance</code> option encompasses standalone instances and
     * instances that are part of Auto Scaling groups. The
     * <code>AutoScalingGroup</code> option encompasses only instances that are part of
     * an Auto Scaling group.</p>
     */
    inline PutRecommendationPreferencesRequest& WithResourceType(ResourceType&& value) { SetResourceType(std::move(value)); return *this;}


    /**
     * <p>An object that describes the scope of the recommendation preference to
     * create.</p> <p>You can create recommendation preferences at the organization
     * level (for management accounts of an organization only), account level, and
     * resource level. For more information, see <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/enhanced-infrastructure-metrics.html">Activating
     * enhanced infrastructure metrics</a> in the <i>Compute Optimizer User
     * Guide</i>.</p>  <p>You cannot create recommendation preferences for Auto
     * Scaling groups at the organization and account levels. You can create
     * recommendation preferences for Auto Scaling groups only at the resource level by
     * specifying a scope name of <code>ResourceArn</code> and a scope value of the
     * Auto Scaling group Amazon Resource Name (ARN). This will configure the
     * preference for all instances that are part of the specified the Auto Scaling
     * group.</p> 
     */
    inline const Scope& GetScope() const{ return m_scope; }

    /**
     * <p>An object that describes the scope of the recommendation preference to
     * create.</p> <p>You can create recommendation preferences at the organization
     * level (for management accounts of an organization only), account level, and
     * resource level. For more information, see <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/enhanced-infrastructure-metrics.html">Activating
     * enhanced infrastructure metrics</a> in the <i>Compute Optimizer User
     * Guide</i>.</p>  <p>You cannot create recommendation preferences for Auto
     * Scaling groups at the organization and account levels. You can create
     * recommendation preferences for Auto Scaling groups only at the resource level by
     * specifying a scope name of <code>ResourceArn</code> and a scope value of the
     * Auto Scaling group Amazon Resource Name (ARN). This will configure the
     * preference for all instances that are part of the specified the Auto Scaling
     * group.</p> 
     */
    inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }

    /**
     * <p>An object that describes the scope of the recommendation preference to
     * create.</p> <p>You can create recommendation preferences at the organization
     * level (for management accounts of an organization only), account level, and
     * resource level. For more information, see <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/enhanced-infrastructure-metrics.html">Activating
     * enhanced infrastructure metrics</a> in the <i>Compute Optimizer User
     * Guide</i>.</p>  <p>You cannot create recommendation preferences for Auto
     * Scaling groups at the organization and account levels. You can create
     * recommendation preferences for Auto Scaling groups only at the resource level by
     * specifying a scope name of <code>ResourceArn</code> and a scope value of the
     * Auto Scaling group Amazon Resource Name (ARN). This will configure the
     * preference for all instances that are part of the specified the Auto Scaling
     * group.</p> 
     */
    inline void SetScope(const Scope& value) { m_scopeHasBeenSet = true; m_scope = value; }

    /**
     * <p>An object that describes the scope of the recommendation preference to
     * create.</p> <p>You can create recommendation preferences at the organization
     * level (for management accounts of an organization only), account level, and
     * resource level. For more information, see <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/enhanced-infrastructure-metrics.html">Activating
     * enhanced infrastructure metrics</a> in the <i>Compute Optimizer User
     * Guide</i>.</p>  <p>You cannot create recommendation preferences for Auto
     * Scaling groups at the organization and account levels. You can create
     * recommendation preferences for Auto Scaling groups only at the resource level by
     * specifying a scope name of <code>ResourceArn</code> and a scope value of the
     * Auto Scaling group Amazon Resource Name (ARN). This will configure the
     * preference for all instances that are part of the specified the Auto Scaling
     * group.</p> 
     */
    inline void SetScope(Scope&& value) { m_scopeHasBeenSet = true; m_scope = std::move(value); }

    /**
     * <p>An object that describes the scope of the recommendation preference to
     * create.</p> <p>You can create recommendation preferences at the organization
     * level (for management accounts of an organization only), account level, and
     * resource level. For more information, see <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/enhanced-infrastructure-metrics.html">Activating
     * enhanced infrastructure metrics</a> in the <i>Compute Optimizer User
     * Guide</i>.</p>  <p>You cannot create recommendation preferences for Auto
     * Scaling groups at the organization and account levels. You can create
     * recommendation preferences for Auto Scaling groups only at the resource level by
     * specifying a scope name of <code>ResourceArn</code> and a scope value of the
     * Auto Scaling group Amazon Resource Name (ARN). This will configure the
     * preference for all instances that are part of the specified the Auto Scaling
     * group.</p> 
     */
    inline PutRecommendationPreferencesRequest& WithScope(const Scope& value) { SetScope(value); return *this;}

    /**
     * <p>An object that describes the scope of the recommendation preference to
     * create.</p> <p>You can create recommendation preferences at the organization
     * level (for management accounts of an organization only), account level, and
     * resource level. For more information, see <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/enhanced-infrastructure-metrics.html">Activating
     * enhanced infrastructure metrics</a> in the <i>Compute Optimizer User
     * Guide</i>.</p>  <p>You cannot create recommendation preferences for Auto
     * Scaling groups at the organization and account levels. You can create
     * recommendation preferences for Auto Scaling groups only at the resource level by
     * specifying a scope name of <code>ResourceArn</code> and a scope value of the
     * Auto Scaling group Amazon Resource Name (ARN). This will configure the
     * preference for all instances that are part of the specified the Auto Scaling
     * group.</p> 
     */
    inline PutRecommendationPreferencesRequest& WithScope(Scope&& value) { SetScope(std::move(value)); return *this;}


    /**
     * <p>The status of the enhanced infrastructure metrics recommendation preference
     * to create or update.</p> <p>A status of <code>Active</code> confirms that the
     * preference is applied in the latest recommendation refresh, and a status of
     * <code>Inactive</code> confirms that it's not yet applied.</p>
     */
    inline const EnhancedInfrastructureMetrics& GetEnhancedInfrastructureMetrics() const{ return m_enhancedInfrastructureMetrics; }

    /**
     * <p>The status of the enhanced infrastructure metrics recommendation preference
     * to create or update.</p> <p>A status of <code>Active</code> confirms that the
     * preference is applied in the latest recommendation refresh, and a status of
     * <code>Inactive</code> confirms that it's not yet applied.</p>
     */
    inline bool EnhancedInfrastructureMetricsHasBeenSet() const { return m_enhancedInfrastructureMetricsHasBeenSet; }

    /**
     * <p>The status of the enhanced infrastructure metrics recommendation preference
     * to create or update.</p> <p>A status of <code>Active</code> confirms that the
     * preference is applied in the latest recommendation refresh, and a status of
     * <code>Inactive</code> confirms that it's not yet applied.</p>
     */
    inline void SetEnhancedInfrastructureMetrics(const EnhancedInfrastructureMetrics& value) { m_enhancedInfrastructureMetricsHasBeenSet = true; m_enhancedInfrastructureMetrics = value; }

    /**
     * <p>The status of the enhanced infrastructure metrics recommendation preference
     * to create or update.</p> <p>A status of <code>Active</code> confirms that the
     * preference is applied in the latest recommendation refresh, and a status of
     * <code>Inactive</code> confirms that it's not yet applied.</p>
     */
    inline void SetEnhancedInfrastructureMetrics(EnhancedInfrastructureMetrics&& value) { m_enhancedInfrastructureMetricsHasBeenSet = true; m_enhancedInfrastructureMetrics = std::move(value); }

    /**
     * <p>The status of the enhanced infrastructure metrics recommendation preference
     * to create or update.</p> <p>A status of <code>Active</code> confirms that the
     * preference is applied in the latest recommendation refresh, and a status of
     * <code>Inactive</code> confirms that it's not yet applied.</p>
     */
    inline PutRecommendationPreferencesRequest& WithEnhancedInfrastructureMetrics(const EnhancedInfrastructureMetrics& value) { SetEnhancedInfrastructureMetrics(value); return *this;}

    /**
     * <p>The status of the enhanced infrastructure metrics recommendation preference
     * to create or update.</p> <p>A status of <code>Active</code> confirms that the
     * preference is applied in the latest recommendation refresh, and a status of
     * <code>Inactive</code> confirms that it's not yet applied.</p>
     */
    inline PutRecommendationPreferencesRequest& WithEnhancedInfrastructureMetrics(EnhancedInfrastructureMetrics&& value) { SetEnhancedInfrastructureMetrics(std::move(value)); return *this;}

  private:

    ResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet;

    Scope m_scope;
    bool m_scopeHasBeenSet;

    EnhancedInfrastructureMetrics m_enhancedInfrastructureMetrics;
    bool m_enhancedInfrastructureMetricsHasBeenSet;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
