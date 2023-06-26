/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appmesh/model/ResourceMetadata.h>
#include <aws/appmesh/model/VirtualRouterSpec.h>
#include <aws/appmesh/model/VirtualRouterStatus.h>
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
   * <p>An object that represents a virtual router returned by a describe
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/VirtualRouterData">AWS
   * API Reference</a></p>
   */
  class VirtualRouterData
  {
  public:
    AWS_APPMESH_API VirtualRouterData();
    AWS_APPMESH_API VirtualRouterData(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API VirtualRouterData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the service mesh that the virtual router resides in.</p>
     */
    inline const Aws::String& GetMeshName() const{ return m_meshName; }

    /**
     * <p>The name of the service mesh that the virtual router resides in.</p>
     */
    inline bool MeshNameHasBeenSet() const { return m_meshNameHasBeenSet; }

    /**
     * <p>The name of the service mesh that the virtual router resides in.</p>
     */
    inline void SetMeshName(const Aws::String& value) { m_meshNameHasBeenSet = true; m_meshName = value; }

    /**
     * <p>The name of the service mesh that the virtual router resides in.</p>
     */
    inline void SetMeshName(Aws::String&& value) { m_meshNameHasBeenSet = true; m_meshName = std::move(value); }

    /**
     * <p>The name of the service mesh that the virtual router resides in.</p>
     */
    inline void SetMeshName(const char* value) { m_meshNameHasBeenSet = true; m_meshName.assign(value); }

    /**
     * <p>The name of the service mesh that the virtual router resides in.</p>
     */
    inline VirtualRouterData& WithMeshName(const Aws::String& value) { SetMeshName(value); return *this;}

    /**
     * <p>The name of the service mesh that the virtual router resides in.</p>
     */
    inline VirtualRouterData& WithMeshName(Aws::String&& value) { SetMeshName(std::move(value)); return *this;}

    /**
     * <p>The name of the service mesh that the virtual router resides in.</p>
     */
    inline VirtualRouterData& WithMeshName(const char* value) { SetMeshName(value); return *this;}


    /**
     * <p>The associated metadata for the virtual router.</p>
     */
    inline const ResourceMetadata& GetMetadata() const{ return m_metadata; }

    /**
     * <p>The associated metadata for the virtual router.</p>
     */
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }

    /**
     * <p>The associated metadata for the virtual router.</p>
     */
    inline void SetMetadata(const ResourceMetadata& value) { m_metadataHasBeenSet = true; m_metadata = value; }

    /**
     * <p>The associated metadata for the virtual router.</p>
     */
    inline void SetMetadata(ResourceMetadata&& value) { m_metadataHasBeenSet = true; m_metadata = std::move(value); }

    /**
     * <p>The associated metadata for the virtual router.</p>
     */
    inline VirtualRouterData& WithMetadata(const ResourceMetadata& value) { SetMetadata(value); return *this;}

    /**
     * <p>The associated metadata for the virtual router.</p>
     */
    inline VirtualRouterData& WithMetadata(ResourceMetadata&& value) { SetMetadata(std::move(value)); return *this;}


    /**
     * <p>The specifications of the virtual router.</p>
     */
    inline const VirtualRouterSpec& GetSpec() const{ return m_spec; }

    /**
     * <p>The specifications of the virtual router.</p>
     */
    inline bool SpecHasBeenSet() const { return m_specHasBeenSet; }

    /**
     * <p>The specifications of the virtual router.</p>
     */
    inline void SetSpec(const VirtualRouterSpec& value) { m_specHasBeenSet = true; m_spec = value; }

    /**
     * <p>The specifications of the virtual router.</p>
     */
    inline void SetSpec(VirtualRouterSpec&& value) { m_specHasBeenSet = true; m_spec = std::move(value); }

    /**
     * <p>The specifications of the virtual router.</p>
     */
    inline VirtualRouterData& WithSpec(const VirtualRouterSpec& value) { SetSpec(value); return *this;}

    /**
     * <p>The specifications of the virtual router.</p>
     */
    inline VirtualRouterData& WithSpec(VirtualRouterSpec&& value) { SetSpec(std::move(value)); return *this;}


    /**
     * <p>The current status of the virtual router.</p>
     */
    inline const VirtualRouterStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the virtual router.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current status of the virtual router.</p>
     */
    inline void SetStatus(const VirtualRouterStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current status of the virtual router.</p>
     */
    inline void SetStatus(VirtualRouterStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current status of the virtual router.</p>
     */
    inline VirtualRouterData& WithStatus(const VirtualRouterStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the virtual router.</p>
     */
    inline VirtualRouterData& WithStatus(VirtualRouterStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The name of the virtual router.</p>
     */
    inline const Aws::String& GetVirtualRouterName() const{ return m_virtualRouterName; }

    /**
     * <p>The name of the virtual router.</p>
     */
    inline bool VirtualRouterNameHasBeenSet() const { return m_virtualRouterNameHasBeenSet; }

    /**
     * <p>The name of the virtual router.</p>
     */
    inline void SetVirtualRouterName(const Aws::String& value) { m_virtualRouterNameHasBeenSet = true; m_virtualRouterName = value; }

    /**
     * <p>The name of the virtual router.</p>
     */
    inline void SetVirtualRouterName(Aws::String&& value) { m_virtualRouterNameHasBeenSet = true; m_virtualRouterName = std::move(value); }

    /**
     * <p>The name of the virtual router.</p>
     */
    inline void SetVirtualRouterName(const char* value) { m_virtualRouterNameHasBeenSet = true; m_virtualRouterName.assign(value); }

    /**
     * <p>The name of the virtual router.</p>
     */
    inline VirtualRouterData& WithVirtualRouterName(const Aws::String& value) { SetVirtualRouterName(value); return *this;}

    /**
     * <p>The name of the virtual router.</p>
     */
    inline VirtualRouterData& WithVirtualRouterName(Aws::String&& value) { SetVirtualRouterName(std::move(value)); return *this;}

    /**
     * <p>The name of the virtual router.</p>
     */
    inline VirtualRouterData& WithVirtualRouterName(const char* value) { SetVirtualRouterName(value); return *this;}

  private:

    Aws::String m_meshName;
    bool m_meshNameHasBeenSet = false;

    ResourceMetadata m_metadata;
    bool m_metadataHasBeenSet = false;

    VirtualRouterSpec m_spec;
    bool m_specHasBeenSet = false;

    VirtualRouterStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_virtualRouterName;
    bool m_virtualRouterNameHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
