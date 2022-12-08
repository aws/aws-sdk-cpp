/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appmesh/model/ResourceMetadata.h>
#include <aws/appmesh/model/VirtualGatewaySpec.h>
#include <aws/appmesh/model/VirtualGatewayStatus.h>
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
   * <p>An object that represents a virtual gateway returned by a describe
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/VirtualGatewayData">AWS
   * API Reference</a></p>
   */
  class VirtualGatewayData
  {
  public:
    AWS_APPMESH_API VirtualGatewayData();
    AWS_APPMESH_API VirtualGatewayData(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API VirtualGatewayData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the service mesh that the virtual gateway resides in.</p>
     */
    inline const Aws::String& GetMeshName() const{ return m_meshName; }

    /**
     * <p>The name of the service mesh that the virtual gateway resides in.</p>
     */
    inline bool MeshNameHasBeenSet() const { return m_meshNameHasBeenSet; }

    /**
     * <p>The name of the service mesh that the virtual gateway resides in.</p>
     */
    inline void SetMeshName(const Aws::String& value) { m_meshNameHasBeenSet = true; m_meshName = value; }

    /**
     * <p>The name of the service mesh that the virtual gateway resides in.</p>
     */
    inline void SetMeshName(Aws::String&& value) { m_meshNameHasBeenSet = true; m_meshName = std::move(value); }

    /**
     * <p>The name of the service mesh that the virtual gateway resides in.</p>
     */
    inline void SetMeshName(const char* value) { m_meshNameHasBeenSet = true; m_meshName.assign(value); }

    /**
     * <p>The name of the service mesh that the virtual gateway resides in.</p>
     */
    inline VirtualGatewayData& WithMeshName(const Aws::String& value) { SetMeshName(value); return *this;}

    /**
     * <p>The name of the service mesh that the virtual gateway resides in.</p>
     */
    inline VirtualGatewayData& WithMeshName(Aws::String&& value) { SetMeshName(std::move(value)); return *this;}

    /**
     * <p>The name of the service mesh that the virtual gateway resides in.</p>
     */
    inline VirtualGatewayData& WithMeshName(const char* value) { SetMeshName(value); return *this;}


    
    inline const ResourceMetadata& GetMetadata() const{ return m_metadata; }

    
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }

    
    inline void SetMetadata(const ResourceMetadata& value) { m_metadataHasBeenSet = true; m_metadata = value; }

    
    inline void SetMetadata(ResourceMetadata&& value) { m_metadataHasBeenSet = true; m_metadata = std::move(value); }

    
    inline VirtualGatewayData& WithMetadata(const ResourceMetadata& value) { SetMetadata(value); return *this;}

    
    inline VirtualGatewayData& WithMetadata(ResourceMetadata&& value) { SetMetadata(std::move(value)); return *this;}


    /**
     * <p>The specifications of the virtual gateway.</p>
     */
    inline const VirtualGatewaySpec& GetSpec() const{ return m_spec; }

    /**
     * <p>The specifications of the virtual gateway.</p>
     */
    inline bool SpecHasBeenSet() const { return m_specHasBeenSet; }

    /**
     * <p>The specifications of the virtual gateway.</p>
     */
    inline void SetSpec(const VirtualGatewaySpec& value) { m_specHasBeenSet = true; m_spec = value; }

    /**
     * <p>The specifications of the virtual gateway.</p>
     */
    inline void SetSpec(VirtualGatewaySpec&& value) { m_specHasBeenSet = true; m_spec = std::move(value); }

    /**
     * <p>The specifications of the virtual gateway.</p>
     */
    inline VirtualGatewayData& WithSpec(const VirtualGatewaySpec& value) { SetSpec(value); return *this;}

    /**
     * <p>The specifications of the virtual gateway.</p>
     */
    inline VirtualGatewayData& WithSpec(VirtualGatewaySpec&& value) { SetSpec(std::move(value)); return *this;}


    /**
     * <p>The current status of the virtual gateway.</p>
     */
    inline const VirtualGatewayStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the virtual gateway.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current status of the virtual gateway.</p>
     */
    inline void SetStatus(const VirtualGatewayStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current status of the virtual gateway.</p>
     */
    inline void SetStatus(VirtualGatewayStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current status of the virtual gateway.</p>
     */
    inline VirtualGatewayData& WithStatus(const VirtualGatewayStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the virtual gateway.</p>
     */
    inline VirtualGatewayData& WithStatus(VirtualGatewayStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The name of the virtual gateway.</p>
     */
    inline const Aws::String& GetVirtualGatewayName() const{ return m_virtualGatewayName; }

    /**
     * <p>The name of the virtual gateway.</p>
     */
    inline bool VirtualGatewayNameHasBeenSet() const { return m_virtualGatewayNameHasBeenSet; }

    /**
     * <p>The name of the virtual gateway.</p>
     */
    inline void SetVirtualGatewayName(const Aws::String& value) { m_virtualGatewayNameHasBeenSet = true; m_virtualGatewayName = value; }

    /**
     * <p>The name of the virtual gateway.</p>
     */
    inline void SetVirtualGatewayName(Aws::String&& value) { m_virtualGatewayNameHasBeenSet = true; m_virtualGatewayName = std::move(value); }

    /**
     * <p>The name of the virtual gateway.</p>
     */
    inline void SetVirtualGatewayName(const char* value) { m_virtualGatewayNameHasBeenSet = true; m_virtualGatewayName.assign(value); }

    /**
     * <p>The name of the virtual gateway.</p>
     */
    inline VirtualGatewayData& WithVirtualGatewayName(const Aws::String& value) { SetVirtualGatewayName(value); return *this;}

    /**
     * <p>The name of the virtual gateway.</p>
     */
    inline VirtualGatewayData& WithVirtualGatewayName(Aws::String&& value) { SetVirtualGatewayName(std::move(value)); return *this;}

    /**
     * <p>The name of the virtual gateway.</p>
     */
    inline VirtualGatewayData& WithVirtualGatewayName(const char* value) { SetVirtualGatewayName(value); return *this;}

  private:

    Aws::String m_meshName;
    bool m_meshNameHasBeenSet = false;

    ResourceMetadata m_metadata;
    bool m_metadataHasBeenSet = false;

    VirtualGatewaySpec m_spec;
    bool m_specHasBeenSet = false;

    VirtualGatewayStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_virtualGatewayName;
    bool m_virtualGatewayNameHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
