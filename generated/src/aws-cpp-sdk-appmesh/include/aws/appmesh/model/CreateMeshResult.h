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
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/CreateMeshOutput">AWS
   * API Reference</a></p>
   */
  class CreateMeshResult
  {
  public:
    AWS_APPMESH_API CreateMeshResult();
    AWS_APPMESH_API CreateMeshResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPMESH_API CreateMeshResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The full description of your service mesh following the create call.</p>
     */
    inline const MeshData& GetMesh() const{ return m_mesh; }

    /**
     * <p>The full description of your service mesh following the create call.</p>
     */
    inline void SetMesh(const MeshData& value) { m_mesh = value; }

    /**
     * <p>The full description of your service mesh following the create call.</p>
     */
    inline void SetMesh(MeshData&& value) { m_mesh = std::move(value); }

    /**
     * <p>The full description of your service mesh following the create call.</p>
     */
    inline CreateMeshResult& WithMesh(const MeshData& value) { SetMesh(value); return *this;}

    /**
     * <p>The full description of your service mesh following the create call.</p>
     */
    inline CreateMeshResult& WithMesh(MeshData&& value) { SetMesh(std::move(value)); return *this;}

  private:

    MeshData m_mesh;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
