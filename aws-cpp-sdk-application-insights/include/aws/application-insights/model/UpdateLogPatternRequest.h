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
#include <aws/application-insights/ApplicationInsights_EXPORTS.h>
#include <aws/application-insights/ApplicationInsightsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ApplicationInsights
{
namespace Model
{

  /**
   */
  class AWS_APPLICATIONINSIGHTS_API UpdateLogPatternRequest : public ApplicationInsightsRequest
  {
  public:
    UpdateLogPatternRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateLogPattern"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the resource group.</p>
     */
    inline const Aws::String& GetResourceGroupName() const{ return m_resourceGroupName; }

    /**
     * <p>The name of the resource group.</p>
     */
    inline bool ResourceGroupNameHasBeenSet() const { return m_resourceGroupNameHasBeenSet; }

    /**
     * <p>The name of the resource group.</p>
     */
    inline void SetResourceGroupName(const Aws::String& value) { m_resourceGroupNameHasBeenSet = true; m_resourceGroupName = value; }

    /**
     * <p>The name of the resource group.</p>
     */
    inline void SetResourceGroupName(Aws::String&& value) { m_resourceGroupNameHasBeenSet = true; m_resourceGroupName = std::move(value); }

    /**
     * <p>The name of the resource group.</p>
     */
    inline void SetResourceGroupName(const char* value) { m_resourceGroupNameHasBeenSet = true; m_resourceGroupName.assign(value); }

    /**
     * <p>The name of the resource group.</p>
     */
    inline UpdateLogPatternRequest& WithResourceGroupName(const Aws::String& value) { SetResourceGroupName(value); return *this;}

    /**
     * <p>The name of the resource group.</p>
     */
    inline UpdateLogPatternRequest& WithResourceGroupName(Aws::String&& value) { SetResourceGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the resource group.</p>
     */
    inline UpdateLogPatternRequest& WithResourceGroupName(const char* value) { SetResourceGroupName(value); return *this;}


    /**
     * <p>The name of the log pattern set.</p>
     */
    inline const Aws::String& GetPatternSetName() const{ return m_patternSetName; }

    /**
     * <p>The name of the log pattern set.</p>
     */
    inline bool PatternSetNameHasBeenSet() const { return m_patternSetNameHasBeenSet; }

    /**
     * <p>The name of the log pattern set.</p>
     */
    inline void SetPatternSetName(const Aws::String& value) { m_patternSetNameHasBeenSet = true; m_patternSetName = value; }

    /**
     * <p>The name of the log pattern set.</p>
     */
    inline void SetPatternSetName(Aws::String&& value) { m_patternSetNameHasBeenSet = true; m_patternSetName = std::move(value); }

    /**
     * <p>The name of the log pattern set.</p>
     */
    inline void SetPatternSetName(const char* value) { m_patternSetNameHasBeenSet = true; m_patternSetName.assign(value); }

    /**
     * <p>The name of the log pattern set.</p>
     */
    inline UpdateLogPatternRequest& WithPatternSetName(const Aws::String& value) { SetPatternSetName(value); return *this;}

    /**
     * <p>The name of the log pattern set.</p>
     */
    inline UpdateLogPatternRequest& WithPatternSetName(Aws::String&& value) { SetPatternSetName(std::move(value)); return *this;}

    /**
     * <p>The name of the log pattern set.</p>
     */
    inline UpdateLogPatternRequest& WithPatternSetName(const char* value) { SetPatternSetName(value); return *this;}


    /**
     * <p>The name of the log pattern.</p>
     */
    inline const Aws::String& GetPatternName() const{ return m_patternName; }

    /**
     * <p>The name of the log pattern.</p>
     */
    inline bool PatternNameHasBeenSet() const { return m_patternNameHasBeenSet; }

    /**
     * <p>The name of the log pattern.</p>
     */
    inline void SetPatternName(const Aws::String& value) { m_patternNameHasBeenSet = true; m_patternName = value; }

    /**
     * <p>The name of the log pattern.</p>
     */
    inline void SetPatternName(Aws::String&& value) { m_patternNameHasBeenSet = true; m_patternName = std::move(value); }

    /**
     * <p>The name of the log pattern.</p>
     */
    inline void SetPatternName(const char* value) { m_patternNameHasBeenSet = true; m_patternName.assign(value); }

    /**
     * <p>The name of the log pattern.</p>
     */
    inline UpdateLogPatternRequest& WithPatternName(const Aws::String& value) { SetPatternName(value); return *this;}

    /**
     * <p>The name of the log pattern.</p>
     */
    inline UpdateLogPatternRequest& WithPatternName(Aws::String&& value) { SetPatternName(std::move(value)); return *this;}

    /**
     * <p>The name of the log pattern.</p>
     */
    inline UpdateLogPatternRequest& WithPatternName(const char* value) { SetPatternName(value); return *this;}


    /**
     * <p>The log pattern.</p>
     */
    inline const Aws::String& GetPattern() const{ return m_pattern; }

    /**
     * <p>The log pattern.</p>
     */
    inline bool PatternHasBeenSet() const { return m_patternHasBeenSet; }

    /**
     * <p>The log pattern.</p>
     */
    inline void SetPattern(const Aws::String& value) { m_patternHasBeenSet = true; m_pattern = value; }

    /**
     * <p>The log pattern.</p>
     */
    inline void SetPattern(Aws::String&& value) { m_patternHasBeenSet = true; m_pattern = std::move(value); }

    /**
     * <p>The log pattern.</p>
     */
    inline void SetPattern(const char* value) { m_patternHasBeenSet = true; m_pattern.assign(value); }

    /**
     * <p>The log pattern.</p>
     */
    inline UpdateLogPatternRequest& WithPattern(const Aws::String& value) { SetPattern(value); return *this;}

    /**
     * <p>The log pattern.</p>
     */
    inline UpdateLogPatternRequest& WithPattern(Aws::String&& value) { SetPattern(std::move(value)); return *this;}

    /**
     * <p>The log pattern.</p>
     */
    inline UpdateLogPatternRequest& WithPattern(const char* value) { SetPattern(value); return *this;}


    /**
     * <p>Rank of the log pattern.</p>
     */
    inline int GetRank() const{ return m_rank; }

    /**
     * <p>Rank of the log pattern.</p>
     */
    inline bool RankHasBeenSet() const { return m_rankHasBeenSet; }

    /**
     * <p>Rank of the log pattern.</p>
     */
    inline void SetRank(int value) { m_rankHasBeenSet = true; m_rank = value; }

    /**
     * <p>Rank of the log pattern.</p>
     */
    inline UpdateLogPatternRequest& WithRank(int value) { SetRank(value); return *this;}

  private:

    Aws::String m_resourceGroupName;
    bool m_resourceGroupNameHasBeenSet;

    Aws::String m_patternSetName;
    bool m_patternSetNameHasBeenSet;

    Aws::String m_patternName;
    bool m_patternNameHasBeenSet;

    Aws::String m_pattern;
    bool m_patternHasBeenSet;

    int m_rank;
    bool m_rankHasBeenSet;
  };

} // namespace Model
} // namespace ApplicationInsights
} // namespace Aws
