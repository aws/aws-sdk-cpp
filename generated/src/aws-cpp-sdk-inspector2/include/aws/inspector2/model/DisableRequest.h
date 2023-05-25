/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/Inspector2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/model/ResourceScanType.h>
#include <utility>

namespace Aws
{
namespace Inspector2
{
namespace Model
{

  /**
   */
  class DisableRequest : public Inspector2Request
  {
  public:
    AWS_INSPECTOR2_API DisableRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "Disable"; }

    AWS_INSPECTOR2_API Aws::String SerializePayload() const override;


    /**
     * <p>An array of account IDs you want to disable Amazon Inspector scans for.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAccountIds() const{ return m_accountIds; }

    /**
     * <p>An array of account IDs you want to disable Amazon Inspector scans for.</p>
     */
    inline bool AccountIdsHasBeenSet() const { return m_accountIdsHasBeenSet; }

    /**
     * <p>An array of account IDs you want to disable Amazon Inspector scans for.</p>
     */
    inline void SetAccountIds(const Aws::Vector<Aws::String>& value) { m_accountIdsHasBeenSet = true; m_accountIds = value; }

    /**
     * <p>An array of account IDs you want to disable Amazon Inspector scans for.</p>
     */
    inline void SetAccountIds(Aws::Vector<Aws::String>&& value) { m_accountIdsHasBeenSet = true; m_accountIds = std::move(value); }

    /**
     * <p>An array of account IDs you want to disable Amazon Inspector scans for.</p>
     */
    inline DisableRequest& WithAccountIds(const Aws::Vector<Aws::String>& value) { SetAccountIds(value); return *this;}

    /**
     * <p>An array of account IDs you want to disable Amazon Inspector scans for.</p>
     */
    inline DisableRequest& WithAccountIds(Aws::Vector<Aws::String>&& value) { SetAccountIds(std::move(value)); return *this;}

    /**
     * <p>An array of account IDs you want to disable Amazon Inspector scans for.</p>
     */
    inline DisableRequest& AddAccountIds(const Aws::String& value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(value); return *this; }

    /**
     * <p>An array of account IDs you want to disable Amazon Inspector scans for.</p>
     */
    inline DisableRequest& AddAccountIds(Aws::String&& value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of account IDs you want to disable Amazon Inspector scans for.</p>
     */
    inline DisableRequest& AddAccountIds(const char* value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(value); return *this; }


    /**
     * <p>The resource scan types you want to disable.</p>
     */
    inline const Aws::Vector<ResourceScanType>& GetResourceTypes() const{ return m_resourceTypes; }

    /**
     * <p>The resource scan types you want to disable.</p>
     */
    inline bool ResourceTypesHasBeenSet() const { return m_resourceTypesHasBeenSet; }

    /**
     * <p>The resource scan types you want to disable.</p>
     */
    inline void SetResourceTypes(const Aws::Vector<ResourceScanType>& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes = value; }

    /**
     * <p>The resource scan types you want to disable.</p>
     */
    inline void SetResourceTypes(Aws::Vector<ResourceScanType>&& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes = std::move(value); }

    /**
     * <p>The resource scan types you want to disable.</p>
     */
    inline DisableRequest& WithResourceTypes(const Aws::Vector<ResourceScanType>& value) { SetResourceTypes(value); return *this;}

    /**
     * <p>The resource scan types you want to disable.</p>
     */
    inline DisableRequest& WithResourceTypes(Aws::Vector<ResourceScanType>&& value) { SetResourceTypes(std::move(value)); return *this;}

    /**
     * <p>The resource scan types you want to disable.</p>
     */
    inline DisableRequest& AddResourceTypes(const ResourceScanType& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes.push_back(value); return *this; }

    /**
     * <p>The resource scan types you want to disable.</p>
     */
    inline DisableRequest& AddResourceTypes(ResourceScanType&& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Aws::String> m_accountIds;
    bool m_accountIdsHasBeenSet = false;

    Aws::Vector<ResourceScanType> m_resourceTypes;
    bool m_resourceTypesHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
