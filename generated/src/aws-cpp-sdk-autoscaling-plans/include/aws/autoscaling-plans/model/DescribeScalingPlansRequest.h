/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling-plans/AutoScalingPlans_EXPORTS.h>
#include <aws/autoscaling-plans/AutoScalingPlansRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/autoscaling-plans/model/ApplicationSource.h>
#include <utility>

namespace Aws
{
namespace AutoScalingPlans
{
namespace Model
{

  /**
   */
  class DescribeScalingPlansRequest : public AutoScalingPlansRequest
  {
  public:
    AWS_AUTOSCALINGPLANS_API DescribeScalingPlansRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeScalingPlans"; }

    AWS_AUTOSCALINGPLANS_API Aws::String SerializePayload() const override;

    AWS_AUTOSCALINGPLANS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The names of the scaling plans (up to 10). If you specify application
     * sources, you cannot specify scaling plan names.</p>
     */
    inline const Aws::Vector<Aws::String>& GetScalingPlanNames() const { return m_scalingPlanNames; }
    inline bool ScalingPlanNamesHasBeenSet() const { return m_scalingPlanNamesHasBeenSet; }
    template<typename ScalingPlanNamesT = Aws::Vector<Aws::String>>
    void SetScalingPlanNames(ScalingPlanNamesT&& value) { m_scalingPlanNamesHasBeenSet = true; m_scalingPlanNames = std::forward<ScalingPlanNamesT>(value); }
    template<typename ScalingPlanNamesT = Aws::Vector<Aws::String>>
    DescribeScalingPlansRequest& WithScalingPlanNames(ScalingPlanNamesT&& value) { SetScalingPlanNames(std::forward<ScalingPlanNamesT>(value)); return *this;}
    template<typename ScalingPlanNamesT = Aws::String>
    DescribeScalingPlansRequest& AddScalingPlanNames(ScalingPlanNamesT&& value) { m_scalingPlanNamesHasBeenSet = true; m_scalingPlanNames.emplace_back(std::forward<ScalingPlanNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The version number of the scaling plan. Currently, the only valid value is
     * <code>1</code>.</p>  <p>If you specify a scaling plan version, you must
     * also specify a scaling plan name.</p> 
     */
    inline long long GetScalingPlanVersion() const { return m_scalingPlanVersion; }
    inline bool ScalingPlanVersionHasBeenSet() const { return m_scalingPlanVersionHasBeenSet; }
    inline void SetScalingPlanVersion(long long value) { m_scalingPlanVersionHasBeenSet = true; m_scalingPlanVersion = value; }
    inline DescribeScalingPlansRequest& WithScalingPlanVersion(long long value) { SetScalingPlanVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sources for the applications (up to 10). If you specify scaling plan
     * names, you cannot specify application sources.</p>
     */
    inline const Aws::Vector<ApplicationSource>& GetApplicationSources() const { return m_applicationSources; }
    inline bool ApplicationSourcesHasBeenSet() const { return m_applicationSourcesHasBeenSet; }
    template<typename ApplicationSourcesT = Aws::Vector<ApplicationSource>>
    void SetApplicationSources(ApplicationSourcesT&& value) { m_applicationSourcesHasBeenSet = true; m_applicationSources = std::forward<ApplicationSourcesT>(value); }
    template<typename ApplicationSourcesT = Aws::Vector<ApplicationSource>>
    DescribeScalingPlansRequest& WithApplicationSources(ApplicationSourcesT&& value) { SetApplicationSources(std::forward<ApplicationSourcesT>(value)); return *this;}
    template<typename ApplicationSourcesT = ApplicationSource>
    DescribeScalingPlansRequest& AddApplicationSources(ApplicationSourcesT&& value) { m_applicationSourcesHasBeenSet = true; m_applicationSources.emplace_back(std::forward<ApplicationSourcesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum number of scalable resources to return. This value can be between
     * 1 and 50. The default value is 50.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeScalingPlansRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeScalingPlansRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_scalingPlanNames;
    bool m_scalingPlanNamesHasBeenSet = false;

    long long m_scalingPlanVersion{0};
    bool m_scalingPlanVersionHasBeenSet = false;

    Aws::Vector<ApplicationSource> m_applicationSources;
    bool m_applicationSourcesHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScalingPlans
} // namespace Aws
