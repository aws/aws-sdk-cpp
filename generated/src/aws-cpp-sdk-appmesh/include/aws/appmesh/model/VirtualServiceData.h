/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appmesh/model/ResourceMetadata.h>
#include <aws/appmesh/model/VirtualServiceSpec.h>
#include <aws/appmesh/model/VirtualServiceStatus.h>
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
   * <p>An object that represents a virtual service returned by a describe
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/VirtualServiceData">AWS
   * API Reference</a></p>
   */
  class VirtualServiceData
  {
  public:
    AWS_APPMESH_API VirtualServiceData();
    AWS_APPMESH_API VirtualServiceData(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API VirtualServiceData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the service mesh that the virtual service resides in.</p>
     */
    inline const Aws::String& GetMeshName() const{ return m_meshName; }
    inline bool MeshNameHasBeenSet() const { return m_meshNameHasBeenSet; }
    inline void SetMeshName(const Aws::String& value) { m_meshNameHasBeenSet = true; m_meshName = value; }
    inline void SetMeshName(Aws::String&& value) { m_meshNameHasBeenSet = true; m_meshName = std::move(value); }
    inline void SetMeshName(const char* value) { m_meshNameHasBeenSet = true; m_meshName.assign(value); }
    inline VirtualServiceData& WithMeshName(const Aws::String& value) { SetMeshName(value); return *this;}
    inline VirtualServiceData& WithMeshName(Aws::String&& value) { SetMeshName(std::move(value)); return *this;}
    inline VirtualServiceData& WithMeshName(const char* value) { SetMeshName(value); return *this;}
    ///@}

    ///@{
    
    inline const ResourceMetadata& GetMetadata() const{ return m_metadata; }
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }
    inline void SetMetadata(const ResourceMetadata& value) { m_metadataHasBeenSet = true; m_metadata = value; }
    inline void SetMetadata(ResourceMetadata&& value) { m_metadataHasBeenSet = true; m_metadata = std::move(value); }
    inline VirtualServiceData& WithMetadata(const ResourceMetadata& value) { SetMetadata(value); return *this;}
    inline VirtualServiceData& WithMetadata(ResourceMetadata&& value) { SetMetadata(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The specifications of the virtual service.</p>
     */
    inline const VirtualServiceSpec& GetSpec() const{ return m_spec; }
    inline bool SpecHasBeenSet() const { return m_specHasBeenSet; }
    inline void SetSpec(const VirtualServiceSpec& value) { m_specHasBeenSet = true; m_spec = value; }
    inline void SetSpec(VirtualServiceSpec&& value) { m_specHasBeenSet = true; m_spec = std::move(value); }
    inline VirtualServiceData& WithSpec(const VirtualServiceSpec& value) { SetSpec(value); return *this;}
    inline VirtualServiceData& WithSpec(VirtualServiceSpec&& value) { SetSpec(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the virtual service.</p>
     */
    inline const VirtualServiceStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const VirtualServiceStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(VirtualServiceStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline VirtualServiceData& WithStatus(const VirtualServiceStatus& value) { SetStatus(value); return *this;}
    inline VirtualServiceData& WithStatus(VirtualServiceStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the virtual service.</p>
     */
    inline const Aws::String& GetVirtualServiceName() const{ return m_virtualServiceName; }
    inline bool VirtualServiceNameHasBeenSet() const { return m_virtualServiceNameHasBeenSet; }
    inline void SetVirtualServiceName(const Aws::String& value) { m_virtualServiceNameHasBeenSet = true; m_virtualServiceName = value; }
    inline void SetVirtualServiceName(Aws::String&& value) { m_virtualServiceNameHasBeenSet = true; m_virtualServiceName = std::move(value); }
    inline void SetVirtualServiceName(const char* value) { m_virtualServiceNameHasBeenSet = true; m_virtualServiceName.assign(value); }
    inline VirtualServiceData& WithVirtualServiceName(const Aws::String& value) { SetVirtualServiceName(value); return *this;}
    inline VirtualServiceData& WithVirtualServiceName(Aws::String&& value) { SetVirtualServiceName(std::move(value)); return *this;}
    inline VirtualServiceData& WithVirtualServiceName(const char* value) { SetVirtualServiceName(value); return *this;}
    ///@}
  private:

    Aws::String m_meshName;
    bool m_meshNameHasBeenSet = false;

    ResourceMetadata m_metadata;
    bool m_metadataHasBeenSet = false;

    VirtualServiceSpec m_spec;
    bool m_specHasBeenSet = false;

    VirtualServiceStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_virtualServiceName;
    bool m_virtualServiceNameHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
