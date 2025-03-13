/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/model/VirtualNodeStatusCode.h>
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
   * <p>An object that represents the current status of the virtual
   * node.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/VirtualNodeStatus">AWS
   * API Reference</a></p>
   */
  class VirtualNodeStatus
  {
  public:
    AWS_APPMESH_API VirtualNodeStatus() = default;
    AWS_APPMESH_API VirtualNodeStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API VirtualNodeStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The current status of the virtual node.</p>
     */
    inline VirtualNodeStatusCode GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(VirtualNodeStatusCode value) { m_statusHasBeenSet = true; m_status = value; }
    inline VirtualNodeStatus& WithStatus(VirtualNodeStatusCode value) { SetStatus(value); return *this;}
    ///@}
  private:

    VirtualNodeStatusCode m_status{VirtualNodeStatusCode::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
