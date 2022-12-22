/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/model/VirtualRouterStatusCode.h>
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
   * <p>An object that represents the status of a virtual router. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/VirtualRouterStatus">AWS
   * API Reference</a></p>
   */
  class VirtualRouterStatus
  {
  public:
    AWS_APPMESH_API VirtualRouterStatus();
    AWS_APPMESH_API VirtualRouterStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API VirtualRouterStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The current status of the virtual router.</p>
     */
    inline const VirtualRouterStatusCode& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the virtual router.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current status of the virtual router.</p>
     */
    inline void SetStatus(const VirtualRouterStatusCode& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current status of the virtual router.</p>
     */
    inline void SetStatus(VirtualRouterStatusCode&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current status of the virtual router.</p>
     */
    inline VirtualRouterStatus& WithStatus(const VirtualRouterStatusCode& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the virtual router.</p>
     */
    inline VirtualRouterStatus& WithStatus(VirtualRouterStatusCode&& value) { SetStatus(std::move(value)); return *this;}

  private:

    VirtualRouterStatusCode m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
