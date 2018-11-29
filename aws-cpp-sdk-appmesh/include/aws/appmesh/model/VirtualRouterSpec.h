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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>An object representing the specification of a virtual router.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2018-10-01/VirtualRouterSpec">AWS
   * API Reference</a></p>
   */
  class AWS_APPMESH_API VirtualRouterSpec
  {
  public:
    VirtualRouterSpec();
    VirtualRouterSpec(Aws::Utils::Json::JsonView jsonValue);
    VirtualRouterSpec& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The service mesh service names to associate with the virtual router.</p>
     */
    inline const Aws::Vector<Aws::String>& GetServiceNames() const{ return m_serviceNames; }

    /**
     * <p>The service mesh service names to associate with the virtual router.</p>
     */
    inline void SetServiceNames(const Aws::Vector<Aws::String>& value) { m_serviceNamesHasBeenSet = true; m_serviceNames = value; }

    /**
     * <p>The service mesh service names to associate with the virtual router.</p>
     */
    inline void SetServiceNames(Aws::Vector<Aws::String>&& value) { m_serviceNamesHasBeenSet = true; m_serviceNames = std::move(value); }

    /**
     * <p>The service mesh service names to associate with the virtual router.</p>
     */
    inline VirtualRouterSpec& WithServiceNames(const Aws::Vector<Aws::String>& value) { SetServiceNames(value); return *this;}

    /**
     * <p>The service mesh service names to associate with the virtual router.</p>
     */
    inline VirtualRouterSpec& WithServiceNames(Aws::Vector<Aws::String>&& value) { SetServiceNames(std::move(value)); return *this;}

    /**
     * <p>The service mesh service names to associate with the virtual router.</p>
     */
    inline VirtualRouterSpec& AddServiceNames(const Aws::String& value) { m_serviceNamesHasBeenSet = true; m_serviceNames.push_back(value); return *this; }

    /**
     * <p>The service mesh service names to associate with the virtual router.</p>
     */
    inline VirtualRouterSpec& AddServiceNames(Aws::String&& value) { m_serviceNamesHasBeenSet = true; m_serviceNames.push_back(std::move(value)); return *this; }

    /**
     * <p>The service mesh service names to associate with the virtual router.</p>
     */
    inline VirtualRouterSpec& AddServiceNames(const char* value) { m_serviceNamesHasBeenSet = true; m_serviceNames.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_serviceNames;
    bool m_serviceNamesHasBeenSet;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
