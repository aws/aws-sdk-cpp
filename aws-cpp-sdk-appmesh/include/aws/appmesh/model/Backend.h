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
#include <aws/appmesh/model/VirtualServiceBackend.h>
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
   * <p>An object representing the backends that a virtual node is expected to send
   * outbound
         traffic to. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/Backend">AWS API
   * Reference</a></p>
   */
  class AWS_APPMESH_API Backend
  {
  public:
    Backend();
    Backend(Aws::Utils::Json::JsonView jsonValue);
    Backend& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies a virtual service to use as a backend for a virtual node. </p>
     */
    inline const VirtualServiceBackend& GetVirtualService() const{ return m_virtualService; }

    /**
     * <p>Specifies a virtual service to use as a backend for a virtual node. </p>
     */
    inline bool VirtualServiceHasBeenSet() const { return m_virtualServiceHasBeenSet; }

    /**
     * <p>Specifies a virtual service to use as a backend for a virtual node. </p>
     */
    inline void SetVirtualService(const VirtualServiceBackend& value) { m_virtualServiceHasBeenSet = true; m_virtualService = value; }

    /**
     * <p>Specifies a virtual service to use as a backend for a virtual node. </p>
     */
    inline void SetVirtualService(VirtualServiceBackend&& value) { m_virtualServiceHasBeenSet = true; m_virtualService = std::move(value); }

    /**
     * <p>Specifies a virtual service to use as a backend for a virtual node. </p>
     */
    inline Backend& WithVirtualService(const VirtualServiceBackend& value) { SetVirtualService(value); return *this;}

    /**
     * <p>Specifies a virtual service to use as a backend for a virtual node. </p>
     */
    inline Backend& WithVirtualService(VirtualServiceBackend&& value) { SetVirtualService(std::move(value)); return *this;}

  private:

    VirtualServiceBackend m_virtualService;
    bool m_virtualServiceHasBeenSet;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
