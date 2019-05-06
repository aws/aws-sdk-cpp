/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_AUTOSCALINGPLANS_API DescribeScalingPlansRequest : public AutoScalingPlansRequest
  {
  public:
    DescribeScalingPlansRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeScalingPlans"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The names of the scaling plans (up to 10). If you specify application
     * sources, you cannot specify scaling plan names.</p>
     */
    inline const Aws::Vector<Aws::String>& GetScalingPlanNames() const{ return m_scalingPlanNames; }

    /**
     * <p>The names of the scaling plans (up to 10). If you specify application
     * sources, you cannot specify scaling plan names.</p>
     */
    inline bool ScalingPlanNamesHasBeenSet() const { return m_scalingPlanNamesHasBeenSet; }

    /**
     * <p>The names of the scaling plans (up to 10). If you specify application
     * sources, you cannot specify scaling plan names.</p>
     */
    inline void SetScalingPlanNames(const Aws::Vector<Aws::String>& value) { m_scalingPlanNamesHasBeenSet = true; m_scalingPlanNames = value; }

    /**
     * <p>The names of the scaling plans (up to 10). If you specify application
     * sources, you cannot specify scaling plan names.</p>
     */
    inline void SetScalingPlanNames(Aws::Vector<Aws::String>&& value) { m_scalingPlanNamesHasBeenSet = true; m_scalingPlanNames = std::move(value); }

    /**
     * <p>The names of the scaling plans (up to 10). If you specify application
     * sources, you cannot specify scaling plan names.</p>
     */
    inline DescribeScalingPlansRequest& WithScalingPlanNames(const Aws::Vector<Aws::String>& value) { SetScalingPlanNames(value); return *this;}

    /**
     * <p>The names of the scaling plans (up to 10). If you specify application
     * sources, you cannot specify scaling plan names.</p>
     */
    inline DescribeScalingPlansRequest& WithScalingPlanNames(Aws::Vector<Aws::String>&& value) { SetScalingPlanNames(std::move(value)); return *this;}

    /**
     * <p>The names of the scaling plans (up to 10). If you specify application
     * sources, you cannot specify scaling plan names.</p>
     */
    inline DescribeScalingPlansRequest& AddScalingPlanNames(const Aws::String& value) { m_scalingPlanNamesHasBeenSet = true; m_scalingPlanNames.push_back(value); return *this; }

    /**
     * <p>The names of the scaling plans (up to 10). If you specify application
     * sources, you cannot specify scaling plan names.</p>
     */
    inline DescribeScalingPlansRequest& AddScalingPlanNames(Aws::String&& value) { m_scalingPlanNamesHasBeenSet = true; m_scalingPlanNames.push_back(std::move(value)); return *this; }

    /**
     * <p>The names of the scaling plans (up to 10). If you specify application
     * sources, you cannot specify scaling plan names.</p>
     */
    inline DescribeScalingPlansRequest& AddScalingPlanNames(const char* value) { m_scalingPlanNamesHasBeenSet = true; m_scalingPlanNames.push_back(value); return *this; }


    /**
     * <p>The version number of the scaling plan. If you specify a scaling plan
     * version, you must also specify a scaling plan name.</p>
     */
    inline long long GetScalingPlanVersion() const{ return m_scalingPlanVersion; }

    /**
     * <p>The version number of the scaling plan. If you specify a scaling plan
     * version, you must also specify a scaling plan name.</p>
     */
    inline bool ScalingPlanVersionHasBeenSet() const { return m_scalingPlanVersionHasBeenSet; }

    /**
     * <p>The version number of the scaling plan. If you specify a scaling plan
     * version, you must also specify a scaling plan name.</p>
     */
    inline void SetScalingPlanVersion(long long value) { m_scalingPlanVersionHasBeenSet = true; m_scalingPlanVersion = value; }

    /**
     * <p>The version number of the scaling plan. If you specify a scaling plan
     * version, you must also specify a scaling plan name.</p>
     */
    inline DescribeScalingPlansRequest& WithScalingPlanVersion(long long value) { SetScalingPlanVersion(value); return *this;}


    /**
     * <p>The sources for the applications (up to 10). If you specify scaling plan
     * names, you cannot specify application sources.</p>
     */
    inline const Aws::Vector<ApplicationSource>& GetApplicationSources() const{ return m_applicationSources; }

    /**
     * <p>The sources for the applications (up to 10). If you specify scaling plan
     * names, you cannot specify application sources.</p>
     */
    inline bool ApplicationSourcesHasBeenSet() const { return m_applicationSourcesHasBeenSet; }

    /**
     * <p>The sources for the applications (up to 10). If you specify scaling plan
     * names, you cannot specify application sources.</p>
     */
    inline void SetApplicationSources(const Aws::Vector<ApplicationSource>& value) { m_applicationSourcesHasBeenSet = true; m_applicationSources = value; }

    /**
     * <p>The sources for the applications (up to 10). If you specify scaling plan
     * names, you cannot specify application sources.</p>
     */
    inline void SetApplicationSources(Aws::Vector<ApplicationSource>&& value) { m_applicationSourcesHasBeenSet = true; m_applicationSources = std::move(value); }

    /**
     * <p>The sources for the applications (up to 10). If you specify scaling plan
     * names, you cannot specify application sources.</p>
     */
    inline DescribeScalingPlansRequest& WithApplicationSources(const Aws::Vector<ApplicationSource>& value) { SetApplicationSources(value); return *this;}

    /**
     * <p>The sources for the applications (up to 10). If you specify scaling plan
     * names, you cannot specify application sources.</p>
     */
    inline DescribeScalingPlansRequest& WithApplicationSources(Aws::Vector<ApplicationSource>&& value) { SetApplicationSources(std::move(value)); return *this;}

    /**
     * <p>The sources for the applications (up to 10). If you specify scaling plan
     * names, you cannot specify application sources.</p>
     */
    inline DescribeScalingPlansRequest& AddApplicationSources(const ApplicationSource& value) { m_applicationSourcesHasBeenSet = true; m_applicationSources.push_back(value); return *this; }

    /**
     * <p>The sources for the applications (up to 10). If you specify scaling plan
     * names, you cannot specify application sources.</p>
     */
    inline DescribeScalingPlansRequest& AddApplicationSources(ApplicationSource&& value) { m_applicationSourcesHasBeenSet = true; m_applicationSources.push_back(std::move(value)); return *this; }


    /**
     * <p>The maximum number of scalable resources to return. This value can be between
     * 1 and 50. The default value is 50.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of scalable resources to return. This value can be between
     * 1 and 50. The default value is 50.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of scalable resources to return. This value can be between
     * 1 and 50. The default value is 50.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of scalable resources to return. This value can be between
     * 1 and 50. The default value is 50.</p>
     */
    inline DescribeScalingPlansRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The token for the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token for the next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token for the next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of results.</p>
     */
    inline DescribeScalingPlansRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results.</p>
     */
    inline DescribeScalingPlansRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results.</p>
     */
    inline DescribeScalingPlansRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_scalingPlanNames;
    bool m_scalingPlanNamesHasBeenSet;

    long long m_scalingPlanVersion;
    bool m_scalingPlanVersionHasBeenSet;

    Aws::Vector<ApplicationSource> m_applicationSources;
    bool m_applicationSourcesHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace AutoScalingPlans
} // namespace Aws
