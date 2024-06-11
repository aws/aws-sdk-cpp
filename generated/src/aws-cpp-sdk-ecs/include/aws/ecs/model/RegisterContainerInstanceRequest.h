/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/ECSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecs/model/VersionInfo.h>
#include <aws/ecs/model/Resource.h>
#include <aws/ecs/model/Attribute.h>
#include <aws/ecs/model/PlatformDevice.h>
#include <aws/ecs/model/Tag.h>
#include <utility>

namespace Aws
{
namespace ECS
{
namespace Model
{

  /**
   */
  class RegisterContainerInstanceRequest : public ECSRequest
  {
  public:
    AWS_ECS_API RegisterContainerInstanceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RegisterContainerInstance"; }

    AWS_ECS_API Aws::String SerializePayload() const override;

    AWS_ECS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster to register
     * your container instance with. If you do not specify a cluster, the default
     * cluster is assumed.</p>
     */
    inline const Aws::String& GetCluster() const{ return m_cluster; }
    inline bool ClusterHasBeenSet() const { return m_clusterHasBeenSet; }
    inline void SetCluster(const Aws::String& value) { m_clusterHasBeenSet = true; m_cluster = value; }
    inline void SetCluster(Aws::String&& value) { m_clusterHasBeenSet = true; m_cluster = std::move(value); }
    inline void SetCluster(const char* value) { m_clusterHasBeenSet = true; m_cluster.assign(value); }
    inline RegisterContainerInstanceRequest& WithCluster(const Aws::String& value) { SetCluster(value); return *this;}
    inline RegisterContainerInstanceRequest& WithCluster(Aws::String&& value) { SetCluster(std::move(value)); return *this;}
    inline RegisterContainerInstanceRequest& WithCluster(const char* value) { SetCluster(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance identity document for the EC2 instance to register. This
     * document can be found by running the following command from the instance:
     * <code>curl
     * http://169.254.169.254/latest/dynamic/instance-identity/document/</code> </p>
     */
    inline const Aws::String& GetInstanceIdentityDocument() const{ return m_instanceIdentityDocument; }
    inline bool InstanceIdentityDocumentHasBeenSet() const { return m_instanceIdentityDocumentHasBeenSet; }
    inline void SetInstanceIdentityDocument(const Aws::String& value) { m_instanceIdentityDocumentHasBeenSet = true; m_instanceIdentityDocument = value; }
    inline void SetInstanceIdentityDocument(Aws::String&& value) { m_instanceIdentityDocumentHasBeenSet = true; m_instanceIdentityDocument = std::move(value); }
    inline void SetInstanceIdentityDocument(const char* value) { m_instanceIdentityDocumentHasBeenSet = true; m_instanceIdentityDocument.assign(value); }
    inline RegisterContainerInstanceRequest& WithInstanceIdentityDocument(const Aws::String& value) { SetInstanceIdentityDocument(value); return *this;}
    inline RegisterContainerInstanceRequest& WithInstanceIdentityDocument(Aws::String&& value) { SetInstanceIdentityDocument(std::move(value)); return *this;}
    inline RegisterContainerInstanceRequest& WithInstanceIdentityDocument(const char* value) { SetInstanceIdentityDocument(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance identity document signature for the EC2 instance to register.
     * This signature can be found by running the following command from the instance:
     * <code>curl
     * http://169.254.169.254/latest/dynamic/instance-identity/signature/</code> </p>
     */
    inline const Aws::String& GetInstanceIdentityDocumentSignature() const{ return m_instanceIdentityDocumentSignature; }
    inline bool InstanceIdentityDocumentSignatureHasBeenSet() const { return m_instanceIdentityDocumentSignatureHasBeenSet; }
    inline void SetInstanceIdentityDocumentSignature(const Aws::String& value) { m_instanceIdentityDocumentSignatureHasBeenSet = true; m_instanceIdentityDocumentSignature = value; }
    inline void SetInstanceIdentityDocumentSignature(Aws::String&& value) { m_instanceIdentityDocumentSignatureHasBeenSet = true; m_instanceIdentityDocumentSignature = std::move(value); }
    inline void SetInstanceIdentityDocumentSignature(const char* value) { m_instanceIdentityDocumentSignatureHasBeenSet = true; m_instanceIdentityDocumentSignature.assign(value); }
    inline RegisterContainerInstanceRequest& WithInstanceIdentityDocumentSignature(const Aws::String& value) { SetInstanceIdentityDocumentSignature(value); return *this;}
    inline RegisterContainerInstanceRequest& WithInstanceIdentityDocumentSignature(Aws::String&& value) { SetInstanceIdentityDocumentSignature(std::move(value)); return *this;}
    inline RegisterContainerInstanceRequest& WithInstanceIdentityDocumentSignature(const char* value) { SetInstanceIdentityDocumentSignature(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resources available on the instance.</p>
     */
    inline const Aws::Vector<Resource>& GetTotalResources() const{ return m_totalResources; }
    inline bool TotalResourcesHasBeenSet() const { return m_totalResourcesHasBeenSet; }
    inline void SetTotalResources(const Aws::Vector<Resource>& value) { m_totalResourcesHasBeenSet = true; m_totalResources = value; }
    inline void SetTotalResources(Aws::Vector<Resource>&& value) { m_totalResourcesHasBeenSet = true; m_totalResources = std::move(value); }
    inline RegisterContainerInstanceRequest& WithTotalResources(const Aws::Vector<Resource>& value) { SetTotalResources(value); return *this;}
    inline RegisterContainerInstanceRequest& WithTotalResources(Aws::Vector<Resource>&& value) { SetTotalResources(std::move(value)); return *this;}
    inline RegisterContainerInstanceRequest& AddTotalResources(const Resource& value) { m_totalResourcesHasBeenSet = true; m_totalResources.push_back(value); return *this; }
    inline RegisterContainerInstanceRequest& AddTotalResources(Resource&& value) { m_totalResourcesHasBeenSet = true; m_totalResources.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The version information for the Amazon ECS container agent and Docker daemon
     * that runs on the container instance.</p>
     */
    inline const VersionInfo& GetVersionInfo() const{ return m_versionInfo; }
    inline bool VersionInfoHasBeenSet() const { return m_versionInfoHasBeenSet; }
    inline void SetVersionInfo(const VersionInfo& value) { m_versionInfoHasBeenSet = true; m_versionInfo = value; }
    inline void SetVersionInfo(VersionInfo&& value) { m_versionInfoHasBeenSet = true; m_versionInfo = std::move(value); }
    inline RegisterContainerInstanceRequest& WithVersionInfo(const VersionInfo& value) { SetVersionInfo(value); return *this;}
    inline RegisterContainerInstanceRequest& WithVersionInfo(VersionInfo&& value) { SetVersionInfo(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the container instance (if it was previously registered).</p>
     */
    inline const Aws::String& GetContainerInstanceArn() const{ return m_containerInstanceArn; }
    inline bool ContainerInstanceArnHasBeenSet() const { return m_containerInstanceArnHasBeenSet; }
    inline void SetContainerInstanceArn(const Aws::String& value) { m_containerInstanceArnHasBeenSet = true; m_containerInstanceArn = value; }
    inline void SetContainerInstanceArn(Aws::String&& value) { m_containerInstanceArnHasBeenSet = true; m_containerInstanceArn = std::move(value); }
    inline void SetContainerInstanceArn(const char* value) { m_containerInstanceArnHasBeenSet = true; m_containerInstanceArn.assign(value); }
    inline RegisterContainerInstanceRequest& WithContainerInstanceArn(const Aws::String& value) { SetContainerInstanceArn(value); return *this;}
    inline RegisterContainerInstanceRequest& WithContainerInstanceArn(Aws::String&& value) { SetContainerInstanceArn(std::move(value)); return *this;}
    inline RegisterContainerInstanceRequest& WithContainerInstanceArn(const char* value) { SetContainerInstanceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The container instance attributes that this container instance supports.</p>
     */
    inline const Aws::Vector<Attribute>& GetAttributes() const{ return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    inline void SetAttributes(const Aws::Vector<Attribute>& value) { m_attributesHasBeenSet = true; m_attributes = value; }
    inline void SetAttributes(Aws::Vector<Attribute>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }
    inline RegisterContainerInstanceRequest& WithAttributes(const Aws::Vector<Attribute>& value) { SetAttributes(value); return *this;}
    inline RegisterContainerInstanceRequest& WithAttributes(Aws::Vector<Attribute>&& value) { SetAttributes(std::move(value)); return *this;}
    inline RegisterContainerInstanceRequest& AddAttributes(const Attribute& value) { m_attributesHasBeenSet = true; m_attributes.push_back(value); return *this; }
    inline RegisterContainerInstanceRequest& AddAttributes(Attribute&& value) { m_attributesHasBeenSet = true; m_attributes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The devices that are available on the container instance. The only supported
     * device type is a GPU.</p>
     */
    inline const Aws::Vector<PlatformDevice>& GetPlatformDevices() const{ return m_platformDevices; }
    inline bool PlatformDevicesHasBeenSet() const { return m_platformDevicesHasBeenSet; }
    inline void SetPlatformDevices(const Aws::Vector<PlatformDevice>& value) { m_platformDevicesHasBeenSet = true; m_platformDevices = value; }
    inline void SetPlatformDevices(Aws::Vector<PlatformDevice>&& value) { m_platformDevicesHasBeenSet = true; m_platformDevices = std::move(value); }
    inline RegisterContainerInstanceRequest& WithPlatformDevices(const Aws::Vector<PlatformDevice>& value) { SetPlatformDevices(value); return *this;}
    inline RegisterContainerInstanceRequest& WithPlatformDevices(Aws::Vector<PlatformDevice>&& value) { SetPlatformDevices(std::move(value)); return *this;}
    inline RegisterContainerInstanceRequest& AddPlatformDevices(const PlatformDevice& value) { m_platformDevicesHasBeenSet = true; m_platformDevices.push_back(value); return *this; }
    inline RegisterContainerInstanceRequest& AddPlatformDevices(PlatformDevice&& value) { m_platformDevicesHasBeenSet = true; m_platformDevices.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The metadata that you apply to the container instance to help you categorize
     * and organize them. Each tag consists of a key and an optional value. You define
     * both.</p> <p>The following basic restrictions apply to tags:</p> <ul> <li>
     * <p>Maximum number of tags per resource - 50</p> </li> <li> <p>For each resource,
     * each tag key must be unique, and each tag key can have only one value.</p> </li>
     * <li> <p>Maximum key length - 128 Unicode characters in UTF-8</p> </li> <li>
     * <p>Maximum value length - 256 Unicode characters in UTF-8</p> </li> <li> <p>If
     * your tagging schema is used across multiple services and resources, remember
     * that other services may have restrictions on allowed characters. Generally
     * allowed characters are: letters, numbers, and spaces representable in UTF-8, and
     * the following characters: + - = . _ : / @.</p> </li> <li> <p>Tag keys and values
     * are case-sensitive.</p> </li> <li> <p>Do not use <code>aws:</code>,
     * <code>AWS:</code>, or any upper or lowercase combination of such as a prefix for
     * either keys or values as it is reserved for Amazon Web Services use. You cannot
     * edit or delete tag keys or values with this prefix. Tags with this prefix do not
     * count against your tags per resource limit.</p> </li> </ul>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline RegisterContainerInstanceRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline RegisterContainerInstanceRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline RegisterContainerInstanceRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline RegisterContainerInstanceRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_cluster;
    bool m_clusterHasBeenSet = false;

    Aws::String m_instanceIdentityDocument;
    bool m_instanceIdentityDocumentHasBeenSet = false;

    Aws::String m_instanceIdentityDocumentSignature;
    bool m_instanceIdentityDocumentSignatureHasBeenSet = false;

    Aws::Vector<Resource> m_totalResources;
    bool m_totalResourcesHasBeenSet = false;

    VersionInfo m_versionInfo;
    bool m_versionInfoHasBeenSet = false;

    Aws::String m_containerInstanceArn;
    bool m_containerInstanceArnHasBeenSet = false;

    Aws::Vector<Attribute> m_attributes;
    bool m_attributesHasBeenSet = false;

    Aws::Vector<PlatformDevice> m_platformDevices;
    bool m_platformDevicesHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
