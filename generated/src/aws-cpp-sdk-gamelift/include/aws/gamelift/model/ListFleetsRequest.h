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
    AWS_GAMELIFT_API ListFleetsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListFleets"; }

    AWS_GAMELIFT_API Aws::String SerializePayload() const override;

    AWS_GAMELIFT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A unique identifier for the build to request fleets for. Use this parameter
     * to return only fleets using a specified build. Use either the build ID or ARN
     * value.</p>
     */
    inline const Aws::String& GetBuildId() const { return m_buildId; }
    inline bool BuildIdHasBeenSet() const { return m_buildIdHasBeenSet; }
    template<typename BuildIdT = Aws::String>
    void SetBuildId(BuildIdT&& value) { m_buildIdHasBeenSet = true; m_buildId = std::forward<BuildIdT>(value); }
    template<typename BuildIdT = Aws::String>
    ListFleetsRequest& WithBuildId(BuildIdT&& value) { SetBuildId(std::forward<BuildIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the Realtime script to request fleets for. Use this
     * parameter to return only fleets using a specified script. Use either the script
     * ID or ARN value.</p>
     */
    inline const Aws::String& GetScriptId() const { return m_scriptId; }
    inline bool ScriptIdHasBeenSet() const { return m_scriptIdHasBeenSet; }
    template<typename ScriptIdT = Aws::String>
    void SetScriptId(ScriptIdT&& value) { m_scriptIdHasBeenSet = true; m_scriptId = std::forward<ScriptIdT>(value); }
    template<typename ScriptIdT = Aws::String>
    ListFleetsRequest& WithScriptId(ScriptIdT&& value) { SetScriptId(std::forward<ScriptIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return. Use this parameter with
     * <code>NextToken</code> to get results as a set of sequential pages.</p>
     */
    inline int GetLimit() const { return m_limit; }
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }
    inline ListFleetsRequest& WithLimit(int value) { SetLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A token that indicates the start of the next sequential page of results. Use
     * the token that is returned with a previous call to this operation. To start at
     * the beginning of the result set, do not specify a value.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListFleetsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_buildId;
    bool m_buildIdHasBeenSet = false;

    Aws::String m_scriptId;
    bool m_scriptIdHasBeenSet = false;

    int m_limit{0};
    bool m_limitHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
