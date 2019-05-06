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
   * <p>Represents the input for a request action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/ListBuildsInput">AWS
   * API Reference</a></p>
   */
  class AWS_GAMELIFT_API ListBuildsRequest : public GameLiftRequest
  {
  public:
    ListBuildsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListBuilds"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

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
    inline void SetStatus(const BuildStatus& value) { m_statusHasBeenSet = true; m_status = value; }

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
    inline void SetStatus(BuildStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

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
    inline ListBuildsRequest& WithStatus(const BuildStatus& value) { SetStatus(value); return *this;}

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
    inline ListBuildsRequest& WithStatus(BuildStatus&& value) { SetStatus(std::move(value)); return *this;}


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
    inline ListBuildsRequest& WithLimit(int value) { SetLimit(value); return *this;}


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
    inline ListBuildsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Token that indicates the start of the next sequential page of results. Use
     * the token that is returned with a previous call to this action. To start at the
     * beginning of the result set, do not specify a value.</p>
     */
    inline ListBuildsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Token that indicates the start of the next sequential page of results. Use
     * the token that is returned with a previous call to this action. To start at the
     * beginning of the result set, do not specify a value.</p>
     */
    inline ListBuildsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    BuildStatus m_status;
    bool m_statusHasBeenSet;

    int m_limit;
    bool m_limitHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
