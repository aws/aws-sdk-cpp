﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appmesh/model/ResourceMetadata.h>
#include <aws/appmesh/model/VirtualNodeSpec.h>
#include <aws/appmesh/model/VirtualNodeStatus.h>
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
   * <p>An object that represents a virtual node returned by a describe
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/VirtualNodeData">AWS
   * API Reference</a></p>
   */
  class VirtualNodeData
  {
  public:
    AWS_APPMESH_API VirtualNodeData();
    AWS_APPMESH_API VirtualNodeData(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API VirtualNodeData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the service mesh that the virtual node resides in.</p>
     */
    inline const Aws::String& GetMeshName() const{ return m_meshName; }
    inline bool MeshNameHasBeenSet() const { return m_meshNameHasBeenSet; }
    inline void SetMeshName(const Aws::String& value) { m_meshNameHasBeenSet = true; m_meshName = value; }
    inline void SetMeshName(Aws::String&& value) { m_meshNameHasBeenSet = true; m_meshName = std::move(value); }
    inline void SetMeshName(const char* value) { m_meshNameHasBeenSet = true; m_meshName.assign(value); }
    inline VirtualNodeData& WithMeshName(const Aws::String& value) { SetMeshName(value); return *this;}
    inline VirtualNodeData& WithMeshName(Aws::String&& value) { SetMeshName(std::move(value)); return *this;}
    inline VirtualNodeData& WithMeshName(const char* value) { SetMeshName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The associated metadata for the virtual node.</p>
     */
    inline const ResourceMetadata& GetMetadata() const{ return m_metadata; }
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }
    inline void SetMetadata(const ResourceMetadata& value) { m_metadataHasBeenSet = true; m_metadata = value; }
    inline void SetMetadata(ResourceMetadata&& value) { m_metadataHasBeenSet = true; m_metadata = std::move(value); }
    inline VirtualNodeData& WithMetadata(const ResourceMetadata& value) { SetMetadata(value); return *this;}
    inline VirtualNodeData& WithMetadata(ResourceMetadata&& value) { SetMetadata(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The specifications of the virtual node.</p>
     */
    inline const VirtualNodeSpec& GetSpec() const{ return m_spec; }
    inline bool SpecHasBeenSet() const { return m_specHasBeenSet; }
    inline void SetSpec(const VirtualNodeSpec& value) { m_specHasBeenSet = true; m_spec = value; }
    inline void SetSpec(VirtualNodeSpec&& value) { m_specHasBeenSet = true; m_spec = std::move(value); }
    inline VirtualNodeData& WithSpec(const VirtualNodeSpec& value) { SetSpec(value); return *this;}
    inline VirtualNodeData& WithSpec(VirtualNodeSpec&& value) { SetSpec(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status for the virtual node.</p>
     */
    inline const VirtualNodeStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const VirtualNodeStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(VirtualNodeStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline VirtualNodeData& WithStatus(const VirtualNodeStatus& value) { SetStatus(value); return *this;}
    inline VirtualNodeData& WithStatus(VirtualNodeStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the virtual node.</p>
     */
    inline const Aws::String& GetVirtualNodeName() const{ return m_virtualNodeName; }
    inline bool VirtualNodeNameHasBeenSet() const { return m_virtualNodeNameHasBeenSet; }
    inline void SetVirtualNodeName(const Aws::String& value) { m_virtualNodeNameHasBeenSet = true; m_virtualNodeName = value; }
    inline void SetVirtualNodeName(Aws::String&& value) { m_virtualNodeNameHasBeenSet = true; m_virtualNodeName = std::move(value); }
    inline void SetVirtualNodeName(const char* value) { m_virtualNodeNameHasBeenSet = true; m_virtualNodeName.assign(value); }
    inline VirtualNodeData& WithVirtualNodeName(const Aws::String& value) { SetVirtualNodeName(value); return *this;}
    inline VirtualNodeData& WithVirtualNodeName(Aws::String&& value) { SetVirtualNodeName(std::move(value)); return *this;}
    inline VirtualNodeData& WithVirtualNodeName(const char* value) { SetVirtualNodeName(value); return *this;}
    ///@}
  private:

    Aws::String m_meshName;
    bool m_meshNameHasBeenSet = false;

    ResourceMetadata m_metadata;
    bool m_metadataHasBeenSet = false;

    VirtualNodeSpec m_spec;
    bool m_specHasBeenSet = false;

    VirtualNodeStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_virtualNodeName;
    bool m_virtualNodeNameHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
