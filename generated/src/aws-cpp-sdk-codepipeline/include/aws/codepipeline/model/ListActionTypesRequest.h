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
    AWS_CODEPIPELINE_API ListActionTypesRequest();

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
    inline const ActionOwner& GetActionOwnerFilter() const{ return m_actionOwnerFilter; }
    inline bool ActionOwnerFilterHasBeenSet() const { return m_actionOwnerFilterHasBeenSet; }
    inline void SetActionOwnerFilter(const ActionOwner& value) { m_actionOwnerFilterHasBeenSet = true; m_actionOwnerFilter = value; }
    inline void SetActionOwnerFilter(ActionOwner&& value) { m_actionOwnerFilterHasBeenSet = true; m_actionOwnerFilter = std::move(value); }
    inline ListActionTypesRequest& WithActionOwnerFilter(const ActionOwner& value) { SetActionOwnerFilter(value); return *this;}
    inline ListActionTypesRequest& WithActionOwnerFilter(ActionOwner&& value) { SetActionOwnerFilter(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An identifier that was returned from the previous list action types call,
     * which can be used to return the next set of action types in the list.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListActionTypesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListActionTypesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListActionTypesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Region to filter on for the list of action types.</p>
     */
    inline const Aws::String& GetRegionFilter() const{ return m_regionFilter; }
    inline bool RegionFilterHasBeenSet() const { return m_regionFilterHasBeenSet; }
    inline void SetRegionFilter(const Aws::String& value) { m_regionFilterHasBeenSet = true; m_regionFilter = value; }
    inline void SetRegionFilter(Aws::String&& value) { m_regionFilterHasBeenSet = true; m_regionFilter = std::move(value); }
    inline void SetRegionFilter(const char* value) { m_regionFilterHasBeenSet = true; m_regionFilter.assign(value); }
    inline ListActionTypesRequest& WithRegionFilter(const Aws::String& value) { SetRegionFilter(value); return *this;}
    inline ListActionTypesRequest& WithRegionFilter(Aws::String&& value) { SetRegionFilter(std::move(value)); return *this;}
    inline ListActionTypesRequest& WithRegionFilter(const char* value) { SetRegionFilter(value); return *this;}
    ///@}
  private:

    ActionOwner m_actionOwnerFilter;
    bool m_actionOwnerFilterHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_regionFilter;
    bool m_regionFilterHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
