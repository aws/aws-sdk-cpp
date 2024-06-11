﻿/**
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/DescribeVirtualRouterOutput">AWS
   * API Reference</a></p>
   */
  class DescribeVirtualRouterResult
  {
  public:
    AWS_APPMESH_API DescribeVirtualRouterResult();
    AWS_APPMESH_API DescribeVirtualRouterResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPMESH_API DescribeVirtualRouterResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The full description of your virtual router.</p>
     */
    inline const VirtualRouterData& GetVirtualRouter() const{ return m_virtualRouter; }
    inline void SetVirtualRouter(const VirtualRouterData& value) { m_virtualRouter = value; }
    inline void SetVirtualRouter(VirtualRouterData&& value) { m_virtualRouter = std::move(value); }
    inline DescribeVirtualRouterResult& WithVirtualRouter(const VirtualRouterData& value) { SetVirtualRouter(value); return *this;}
    inline DescribeVirtualRouterResult& WithVirtualRouter(VirtualRouterData&& value) { SetVirtualRouter(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeVirtualRouterResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeVirtualRouterResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeVirtualRouterResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    VirtualRouterData m_virtualRouter;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
