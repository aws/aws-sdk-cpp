﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/model/VirtualNodeData.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/DescribeVirtualNodeOutput">AWS
   * API Reference</a></p>
   */
  class DescribeVirtualNodeResult
  {
  public:
    AWS_APPMESH_API DescribeVirtualNodeResult();
    AWS_APPMESH_API DescribeVirtualNodeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPMESH_API DescribeVirtualNodeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The full description of your virtual node.</p>
     */
    inline const VirtualNodeData& GetVirtualNode() const{ return m_virtualNode; }
    inline void SetVirtualNode(const VirtualNodeData& value) { m_virtualNode = value; }
    inline void SetVirtualNode(VirtualNodeData&& value) { m_virtualNode = std::move(value); }
    inline DescribeVirtualNodeResult& WithVirtualNode(const VirtualNodeData& value) { SetVirtualNode(value); return *this;}
    inline DescribeVirtualNodeResult& WithVirtualNode(VirtualNodeData&& value) { SetVirtualNode(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeVirtualNodeResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeVirtualNodeResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeVirtualNodeResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    VirtualNodeData m_virtualNode;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
