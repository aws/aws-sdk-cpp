/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>An object that represents the current status of a route.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/RouteStatus">AWS
   * API Reference</a></p>
   */
  class RouteStatus
  {
  public:
    AWS_APPMESH_API RouteStatus();
    AWS_APPMESH_API RouteStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API RouteStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
