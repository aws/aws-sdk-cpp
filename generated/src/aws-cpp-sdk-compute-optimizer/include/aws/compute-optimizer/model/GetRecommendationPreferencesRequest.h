/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/compute-optimizer/ComputeOptimizerRequest.h>
#include <aws/compute-optimizer/model/ResourceType.h>
#include <aws/compute-optimizer/model/Scope.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ComputeOptimizer
{
namespace Model
{

  /**
   */
  class GetRecommendationPreferencesRequest : public ComputeOptimizerRequest
  {
  public:
    AWS_COMPUTEOPTIMIZER_API GetRecommendationPreferencesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetRecommendationPreferences"; }

    AWS_COMPUTEOPTIMIZER_API Aws::String SerializePayload() const override;

    AWS_COMPUTEOPTIMIZER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The target resource type of the recommendation preference for which to return
     * preferences.</p> <p>The <code>Ec2Instance</code> option encompasses standalone
     * instances and instances that are part of Auto Scaling groups. The
     * <code>AutoScalingGroup</code> option encompasses only instances that are part of
     * an Auto Scaling group.</p>  <p>The valid values for this parameter are
     * <code>Ec2Instance</code> and <code>AutoScalingGroup</code>.</p> 
     */
    inline const ResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The target resource type of the recommendation preference for which to return
     * preferences.</p> <p>The <code>Ec2Instance</code> option encompasses standalone
     * instances and instances that are part of Auto Scaling groups. The
     * <code>AutoScalingGroup</code> option encompasses only instances that are part of
     * an Auto Scaling group.</p>  <p>The valid values for this parameter are
     * <code>Ec2Instance</code> and <code>AutoScalingGroup</code>.</p> 
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The target resource type of the recommendation preference for which to return
     * preferences.</p> <p>The <code>Ec2Instance</code> option encompasses standalone
     * instances and instances that are part of Auto Scaling groups. The
     * <code>AutoScalingGroup</code> option encompasses only instances that are part of
     * an Auto Scaling group.</p>  <p>The valid values for this parameter are
     * <code>Ec2Instance</code> and <code>AutoScalingGroup</code>.</p> 
     */
    inline void SetResourceType(const ResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The target resource type of the recommendation preference for which to return
     * preferences.</p> <p>The <code>Ec2Instance</code> option encompasses standalone
     * instances and instances that are part of Auto Scaling groups. The
     * <code>AutoScalingGroup</code> option encompasses only instances that are part of
     * an Auto Scaling group.</p>  <p>The valid values for this parameter are
     * <code>Ec2Instance</code> and <code>AutoScalingGroup</code>.</p> 
     */
    inline void SetResourceType(ResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The target resource type of the recommendation preference for which to return
     * preferences.</p> <p>The <code>Ec2Instance</code> option encompasses standalone
     * instances and instances that are part of Auto Scaling groups. The
     * <code>AutoScalingGroup</code> option encompasses only instances that are part of
     * an Auto Scaling group.</p>  <p>The valid values for this parameter are
     * <code>Ec2Instance</code> and <code>AutoScalingGroup</code>.</p> 
     */
    inline GetRecommendationPreferencesRequest& WithResourceType(const ResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>The target resource type of the recommendation preference for which to return
     * preferences.</p> <p>The <code>Ec2Instance</code> option encompasses standalone
     * instances and instances that are part of Auto Scaling groups. The
     * <code>AutoScalingGroup</code> option encompasses only instances that are part of
     * an Auto Scaling group.</p>  <p>The valid values for this parameter are
     * <code>Ec2Instance</code> and <code>AutoScalingGroup</code>.</p> 
     */
    inline GetRecommendationPreferencesRequest& WithResourceType(ResourceType&& value) { SetResourceType(std::move(value)); return *this;}


    /**
     * <p>An object that describes the scope of the recommendation preference to
     * return.</p> <p>You can return recommendation preferences that are created at the
     * organization level (for management accounts of an organization only), account
     * level, and resource level. For more information, see <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/enhanced-infrastructure-metrics.html">Activating
     * enhanced infrastructure metrics</a> in the <i>Compute Optimizer User
     * Guide</i>.</p>
     */
    inline const Scope& GetScope() const{ return m_scope; }

    /**
     * <p>An object that describes the scope of the recommendation preference to
     * return.</p> <p>You can return recommendation preferences that are created at the
     * organization level (for management accounts of an organization only), account
     * level, and resource level. For more information, see <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/enhanced-infrastructure-metrics.html">Activating
     * enhanced infrastructure metrics</a> in the <i>Compute Optimizer User
     * Guide</i>.</p>
     */
    inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }

    /**
     * <p>An object that describes the scope of the recommendation preference to
     * return.</p> <p>You can return recommendation preferences that are created at the
     * organization level (for management accounts of an organization only), account
     * level, and resource level. For more information, see <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/enhanced-infrastructure-metrics.html">Activating
     * enhanced infrastructure metrics</a> in the <i>Compute Optimizer User
     * Guide</i>.</p>
     */
    inline void SetScope(const Scope& value) { m_scopeHasBeenSet = true; m_scope = value; }

    /**
     * <p>An object that describes the scope of the recommendation preference to
     * return.</p> <p>You can return recommendation preferences that are created at the
     * organization level (for management accounts of an organization only), account
     * level, and resource level. For more information, see <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/enhanced-infrastructure-metrics.html">Activating
     * enhanced infrastructure metrics</a> in the <i>Compute Optimizer User
     * Guide</i>.</p>
     */
    inline void SetScope(Scope&& value) { m_scopeHasBeenSet = true; m_scope = std::move(value); }

    /**
     * <p>An object that describes the scope of the recommendation preference to
     * return.</p> <p>You can return recommendation preferences that are created at the
     * organization level (for management accounts of an organization only), account
     * level, and resource level. For more information, see <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/enhanced-infrastructure-metrics.html">Activating
     * enhanced infrastructure metrics</a> in the <i>Compute Optimizer User
     * Guide</i>.</p>
     */
    inline GetRecommendationPreferencesRequest& WithScope(const Scope& value) { SetScope(value); return *this;}

    /**
     * <p>An object that describes the scope of the recommendation preference to
     * return.</p> <p>You can return recommendation preferences that are created at the
     * organization level (for management accounts of an organization only), account
     * level, and resource level. For more information, see <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/enhanced-infrastructure-metrics.html">Activating
     * enhanced infrastructure metrics</a> in the <i>Compute Optimizer User
     * Guide</i>.</p>
     */
    inline GetRecommendationPreferencesRequest& WithScope(Scope&& value) { SetScope(std::move(value)); return *this;}


    /**
     * <p>The token to advance to the next page of recommendation preferences.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to advance to the next page of recommendation preferences.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token to advance to the next page of recommendation preferences.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token to advance to the next page of recommendation preferences.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token to advance to the next page of recommendation preferences.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token to advance to the next page of recommendation preferences.</p>
     */
    inline GetRecommendationPreferencesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to advance to the next page of recommendation preferences.</p>
     */
    inline GetRecommendationPreferencesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to advance to the next page of recommendation preferences.</p>
     */
    inline GetRecommendationPreferencesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of recommendation preferences to return with a single
     * request.</p> <p>To retrieve the remaining results, make another request with the
     * returned <code>nextToken</code> value.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of recommendation preferences to return with a single
     * request.</p> <p>To retrieve the remaining results, make another request with the
     * returned <code>nextToken</code> value.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of recommendation preferences to return with a single
     * request.</p> <p>To retrieve the remaining results, make another request with the
     * returned <code>nextToken</code> value.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of recommendation preferences to return with a single
     * request.</p> <p>To retrieve the remaining results, make another request with the
     * returned <code>nextToken</code> value.</p>
     */
    inline GetRecommendationPreferencesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    ResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Scope m_scope;
    bool m_scopeHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
