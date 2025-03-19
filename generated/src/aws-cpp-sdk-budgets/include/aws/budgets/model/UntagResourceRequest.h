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
    AWS_BUDGETS_API UntagResourceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UntagResource"; }

    AWS_BUDGETS_API Aws::String SerializePayload() const override;

    AWS_BUDGETS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The unique identifier for the resource.</p>
     */
    inline const Aws::String& GetResourceARN() const { return m_resourceARN; }
    inline bool ResourceARNHasBeenSet() const { return m_resourceARNHasBeenSet; }
    template<typename ResourceARNT = Aws::String>
    void SetResourceARN(ResourceARNT&& value) { m_resourceARNHasBeenSet = true; m_resourceARN = std::forward<ResourceARNT>(value); }
    template<typename ResourceARNT = Aws::String>
    UntagResourceRequest& WithResourceARN(ResourceARNT&& value) { SetResourceARN(std::forward<ResourceARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key that's associated with the tag.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceTagKeys() const { return m_resourceTagKeys; }
    inline bool ResourceTagKeysHasBeenSet() const { return m_resourceTagKeysHasBeenSet; }
    template<typename ResourceTagKeysT = Aws::Vector<Aws::String>>
    void SetResourceTagKeys(ResourceTagKeysT&& value) { m_resourceTagKeysHasBeenSet = true; m_resourceTagKeys = std::forward<ResourceTagKeysT>(value); }
    template<typename ResourceTagKeysT = Aws::Vector<Aws::String>>
    UntagResourceRequest& WithResourceTagKeys(ResourceTagKeysT&& value) { SetResourceTagKeys(std::forward<ResourceTagKeysT>(value)); return *this;}
    template<typename ResourceTagKeysT = Aws::String>
    UntagResourceRequest& AddResourceTagKeys(ResourceTagKeysT&& value) { m_resourceTagKeysHasBeenSet = true; m_resourceTagKeys.emplace_back(std::forward<ResourceTagKeysT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_resourceARN;
    bool m_resourceARNHasBeenSet = false;

    Aws::Vector<Aws::String> m_resourceTagKeys;
    bool m_resourceTagKeysHasBeenSet = false;
  };

} // namespace Model
} // namespace Budgets
} // namespace Aws
