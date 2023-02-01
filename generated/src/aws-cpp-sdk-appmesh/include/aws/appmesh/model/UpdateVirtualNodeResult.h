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
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/UpdateVirtualNodeOutput">AWS
   * API Reference</a></p>
   */
  class UpdateVirtualNodeResult
  {
  public:
    AWS_APPMESH_API UpdateVirtualNodeResult();
    AWS_APPMESH_API UpdateVirtualNodeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPMESH_API UpdateVirtualNodeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A full description of the virtual node that was updated.</p>
     */
    inline const VirtualNodeData& GetVirtualNode() const{ return m_virtualNode; }

    /**
     * <p>A full description of the virtual node that was updated.</p>
     */
    inline void SetVirtualNode(const VirtualNodeData& value) { m_virtualNode = value; }

    /**
     * <p>A full description of the virtual node that was updated.</p>
     */
    inline void SetVirtualNode(VirtualNodeData&& value) { m_virtualNode = std::move(value); }

    /**
     * <p>A full description of the virtual node that was updated.</p>
     */
    inline UpdateVirtualNodeResult& WithVirtualNode(const VirtualNodeData& value) { SetVirtualNode(value); return *this;}

    /**
     * <p>A full description of the virtual node that was updated.</p>
     */
    inline UpdateVirtualNodeResult& WithVirtualNode(VirtualNodeData&& value) { SetVirtualNode(std::move(value)); return *this;}

  private:

    VirtualNodeData m_virtualNode;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
