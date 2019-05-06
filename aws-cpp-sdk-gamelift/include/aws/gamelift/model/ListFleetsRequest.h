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
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/GameLiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace GameLift
{
namespace Model
{

  /**
   * <p>Represents the input for a request action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/ListFleetsInput">AWS
   * API Reference</a></p>
   */
  class AWS_GAMELIFT_API ListFleetsRequest : public GameLiftRequest
  {
  public:
    ListFleetsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListFleets"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Unique identifier for a build to return fleets for. Use this parameter to
     * return only fleets using the specified build. To retrieve all fleets, leave this
     * parameter empty.</p>
     */
    inline const Aws::String& GetBuildId() const{ return m_buildId; }

    /**
     * <p>Unique identifier for a build to return fleets for. Use this parameter to
     * return only fleets using the specified build. To retrieve all fleets, leave this
     * parameter empty.</p>
     */
    inline bool BuildIdHasBeenSet() const { return m_buildIdHasBeenSet; }

    /**
     * <p>Unique identifier for a build to return fleets for. Use this parameter to
     * return only fleets using the specified build. To retrieve all fleets, leave this
     * parameter empty.</p>
     */
    inline void SetBuildId(const Aws::String& value) { m_buildIdHasBeenSet = true; m_buildId = value; }

    /**
     * <p>Unique identifier for a build to return fleets for. Use this parameter to
     * return only fleets using the specified build. To retrieve all fleets, leave this
     * parameter empty.</p>
     */
    inline void SetBuildId(Aws::String&& value) { m_buildIdHasBeenSet = true; m_buildId = std::move(value); }

    /**
     * <p>Unique identifier for a build to return fleets for. Use this parameter to
     * return only fleets using the specified build. To retrieve all fleets, leave this
     * parameter empty.</p>
     */
    inline void SetBuildId(const char* value) { m_buildIdHasBeenSet = true; m_buildId.assign(value); }

    /**
     * <p>Unique identifier for a build to return fleets for. Use this parameter to
     * return only fleets using the specified build. To retrieve all fleets, leave this
     * parameter empty.</p>
     */
    inline ListFleetsRequest& WithBuildId(const Aws::String& value) { SetBuildId(value); return *this;}

    /**
     * <p>Unique identifier for a build to return fleets for. Use this parameter to
     * return only fleets using the specified build. To retrieve all fleets, leave this
     * parameter empty.</p>
     */
    inline ListFleetsRequest& WithBuildId(Aws::String&& value) { SetBuildId(std::move(value)); return *this;}

    /**
     * <p>Unique identifier for a build to return fleets for. Use this parameter to
     * return only fleets using the specified build. To retrieve all fleets, leave this
     * parameter empty.</p>
     */
    inline ListFleetsRequest& WithBuildId(const char* value) { SetBuildId(value); return *this;}


    /**
     * <p>Unique identifier for a Realtime script to return fleets for. Use this
     * parameter to return only fleets using the specified script. To retrieve all
     * fleets, leave this parameter empty.</p>
     */
    inline const Aws::String& GetScriptId() const{ return m_scriptId; }

    /**
     * <p>Unique identifier for a Realtime script to return fleets for. Use this
     * parameter to return only fleets using the specified script. To retrieve all
     * fleets, leave this parameter empty.</p>
     */
    inline bool ScriptIdHasBeenSet() const { return m_scriptIdHasBeenSet; }

    /**
     * <p>Unique identifier for a Realtime script to return fleets for. Use this
     * parameter to return only fleets using the specified script. To retrieve all
     * fleets, leave this parameter empty.</p>
     */
    inline void SetScriptId(const Aws::String& value) { m_scriptIdHasBeenSet = true; m_scriptId = value; }

    /**
     * <p>Unique identifier for a Realtime script to return fleets for. Use this
     * parameter to return only fleets using the specified script. To retrieve all
     * fleets, leave this parameter empty.</p>
     */
    inline void SetScriptId(Aws::String&& value) { m_scriptIdHasBeenSet = true; m_scriptId = std::move(value); }

    /**
     * <p>Unique identifier for a Realtime script to return fleets for. Use this
     * parameter to return only fleets using the specified script. To retrieve all
     * fleets, leave this parameter empty.</p>
     */
    inline void SetScriptId(const char* value) { m_scriptIdHasBeenSet = true; m_scriptId.assign(value); }

    /**
     * <p>Unique identifier for a Realtime script to return fleets for. Use this
     * parameter to return only fleets using the specified script. To retrieve all
     * fleets, leave this parameter empty.</p>
     */
    inline ListFleetsRequest& WithScriptId(const Aws::String& value) { SetScriptId(value); return *this;}

    /**
     * <p>Unique identifier for a Realtime script to return fleets for. Use this
     * parameter to return only fleets using the specified script. To retrieve all
     * fleets, leave this parameter empty.</p>
     */
    inline ListFleetsRequest& WithScriptId(Aws::String&& value) { SetScriptId(std::move(value)); return *this;}

    /**
     * <p>Unique identifier for a Realtime script to return fleets for. Use this
     * parameter to return only fleets using the specified script. To retrieve all
     * fleets, leave this parameter empty.</p>
     */
    inline ListFleetsRequest& WithScriptId(const char* value) { SetScriptId(value); return *this;}


    /**
     * <p>Maximum number of results to return. Use this parameter with
     * <code>NextToken</code> to get results as a set of sequential pages.</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>Maximum number of results to return. Use this parameter with
     * <code>NextToken</code> to get results as a set of sequential pages.</p>
     */
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }

    /**
     * <p>Maximum number of results to return. Use this parameter with
     * <code>NextToken</code> to get results as a set of sequential pages.</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>Maximum number of results to return. Use this parameter with
     * <code>NextToken</code> to get results as a set of sequential pages.</p>
     */
    inline ListFleetsRequest& WithLimit(int value) { SetLimit(value); return *this;}


    /**
     * <p>Token that indicates the start of the next sequential page of results. Use
     * the token that is returned with a previous call to this action. To start at the
     * beginning of the result set, do not specify a value.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Token that indicates the start of the next sequential page of results. Use
     * the token that is returned with a previous call to this action. To start at the
     * beginning of the result set, do not specify a value.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>Token that indicates the start of the next sequential page of results. Use
     * the token that is returned with a previous call to this action. To start at the
     * beginning of the result set, do not specify a value.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Token that indicates the start of the next sequential page of results. Use
     * the token that is returned with a previous call to this action. To start at the
     * beginning of the result set, do not specify a value.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>Token that indicates the start of the next sequential page of results. Use
     * the token that is returned with a previous call to this action. To start at the
     * beginning of the result set, do not specify a value.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>Token that indicates the start of the next sequential page of results. Use
     * the token that is returned with a previous call to this action. To start at the
     * beginning of the result set, do not specify a value.</p>
     */
    inline ListFleetsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Token that indicates the start of the next sequential page of results. Use
     * the token that is returned with a previous call to this action. To start at the
     * beginning of the result set, do not specify a value.</p>
     */
    inline ListFleetsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Token that indicates the start of the next sequential page of results. Use
     * the token that is returned with a previous call to this action. To start at the
     * beginning of the result set, do not specify a value.</p>
     */
    inline ListFleetsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_buildId;
    bool m_buildIdHasBeenSet;

    Aws::String m_scriptId;
    bool m_scriptIdHasBeenSet;

    int m_limit;
    bool m_limitHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
