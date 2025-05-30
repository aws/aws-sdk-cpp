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
  class DeleteRecommendationPreferencesRequest : public ComputeOptimizerRequest
  {
  public:
    AWS_COMPUTEOPTIMIZER_API DeleteRecommendationPreferencesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteRecommendationPreferences"; }

    AWS_COMPUTEOPTIMIZER_API Aws::String SerializePayload() const override;

    AWS_COMPUTEOPTIMIZER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The target resource type of the recommendation preference to delete.</p>
     * <p>The <code>Ec2Instance</code> option encompasses standalone instances and
     * instances that are part of Auto Scaling groups. The
     * <code>AutoScalingGroup</code> option encompasses only instances that are part of
     * an Auto Scaling group.</p>
     */
    inline ResourceType GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(ResourceType value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline DeleteRecommendationPreferencesRequest& WithResourceType(ResourceType value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that describes the scope of the recommendation preference to
     * delete.</p> <p>You can delete recommendation preferences that are created at the
     * organization level (for management accounts of an organization only), account
     * level, and resource level. For more information, see <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/enhanced-infrastructure-metrics.html">Activating
     * enhanced infrastructure metrics</a> in the <i>Compute Optimizer User
     * Guide</i>.</p>
     */
    inline const Scope& GetScope() const { return m_scope; }
    inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }
    template<typename ScopeT = Scope>
    void SetScope(ScopeT&& value) { m_scopeHasBeenSet = true; m_scope = std::forward<ScopeT>(value); }
    template<typename ScopeT = Scope>
    DeleteRecommendationPreferencesRequest& WithScope(ScopeT&& value) { SetScope(std::forward<ScopeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the recommendation preference to delete.</p>
     */
    inline const Aws::Vector<RecommendationPreferenceName>& GetRecommendationPreferenceNames() const { return m_recommendationPreferenceNames; }
    inline bool RecommendationPreferenceNamesHasBeenSet() const { return m_recommendationPreferenceNamesHasBeenSet; }
    template<typename RecommendationPreferenceNamesT = Aws::Vector<RecommendationPreferenceName>>
    void SetRecommendationPreferenceNames(RecommendationPreferenceNamesT&& value) { m_recommendationPreferenceNamesHasBeenSet = true; m_recommendationPreferenceNames = std::forward<RecommendationPreferenceNamesT>(value); }
    template<typename RecommendationPreferenceNamesT = Aws::Vector<RecommendationPreferenceName>>
    DeleteRecommendationPreferencesRequest& WithRecommendationPreferenceNames(RecommendationPreferenceNamesT&& value) { SetRecommendationPreferenceNames(std::forward<RecommendationPreferenceNamesT>(value)); return *this;}
    inline DeleteRecommendationPreferencesRequest& AddRecommendationPreferenceNames(RecommendationPreferenceName value) { m_recommendationPreferenceNamesHasBeenSet = true; m_recommendationPreferenceNames.push_back(value); return *this; }
    ///@}
  private:

    ResourceType m_resourceType{ResourceType::NOT_SET};
    bool m_resourceTypeHasBeenSet = false;

    Scope m_scope;
    bool m_scopeHasBeenSet = false;

    Aws::Vector<RecommendationPreferenceName> m_recommendationPreferenceNames;
    bool m_recommendationPreferenceNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
