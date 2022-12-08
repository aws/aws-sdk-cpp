/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/model/PortMapping.h>
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
   * <p>An object that represents a virtual router listener.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/VirtualRouterListener">AWS
   * API Reference</a></p>
   */
  class VirtualRouterListener
  {
  public:
    AWS_APPMESH_API VirtualRouterListener();
    AWS_APPMESH_API VirtualRouterListener(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API VirtualRouterListener& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const PortMapping& GetPortMapping() const{ return m_portMapping; }

    
    inline bool PortMappingHasBeenSet() const { return m_portMappingHasBeenSet; }

    
    inline void SetPortMapping(const PortMapping& value) { m_portMappingHasBeenSet = true; m_portMapping = value; }

    
    inline void SetPortMapping(PortMapping&& value) { m_portMappingHasBeenSet = true; m_portMapping = std::move(value); }

    
    inline VirtualRouterListener& WithPortMapping(const PortMapping& value) { SetPortMapping(value); return *this;}

    
    inline VirtualRouterListener& WithPortMapping(PortMapping&& value) { SetPortMapping(std::move(value)); return *this;}

  private:

    PortMapping m_portMapping;
    bool m_portMappingHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
