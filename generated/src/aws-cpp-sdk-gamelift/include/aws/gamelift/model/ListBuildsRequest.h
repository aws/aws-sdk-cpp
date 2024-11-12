/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/GameLiftRequest.h>
#include <aws/gamelift/model/BuildStatus.h>
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
  class ListBuildsRequest : public GameLiftRequest
  {
  public:
    AWS_GAMELIFT_API ListBuildsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListBuilds"; }

    AWS_GAMELIFT_API Aws::String SerializePayload() const override;

    AWS_GAMELIFT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Build status to filter results by. To retrieve all builds, leave this
     * parameter empty.</p> <p>Possible build statuses include the following:</p> <ul>
     * <li> <p> <b>INITIALIZED</b> -- A new build has been defined, but no files have
     * been uploaded. You cannot create fleets for builds that are in this status. When
     * a build is successfully created, the build status is set to this value. </p>
     * </li> <li> <p> <b>READY</b> -- The game build has been successfully uploaded.
     * You can now create new fleets for this build.</p> </li> <li> <p> <b>FAILED</b>
     * -- The game build upload failed. You cannot create new fleets for this build.
     * </p> </li> </ul>
     */
    inline const BuildStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const BuildStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(BuildStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ListBuildsRequest& WithStatus(const BuildStatus& value) { SetStatus(value); return *this;}
    inline ListBuildsRequest& WithStatus(BuildStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return. Use this parameter with
     * <code>NextToken</code> to get results as a set of sequential pages.</p>
     */
    inline int GetLimit() const{ return m_limit; }
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }
    inline ListBuildsRequest& WithLimit(int value) { SetLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A token that indicates the start of the next sequential page of results. Use
     * the token that is returned with a previous call to this operation. To start at
     * the beginning of the result set, do not specify a value.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListBuildsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListBuildsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListBuildsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    BuildStatus m_status;
    bool m_statusHasBeenSet = false;

    int m_limit;
    bool m_limitHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
