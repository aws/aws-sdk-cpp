/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/model/VirtualRouterData.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/UpdateVirtualRouterOutput">AWS
   * API Reference</a></p>
   */
  class UpdateVirtualRouterResult
  {
  public:
    AWS_APPMESH_API UpdateVirtualRouterResult();
    AWS_APPMESH_API UpdateVirtualRouterResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPMESH_API UpdateVirtualRouterResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A full description of the virtual router that was updated.</p>
     */
    inline const VirtualRouterData& GetVirtualRouter() const{ return m_virtualRouter; }

    /**
     * <p>A full description of the virtual router that was updated.</p>
     */
    inline void SetVirtualRouter(const VirtualRouterData& value) { m_virtualRouter = value; }

    /**
     * <p>A full description of the virtual router that was updated.</p>
     */
    inline void SetVirtualRouter(VirtualRouterData&& value) { m_virtualRouter = std::move(value); }

    /**
     * <p>A full description of the virtual router that was updated.</p>
     */
    inline UpdateVirtualRouterResult& WithVirtualRouter(const VirtualRouterData& value) { SetVirtualRouter(value); return *this;}

    /**
     * <p>A full description of the virtual router that was updated.</p>
     */
    inline UpdateVirtualRouterResult& WithVirtualRouter(VirtualRouterData&& value) { SetVirtualRouter(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateVirtualRouterResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateVirtualRouterResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateVirtualRouterResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    VirtualRouterData m_virtualRouter;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
