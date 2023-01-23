/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/model/MeshData.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/DeleteMeshOutput">AWS
   * API Reference</a></p>
   */
  class DeleteMeshResult
  {
  public:
    AWS_APPMESH_API DeleteMeshResult();
    AWS_APPMESH_API DeleteMeshResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPMESH_API DeleteMeshResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The service mesh that was deleted.</p>
     */
    inline const MeshData& GetMesh() const{ return m_mesh; }

    /**
     * <p>The service mesh that was deleted.</p>
     */
    inline void SetMesh(const MeshData& value) { m_mesh = value; }

    /**
     * <p>The service mesh that was deleted.</p>
     */
    inline void SetMesh(MeshData&& value) { m_mesh = std::move(value); }

    /**
     * <p>The service mesh that was deleted.</p>
     */
    inline DeleteMeshResult& WithMesh(const MeshData& value) { SetMesh(value); return *this;}

    /**
     * <p>The service mesh that was deleted.</p>
     */
    inline DeleteMeshResult& WithMesh(MeshData&& value) { SetMesh(std::move(value)); return *this;}

  private:

    MeshData m_mesh;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
