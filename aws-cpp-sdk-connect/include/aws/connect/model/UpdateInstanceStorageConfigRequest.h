/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/InstanceStorageResourceType.h>
#include <aws/connect/model/InstanceStorageConfig.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Connect
{
namespace Model
{

  /**
   */
  class UpdateInstanceStorageConfigRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API UpdateInstanceStorageConfigRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateInstanceStorageConfig"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;

    AWS_CONNECT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline UpdateInstanceStorageConfigRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline UpdateInstanceStorageConfigRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline UpdateInstanceStorageConfigRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>The existing association identifier that uniquely identifies the resource
     * type and storage config for the given instance ID.</p>
     */
    inline const Aws::String& GetAssociationId() const{ return m_associationId; }

    /**
     * <p>The existing association identifier that uniquely identifies the resource
     * type and storage config for the given instance ID.</p>
     */
    inline bool AssociationIdHasBeenSet() const { return m_associationIdHasBeenSet; }

    /**
     * <p>The existing association identifier that uniquely identifies the resource
     * type and storage config for the given instance ID.</p>
     */
    inline void SetAssociationId(const Aws::String& value) { m_associationIdHasBeenSet = true; m_associationId = value; }

    /**
     * <p>The existing association identifier that uniquely identifies the resource
     * type and storage config for the given instance ID.</p>
     */
    inline void SetAssociationId(Aws::String&& value) { m_associationIdHasBeenSet = true; m_associationId = std::move(value); }

    /**
     * <p>The existing association identifier that uniquely identifies the resource
     * type and storage config for the given instance ID.</p>
     */
    inline void SetAssociationId(const char* value) { m_associationIdHasBeenSet = true; m_associationId.assign(value); }

    /**
     * <p>The existing association identifier that uniquely identifies the resource
     * type and storage config for the given instance ID.</p>
     */
    inline UpdateInstanceStorageConfigRequest& WithAssociationId(const Aws::String& value) { SetAssociationId(value); return *this;}

    /**
     * <p>The existing association identifier that uniquely identifies the resource
     * type and storage config for the given instance ID.</p>
     */
    inline UpdateInstanceStorageConfigRequest& WithAssociationId(Aws::String&& value) { SetAssociationId(std::move(value)); return *this;}

    /**
     * <p>The existing association identifier that uniquely identifies the resource
     * type and storage config for the given instance ID.</p>
     */
    inline UpdateInstanceStorageConfigRequest& WithAssociationId(const char* value) { SetAssociationId(value); return *this;}


    /**
     * <p>A valid resource type.</p>
     */
    inline const InstanceStorageResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>A valid resource type.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>A valid resource type.</p>
     */
    inline void SetResourceType(const InstanceStorageResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>A valid resource type.</p>
     */
    inline void SetResourceType(InstanceStorageResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>A valid resource type.</p>
     */
    inline UpdateInstanceStorageConfigRequest& WithResourceType(const InstanceStorageResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>A valid resource type.</p>
     */
    inline UpdateInstanceStorageConfigRequest& WithResourceType(InstanceStorageResourceType&& value) { SetResourceType(std::move(value)); return *this;}


    
    inline const InstanceStorageConfig& GetStorageConfig() const{ return m_storageConfig; }

    
    inline bool StorageConfigHasBeenSet() const { return m_storageConfigHasBeenSet; }

    
    inline void SetStorageConfig(const InstanceStorageConfig& value) { m_storageConfigHasBeenSet = true; m_storageConfig = value; }

    
    inline void SetStorageConfig(InstanceStorageConfig&& value) { m_storageConfigHasBeenSet = true; m_storageConfig = std::move(value); }

    
    inline UpdateInstanceStorageConfigRequest& WithStorageConfig(const InstanceStorageConfig& value) { SetStorageConfig(value); return *this;}

    
    inline UpdateInstanceStorageConfigRequest& WithStorageConfig(InstanceStorageConfig&& value) { SetStorageConfig(std::move(value)); return *this;}

  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_associationId;
    bool m_associationIdHasBeenSet = false;

    InstanceStorageResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    InstanceStorageConfig m_storageConfig;
    bool m_storageConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
