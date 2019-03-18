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
#include <aws/appmesh/model/RouteStatusCode.h>
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
   * <p>An object representing the current status of a route.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/RouteStatus">AWS
   * API Reference</a></p>
   */
  class AWS_APPMESH_API RouteStatus
  {
  public:
    RouteStatus();
    RouteStatus(Aws::Utils::Json::JsonView jsonValue);
    RouteStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The current status for the route.</p>
     */
    inline const RouteStatusCode& GetStatus() const{ return m_status; }

    /**
     * <p>The current status for the route.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current status for the route.</p>
     */
    inline void SetStatus(const RouteStatusCode& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current status for the route.</p>
     */
    inline void SetStatus(RouteStatusCode&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current status for the route.</p>
     */
    inline RouteStatus& WithStatus(const RouteStatusCode& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status for the route.</p>
     */
    inline RouteStatus& WithStatus(RouteStatusCode&& value) { SetStatus(std::move(value)); return *this;}

  private:

    RouteStatusCode m_status;
    bool m_statusHasBeenSet;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
