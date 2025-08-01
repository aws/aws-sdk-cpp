/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/aiops/AIOps_EXPORTS.h>
#include <aws/aiops/AIOpsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace AIOps
{
namespace Model
{

  /**
   */
  class ListTagsForResourceRequest : public AIOpsRequest
  {
  public:
    AWS_AIOPS_API ListTagsForResourceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListTagsForResource"; }

    AWS_AIOPS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ARN of the CloudWatch investigations resource that you want to view tags
     * for. You can use the <code>ListInvestigationGroups</code> operation to find the
     * ARNs of investigation groups.</p> <p>The ARN format for an investigation group
     * is
     * <code>arn:aws:aiops:<i>Region</i>:<i>account-id</i>:investigation-group:<i>investigation-group-id</i>
     * </code>.</p>
     */
    inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    template<typename ResourceArnT = Aws::String>
    void SetResourceArn(ResourceArnT&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::forward<ResourceArnT>(value); }
    template<typename ResourceArnT = Aws::String>
    ListTagsForResourceRequest& WithResourceArn(ResourceArnT&& value) { SetResourceArn(std::forward<ResourceArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;
  };

} // namespace Model
} // namespace AIOps
} // namespace Aws
