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
  class DescribeApplicationRequest : public ApplicationInsightsRequest
  {
  public:
    AWS_APPLICATIONINSIGHTS_API DescribeApplicationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeApplication"; }

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
    inline DescribeApplicationRequest& WithResourceGroupName(const Aws::String& value) { SetResourceGroupName(value); return *this;}

    /**
     * <p>The name of the resource group.</p>
     */
    inline DescribeApplicationRequest& WithResourceGroupName(Aws::String&& value) { SetResourceGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the resource group.</p>
     */
    inline DescribeApplicationRequest& WithResourceGroupName(const char* value) { SetResourceGroupName(value); return *this;}


    /**
     * <p>The AWS account ID for the resource group owner.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The AWS account ID for the resource group owner.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The AWS account ID for the resource group owner.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The AWS account ID for the resource group owner.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The AWS account ID for the resource group owner.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The AWS account ID for the resource group owner.</p>
     */
    inline DescribeApplicationRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The AWS account ID for the resource group owner.</p>
     */
    inline DescribeApplicationRequest& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The AWS account ID for the resource group owner.</p>
     */
    inline DescribeApplicationRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}

  private:

    Aws::String m_resourceGroupName;
    bool m_resourceGroupNameHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationInsights
} // namespace Aws
