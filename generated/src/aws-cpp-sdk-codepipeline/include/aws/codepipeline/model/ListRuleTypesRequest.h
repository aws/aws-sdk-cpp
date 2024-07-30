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
    AWS_CODEPIPELINE_API ListRuleTypesRequest();

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
    inline const RuleOwner& GetRuleOwnerFilter() const{ return m_ruleOwnerFilter; }
    inline bool RuleOwnerFilterHasBeenSet() const { return m_ruleOwnerFilterHasBeenSet; }
    inline void SetRuleOwnerFilter(const RuleOwner& value) { m_ruleOwnerFilterHasBeenSet = true; m_ruleOwnerFilter = value; }
    inline void SetRuleOwnerFilter(RuleOwner&& value) { m_ruleOwnerFilterHasBeenSet = true; m_ruleOwnerFilter = std::move(value); }
    inline ListRuleTypesRequest& WithRuleOwnerFilter(const RuleOwner& value) { SetRuleOwnerFilter(value); return *this;}
    inline ListRuleTypesRequest& WithRuleOwnerFilter(RuleOwner&& value) { SetRuleOwnerFilter(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The rule Region to filter on.</p>
     */
    inline const Aws::String& GetRegionFilter() const{ return m_regionFilter; }
    inline bool RegionFilterHasBeenSet() const { return m_regionFilterHasBeenSet; }
    inline void SetRegionFilter(const Aws::String& value) { m_regionFilterHasBeenSet = true; m_regionFilter = value; }
    inline void SetRegionFilter(Aws::String&& value) { m_regionFilterHasBeenSet = true; m_regionFilter = std::move(value); }
    inline void SetRegionFilter(const char* value) { m_regionFilterHasBeenSet = true; m_regionFilter.assign(value); }
    inline ListRuleTypesRequest& WithRegionFilter(const Aws::String& value) { SetRegionFilter(value); return *this;}
    inline ListRuleTypesRequest& WithRegionFilter(Aws::String&& value) { SetRegionFilter(std::move(value)); return *this;}
    inline ListRuleTypesRequest& WithRegionFilter(const char* value) { SetRegionFilter(value); return *this;}
    ///@}
  private:

    RuleOwner m_ruleOwnerFilter;
    bool m_ruleOwnerFilterHasBeenSet = false;

    Aws::String m_regionFilter;
    bool m_regionFilterHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
