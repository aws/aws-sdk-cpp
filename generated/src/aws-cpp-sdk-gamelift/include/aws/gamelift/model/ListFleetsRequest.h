/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   */
  class ListFleetsRequest : public GameLiftRequest
  {
  public:
    AWS_GAMELIFT_API ListFleetsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListFleets"; }

    AWS_GAMELIFT_API Aws::String SerializePayload() const override;

    AWS_GAMELIFT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A unique identifier for the build to request fleets for. Use this parameter
     * to return only fleets using a specified build. Use either the build ID or ARN
     * value.</p>
     */
    inline const Aws::String& GetBuildId() const{ return m_buildId; }

    /**
     * <p>A unique identifier for the build to request fleets for. Use this parameter
     * to return only fleets using a specified build. Use either the build ID or ARN
     * value.</p>
     */
    inline bool BuildIdHasBeenSet() const { return m_buildIdHasBeenSet; }

    /**
     * <p>A unique identifier for the build to request fleets for. Use this parameter
     * to return only fleets using a specified build. Use either the build ID or ARN
     * value.</p>
     */
    inline void SetBuildId(const Aws::String& value) { m_buildIdHasBeenSet = true; m_buildId = value; }

    /**
     * <p>A unique identifier for the build to request fleets for. Use this parameter
     * to return only fleets using a specified build. Use either the build ID or ARN
     * value.</p>
     */
    inline void SetBuildId(Aws::String&& value) { m_buildIdHasBeenSet = true; m_buildId = std::move(value); }

    /**
     * <p>A unique identifier for the build to request fleets for. Use this parameter
     * to return only fleets using a specified build. Use either the build ID or ARN
     * value.</p>
     */
    inline void SetBuildId(const char* value) { m_buildIdHasBeenSet = true; m_buildId.assign(value); }

    /**
     * <p>A unique identifier for the build to request fleets for. Use this parameter
     * to return only fleets using a specified build. Use either the build ID or ARN
     * value.</p>
     */
    inline ListFleetsRequest& WithBuildId(const Aws::String& value) { SetBuildId(value); return *this;}

    /**
     * <p>A unique identifier for the build to request fleets for. Use this parameter
     * to return only fleets using a specified build. Use either the build ID or ARN
     * value.</p>
     */
    inline ListFleetsRequest& WithBuildId(Aws::String&& value) { SetBuildId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the build to request fleets for. Use this parameter
     * to return only fleets using a specified build. Use either the build ID or ARN
     * value.</p>
     */
    inline ListFleetsRequest& WithBuildId(const char* value) { SetBuildId(value); return *this;}


    /**
     * <p>A unique identifier for the Realtime script to request fleets for. Use this
     * parameter to return only fleets using a specified script. Use either the script
     * ID or ARN value.</p>
     */
    inline const Aws::String& GetScriptId() const{ return m_scriptId; }

    /**
     * <p>A unique identifier for the Realtime script to request fleets for. Use this
     * parameter to return only fleets using a specified script. Use either the script
     * ID or ARN value.</p>
     */
    inline bool ScriptIdHasBeenSet() const { return m_scriptIdHasBeenSet; }

    /**
     * <p>A unique identifier for the Realtime script to request fleets for. Use this
     * parameter to return only fleets using a specified script. Use either the script
     * ID or ARN value.</p>
     */
    inline void SetScriptId(const Aws::String& value) { m_scriptIdHasBeenSet = true; m_scriptId = value; }

    /**
     * <p>A unique identifier for the Realtime script to request fleets for. Use this
     * parameter to return only fleets using a specified script. Use either the script
     * ID or ARN value.</p>
     */
    inline void SetScriptId(Aws::String&& value) { m_scriptIdHasBeenSet = true; m_scriptId = std::move(value); }

    /**
     * <p>A unique identifier for the Realtime script to request fleets for. Use this
     * parameter to return only fleets using a specified script. Use either the script
     * ID or ARN value.</p>
     */
    inline void SetScriptId(const char* value) { m_scriptIdHasBeenSet = true; m_scriptId.assign(value); }

    /**
     * <p>A unique identifier for the Realtime script to request fleets for. Use this
     * parameter to return only fleets using a specified script. Use either the script
     * ID or ARN value.</p>
     */
    inline ListFleetsRequest& WithScriptId(const Aws::String& value) { SetScriptId(value); return *this;}

    /**
     * <p>A unique identifier for the Realtime script to request fleets for. Use this
     * parameter to return only fleets using a specified script. Use either the script
     * ID or ARN value.</p>
     */
    inline ListFleetsRequest& WithScriptId(Aws::String&& value) { SetScriptId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the Realtime script to request fleets for. Use this
     * parameter to return only fleets using a specified script. Use either the script
     * ID or ARN value.</p>
     */
    inline ListFleetsRequest& WithScriptId(const char* value) { SetScriptId(value); return *this;}


    /**
     * <p>The maximum number of results to return. Use this parameter with
     * <code>NextToken</code> to get results as a set of sequential pages.</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>The maximum number of results to return. Use this parameter with
     * <code>NextToken</code> to get results as a set of sequential pages.</p>
     */
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }

    /**
     * <p>The maximum number of results to return. Use this parameter with
     * <code>NextToken</code> to get results as a set of sequential pages.</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>The maximum number of results to return. Use this parameter with
     * <code>NextToken</code> to get results as a set of sequential pages.</p>
     */
    inline ListFleetsRequest& WithLimit(int value) { SetLimit(value); return *this;}


    /**
     * <p>A token that indicates the start of the next sequential page of results. Use
     * the token that is returned with a previous call to this operation. To start at
     * the beginning of the result set, do not specify a value.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token that indicates the start of the next sequential page of results. Use
     * the token that is returned with a previous call to this operation. To start at
     * the beginning of the result set, do not specify a value.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A token that indicates the start of the next sequential page of results. Use
     * the token that is returned with a previous call to this operation. To start at
     * the beginning of the result set, do not specify a value.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A token that indicates the start of the next sequential page of results. Use
     * the token that is returned with a previous call to this operation. To start at
     * the beginning of the result set, do not specify a value.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A token that indicates the start of the next sequential page of results. Use
     * the token that is returned with a previous call to this operation. To start at
     * the beginning of the result set, do not specify a value.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A token that indicates the start of the next sequential page of results. Use
     * the token that is returned with a previous call to this operation. To start at
     * the beginning of the result set, do not specify a value.</p>
     */
    inline ListFleetsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token that indicates the start of the next sequential page of results. Use
     * the token that is returned with a previous call to this operation. To start at
     * the beginning of the result set, do not specify a value.</p>
     */
    inline ListFleetsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token that indicates the start of the next sequential page of results. Use
     * the token that is returned with a previous call to this operation. To start at
     * the beginning of the result set, do not specify a value.</p>
     */
    inline ListFleetsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_buildId;
    bool m_buildIdHasBeenSet = false;

    Aws::String m_scriptId;
    bool m_scriptIdHasBeenSet = false;

    int m_limit;
    bool m_limitHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
