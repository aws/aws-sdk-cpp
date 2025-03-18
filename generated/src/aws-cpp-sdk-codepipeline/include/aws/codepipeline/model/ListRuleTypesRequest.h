/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/codepipeline/CodePipelineRequest.h>
#include <aws/codepipeline/model/RuleOwner.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CodePipeline
{
namespace Model
{

  /**
   */
  class ListRuleTypesRequest : public CodePipelineRequest
  {
  public:
    AWS_CODEPIPELINE_API ListRuleTypesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListRuleTypes"; }

    AWS_CODEPIPELINE_API Aws::String SerializePayload() const override;

    AWS_CODEPIPELINE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The rule owner to filter on.</p>
     */
    inline RuleOwner GetRuleOwnerFilter() const { return m_ruleOwnerFilter; }
    inline bool RuleOwnerFilterHasBeenSet() const { return m_ruleOwnerFilterHasBeenSet; }
    inline void SetRuleOwnerFilter(RuleOwner value) { m_ruleOwnerFilterHasBeenSet = true; m_ruleOwnerFilter = value; }
    inline ListRuleTypesRequest& WithRuleOwnerFilter(RuleOwner value) { SetRuleOwnerFilter(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The rule Region to filter on.</p>
     */
    inline const Aws::String& GetRegionFilter() const { return m_regionFilter; }
    inline bool RegionFilterHasBeenSet() const { return m_regionFilterHasBeenSet; }
    template<typename RegionFilterT = Aws::String>
    void SetRegionFilter(RegionFilterT&& value) { m_regionFilterHasBeenSet = true; m_regionFilter = std::forward<RegionFilterT>(value); }
    template<typename RegionFilterT = Aws::String>
    ListRuleTypesRequest& WithRegionFilter(RegionFilterT&& value) { SetRegionFilter(std::forward<RegionFilterT>(value)); return *this;}
    ///@}
  private:

    RuleOwner m_ruleOwnerFilter{RuleOwner::NOT_SET};
    bool m_ruleOwnerFilterHasBeenSet = false;

    Aws::String m_regionFilter;
    bool m_regionFilterHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
