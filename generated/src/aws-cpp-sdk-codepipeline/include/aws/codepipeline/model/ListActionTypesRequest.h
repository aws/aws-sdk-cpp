/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/codepipeline/CodePipelineRequest.h>
#include <aws/codepipeline/model/ActionOwner.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CodePipeline
{
namespace Model
{

  /**
   * <p>Represents the input of a <code>ListActionTypes</code> action.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/ListActionTypesInput">AWS
   * API Reference</a></p>
   */
  class ListActionTypesRequest : public CodePipelineRequest
  {
  public:
    AWS_CODEPIPELINE_API ListActionTypesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListActionTypes"; }

    AWS_CODEPIPELINE_API Aws::String SerializePayload() const override;

    AWS_CODEPIPELINE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Filters the list of action types to those created by a specified entity.</p>
     */
    inline ActionOwner GetActionOwnerFilter() const { return m_actionOwnerFilter; }
    inline bool ActionOwnerFilterHasBeenSet() const { return m_actionOwnerFilterHasBeenSet; }
    inline void SetActionOwnerFilter(ActionOwner value) { m_actionOwnerFilterHasBeenSet = true; m_actionOwnerFilter = value; }
    inline ListActionTypesRequest& WithActionOwnerFilter(ActionOwner value) { SetActionOwnerFilter(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An identifier that was returned from the previous list action types call,
     * which can be used to return the next set of action types in the list.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListActionTypesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Region to filter on for the list of action types.</p>
     */
    inline const Aws::String& GetRegionFilter() const { return m_regionFilter; }
    inline bool RegionFilterHasBeenSet() const { return m_regionFilterHasBeenSet; }
    template<typename RegionFilterT = Aws::String>
    void SetRegionFilter(RegionFilterT&& value) { m_regionFilterHasBeenSet = true; m_regionFilter = std::forward<RegionFilterT>(value); }
    template<typename RegionFilterT = Aws::String>
    ListActionTypesRequest& WithRegionFilter(RegionFilterT&& value) { SetRegionFilter(std::forward<RegionFilterT>(value)); return *this;}
    ///@}
  private:

    ActionOwner m_actionOwnerFilter{ActionOwner::NOT_SET};
    bool m_actionOwnerFilterHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_regionFilter;
    bool m_regionFilterHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
