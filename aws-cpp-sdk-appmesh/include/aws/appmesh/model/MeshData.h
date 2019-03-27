/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appmesh/model/ResourceMetadata.h>
#include <aws/appmesh/model/MeshSpec.h>
#include <aws/appmesh/model/MeshStatus.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace AppMesh
{
namespace Model
{

  /**
   * <p>An object representing a service mesh returned by a describe
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/MeshData">AWS
   * API Reference</a></p>
   */
  class AWS_APPMESH_API MeshData
  {
  public:
    MeshData();
    MeshData(Aws::Utils::Json::JsonView jsonValue);
    MeshData& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the service mesh.</p>
     */
    inline const Aws::String& GetMeshName() const{ return m_meshName; }

    /**
     * <p>The name of the service mesh.</p>
     */
    inline bool MeshNameHasBeenSet() const { return m_meshNameHasBeenSet; }

    /**
     * <p>The name of the service mesh.</p>
     */
    inline void SetMeshName(const Aws::String& value) { m_meshNameHasBeenSet = true; m_meshName = value; }

    /**
     * <p>The name of the service mesh.</p>
     */
    inline void SetMeshName(Aws::String&& value) { m_meshNameHasBeenSet = true; m_meshName = std::move(value); }

    /**
     * <p>The name of the service mesh.</p>
     */
    inline void SetMeshName(const char* value) { m_meshNameHasBeenSet = true; m_meshName.assign(value); }

    /**
     * <p>The name of the service mesh.</p>
     */
    inline MeshData& WithMeshName(const Aws::String& value) { SetMeshName(value); return *this;}

    /**
     * <p>The name of the service mesh.</p>
     */
    inline MeshData& WithMeshName(Aws::String&& value) { SetMeshName(std::move(value)); return *this;}

    /**
     * <p>The name of the service mesh.</p>
     */
    inline MeshData& WithMeshName(const char* value) { SetMeshName(value); return *this;}


    /**
     * <p>The associated metadata for the service mesh.</p>
     */
    inline const ResourceMetadata& GetMetadata() const{ return m_metadata; }

    /**
     * <p>The associated metadata for the service mesh.</p>
     */
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }

    /**
     * <p>The associated metadata for the service mesh.</p>
     */
    inline void SetMetadata(const ResourceMetadata& value) { m_metadataHasBeenSet = true; m_metadata = value; }

    /**
     * <p>The associated metadata for the service mesh.</p>
     */
    inline void SetMetadata(ResourceMetadata&& value) { m_metadataHasBeenSet = true; m_metadata = std::move(value); }

    /**
     * <p>The associated metadata for the service mesh.</p>
     */
    inline MeshData& WithMetadata(const ResourceMetadata& value) { SetMetadata(value); return *this;}

    /**
     * <p>The associated metadata for the service mesh.</p>
     */
    inline MeshData& WithMetadata(ResourceMetadata&& value) { SetMetadata(std::move(value)); return *this;}


    /**
     * <p>The associated specification for the service mesh.</p>
     */
    inline const MeshSpec& GetSpec() const{ return m_spec; }

    /**
     * <p>The associated specification for the service mesh.</p>
     */
    inline bool SpecHasBeenSet() const { return m_specHasBeenSet; }

    /**
     * <p>The associated specification for the service mesh.</p>
     */
    inline void SetSpec(const MeshSpec& value) { m_specHasBeenSet = true; m_spec = value; }

    /**
     * <p>The associated specification for the service mesh.</p>
     */
    inline void SetSpec(MeshSpec&& value) { m_specHasBeenSet = true; m_spec = std::move(value); }

    /**
     * <p>The associated specification for the service mesh.</p>
     */
    inline MeshData& WithSpec(const MeshSpec& value) { SetSpec(value); return *this;}

    /**
     * <p>The associated specification for the service mesh.</p>
     */
    inline MeshData& WithSpec(MeshSpec&& value) { SetSpec(std::move(value)); return *this;}


    /**
     * <p>The status of the service mesh.</p>
     */
    inline const MeshStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the service mesh.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the service mesh.</p>
     */
    inline void SetStatus(const MeshStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the service mesh.</p>
     */
    inline void SetStatus(MeshStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the service mesh.</p>
     */
    inline MeshData& WithStatus(const MeshStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the service mesh.</p>
     */
    inline MeshData& WithStatus(MeshStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_meshName;
    bool m_meshNameHasBeenSet;

    ResourceMetadata m_metadata;
    bool m_metadataHasBeenSet;

    MeshSpec m_spec;
    bool m_specHasBeenSet;

    MeshStatus m_status;
    bool m_statusHasBeenSet;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
