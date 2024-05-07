/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/budgets/Budgets_EXPORTS.h>
#include <aws/budgets/BudgetsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Budgets
{
namespace Model
{

  /**
   */
  class UntagResourceRequest : public BudgetsRequest
  {
  public:
    AWS_BUDGETS_API UntagResourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UntagResource"; }

    AWS_BUDGETS_API Aws::String SerializePayload() const override;

    AWS_BUDGETS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The unique identifier for the resource.</p>
     */
    inline const Aws::String& GetResourceARN() const{ return m_resourceARN; }

    /**
     * <p>The unique identifier for the resource.</p>
     */
    inline bool ResourceARNHasBeenSet() const { return m_resourceARNHasBeenSet; }

    /**
     * <p>The unique identifier for the resource.</p>
     */
    inline void SetResourceARN(const Aws::String& value) { m_resourceARNHasBeenSet = true; m_resourceARN = value; }

    /**
     * <p>The unique identifier for the resource.</p>
     */
    inline void SetResourceARN(Aws::String&& value) { m_resourceARNHasBeenSet = true; m_resourceARN = std::move(value); }

    /**
     * <p>The unique identifier for the resource.</p>
     */
    inline void SetResourceARN(const char* value) { m_resourceARNHasBeenSet = true; m_resourceARN.assign(value); }

    /**
     * <p>The unique identifier for the resource.</p>
     */
    inline UntagResourceRequest& WithResourceARN(const Aws::String& value) { SetResourceARN(value); return *this;}

    /**
     * <p>The unique identifier for the resource.</p>
     */
    inline UntagResourceRequest& WithResourceARN(Aws::String&& value) { SetResourceARN(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the resource.</p>
     */
    inline UntagResourceRequest& WithResourceARN(const char* value) { SetResourceARN(value); return *this;}


    /**
     * <p>The key that's associated with the tag.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceTagKeys() const{ return m_resourceTagKeys; }

    /**
     * <p>The key that's associated with the tag.</p>
     */
    inline bool ResourceTagKeysHasBeenSet() const { return m_resourceTagKeysHasBeenSet; }

    /**
     * <p>The key that's associated with the tag.</p>
     */
    inline void SetResourceTagKeys(const Aws::Vector<Aws::String>& value) { m_resourceTagKeysHasBeenSet = true; m_resourceTagKeys = value; }

    /**
     * <p>The key that's associated with the tag.</p>
     */
    inline void SetResourceTagKeys(Aws::Vector<Aws::String>&& value) { m_resourceTagKeysHasBeenSet = true; m_resourceTagKeys = std::move(value); }

    /**
     * <p>The key that's associated with the tag.</p>
     */
    inline UntagResourceRequest& WithResourceTagKeys(const Aws::Vector<Aws::String>& value) { SetResourceTagKeys(value); return *this;}

    /**
     * <p>The key that's associated with the tag.</p>
     */
    inline UntagResourceRequest& WithResourceTagKeys(Aws::Vector<Aws::String>&& value) { SetResourceTagKeys(std::move(value)); return *this;}

    /**
     * <p>The key that's associated with the tag.</p>
     */
    inline UntagResourceRequest& AddResourceTagKeys(const Aws::String& value) { m_resourceTagKeysHasBeenSet = true; m_resourceTagKeys.push_back(value); return *this; }

    /**
     * <p>The key that's associated with the tag.</p>
     */
    inline UntagResourceRequest& AddResourceTagKeys(Aws::String&& value) { m_resourceTagKeysHasBeenSet = true; m_resourceTagKeys.push_back(std::move(value)); return *this; }

    /**
     * <p>The key that's associated with the tag.</p>
     */
    inline UntagResourceRequest& AddResourceTagKeys(const char* value) { m_resourceTagKeysHasBeenSet = true; m_resourceTagKeys.push_back(value); return *this; }

  private:

    Aws::String m_resourceARN;
    bool m_resourceARNHasBeenSet = false;

    Aws::Vector<Aws::String> m_resourceTagKeys;
    bool m_resourceTagKeysHasBeenSet = false;
  };

} // namespace Model
} // namespace Budgets
} // namespace Aws
