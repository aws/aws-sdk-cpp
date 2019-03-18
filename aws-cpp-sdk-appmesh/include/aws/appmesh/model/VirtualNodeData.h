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
   * <p>An object representing a virtual node returned by a describe
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/VirtualNodeData">AWS
   * API Reference</a></p>
   */
  class AWS_APPMESH_API VirtualNodeData
  {
  public:
    VirtualNodeData();
    VirtualNodeData(Aws::Utils::Json::JsonView jsonValue);
    VirtualNodeData& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the service mesh that the virtual node resides in.</p>
     */
    inline const Aws::String& GetMeshName() const{ return m_meshName; }

    /**
     * <p>The name of the service mesh that the virtual node resides in.</p>
     */
    inline bool MeshNameHasBeenSet() const { return m_meshNameHasBeenSet; }

    /**
     * <p>The name of the service mesh that the virtual node resides in.</p>
     */
    inline void SetMeshName(const Aws::String& value) { m_meshNameHasBeenSet = true; m_meshName = value; }

    /**
     * <p>The name of the service mesh that the virtual node resides in.</p>
     */
    inline void SetMeshName(Aws::String&& value) { m_meshNameHasBeenSet = true; m_meshName = std::move(value); }

    /**
     * <p>The name of the service mesh that the virtual node resides in.</p>
     */
    inline void SetMeshName(const char* value) { m_meshNameHasBeenSet = true; m_meshName.assign(value); }

    /**
     * <p>The name of the service mesh that the virtual node resides in.</p>
     */
    inline VirtualNodeData& WithMeshName(const Aws::String& value) { SetMeshName(value); return *this;}

    /**
     * <p>The name of the service mesh that the virtual node resides in.</p>
     */
    inline VirtualNodeData& WithMeshName(Aws::String&& value) { SetMeshName(std::move(value)); return *this;}

    /**
     * <p>The name of the service mesh that the virtual node resides in.</p>
     */
    inline VirtualNodeData& WithMeshName(const char* value) { SetMeshName(value); return *this;}


    /**
     * <p>The associated metadata for the virtual node.</p>
     */
    inline const ResourceMetadata& GetMetadata() const{ return m_metadata; }

    /**
     * <p>The associated metadata for the virtual node.</p>
     */
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }

    /**
     * <p>The associated metadata for the virtual node.</p>
     */
    inline void SetMetadata(const ResourceMetadata& value) { m_metadataHasBeenSet = true; m_metadata = value; }

    /**
     * <p>The associated metadata for the virtual node.</p>
     */
    inline void SetMetadata(ResourceMetadata&& value) { m_metadataHasBeenSet = true; m_metadata = std::move(value); }

    /**
     * <p>The associated metadata for the virtual node.</p>
     */
    inline VirtualNodeData& WithMetadata(const ResourceMetadata& value) { SetMetadata(value); return *this;}

    /**
     * <p>The associated metadata for the virtual node.</p>
     */
    inline VirtualNodeData& WithMetadata(ResourceMetadata&& value) { SetMetadata(std::move(value)); return *this;}


    /**
     * <p>The specifications of the virtual node.</p>
     */
    inline const VirtualNodeSpec& GetSpec() const{ return m_spec; }

    /**
     * <p>The specifications of the virtual node.</p>
     */
    inline bool SpecHasBeenSet() const { return m_specHasBeenSet; }

    /**
     * <p>The specifications of the virtual node.</p>
     */
    inline void SetSpec(const VirtualNodeSpec& value) { m_specHasBeenSet = true; m_spec = value; }

    /**
     * <p>The specifications of the virtual node.</p>
     */
    inline void SetSpec(VirtualNodeSpec&& value) { m_specHasBeenSet = true; m_spec = std::move(value); }

    /**
     * <p>The specifications of the virtual node.</p>
     */
    inline VirtualNodeData& WithSpec(const VirtualNodeSpec& value) { SetSpec(value); return *this;}

    /**
     * <p>The specifications of the virtual node.</p>
     */
    inline VirtualNodeData& WithSpec(VirtualNodeSpec&& value) { SetSpec(std::move(value)); return *this;}


    /**
     * <p>The current status for the virtual node.</p>
     */
    inline const VirtualNodeStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current status for the virtual node.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current status for the virtual node.</p>
     */
    inline void SetStatus(const VirtualNodeStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current status for the virtual node.</p>
     */
    inline void SetStatus(VirtualNodeStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current status for the virtual node.</p>
     */
    inline VirtualNodeData& WithStatus(const VirtualNodeStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status for the virtual node.</p>
     */
    inline VirtualNodeData& WithStatus(VirtualNodeStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The name of the virtual node.</p>
     */
    inline const Aws::String& GetVirtualNodeName() const{ return m_virtualNodeName; }

    /**
     * <p>The name of the virtual node.</p>
     */
    inline bool VirtualNodeNameHasBeenSet() const { return m_virtualNodeNameHasBeenSet; }

    /**
     * <p>The name of the virtual node.</p>
     */
    inline void SetVirtualNodeName(const Aws::String& value) { m_virtualNodeNameHasBeenSet = true; m_virtualNodeName = value; }

    /**
     * <p>The name of the virtual node.</p>
     */
    inline void SetVirtualNodeName(Aws::String&& value) { m_virtualNodeNameHasBeenSet = true; m_virtualNodeName = std::move(value); }

    /**
     * <p>The name of the virtual node.</p>
     */
    inline void SetVirtualNodeName(const char* value) { m_virtualNodeNameHasBeenSet = true; m_virtualNodeName.assign(value); }

    /**
     * <p>The name of the virtual node.</p>
     */
    inline VirtualNodeData& WithVirtualNodeName(const Aws::String& value) { SetVirtualNodeName(value); return *this;}

    /**
     * <p>The name of the virtual node.</p>
     */
    inline VirtualNodeData& WithVirtualNodeName(Aws::String&& value) { SetVirtualNodeName(std::move(value)); return *this;}

    /**
     * <p>The name of the virtual node.</p>
     */
    inline VirtualNodeData& WithVirtualNodeName(const char* value) { SetVirtualNodeName(value); return *this;}

  private:

    Aws::String m_meshName;
    bool m_meshNameHasBeenSet;

    ResourceMetadata m_metadata;
    bool m_metadataHasBeenSet;

    VirtualNodeSpec m_spec;
    bool m_specHasBeenSet;

    VirtualNodeStatus m_status;
    bool m_statusHasBeenSet;

    Aws::String m_virtualNodeName;
    bool m_virtualNodeNameHasBeenSet;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
