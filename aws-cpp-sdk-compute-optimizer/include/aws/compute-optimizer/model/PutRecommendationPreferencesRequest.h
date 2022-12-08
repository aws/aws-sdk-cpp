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
#include <aws/compute-optimizer/model/InferredWorkloadTypesPreference.h>
#include <aws/compute-optimizer/model/ExternalMetricsPreference.h>
#include <utility>

namespace Aws
{
namespace ComputeOptimizer
{
namespace Model
{

  /**
   */
  class PutRecommendationPreferencesRequest : public ComputeOptimizerRequest
  {
  public:
    AWS_COMPUTEOPTIMIZER_API PutRecommendationPreferencesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutRecommendationPreferences"; }

    AWS_COMPUTEOPTIMIZER_API Aws::String SerializePayload() const override;

    AWS_COMPUTEOPTIMIZER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The target resource type of the recommendation preference to create.</p>
     * <p>The <code>Ec2Instance</code> option encompasses standalone instances and
     * instances that are part of Auto Scaling groups. The
     * <code>AutoScalingGroup</code> option encompasses only instances that are part of
     * an Auto Scaling group.</p>  <p>The valid values for this parameter are
     * <code>Ec2Instance</code> and <code>AutoScalingGroup</code>.</p> 
     */
    inline const ResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The target resource type of the recommendation preference to create.</p>
     * <p>The <code>Ec2Instance</code> option encompasses standalone instances and
     * instances that are part of Auto Scaling groups. The
     * <code>AutoScalingGroup</code> option encompasses only instances that are part of
     * an Auto Scaling group.</p>  <p>The valid values for this parameter are
     * <code>Ec2Instance</code> and <code>AutoScalingGroup</code>.</p> 
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The target resource type of the recommendation preference to create.</p>
     * <p>The <code>Ec2Instance</code> option encompasses standalone instances and
     * instances that are part of Auto Scaling groups. The
     * <code>AutoScalingGroup</code> option encompasses only instances that are part of
     * an Auto Scaling group.</p>  <p>The valid values for this parameter are
     * <code>Ec2Instance</code> and <code>AutoScalingGroup</code>.</p> 
     */
    inline void SetResourceType(const ResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The target resource type of the recommendation preference to create.</p>
     * <p>The <code>Ec2Instance</code> option encompasses standalone instances and
     * instances that are part of Auto Scaling groups. The
     * <code>AutoScalingGroup</code> option encompasses only instances that are part of
     * an Auto Scaling group.</p>  <p>The valid values for this parameter are
     * <code>Ec2Instance</code> and <code>AutoScalingGroup</code>.</p> 
     */
    inline void SetResourceType(ResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The target resource type of the recommendation preference to create.</p>
     * <p>The <code>Ec2Instance</code> option encompasses standalone instances and
     * instances that are part of Auto Scaling groups. The
     * <code>AutoScalingGroup</code> option encompasses only instances that are part of
     * an Auto Scaling group.</p>  <p>The valid values for this parameter are
     * <code>Ec2Instance</code> and <code>AutoScalingGroup</code>.</p> 
     */
    inline PutRecommendationPreferencesRequest& WithResourceType(const ResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>The target resource type of the recommendation preference to create.</p>
     * <p>The <code>Ec2Instance</code> option encompasses standalone instances and
     * instances that are part of Auto Scaling groups. The
     * <code>AutoScalingGroup</code> option encompasses only instances that are part of
     * an Auto Scaling group.</p>  <p>The valid values for this parameter are
     * <code>Ec2Instance</code> and <code>AutoScalingGroup</code>.</p> 
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
     * preference for all instances that are part of the specified Auto Scaling group.
     * You also cannot create recommendation preferences at the resource level for
     * instances that are part of an Auto Scaling group. You can create recommendation
     * preferences at the resource level only for standalone instances.</p> 
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
     * preference for all instances that are part of the specified Auto Scaling group.
     * You also cannot create recommendation preferences at the resource level for
     * instances that are part of an Auto Scaling group. You can create recommendation
     * preferences at the resource level only for standalone instances.</p> 
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
     * preference for all instances that are part of the specified Auto Scaling group.
     * You also cannot create recommendation preferences at the resource level for
     * instances that are part of an Auto Scaling group. You can create recommendation
     * preferences at the resource level only for standalone instances.</p> 
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
     * preference for all instances that are part of the specified Auto Scaling group.
     * You also cannot create recommendation preferences at the resource level for
     * instances that are part of an Auto Scaling group. You can create recommendation
     * preferences at the resource level only for standalone instances.</p> 
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
     * preference for all instances that are part of the specified Auto Scaling group.
     * You also cannot create recommendation preferences at the resource level for
     * instances that are part of an Auto Scaling group. You can create recommendation
     * preferences at the resource level only for standalone instances.</p> 
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
     * preference for all instances that are part of the specified Auto Scaling group.
     * You also cannot create recommendation preferences at the resource level for
     * instances that are part of an Auto Scaling group. You can create recommendation
     * preferences at the resource level only for standalone instances.</p> 
     */
    inline PutRecommendationPreferencesRequest& WithScope(Scope&& value) { SetScope(std::move(value)); return *this;}


    /**
     * <p>The status of the enhanced infrastructure metrics recommendation preference
     * to create or update.</p> <p>Specify the <code>Active</code> status to activate
     * the preference, or specify <code>Inactive</code> to deactivate the
     * preference.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/enhanced-infrastructure-metrics.html">Enhanced
     * infrastructure metrics</a> in the <i>Compute Optimizer User Guide</i>.</p>
     */
    inline const EnhancedInfrastructureMetrics& GetEnhancedInfrastructureMetrics() const{ return m_enhancedInfrastructureMetrics; }

    /**
     * <p>The status of the enhanced infrastructure metrics recommendation preference
     * to create or update.</p> <p>Specify the <code>Active</code> status to activate
     * the preference, or specify <code>Inactive</code> to deactivate the
     * preference.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/enhanced-infrastructure-metrics.html">Enhanced
     * infrastructure metrics</a> in the <i>Compute Optimizer User Guide</i>.</p>
     */
    inline bool EnhancedInfrastructureMetricsHasBeenSet() const { return m_enhancedInfrastructureMetricsHasBeenSet; }

    /**
     * <p>The status of the enhanced infrastructure metrics recommendation preference
     * to create or update.</p> <p>Specify the <code>Active</code> status to activate
     * the preference, or specify <code>Inactive</code> to deactivate the
     * preference.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/enhanced-infrastructure-metrics.html">Enhanced
     * infrastructure metrics</a> in the <i>Compute Optimizer User Guide</i>.</p>
     */
    inline void SetEnhancedInfrastructureMetrics(const EnhancedInfrastructureMetrics& value) { m_enhancedInfrastructureMetricsHasBeenSet = true; m_enhancedInfrastructureMetrics = value; }

    /**
     * <p>The status of the enhanced infrastructure metrics recommendation preference
     * to create or update.</p> <p>Specify the <code>Active</code> status to activate
     * the preference, or specify <code>Inactive</code> to deactivate the
     * preference.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/enhanced-infrastructure-metrics.html">Enhanced
     * infrastructure metrics</a> in the <i>Compute Optimizer User Guide</i>.</p>
     */
    inline void SetEnhancedInfrastructureMetrics(EnhancedInfrastructureMetrics&& value) { m_enhancedInfrastructureMetricsHasBeenSet = true; m_enhancedInfrastructureMetrics = std::move(value); }

    /**
     * <p>The status of the enhanced infrastructure metrics recommendation preference
     * to create or update.</p> <p>Specify the <code>Active</code> status to activate
     * the preference, or specify <code>Inactive</code> to deactivate the
     * preference.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/enhanced-infrastructure-metrics.html">Enhanced
     * infrastructure metrics</a> in the <i>Compute Optimizer User Guide</i>.</p>
     */
    inline PutRecommendationPreferencesRequest& WithEnhancedInfrastructureMetrics(const EnhancedInfrastructureMetrics& value) { SetEnhancedInfrastructureMetrics(value); return *this;}

    /**
     * <p>The status of the enhanced infrastructure metrics recommendation preference
     * to create or update.</p> <p>Specify the <code>Active</code> status to activate
     * the preference, or specify <code>Inactive</code> to deactivate the
     * preference.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/enhanced-infrastructure-metrics.html">Enhanced
     * infrastructure metrics</a> in the <i>Compute Optimizer User Guide</i>.</p>
     */
    inline PutRecommendationPreferencesRequest& WithEnhancedInfrastructureMetrics(EnhancedInfrastructureMetrics&& value) { SetEnhancedInfrastructureMetrics(std::move(value)); return *this;}


    /**
     * <p>The status of the inferred workload types recommendation preference to create
     * or update.</p>  <p>The inferred workload type feature is active by
     * default. To deactivate it, create a recommendation preference.</p> 
     * <p>Specify the <code>Inactive</code> status to deactivate the feature, or
     * specify <code>Active</code> to activate it.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/inferred-workload-types.html">Inferred
     * workload types</a> in the <i>Compute Optimizer User Guide</i>.</p>
     */
    inline const InferredWorkloadTypesPreference& GetInferredWorkloadTypes() const{ return m_inferredWorkloadTypes; }

    /**
     * <p>The status of the inferred workload types recommendation preference to create
     * or update.</p>  <p>The inferred workload type feature is active by
     * default. To deactivate it, create a recommendation preference.</p> 
     * <p>Specify the <code>Inactive</code> status to deactivate the feature, or
     * specify <code>Active</code> to activate it.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/inferred-workload-types.html">Inferred
     * workload types</a> in the <i>Compute Optimizer User Guide</i>.</p>
     */
    inline bool InferredWorkloadTypesHasBeenSet() const { return m_inferredWorkloadTypesHasBeenSet; }

    /**
     * <p>The status of the inferred workload types recommendation preference to create
     * or update.</p>  <p>The inferred workload type feature is active by
     * default. To deactivate it, create a recommendation preference.</p> 
     * <p>Specify the <code>Inactive</code> status to deactivate the feature, or
     * specify <code>Active</code> to activate it.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/inferred-workload-types.html">Inferred
     * workload types</a> in the <i>Compute Optimizer User Guide</i>.</p>
     */
    inline void SetInferredWorkloadTypes(const InferredWorkloadTypesPreference& value) { m_inferredWorkloadTypesHasBeenSet = true; m_inferredWorkloadTypes = value; }

    /**
     * <p>The status of the inferred workload types recommendation preference to create
     * or update.</p>  <p>The inferred workload type feature is active by
     * default. To deactivate it, create a recommendation preference.</p> 
     * <p>Specify the <code>Inactive</code> status to deactivate the feature, or
     * specify <code>Active</code> to activate it.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/inferred-workload-types.html">Inferred
     * workload types</a> in the <i>Compute Optimizer User Guide</i>.</p>
     */
    inline void SetInferredWorkloadTypes(InferredWorkloadTypesPreference&& value) { m_inferredWorkloadTypesHasBeenSet = true; m_inferredWorkloadTypes = std::move(value); }

    /**
     * <p>The status of the inferred workload types recommendation preference to create
     * or update.</p>  <p>The inferred workload type feature is active by
     * default. To deactivate it, create a recommendation preference.</p> 
     * <p>Specify the <code>Inactive</code> status to deactivate the feature, or
     * specify <code>Active</code> to activate it.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/inferred-workload-types.html">Inferred
     * workload types</a> in the <i>Compute Optimizer User Guide</i>.</p>
     */
    inline PutRecommendationPreferencesRequest& WithInferredWorkloadTypes(const InferredWorkloadTypesPreference& value) { SetInferredWorkloadTypes(value); return *this;}

    /**
     * <p>The status of the inferred workload types recommendation preference to create
     * or update.</p>  <p>The inferred workload type feature is active by
     * default. To deactivate it, create a recommendation preference.</p> 
     * <p>Specify the <code>Inactive</code> status to deactivate the feature, or
     * specify <code>Active</code> to activate it.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/inferred-workload-types.html">Inferred
     * workload types</a> in the <i>Compute Optimizer User Guide</i>.</p>
     */
    inline PutRecommendationPreferencesRequest& WithInferredWorkloadTypes(InferredWorkloadTypesPreference&& value) { SetInferredWorkloadTypes(std::move(value)); return *this;}


    /**
     * <p>The provider of the external metrics recommendation preference to create or
     * update.</p> <p>Specify a valid provider in the <code>source</code> field to
     * activate the preference. To delete this preference, see the
     * <a>DeleteRecommendationPreferences</a> action.</p> <p>This preference can only
     * be set for the <code>Ec2Instance</code> resource type.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/external-metrics-ingestion.html">External
     * metrics ingestion</a> in the <i>Compute Optimizer User Guide</i>.</p>
     */
    inline const ExternalMetricsPreference& GetExternalMetricsPreference() const{ return m_externalMetricsPreference; }

    /**
     * <p>The provider of the external metrics recommendation preference to create or
     * update.</p> <p>Specify a valid provider in the <code>source</code> field to
     * activate the preference. To delete this preference, see the
     * <a>DeleteRecommendationPreferences</a> action.</p> <p>This preference can only
     * be set for the <code>Ec2Instance</code> resource type.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/external-metrics-ingestion.html">External
     * metrics ingestion</a> in the <i>Compute Optimizer User Guide</i>.</p>
     */
    inline bool ExternalMetricsPreferenceHasBeenSet() const { return m_externalMetricsPreferenceHasBeenSet; }

    /**
     * <p>The provider of the external metrics recommendation preference to create or
     * update.</p> <p>Specify a valid provider in the <code>source</code> field to
     * activate the preference. To delete this preference, see the
     * <a>DeleteRecommendationPreferences</a> action.</p> <p>This preference can only
     * be set for the <code>Ec2Instance</code> resource type.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/external-metrics-ingestion.html">External
     * metrics ingestion</a> in the <i>Compute Optimizer User Guide</i>.</p>
     */
    inline void SetExternalMetricsPreference(const ExternalMetricsPreference& value) { m_externalMetricsPreferenceHasBeenSet = true; m_externalMetricsPreference = value; }

    /**
     * <p>The provider of the external metrics recommendation preference to create or
     * update.</p> <p>Specify a valid provider in the <code>source</code> field to
     * activate the preference. To delete this preference, see the
     * <a>DeleteRecommendationPreferences</a> action.</p> <p>This preference can only
     * be set for the <code>Ec2Instance</code> resource type.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/external-metrics-ingestion.html">External
     * metrics ingestion</a> in the <i>Compute Optimizer User Guide</i>.</p>
     */
    inline void SetExternalMetricsPreference(ExternalMetricsPreference&& value) { m_externalMetricsPreferenceHasBeenSet = true; m_externalMetricsPreference = std::move(value); }

    /**
     * <p>The provider of the external metrics recommendation preference to create or
     * update.</p> <p>Specify a valid provider in the <code>source</code> field to
     * activate the preference. To delete this preference, see the
     * <a>DeleteRecommendationPreferences</a> action.</p> <p>This preference can only
     * be set for the <code>Ec2Instance</code> resource type.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/external-metrics-ingestion.html">External
     * metrics ingestion</a> in the <i>Compute Optimizer User Guide</i>.</p>
     */
    inline PutRecommendationPreferencesRequest& WithExternalMetricsPreference(const ExternalMetricsPreference& value) { SetExternalMetricsPreference(value); return *this;}

    /**
     * <p>The provider of the external metrics recommendation preference to create or
     * update.</p> <p>Specify a valid provider in the <code>source</code> field to
     * activate the preference. To delete this preference, see the
     * <a>DeleteRecommendationPreferences</a> action.</p> <p>This preference can only
     * be set for the <code>Ec2Instance</code> resource type.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/external-metrics-ingestion.html">External
     * metrics ingestion</a> in the <i>Compute Optimizer User Guide</i>.</p>
     */
    inline PutRecommendationPreferencesRequest& WithExternalMetricsPreference(ExternalMetricsPreference&& value) { SetExternalMetricsPreference(std::move(value)); return *this;}

  private:

    ResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Scope m_scope;
    bool m_scopeHasBeenSet = false;

    EnhancedInfrastructureMetrics m_enhancedInfrastructureMetrics;
    bool m_enhancedInfrastructureMetricsHasBeenSet = false;

    InferredWorkloadTypesPreference m_inferredWorkloadTypes;
    bool m_inferredWorkloadTypesHasBeenSet = false;

    ExternalMetricsPreference m_externalMetricsPreference;
    bool m_externalMetricsPreferenceHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
