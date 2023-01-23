/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/model/VirtualRouterData.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace AppMesh
{
namespace Model
{
  /**
   * <zonbook></zonbook><xhtml></xhtml><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/CreateVirtualRouterOutput">AWS
   * API Reference</a></p>
   */
  class CreateVirtualRouterResult
  {
  public:
    AWS_APPMESH_API CreateVirtualRouterResult();
    AWS_APPMESH_API CreateVirtualRouterResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPMESH_API CreateVirtualRouterResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The full description of your virtual router following the create call.</p>
     */
    inline const VirtualRouterData& GetVirtualRouter() const{ return m_virtualRouter; }

    /**
     * <p>The full description of your virtual router following the create call.</p>
     */
    inline void SetVirtualRouter(const VirtualRouterData& value) { m_virtualRouter = value; }

    /**
     * <p>The full description of your virtual router following the create call.</p>
     */
    inline void SetVirtualRouter(VirtualRouterData&& value) { m_virtualRouter = std::move(value); }

    /**
     * <p>The full description of your virtual router following the create call.</p>
     */
    inline CreateVirtualRouterResult& WithVirtualRouter(const VirtualRouterData& value) { SetVirtualRouter(value); return *this;}

    /**
     * <p>The full description of your virtual router following the create call.</p>
     */
    inline CreateVirtualRouterResult& WithVirtualRouter(VirtualRouterData&& value) { SetVirtualRouter(std::move(value)); return *this;}

  private:

    VirtualRouterData m_virtualRouter;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
