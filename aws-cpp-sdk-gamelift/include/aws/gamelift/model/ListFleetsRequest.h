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
   * <p>Represents the input for a request operation.</p><p><h3>See Also:</h3>   <a
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
     * <p>A unique identifier for a build to return fleets for. Use this parameter to
     * return only fleets using a specified build. Use either the build ID or ARN
     * value. To retrieve all fleets, do not include either a BuildId and ScriptID
     * parameter.</p>
     */
    inline const Aws::String& GetBuildId() const{ return m_buildId; }

    /**
     * <p>A unique identifier for a build to return fleets for. Use this parameter to
     * return only fleets using a specified build. Use either the build ID or ARN
     * value. To retrieve all fleets, do not include either a BuildId and ScriptID
     * parameter.</p>
     */
    inline bool BuildIdHasBeenSet() const { return m_buildIdHasBeenSet; }

    /**
     * <p>A unique identifier for a build to return fleets for. Use this parameter to
     * return only fleets using a specified build. Use either the build ID or ARN
     * value. To retrieve all fleets, do not include either a BuildId and ScriptID
     * parameter.</p>
     */
    inline void SetBuildId(const Aws::String& value) { m_buildIdHasBeenSet = true; m_buildId = value; }

    /**
     * <p>A unique identifier for a build to return fleets for. Use this parameter to
     * return only fleets using a specified build. Use either the build ID or ARN
     * value. To retrieve all fleets, do not include either a BuildId and ScriptID
     * parameter.</p>
     */
    inline void SetBuildId(Aws::String&& value) { m_buildIdHasBeenSet = true; m_buildId = std::move(value); }

    /**
     * <p>A unique identifier for a build to return fleets for. Use this parameter to
     * return only fleets using a specified build. Use either the build ID or ARN
     * value. To retrieve all fleets, do not include either a BuildId and ScriptID
     * parameter.</p>
     */
    inline void SetBuildId(const char* value) { m_buildIdHasBeenSet = true; m_buildId.assign(value); }

    /**
     * <p>A unique identifier for a build to return fleets for. Use this parameter to
     * return only fleets using a specified build. Use either the build ID or ARN
     * value. To retrieve all fleets, do not include either a BuildId and ScriptID
     * parameter.</p>
     */
    inline ListFleetsRequest& WithBuildId(const Aws::String& value) { SetBuildId(value); return *this;}

    /**
     * <p>A unique identifier for a build to return fleets for. Use this parameter to
     * return only fleets using a specified build. Use either the build ID or ARN
     * value. To retrieve all fleets, do not include either a BuildId and ScriptID
     * parameter.</p>
     */
    inline ListFleetsRequest& WithBuildId(Aws::String&& value) { SetBuildId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for a build to return fleets for. Use this parameter to
     * return only fleets using a specified build. Use either the build ID or ARN
     * value. To retrieve all fleets, do not include either a BuildId and ScriptID
     * parameter.</p>
     */
    inline ListFleetsRequest& WithBuildId(const char* value) { SetBuildId(value); return *this;}


    /**
     * <p>A unique identifier for a Realtime script to return fleets for. Use this
     * parameter to return only fleets using a specified script. Use either the script
     * ID or ARN value. To retrieve all fleets, leave this parameter empty.</p>
     */
    inline const Aws::String& GetScriptId() const{ return m_scriptId; }

    /**
     * <p>A unique identifier for a Realtime script to return fleets for. Use this
     * parameter to return only fleets using a specified script. Use either the script
     * ID or ARN value. To retrieve all fleets, leave this parameter empty.</p>
     */
    inline bool ScriptIdHasBeenSet() const { return m_scriptIdHasBeenSet; }

    /**
     * <p>A unique identifier for a Realtime script to return fleets for. Use this
     * parameter to return only fleets using a specified script. Use either the script
     * ID or ARN value. To retrieve all fleets, leave this parameter empty.</p>
     */
    inline void SetScriptId(const Aws::String& value) { m_scriptIdHasBeenSet = true; m_scriptId = value; }

    /**
     * <p>A unique identifier for a Realtime script to return fleets for. Use this
     * parameter to return only fleets using a specified script. Use either the script
     * ID or ARN value. To retrieve all fleets, leave this parameter empty.</p>
     */
    inline void SetScriptId(Aws::String&& value) { m_scriptIdHasBeenSet = true; m_scriptId = std::move(value); }

    /**
     * <p>A unique identifier for a Realtime script to return fleets for. Use this
     * parameter to return only fleets using a specified script. Use either the script
     * ID or ARN value. To retrieve all fleets, leave this parameter empty.</p>
     */
    inline void SetScriptId(const char* value) { m_scriptIdHasBeenSet = true; m_scriptId.assign(value); }

    /**
     * <p>A unique identifier for a Realtime script to return fleets for. Use this
     * parameter to return only fleets using a specified script. Use either the script
     * ID or ARN value. To retrieve all fleets, leave this parameter empty.</p>
     */
    inline ListFleetsRequest& WithScriptId(const Aws::String& value) { SetScriptId(value); return *this;}

    /**
     * <p>A unique identifier for a Realtime script to return fleets for. Use this
     * parameter to return only fleets using a specified script. Use either the script
     * ID or ARN value. To retrieve all fleets, leave this parameter empty.</p>
     */
    inline ListFleetsRequest& WithScriptId(Aws::String&& value) { SetScriptId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for a Realtime script to return fleets for. Use this
     * parameter to return only fleets using a specified script. Use either the script
     * ID or ARN value. To retrieve all fleets, leave this parameter empty.</p>
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
     * <p>Token that indicates the start of the next sequential page of results. Use
     * the token that is returned with a previous call to this operation. To start at
     * the beginning of the result set, do not specify a value.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Token that indicates the start of the next sequential page of results. Use
     * the token that is returned with a previous call to this operation. To start at
     * the beginning of the result set, do not specify a value.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>Token that indicates the start of the next sequential page of results. Use
     * the token that is returned with a previous call to this operation. To start at
     * the beginning of the result set, do not specify a value.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Token that indicates the start of the next sequential page of results. Use
     * the token that is returned with a previous call to this operation. To start at
     * the beginning of the result set, do not specify a value.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>Token that indicates the start of the next sequential page of results. Use
     * the token that is returned with a previous call to this operation. To start at
     * the beginning of the result set, do not specify a value.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>Token that indicates the start of the next sequential page of results. Use
     * the token that is returned with a previous call to this operation. To start at
     * the beginning of the result set, do not specify a value.</p>
     */
    inline ListFleetsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Token that indicates the start of the next sequential page of results. Use
     * the token that is returned with a previous call to this operation. To start at
     * the beginning of the result set, do not specify a value.</p>
     */
    inline ListFleetsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Token that indicates the start of the next sequential page of results. Use
     * the token that is returned with a previous call to this operation. To start at
     * the beginning of the result set, do not specify a value.</p>
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
