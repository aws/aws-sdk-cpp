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
    AWS_ECS_API RegisterContainerInstanceRequest() = default;

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
    inline const Aws::String& GetCluster() const { return m_cluster; }
    inline bool ClusterHasBeenSet() const { return m_clusterHasBeenSet; }
    template<typename ClusterT = Aws::String>
    void SetCluster(ClusterT&& value) { m_clusterHasBeenSet = true; m_cluster = std::forward<ClusterT>(value); }
    template<typename ClusterT = Aws::String>
    RegisterContainerInstanceRequest& WithCluster(ClusterT&& value) { SetCluster(std::forward<ClusterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance identity document for the EC2 instance to register. This
     * document can be found by running the following command from the instance:
     * <code>curl
     * http://169.254.169.254/latest/dynamic/instance-identity/document/</code> </p>
     */
    inline const Aws::String& GetInstanceIdentityDocument() const { return m_instanceIdentityDocument; }
    inline bool InstanceIdentityDocumentHasBeenSet() const { return m_instanceIdentityDocumentHasBeenSet; }
    template<typename InstanceIdentityDocumentT = Aws::String>
    void SetInstanceIdentityDocument(InstanceIdentityDocumentT&& value) { m_instanceIdentityDocumentHasBeenSet = true; m_instanceIdentityDocument = std::forward<InstanceIdentityDocumentT>(value); }
    template<typename InstanceIdentityDocumentT = Aws::String>
    RegisterContainerInstanceRequest& WithInstanceIdentityDocument(InstanceIdentityDocumentT&& value) { SetInstanceIdentityDocument(std::forward<InstanceIdentityDocumentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance identity document signature for the EC2 instance to register.
     * This signature can be found by running the following command from the instance:
     * <code>curl
     * http://169.254.169.254/latest/dynamic/instance-identity/signature/</code> </p>
     */
    inline const Aws::String& GetInstanceIdentityDocumentSignature() const { return m_instanceIdentityDocumentSignature; }
    inline bool InstanceIdentityDocumentSignatureHasBeenSet() const { return m_instanceIdentityDocumentSignatureHasBeenSet; }
    template<typename InstanceIdentityDocumentSignatureT = Aws::String>
    void SetInstanceIdentityDocumentSignature(InstanceIdentityDocumentSignatureT&& value) { m_instanceIdentityDocumentSignatureHasBeenSet = true; m_instanceIdentityDocumentSignature = std::forward<InstanceIdentityDocumentSignatureT>(value); }
    template<typename InstanceIdentityDocumentSignatureT = Aws::String>
    RegisterContainerInstanceRequest& WithInstanceIdentityDocumentSignature(InstanceIdentityDocumentSignatureT&& value) { SetInstanceIdentityDocumentSignature(std::forward<InstanceIdentityDocumentSignatureT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resources available on the instance.</p>
     */
    inline const Aws::Vector<Resource>& GetTotalResources() const { return m_totalResources; }
    inline bool TotalResourcesHasBeenSet() const { return m_totalResourcesHasBeenSet; }
    template<typename TotalResourcesT = Aws::Vector<Resource>>
    void SetTotalResources(TotalResourcesT&& value) { m_totalResourcesHasBeenSet = true; m_totalResources = std::forward<TotalResourcesT>(value); }
    template<typename TotalResourcesT = Aws::Vector<Resource>>
    RegisterContainerInstanceRequest& WithTotalResources(TotalResourcesT&& value) { SetTotalResources(std::forward<TotalResourcesT>(value)); return *this;}
    template<typename TotalResourcesT = Resource>
    RegisterContainerInstanceRequest& AddTotalResources(TotalResourcesT&& value) { m_totalResourcesHasBeenSet = true; m_totalResources.emplace_back(std::forward<TotalResourcesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The version information for the Amazon ECS container agent and Docker daemon
     * that runs on the container instance.</p>
     */
    inline const VersionInfo& GetVersionInfo() const { return m_versionInfo; }
    inline bool VersionInfoHasBeenSet() const { return m_versionInfoHasBeenSet; }
    template<typename VersionInfoT = VersionInfo>
    void SetVersionInfo(VersionInfoT&& value) { m_versionInfoHasBeenSet = true; m_versionInfo = std::forward<VersionInfoT>(value); }
    template<typename VersionInfoT = VersionInfo>
    RegisterContainerInstanceRequest& WithVersionInfo(VersionInfoT&& value) { SetVersionInfo(std::forward<VersionInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the container instance (if it was previously registered).</p>
     */
    inline const Aws::String& GetContainerInstanceArn() const { return m_containerInstanceArn; }
    inline bool ContainerInstanceArnHasBeenSet() const { return m_containerInstanceArnHasBeenSet; }
    template<typename ContainerInstanceArnT = Aws::String>
    void SetContainerInstanceArn(ContainerInstanceArnT&& value) { m_containerInstanceArnHasBeenSet = true; m_containerInstanceArn = std::forward<ContainerInstanceArnT>(value); }
    template<typename ContainerInstanceArnT = Aws::String>
    RegisterContainerInstanceRequest& WithContainerInstanceArn(ContainerInstanceArnT&& value) { SetContainerInstanceArn(std::forward<ContainerInstanceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The container instance attributes that this container instance supports.</p>
     */
    inline const Aws::Vector<Attribute>& GetAttributes() const { return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    template<typename AttributesT = Aws::Vector<Attribute>>
    void SetAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes = std::forward<AttributesT>(value); }
    template<typename AttributesT = Aws::Vector<Attribute>>
    RegisterContainerInstanceRequest& WithAttributes(AttributesT&& value) { SetAttributes(std::forward<AttributesT>(value)); return *this;}
    template<typename AttributesT = Attribute>
    RegisterContainerInstanceRequest& AddAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes.emplace_back(std::forward<AttributesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The devices that are available on the container instance. The only supported
     * device type is a GPU.</p>
     */
    inline const Aws::Vector<PlatformDevice>& GetPlatformDevices() const { return m_platformDevices; }
    inline bool PlatformDevicesHasBeenSet() const { return m_platformDevicesHasBeenSet; }
    template<typename PlatformDevicesT = Aws::Vector<PlatformDevice>>
    void SetPlatformDevices(PlatformDevicesT&& value) { m_platformDevicesHasBeenSet = true; m_platformDevices = std::forward<PlatformDevicesT>(value); }
    template<typename PlatformDevicesT = Aws::Vector<PlatformDevice>>
    RegisterContainerInstanceRequest& WithPlatformDevices(PlatformDevicesT&& value) { SetPlatformDevices(std::forward<PlatformDevicesT>(value)); return *this;}
    template<typename PlatformDevicesT = PlatformDevice>
    RegisterContainerInstanceRequest& AddPlatformDevices(PlatformDevicesT&& value) { m_platformDevicesHasBeenSet = true; m_platformDevices.emplace_back(std::forward<PlatformDevicesT>(value)); return *this; }
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
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    RegisterContainerInstanceRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    RegisterContainerInstanceRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
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
