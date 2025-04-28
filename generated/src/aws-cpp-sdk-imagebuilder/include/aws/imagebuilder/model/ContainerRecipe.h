/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/imagebuilder/model/ContainerType.h>
#include <aws/imagebuilder/model/Platform.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/imagebuilder/model/InstanceConfiguration.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/imagebuilder/model/TargetContainerRepository.h>
#include <aws/imagebuilder/model/ComponentConfiguration.h>
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
namespace imagebuilder
{
namespace Model
{

  /**
   * <p>A container recipe.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/ContainerRecipe">AWS
   * API Reference</a></p>
   */
  class ContainerRecipe
  {
  public:
    AWS_IMAGEBUILDER_API ContainerRecipe() = default;
    AWS_IMAGEBUILDER_API ContainerRecipe(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API ContainerRecipe& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the container recipe.</p> 
     * <p>Semantic versioning is included in each object's Amazon Resource Name (ARN),
     * at the level that applies to that object as follows:</p> <ol> <li>
     * <p>Versionless ARNs and Name ARNs do not include specific values in any of the
     * nodes. The nodes are either left off entirely, or they are specified as
     * wildcards, for example: x.x.x.</p> </li> <li> <p>Version ARNs have only the
     * first three nodes: &lt;major&gt;.&lt;minor&gt;.&lt;patch&gt;</p> </li> <li>
     * <p>Build version ARNs have all four nodes, and point to a specific build for a
     * specific version of an object.</p> </li> </ol> 
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    ContainerRecipe& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the type of container, such as Docker.</p>
     */
    inline ContainerType GetContainerType() const { return m_containerType; }
    inline bool ContainerTypeHasBeenSet() const { return m_containerTypeHasBeenSet; }
    inline void SetContainerType(ContainerType value) { m_containerTypeHasBeenSet = true; m_containerType = value; }
    inline ContainerRecipe& WithContainerType(ContainerType value) { SetContainerType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the container recipe.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ContainerRecipe& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the container recipe.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    ContainerRecipe& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The system platform for the container, such as Windows or Linux.</p>
     */
    inline Platform GetPlatform() const { return m_platform; }
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }
    inline void SetPlatform(Platform value) { m_platformHasBeenSet = true; m_platform = value; }
    inline ContainerRecipe& WithPlatform(Platform value) { SetPlatform(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The owner of the container recipe.</p>
     */
    inline const Aws::String& GetOwner() const { return m_owner; }
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }
    template<typename OwnerT = Aws::String>
    void SetOwner(OwnerT&& value) { m_ownerHasBeenSet = true; m_owner = std::forward<OwnerT>(value); }
    template<typename OwnerT = Aws::String>
    ContainerRecipe& WithOwner(OwnerT&& value) { SetOwner(std::forward<OwnerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The semantic version of the container recipe.</p>  <p>The semantic
     * version has four nodes: &lt;major&gt;.&lt;minor&gt;.&lt;patch&gt;/&lt;build&gt;.
     * You can assign values for the first three, and can filter on all of them.</p>
     * <p> <b>Assignment:</b> For the first three nodes you can assign any positive
     * integer value, including zero, with an upper limit of 2^30-1, or 1073741823 for
     * each node. Image Builder automatically assigns the build number to the fourth
     * node.</p> <p> <b>Patterns:</b> You can use any numeric pattern that adheres to
     * the assignment requirements for the nodes that you can assign. For example, you
     * might choose a software version pattern, such as 1.0.0, or a date, such as
     * 2021.01.01.</p> <p> <b>Filtering:</b> With semantic versioning, you have the
     * flexibility to use wildcards (x) to specify the most recent versions or nodes
     * when selecting the base image or components for your recipe. When you use a
     * wildcard in any node, all nodes to the right of the first wildcard must also be
     * wildcards.</p> 
     */
    inline const Aws::String& GetVersion() const { return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    template<typename VersionT = Aws::String>
    void SetVersion(VersionT&& value) { m_versionHasBeenSet = true; m_version = std::forward<VersionT>(value); }
    template<typename VersionT = Aws::String>
    ContainerRecipe& WithVersion(VersionT&& value) { SetVersion(std::forward<VersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Build and test components that are included in the container recipe. Recipes
     * require a minimum of one build component, and can have a maximum of 20 build and
     * test components in any combination.</p>
     */
    inline const Aws::Vector<ComponentConfiguration>& GetComponents() const { return m_components; }
    inline bool ComponentsHasBeenSet() const { return m_componentsHasBeenSet; }
    template<typename ComponentsT = Aws::Vector<ComponentConfiguration>>
    void SetComponents(ComponentsT&& value) { m_componentsHasBeenSet = true; m_components = std::forward<ComponentsT>(value); }
    template<typename ComponentsT = Aws::Vector<ComponentConfiguration>>
    ContainerRecipe& WithComponents(ComponentsT&& value) { SetComponents(std::forward<ComponentsT>(value)); return *this;}
    template<typename ComponentsT = ComponentConfiguration>
    ContainerRecipe& AddComponents(ComponentsT&& value) { m_componentsHasBeenSet = true; m_components.emplace_back(std::forward<ComponentsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A group of options that can be used to configure an instance for building and
     * testing container images.</p>
     */
    inline const InstanceConfiguration& GetInstanceConfiguration() const { return m_instanceConfiguration; }
    inline bool InstanceConfigurationHasBeenSet() const { return m_instanceConfigurationHasBeenSet; }
    template<typename InstanceConfigurationT = InstanceConfiguration>
    void SetInstanceConfiguration(InstanceConfigurationT&& value) { m_instanceConfigurationHasBeenSet = true; m_instanceConfiguration = std::forward<InstanceConfigurationT>(value); }
    template<typename InstanceConfigurationT = InstanceConfiguration>
    ContainerRecipe& WithInstanceConfiguration(InstanceConfigurationT&& value) { SetInstanceConfiguration(std::forward<InstanceConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Dockerfiles are text documents that are used to build Docker containers, and
     * ensure that they contain all of the elements required by the application running
     * inside. The template data consists of contextual variables where Image Builder
     * places build information or scripts, based on your container image recipe.</p>
     */
    inline const Aws::String& GetDockerfileTemplateData() const { return m_dockerfileTemplateData; }
    inline bool DockerfileTemplateDataHasBeenSet() const { return m_dockerfileTemplateDataHasBeenSet; }
    template<typename DockerfileTemplateDataT = Aws::String>
    void SetDockerfileTemplateData(DockerfileTemplateDataT&& value) { m_dockerfileTemplateDataHasBeenSet = true; m_dockerfileTemplateData = std::forward<DockerfileTemplateDataT>(value); }
    template<typename DockerfileTemplateDataT = Aws::String>
    ContainerRecipe& WithDockerfileTemplateData(DockerfileTemplateDataT&& value) { SetDockerfileTemplateData(std::forward<DockerfileTemplateDataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifies which KMS key is used to encrypt the container image for
     * distribution to the target Region.</p>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    ContainerRecipe& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A flag that indicates if the target container is encrypted.</p>
     */
    inline bool GetEncrypted() const { return m_encrypted; }
    inline bool EncryptedHasBeenSet() const { return m_encryptedHasBeenSet; }
    inline void SetEncrypted(bool value) { m_encryptedHasBeenSet = true; m_encrypted = value; }
    inline ContainerRecipe& WithEncrypted(bool value) { SetEncrypted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The base image for customizations specified in the container recipe. This can
     * contain an Image Builder image resource ARN or a container image URI, for
     * example <code>amazonlinux:latest</code>.</p>
     */
    inline const Aws::String& GetParentImage() const { return m_parentImage; }
    inline bool ParentImageHasBeenSet() const { return m_parentImageHasBeenSet; }
    template<typename ParentImageT = Aws::String>
    void SetParentImage(ParentImageT&& value) { m_parentImageHasBeenSet = true; m_parentImage = std::forward<ParentImageT>(value); }
    template<typename ParentImageT = Aws::String>
    ContainerRecipe& WithParentImage(ParentImageT&& value) { SetParentImage(std::forward<ParentImageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when this container recipe was created.</p>
     */
    inline const Aws::String& GetDateCreated() const { return m_dateCreated; }
    inline bool DateCreatedHasBeenSet() const { return m_dateCreatedHasBeenSet; }
    template<typename DateCreatedT = Aws::String>
    void SetDateCreated(DateCreatedT&& value) { m_dateCreatedHasBeenSet = true; m_dateCreated = std::forward<DateCreatedT>(value); }
    template<typename DateCreatedT = Aws::String>
    ContainerRecipe& WithDateCreated(DateCreatedT&& value) { SetDateCreated(std::forward<DateCreatedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tags that are attached to the container recipe.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    ContainerRecipe& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    ContainerRecipe& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The working directory for use during build and test workflows.</p>
     */
    inline const Aws::String& GetWorkingDirectory() const { return m_workingDirectory; }
    inline bool WorkingDirectoryHasBeenSet() const { return m_workingDirectoryHasBeenSet; }
    template<typename WorkingDirectoryT = Aws::String>
    void SetWorkingDirectory(WorkingDirectoryT&& value) { m_workingDirectoryHasBeenSet = true; m_workingDirectory = std::forward<WorkingDirectoryT>(value); }
    template<typename WorkingDirectoryT = Aws::String>
    ContainerRecipe& WithWorkingDirectory(WorkingDirectoryT&& value) { SetWorkingDirectory(std::forward<WorkingDirectoryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination repository for the container image.</p>
     */
    inline const TargetContainerRepository& GetTargetRepository() const { return m_targetRepository; }
    inline bool TargetRepositoryHasBeenSet() const { return m_targetRepositoryHasBeenSet; }
    template<typename TargetRepositoryT = TargetContainerRepository>
    void SetTargetRepository(TargetRepositoryT&& value) { m_targetRepositoryHasBeenSet = true; m_targetRepository = std::forward<TargetRepositoryT>(value); }
    template<typename TargetRepositoryT = TargetContainerRepository>
    ContainerRecipe& WithTargetRepository(TargetRepositoryT&& value) { SetTargetRepository(std::forward<TargetRepositoryT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    ContainerType m_containerType{ContainerType::NOT_SET};
    bool m_containerTypeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Platform m_platform{Platform::NOT_SET};
    bool m_platformHasBeenSet = false;

    Aws::String m_owner;
    bool m_ownerHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

    Aws::Vector<ComponentConfiguration> m_components;
    bool m_componentsHasBeenSet = false;

    InstanceConfiguration m_instanceConfiguration;
    bool m_instanceConfigurationHasBeenSet = false;

    Aws::String m_dockerfileTemplateData;
    bool m_dockerfileTemplateDataHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    bool m_encrypted{false};
    bool m_encryptedHasBeenSet = false;

    Aws::String m_parentImage;
    bool m_parentImageHasBeenSet = false;

    Aws::String m_dateCreated;
    bool m_dateCreatedHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_workingDirectory;
    bool m_workingDirectoryHasBeenSet = false;

    TargetContainerRepository m_targetRepository;
    bool m_targetRepositoryHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
