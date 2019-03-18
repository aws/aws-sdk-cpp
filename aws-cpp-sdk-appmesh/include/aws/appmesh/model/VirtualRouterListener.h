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
   * <p>An object representing a virtual router listener.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/VirtualRouterListener">AWS
   * API Reference</a></p>
   */
  class AWS_APPMESH_API VirtualRouterListener
  {
  public:
    VirtualRouterListener();
    VirtualRouterListener(Aws::Utils::Json::JsonView jsonValue);
    VirtualRouterListener& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const PortMapping& GetPortMapping() const{ return m_portMapping; }

    
    inline bool PortMappingHasBeenSet() const { return m_portMappingHasBeenSet; }

    
    inline void SetPortMapping(const PortMapping& value) { m_portMappingHasBeenSet = true; m_portMapping = value; }

    
    inline void SetPortMapping(PortMapping&& value) { m_portMappingHasBeenSet = true; m_portMapping = std::move(value); }

    
    inline VirtualRouterListener& WithPortMapping(const PortMapping& value) { SetPortMapping(value); return *this;}

    
    inline VirtualRouterListener& WithPortMapping(PortMapping&& value) { SetPortMapping(std::move(value)); return *this;}

  private:

    PortMapping m_portMapping;
    bool m_portMappingHasBeenSet;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
