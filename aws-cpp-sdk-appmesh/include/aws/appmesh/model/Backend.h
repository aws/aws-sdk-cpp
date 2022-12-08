/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>An object that represents the backends that a virtual node is expected to
   * send outbound traffic to.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/Backend">AWS API
   * Reference</a></p>
   */
  class Backend
  {
  public:
    AWS_APPMESH_API Backend();
    AWS_APPMESH_API Backend(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Backend& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies a virtual service to use as a backend. </p>
     */
    inline const VirtualServiceBackend& GetVirtualService() const{ return m_virtualService; }

    /**
     * <p>Specifies a virtual service to use as a backend. </p>
     */
    inline bool VirtualServiceHasBeenSet() const { return m_virtualServiceHasBeenSet; }

    /**
     * <p>Specifies a virtual service to use as a backend. </p>
     */
    inline void SetVirtualService(const VirtualServiceBackend& value) { m_virtualServiceHasBeenSet = true; m_virtualService = value; }

    /**
     * <p>Specifies a virtual service to use as a backend. </p>
     */
    inline void SetVirtualService(VirtualServiceBackend&& value) { m_virtualServiceHasBeenSet = true; m_virtualService = std::move(value); }

    /**
     * <p>Specifies a virtual service to use as a backend. </p>
     */
    inline Backend& WithVirtualService(const VirtualServiceBackend& value) { SetVirtualService(value); return *this;}

    /**
     * <p>Specifies a virtual service to use as a backend. </p>
     */
    inline Backend& WithVirtualService(VirtualServiceBackend&& value) { SetVirtualService(std::move(value)); return *this;}

  private:

    VirtualServiceBackend m_virtualService;
    bool m_virtualServiceHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
