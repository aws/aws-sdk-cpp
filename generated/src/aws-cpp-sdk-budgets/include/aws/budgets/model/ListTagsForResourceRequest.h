/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/budgets/Budgets_EXPORTS.h>
#include <aws/budgets/BudgetsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Budgets
{
namespace Model
{

  /**
   */
  class ListTagsForResourceRequest : public BudgetsRequest
  {
  public:
    AWS_BUDGETS_API ListTagsForResourceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListTagsForResource"; }

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
    ListTagsForResourceRequest& WithResourceARN(ResourceARNT&& value) { SetResourceARN(std::forward<ResourceARNT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_resourceARN;
    bool m_resourceARNHasBeenSet = false;
  };

} // namespace Model
} // namespace Budgets
} // namespace Aws
