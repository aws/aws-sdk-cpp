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
#include <aws/compute-optimizer/model/LookBackPeriodPreference.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/compute-optimizer/model/SavingsEstimationMode.h>
#include <aws/compute-optimizer/model/UtilizationPreference.h>
#include <aws/compute-optimizer/model/PreferredResource.h>
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


    /**
     * <p> The preference to control the number of days the utilization metrics of the
     * Amazon Web Services resource are analyzed. When this preference isn't specified,
     * we use the default value <code>DAYS_14</code>. </p>  <p>You can only set
     * this preference for the Amazon EC2 instance and Auto Scaling group resource
     * types.</p> 
     */
    inline const LookBackPeriodPreference& GetLookBackPeriod() const{ return m_lookBackPeriod; }

    /**
     * <p> The preference to control the number of days the utilization metrics of the
     * Amazon Web Services resource are analyzed. When this preference isn't specified,
     * we use the default value <code>DAYS_14</code>. </p>  <p>You can only set
     * this preference for the Amazon EC2 instance and Auto Scaling group resource
     * types.</p> 
     */
    inline bool LookBackPeriodHasBeenSet() const { return m_lookBackPeriodHasBeenSet; }

    /**
     * <p> The preference to control the number of days the utilization metrics of the
     * Amazon Web Services resource are analyzed. When this preference isn't specified,
     * we use the default value <code>DAYS_14</code>. </p>  <p>You can only set
     * this preference for the Amazon EC2 instance and Auto Scaling group resource
     * types.</p> 
     */
    inline void SetLookBackPeriod(const LookBackPeriodPreference& value) { m_lookBackPeriodHasBeenSet = true; m_lookBackPeriod = value; }

    /**
     * <p> The preference to control the number of days the utilization metrics of the
     * Amazon Web Services resource are analyzed. When this preference isn't specified,
     * we use the default value <code>DAYS_14</code>. </p>  <p>You can only set
     * this preference for the Amazon EC2 instance and Auto Scaling group resource
     * types.</p> 
     */
    inline void SetLookBackPeriod(LookBackPeriodPreference&& value) { m_lookBackPeriodHasBeenSet = true; m_lookBackPeriod = std::move(value); }

    /**
     * <p> The preference to control the number of days the utilization metrics of the
     * Amazon Web Services resource are analyzed. When this preference isn't specified,
     * we use the default value <code>DAYS_14</code>. </p>  <p>You can only set
     * this preference for the Amazon EC2 instance and Auto Scaling group resource
     * types.</p> 
     */
    inline PutRecommendationPreferencesRequest& WithLookBackPeriod(const LookBackPeriodPreference& value) { SetLookBackPeriod(value); return *this;}

    /**
     * <p> The preference to control the number of days the utilization metrics of the
     * Amazon Web Services resource are analyzed. When this preference isn't specified,
     * we use the default value <code>DAYS_14</code>. </p>  <p>You can only set
     * this preference for the Amazon EC2 instance and Auto Scaling group resource
     * types.</p> 
     */
    inline PutRecommendationPreferencesRequest& WithLookBackPeriod(LookBackPeriodPreference&& value) { SetLookBackPeriod(std::move(value)); return *this;}


    /**
     * <p> The preference to control the resource’s CPU utilization thresholds -
     * threshold and headroom. When this preference isn't specified, we use the
     * following default values: </p> <ul> <li> <p> <code>P99_5</code> for
     * threshold</p> </li> <li> <p> <code>PERCENT_17</code> for headroom</p> </li>
     * </ul>  <p>You can only set this preference for the Amazon EC2 instance
     * resource type.</p> 
     */
    inline const Aws::Vector<UtilizationPreference>& GetUtilizationPreferences() const{ return m_utilizationPreferences; }

    /**
     * <p> The preference to control the resource’s CPU utilization thresholds -
     * threshold and headroom. When this preference isn't specified, we use the
     * following default values: </p> <ul> <li> <p> <code>P99_5</code> for
     * threshold</p> </li> <li> <p> <code>PERCENT_17</code> for headroom</p> </li>
     * </ul>  <p>You can only set this preference for the Amazon EC2 instance
     * resource type.</p> 
     */
    inline bool UtilizationPreferencesHasBeenSet() const { return m_utilizationPreferencesHasBeenSet; }

    /**
     * <p> The preference to control the resource’s CPU utilization thresholds -
     * threshold and headroom. When this preference isn't specified, we use the
     * following default values: </p> <ul> <li> <p> <code>P99_5</code> for
     * threshold</p> </li> <li> <p> <code>PERCENT_17</code> for headroom</p> </li>
     * </ul>  <p>You can only set this preference for the Amazon EC2 instance
     * resource type.</p> 
     */
    inline void SetUtilizationPreferences(const Aws::Vector<UtilizationPreference>& value) { m_utilizationPreferencesHasBeenSet = true; m_utilizationPreferences = value; }

    /**
     * <p> The preference to control the resource’s CPU utilization thresholds -
     * threshold and headroom. When this preference isn't specified, we use the
     * following default values: </p> <ul> <li> <p> <code>P99_5</code> for
     * threshold</p> </li> <li> <p> <code>PERCENT_17</code> for headroom</p> </li>
     * </ul>  <p>You can only set this preference for the Amazon EC2 instance
     * resource type.</p> 
     */
    inline void SetUtilizationPreferences(Aws::Vector<UtilizationPreference>&& value) { m_utilizationPreferencesHasBeenSet = true; m_utilizationPreferences = std::move(value); }

    /**
     * <p> The preference to control the resource’s CPU utilization thresholds -
     * threshold and headroom. When this preference isn't specified, we use the
     * following default values: </p> <ul> <li> <p> <code>P99_5</code> for
     * threshold</p> </li> <li> <p> <code>PERCENT_17</code> for headroom</p> </li>
     * </ul>  <p>You can only set this preference for the Amazon EC2 instance
     * resource type.</p> 
     */
    inline PutRecommendationPreferencesRequest& WithUtilizationPreferences(const Aws::Vector<UtilizationPreference>& value) { SetUtilizationPreferences(value); return *this;}

    /**
     * <p> The preference to control the resource’s CPU utilization thresholds -
     * threshold and headroom. When this preference isn't specified, we use the
     * following default values: </p> <ul> <li> <p> <code>P99_5</code> for
     * threshold</p> </li> <li> <p> <code>PERCENT_17</code> for headroom</p> </li>
     * </ul>  <p>You can only set this preference for the Amazon EC2 instance
     * resource type.</p> 
     */
    inline PutRecommendationPreferencesRequest& WithUtilizationPreferences(Aws::Vector<UtilizationPreference>&& value) { SetUtilizationPreferences(std::move(value)); return *this;}

    /**
     * <p> The preference to control the resource’s CPU utilization thresholds -
     * threshold and headroom. When this preference isn't specified, we use the
     * following default values: </p> <ul> <li> <p> <code>P99_5</code> for
     * threshold</p> </li> <li> <p> <code>PERCENT_17</code> for headroom</p> </li>
     * </ul>  <p>You can only set this preference for the Amazon EC2 instance
     * resource type.</p> 
     */
    inline PutRecommendationPreferencesRequest& AddUtilizationPreferences(const UtilizationPreference& value) { m_utilizationPreferencesHasBeenSet = true; m_utilizationPreferences.push_back(value); return *this; }

    /**
     * <p> The preference to control the resource’s CPU utilization thresholds -
     * threshold and headroom. When this preference isn't specified, we use the
     * following default values: </p> <ul> <li> <p> <code>P99_5</code> for
     * threshold</p> </li> <li> <p> <code>PERCENT_17</code> for headroom</p> </li>
     * </ul>  <p>You can only set this preference for the Amazon EC2 instance
     * resource type.</p> 
     */
    inline PutRecommendationPreferencesRequest& AddUtilizationPreferences(UtilizationPreference&& value) { m_utilizationPreferencesHasBeenSet = true; m_utilizationPreferences.push_back(std::move(value)); return *this; }


    /**
     * <p> The preference to control which resource type values are considered when
     * generating rightsizing recommendations. You can specify this preference as a
     * combination of include and exclude lists. You must specify either an
     * <code>includeList</code> or <code>excludeList</code>. If the preference is an
     * empty set of resource type values, an error occurs. </p>  <p>You can only
     * set this preference for the Amazon EC2 instance and Auto Scaling group resource
     * types.</p> 
     */
    inline const Aws::Vector<PreferredResource>& GetPreferredResources() const{ return m_preferredResources; }

    /**
     * <p> The preference to control which resource type values are considered when
     * generating rightsizing recommendations. You can specify this preference as a
     * combination of include and exclude lists. You must specify either an
     * <code>includeList</code> or <code>excludeList</code>. If the preference is an
     * empty set of resource type values, an error occurs. </p>  <p>You can only
     * set this preference for the Amazon EC2 instance and Auto Scaling group resource
     * types.</p> 
     */
    inline bool PreferredResourcesHasBeenSet() const { return m_preferredResourcesHasBeenSet; }

    /**
     * <p> The preference to control which resource type values are considered when
     * generating rightsizing recommendations. You can specify this preference as a
     * combination of include and exclude lists. You must specify either an
     * <code>includeList</code> or <code>excludeList</code>. If the preference is an
     * empty set of resource type values, an error occurs. </p>  <p>You can only
     * set this preference for the Amazon EC2 instance and Auto Scaling group resource
     * types.</p> 
     */
    inline void SetPreferredResources(const Aws::Vector<PreferredResource>& value) { m_preferredResourcesHasBeenSet = true; m_preferredResources = value; }

    /**
     * <p> The preference to control which resource type values are considered when
     * generating rightsizing recommendations. You can specify this preference as a
     * combination of include and exclude lists. You must specify either an
     * <code>includeList</code> or <code>excludeList</code>. If the preference is an
     * empty set of resource type values, an error occurs. </p>  <p>You can only
     * set this preference for the Amazon EC2 instance and Auto Scaling group resource
     * types.</p> 
     */
    inline void SetPreferredResources(Aws::Vector<PreferredResource>&& value) { m_preferredResourcesHasBeenSet = true; m_preferredResources = std::move(value); }

    /**
     * <p> The preference to control which resource type values are considered when
     * generating rightsizing recommendations. You can specify this preference as a
     * combination of include and exclude lists. You must specify either an
     * <code>includeList</code> or <code>excludeList</code>. If the preference is an
     * empty set of resource type values, an error occurs. </p>  <p>You can only
     * set this preference for the Amazon EC2 instance and Auto Scaling group resource
     * types.</p> 
     */
    inline PutRecommendationPreferencesRequest& WithPreferredResources(const Aws::Vector<PreferredResource>& value) { SetPreferredResources(value); return *this;}

    /**
     * <p> The preference to control which resource type values are considered when
     * generating rightsizing recommendations. You can specify this preference as a
     * combination of include and exclude lists. You must specify either an
     * <code>includeList</code> or <code>excludeList</code>. If the preference is an
     * empty set of resource type values, an error occurs. </p>  <p>You can only
     * set this preference for the Amazon EC2 instance and Auto Scaling group resource
     * types.</p> 
     */
    inline PutRecommendationPreferencesRequest& WithPreferredResources(Aws::Vector<PreferredResource>&& value) { SetPreferredResources(std::move(value)); return *this;}

    /**
     * <p> The preference to control which resource type values are considered when
     * generating rightsizing recommendations. You can specify this preference as a
     * combination of include and exclude lists. You must specify either an
     * <code>includeList</code> or <code>excludeList</code>. If the preference is an
     * empty set of resource type values, an error occurs. </p>  <p>You can only
     * set this preference for the Amazon EC2 instance and Auto Scaling group resource
     * types.</p> 
     */
    inline PutRecommendationPreferencesRequest& AddPreferredResources(const PreferredResource& value) { m_preferredResourcesHasBeenSet = true; m_preferredResources.push_back(value); return *this; }

    /**
     * <p> The preference to control which resource type values are considered when
     * generating rightsizing recommendations. You can specify this preference as a
     * combination of include and exclude lists. You must specify either an
     * <code>includeList</code> or <code>excludeList</code>. If the preference is an
     * empty set of resource type values, an error occurs. </p>  <p>You can only
     * set this preference for the Amazon EC2 instance and Auto Scaling group resource
     * types.</p> 
     */
    inline PutRecommendationPreferencesRequest& AddPreferredResources(PreferredResource&& value) { m_preferredResourcesHasBeenSet = true; m_preferredResources.push_back(std::move(value)); return *this; }


    /**
     * <p> The status of the savings estimation mode preference to create or update.
     * </p> <p>Specify the <code>AfterDiscounts</code> status to activate the
     * preference, or specify <code>BeforeDiscounts</code> to deactivate the
     * preference.</p> <p>Only the account manager or delegated administrator of your
     * organization can activate this preference.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/savings-estimation-mode.html">
     * Savings estimation mode</a> in the <i>Compute Optimizer User Guide</i>.</p>
     */
    inline const SavingsEstimationMode& GetSavingsEstimationMode() const{ return m_savingsEstimationMode; }

    /**
     * <p> The status of the savings estimation mode preference to create or update.
     * </p> <p>Specify the <code>AfterDiscounts</code> status to activate the
     * preference, or specify <code>BeforeDiscounts</code> to deactivate the
     * preference.</p> <p>Only the account manager or delegated administrator of your
     * organization can activate this preference.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/savings-estimation-mode.html">
     * Savings estimation mode</a> in the <i>Compute Optimizer User Guide</i>.</p>
     */
    inline bool SavingsEstimationModeHasBeenSet() const { return m_savingsEstimationModeHasBeenSet; }

    /**
     * <p> The status of the savings estimation mode preference to create or update.
     * </p> <p>Specify the <code>AfterDiscounts</code> status to activate the
     * preference, or specify <code>BeforeDiscounts</code> to deactivate the
     * preference.</p> <p>Only the account manager or delegated administrator of your
     * organization can activate this preference.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/savings-estimation-mode.html">
     * Savings estimation mode</a> in the <i>Compute Optimizer User Guide</i>.</p>
     */
    inline void SetSavingsEstimationMode(const SavingsEstimationMode& value) { m_savingsEstimationModeHasBeenSet = true; m_savingsEstimationMode = value; }

    /**
     * <p> The status of the savings estimation mode preference to create or update.
     * </p> <p>Specify the <code>AfterDiscounts</code> status to activate the
     * preference, or specify <code>BeforeDiscounts</code> to deactivate the
     * preference.</p> <p>Only the account manager or delegated administrator of your
     * organization can activate this preference.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/savings-estimation-mode.html">
     * Savings estimation mode</a> in the <i>Compute Optimizer User Guide</i>.</p>
     */
    inline void SetSavingsEstimationMode(SavingsEstimationMode&& value) { m_savingsEstimationModeHasBeenSet = true; m_savingsEstimationMode = std::move(value); }

    /**
     * <p> The status of the savings estimation mode preference to create or update.
     * </p> <p>Specify the <code>AfterDiscounts</code> status to activate the
     * preference, or specify <code>BeforeDiscounts</code> to deactivate the
     * preference.</p> <p>Only the account manager or delegated administrator of your
     * organization can activate this preference.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/savings-estimation-mode.html">
     * Savings estimation mode</a> in the <i>Compute Optimizer User Guide</i>.</p>
     */
    inline PutRecommendationPreferencesRequest& WithSavingsEstimationMode(const SavingsEstimationMode& value) { SetSavingsEstimationMode(value); return *this;}

    /**
     * <p> The status of the savings estimation mode preference to create or update.
     * </p> <p>Specify the <code>AfterDiscounts</code> status to activate the
     * preference, or specify <code>BeforeDiscounts</code> to deactivate the
     * preference.</p> <p>Only the account manager or delegated administrator of your
     * organization can activate this preference.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/savings-estimation-mode.html">
     * Savings estimation mode</a> in the <i>Compute Optimizer User Guide</i>.</p>
     */
    inline PutRecommendationPreferencesRequest& WithSavingsEstimationMode(SavingsEstimationMode&& value) { SetSavingsEstimationMode(std::move(value)); return *this;}

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

    LookBackPeriodPreference m_lookBackPeriod;
    bool m_lookBackPeriodHasBeenSet = false;

    Aws::Vector<UtilizationPreference> m_utilizationPreferences;
    bool m_utilizationPreferencesHasBeenSet = false;

    Aws::Vector<PreferredResource> m_preferredResources;
    bool m_preferredResourcesHasBeenSet = false;

    SavingsEstimationMode m_savingsEstimationMode;
    bool m_savingsEstimationModeHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
