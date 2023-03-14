/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/model/VirtualGatewayData.h>
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
  class DeleteVirtualGatewayResult
  {
  public:
    AWS_APPMESH_API DeleteVirtualGatewayResult();
    AWS_APPMESH_API DeleteVirtualGatewayResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPMESH_API DeleteVirtualGatewayResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The virtual gateway that was deleted.</p>
     */
    inline const VirtualGatewayData& GetVirtualGateway() const{ return m_virtualGateway; }

    /**
     * <p>The virtual gateway that was deleted.</p>
     */
    inline void SetVirtualGateway(const VirtualGatewayData& value) { m_virtualGateway = value; }

    /**
     * <p>The virtual gateway that was deleted.</p>
     */
    inline void SetVirtualGateway(VirtualGatewayData&& value) { m_virtualGateway = std::move(value); }

    /**
     * <p>The virtual gateway that was deleted.</p>
     */
    inline DeleteVirtualGatewayResult& WithVirtualGateway(const VirtualGatewayData& value) { SetVirtualGateway(value); return *this;}

    /**
     * <p>The virtual gateway that was deleted.</p>
     */
    inline DeleteVirtualGatewayResult& WithVirtualGateway(VirtualGatewayData&& value) { SetVirtualGateway(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DeleteVirtualGatewayResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DeleteVirtualGatewayResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DeleteVirtualGatewayResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    VirtualGatewayData m_virtualGateway;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
