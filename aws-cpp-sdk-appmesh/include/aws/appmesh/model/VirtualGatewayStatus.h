/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/model/VirtualGatewayStatusCode.h>
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
   * <p>An object that represents the status of the mesh resource.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/VirtualGatewayStatus">AWS
   * API Reference</a></p>
   */
  class VirtualGatewayStatus
  {
  public:
    AWS_APPMESH_API VirtualGatewayStatus();
    AWS_APPMESH_API VirtualGatewayStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API VirtualGatewayStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The current status.</p>
     */
    inline const VirtualGatewayStatusCode& GetStatus() const{ return m_status; }

    /**
     * <p>The current status.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current status.</p>
     */
    inline void SetStatus(const VirtualGatewayStatusCode& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current status.</p>
     */
    inline void SetStatus(VirtualGatewayStatusCode&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current status.</p>
     */
    inline VirtualGatewayStatus& WithStatus(const VirtualGatewayStatusCode& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status.</p>
     */
    inline VirtualGatewayStatus& WithStatus(VirtualGatewayStatusCode&& value) { SetStatus(std::move(value)); return *this;}

  private:

    VirtualGatewayStatusCode m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
