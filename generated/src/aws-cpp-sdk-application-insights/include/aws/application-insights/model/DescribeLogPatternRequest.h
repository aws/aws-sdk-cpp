/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class DescribeLogPatternRequest : public ApplicationInsightsRequest
  {
  public:
    AWS_APPLICATIONINSIGHTS_API DescribeLogPatternRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeLogPattern"; }

    AWS_APPLICATIONINSIGHTS_API Aws::String SerializePayload() const override;

    AWS_APPLICATIONINSIGHTS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
    inline DescribeLogPatternRequest& WithResourceGroupName(const Aws::String& value) { SetResourceGroupName(value); return *this;}

    /**
     * <p>The name of the resource group.</p>
     */
    inline DescribeLogPatternRequest& WithResourceGroupName(Aws::String&& value) { SetResourceGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the resource group.</p>
     */
    inline DescribeLogPatternRequest& WithResourceGroupName(const char* value) { SetResourceGroupName(value); return *this;}


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
    inline DescribeLogPatternRequest& WithPatternSetName(const Aws::String& value) { SetPatternSetName(value); return *this;}

    /**
     * <p>The name of the log pattern set.</p>
     */
    inline DescribeLogPatternRequest& WithPatternSetName(Aws::String&& value) { SetPatternSetName(std::move(value)); return *this;}

    /**
     * <p>The name of the log pattern set.</p>
     */
    inline DescribeLogPatternRequest& WithPatternSetName(const char* value) { SetPatternSetName(value); return *this;}


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
    inline DescribeLogPatternRequest& WithPatternName(const Aws::String& value) { SetPatternName(value); return *this;}

    /**
     * <p>The name of the log pattern.</p>
     */
    inline DescribeLogPatternRequest& WithPatternName(Aws::String&& value) { SetPatternName(std::move(value)); return *this;}

    /**
     * <p>The name of the log pattern.</p>
     */
    inline DescribeLogPatternRequest& WithPatternName(const char* value) { SetPatternName(value); return *this;}

  private:

    Aws::String m_resourceGroupName;
    bool m_resourceGroupNameHasBeenSet = false;

    Aws::String m_patternSetName;
    bool m_patternSetNameHasBeenSet = false;

    Aws::String m_patternName;
    bool m_patternNameHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationInsights
} // namespace Aws
