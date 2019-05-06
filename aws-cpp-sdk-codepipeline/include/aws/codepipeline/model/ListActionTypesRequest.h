/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_CODEPIPELINE_API ListActionTypesRequest : public CodePipelineRequest
  {
  public:
    ListActionTypesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListActionTypes"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Filters the list of action types to those created by a specified entity.</p>
     */
    inline const ActionOwner& GetActionOwnerFilter() const{ return m_actionOwnerFilter; }

    /**
     * <p>Filters the list of action types to those created by a specified entity.</p>
     */
    inline bool ActionOwnerFilterHasBeenSet() const { return m_actionOwnerFilterHasBeenSet; }

    /**
     * <p>Filters the list of action types to those created by a specified entity.</p>
     */
    inline void SetActionOwnerFilter(const ActionOwner& value) { m_actionOwnerFilterHasBeenSet = true; m_actionOwnerFilter = value; }

    /**
     * <p>Filters the list of action types to those created by a specified entity.</p>
     */
    inline void SetActionOwnerFilter(ActionOwner&& value) { m_actionOwnerFilterHasBeenSet = true; m_actionOwnerFilter = std::move(value); }

    /**
     * <p>Filters the list of action types to those created by a specified entity.</p>
     */
    inline ListActionTypesRequest& WithActionOwnerFilter(const ActionOwner& value) { SetActionOwnerFilter(value); return *this;}

    /**
     * <p>Filters the list of action types to those created by a specified entity.</p>
     */
    inline ListActionTypesRequest& WithActionOwnerFilter(ActionOwner&& value) { SetActionOwnerFilter(std::move(value)); return *this;}


    /**
     * <p>An identifier that was returned from the previous list action types call,
     * which can be used to return the next set of action types in the list.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>An identifier that was returned from the previous list action types call,
     * which can be used to return the next set of action types in the list.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>An identifier that was returned from the previous list action types call,
     * which can be used to return the next set of action types in the list.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>An identifier that was returned from the previous list action types call,
     * which can be used to return the next set of action types in the list.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>An identifier that was returned from the previous list action types call,
     * which can be used to return the next set of action types in the list.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>An identifier that was returned from the previous list action types call,
     * which can be used to return the next set of action types in the list.</p>
     */
    inline ListActionTypesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>An identifier that was returned from the previous list action types call,
     * which can be used to return the next set of action types in the list.</p>
     */
    inline ListActionTypesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>An identifier that was returned from the previous list action types call,
     * which can be used to return the next set of action types in the list.</p>
     */
    inline ListActionTypesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    ActionOwner m_actionOwnerFilter;
    bool m_actionOwnerFilterHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
