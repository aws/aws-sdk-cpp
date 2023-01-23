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
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/UpdateMeshOutput">AWS
   * API Reference</a></p>
   */
  class UpdateMeshResult
  {
  public:
    AWS_APPMESH_API UpdateMeshResult();
    AWS_APPMESH_API UpdateMeshResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPMESH_API UpdateMeshResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const MeshData& GetMesh() const{ return m_mesh; }

    
    inline void SetMesh(const MeshData& value) { m_mesh = value; }

    
    inline void SetMesh(MeshData&& value) { m_mesh = std::move(value); }

    
    inline UpdateMeshResult& WithMesh(const MeshData& value) { SetMesh(value); return *this;}

    
    inline UpdateMeshResult& WithMesh(MeshData&& value) { SetMesh(std::move(value)); return *this;}

  private:

    MeshData m_mesh;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
