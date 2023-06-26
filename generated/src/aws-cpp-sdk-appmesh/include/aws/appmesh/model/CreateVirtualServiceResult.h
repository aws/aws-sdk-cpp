/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/model/VirtualServiceData.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/CreateVirtualServiceOutput">AWS
   * API Reference</a></p>
   */
  class CreateVirtualServiceResult
  {
  public:
    AWS_APPMESH_API CreateVirtualServiceResult();
    AWS_APPMESH_API CreateVirtualServiceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPMESH_API CreateVirtualServiceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The full description of your virtual service following the create call.</p>
     */
    inline const VirtualServiceData& GetVirtualService() const{ return m_virtualService; }

    /**
     * <p>The full description of your virtual service following the create call.</p>
     */
    inline void SetVirtualService(const VirtualServiceData& value) { m_virtualService = value; }

    /**
     * <p>The full description of your virtual service following the create call.</p>
     */
    inline void SetVirtualService(VirtualServiceData&& value) { m_virtualService = std::move(value); }

    /**
     * <p>The full description of your virtual service following the create call.</p>
     */
    inline CreateVirtualServiceResult& WithVirtualService(const VirtualServiceData& value) { SetVirtualService(value); return *this;}

    /**
     * <p>The full description of your virtual service following the create call.</p>
     */
    inline CreateVirtualServiceResult& WithVirtualService(VirtualServiceData&& value) { SetVirtualService(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateVirtualServiceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateVirtualServiceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateVirtualServiceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    VirtualServiceData m_virtualService;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
