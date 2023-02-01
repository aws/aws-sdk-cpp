/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/model/VirtualNodeData.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/DeleteVirtualNodeOutput">AWS
   * API Reference</a></p>
   */
  class DeleteVirtualNodeResult
  {
  public:
    AWS_APPMESH_API DeleteVirtualNodeResult();
    AWS_APPMESH_API DeleteVirtualNodeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPMESH_API DeleteVirtualNodeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The virtual node that was deleted.</p>
     */
    inline const VirtualNodeData& GetVirtualNode() const{ return m_virtualNode; }

    /**
     * <p>The virtual node that was deleted.</p>
     */
    inline void SetVirtualNode(const VirtualNodeData& value) { m_virtualNode = value; }

    /**
     * <p>The virtual node that was deleted.</p>
     */
    inline void SetVirtualNode(VirtualNodeData&& value) { m_virtualNode = std::move(value); }

    /**
     * <p>The virtual node that was deleted.</p>
     */
    inline DeleteVirtualNodeResult& WithVirtualNode(const VirtualNodeData& value) { SetVirtualNode(value); return *this;}

    /**
     * <p>The virtual node that was deleted.</p>
     */
    inline DeleteVirtualNodeResult& WithVirtualNode(VirtualNodeData&& value) { SetVirtualNode(std::move(value)); return *this;}

  private:

    VirtualNodeData m_virtualNode;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
