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
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/model/HttpRouteAction.h>
#include <aws/appmesh/model/HttpRouteMatch.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace AppMesh
{
namespace Model
{

  /**
   * <p>An object representing the HTTP routing specification for a
   * route.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/HttpRoute">AWS
   * API Reference</a></p>
   */
  class AWS_APPMESH_API HttpRoute
  {
  public:
    HttpRoute();
    HttpRoute(Aws::Utils::Json::JsonView jsonValue);
    HttpRoute& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The action to take if a match is determined.</p>
     */
    inline const HttpRouteAction& GetAction() const{ return m_action; }

    /**
     * <p>The action to take if a match is determined.</p>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p>The action to take if a match is determined.</p>
     */
    inline void SetAction(const HttpRouteAction& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>The action to take if a match is determined.</p>
     */
    inline void SetAction(HttpRouteAction&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>The action to take if a match is determined.</p>
     */
    inline HttpRoute& WithAction(const HttpRouteAction& value) { SetAction(value); return *this;}

    /**
     * <p>The action to take if a match is determined.</p>
     */
    inline HttpRoute& WithAction(HttpRouteAction&& value) { SetAction(std::move(value)); return *this;}


    /**
     * <p>The criteria for determining an HTTP request match.</p>
     */
    inline const HttpRouteMatch& GetMatch() const{ return m_match; }

    /**
     * <p>The criteria for determining an HTTP request match.</p>
     */
    inline bool MatchHasBeenSet() const { return m_matchHasBeenSet; }

    /**
     * <p>The criteria for determining an HTTP request match.</p>
     */
    inline void SetMatch(const HttpRouteMatch& value) { m_matchHasBeenSet = true; m_match = value; }

    /**
     * <p>The criteria for determining an HTTP request match.</p>
     */
    inline void SetMatch(HttpRouteMatch&& value) { m_matchHasBeenSet = true; m_match = std::move(value); }

    /**
     * <p>The criteria for determining an HTTP request match.</p>
     */
    inline HttpRoute& WithMatch(const HttpRouteMatch& value) { SetMatch(value); return *this;}

    /**
     * <p>The criteria for determining an HTTP request match.</p>
     */
    inline HttpRoute& WithMatch(HttpRouteMatch&& value) { SetMatch(std::move(value)); return *this;}

  private:

    HttpRouteAction m_action;
    bool m_actionHasBeenSet;

    HttpRouteMatch m_match;
    bool m_matchHasBeenSet;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
