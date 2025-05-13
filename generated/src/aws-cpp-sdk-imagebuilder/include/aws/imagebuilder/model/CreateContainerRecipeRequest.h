/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/imagebuilder/ImagebuilderRequest.h>
#include <aws/imagebuilder/model/ContainerType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/imagebuilder/model/InstanceConfiguration.h>
#include <aws/imagebuilder/model/Platform.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/imagebuilder/model/TargetContainerRepository.h>
#include <aws/imagebuilder/model/ComponentConfiguration.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace imagebuilder
{
namespace Model
{

  /**
   */
  class CreateContainerRecipeRequest : public ImagebuilderRequest
  {
  public:
    AWS_IMAGEBUILDER_API CreateContainerRecipeRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateContainerRecipe"; }

    AWS_IMAGEBUILDER_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The type of container to create.</p>
     */
    inline ContainerType GetContainerType() const { return m_containerType; }
    inline bool ContainerTypeHasBeenSet() const { return m_containerTypeHasBeenSet; }
    inline void SetContainerType(ContainerType value) { m_containerTypeHasBeenSet = true; m_containerType = value; }
    inline CreateContainerRecipeRequest& WithContainerType(ContainerType value) { SetContainerType(value); return *this;}
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
    CreateContainerRecipeRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
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
    CreateContainerRecipeRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The semantic version of the container recipe. This version follows the
     * semantic version syntax.</p>  <p>The semantic version has four nodes:
     * &lt;major&gt;.&lt;minor&gt;.&lt;patch&gt;/&lt;build&gt;. You can assign values
     * for the first three, and can filter on all of them.</p> <p> <b>Assignment:</b>
     * For the first three nodes you can assign any positive integer value, including
     * zero, with an upper limit of 2^30-1, or 1073741823 for each node. Image Builder
     * automatically assigns the build number to the fourth node.</p> <p>
     * <b>Patterns:</b> You can use any numeric pattern that adheres to the assignment
     * requirements for the nodes that you can assign. For example, you might choose a
     * software version pattern, such as 1.0.0, or a date, such as 2021.01.01.</p>
     * 
     */
    inline const Aws::String& GetSemanticVersion() const { return m_semanticVersion; }
    inline bool SemanticVersionHasBeenSet() const { return m_semanticVersionHasBeenSet; }
    template<typename SemanticVersionT = Aws::String>
    void SetSemanticVersion(SemanticVersionT&& value) { m_semanticVersionHasBeenSet = true; m_semanticVersion = std::forward<SemanticVersionT>(value); }
    template<typename SemanticVersionT = Aws::String>
    CreateContainerRecipeRequest& WithSemanticVersion(SemanticVersionT&& value) { SetSemanticVersion(std::forward<SemanticVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Components for build and test that are included in the container recipe.
     * Recipes require a minimum of one build component, and can have a maximum of 20
     * build and test components in any combination.</p>
     */
    inline const Aws::Vector<ComponentConfiguration>& GetComponents() const { return m_components; }
    inline bool ComponentsHasBeenSet() const { return m_componentsHasBeenSet; }
    template<typename ComponentsT = Aws::Vector<ComponentConfiguration>>
    void SetComponents(ComponentsT&& value) { m_componentsHasBeenSet = true; m_components = std::forward<ComponentsT>(value); }
    template<typename ComponentsT = Aws::Vector<ComponentConfiguration>>
    CreateContainerRecipeRequest& WithComponents(ComponentsT&& value) { SetComponents(std::forward<ComponentsT>(value)); return *this;}
    template<typename ComponentsT = ComponentConfiguration>
    CreateContainerRecipeRequest& AddComponents(ComponentsT&& value) { m_componentsHasBeenSet = true; m_components.emplace_back(std::forward<ComponentsT>(value)); return *this; }
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
    CreateContainerRecipeRequest& WithInstanceConfiguration(InstanceConfigurationT&& value) { SetInstanceConfiguration(std::forward<InstanceConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Dockerfile template used to build your image as an inline data blob.</p>
     */
    inline const Aws::String& GetDockerfileTemplateData() const { return m_dockerfileTemplateData; }
    inline bool DockerfileTemplateDataHasBeenSet() const { return m_dockerfileTemplateDataHasBeenSet; }
    template<typename DockerfileTemplateDataT = Aws::String>
    void SetDockerfileTemplateData(DockerfileTemplateDataT&& value) { m_dockerfileTemplateDataHasBeenSet = true; m_dockerfileTemplateData = std::forward<DockerfileTemplateDataT>(value); }
    template<typename DockerfileTemplateDataT = Aws::String>
    CreateContainerRecipeRequest& WithDockerfileTemplateData(DockerfileTemplateDataT&& value) { SetDockerfileTemplateData(std::forward<DockerfileTemplateDataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 URI for the Dockerfile that will be used to build your
     * container image.</p>
     */
    inline const Aws::String& GetDockerfileTemplateUri() const { return m_dockerfileTemplateUri; }
    inline bool DockerfileTemplateUriHasBeenSet() const { return m_dockerfileTemplateUriHasBeenSet; }
    template<typename DockerfileTemplateUriT = Aws::String>
    void SetDockerfileTemplateUri(DockerfileTemplateUriT&& value) { m_dockerfileTemplateUriHasBeenSet = true; m_dockerfileTemplateUri = std::forward<DockerfileTemplateUriT>(value); }
    template<typename DockerfileTemplateUriT = Aws::String>
    CreateContainerRecipeRequest& WithDockerfileTemplateUri(DockerfileTemplateUriT&& value) { SetDockerfileTemplateUri(std::forward<DockerfileTemplateUriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the operating system platform when you use a custom base image.</p>
     */
    inline Platform GetPlatformOverride() const { return m_platformOverride; }
    inline bool PlatformOverrideHasBeenSet() const { return m_platformOverrideHasBeenSet; }
    inline void SetPlatformOverride(Platform value) { m_platformOverrideHasBeenSet = true; m_platformOverride = value; }
    inline CreateContainerRecipeRequest& WithPlatformOverride(Platform value) { SetPlatformOverride(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the operating system version for the base image.</p>
     */
    inline const Aws::String& GetImageOsVersionOverride() const { return m_imageOsVersionOverride; }
    inline bool ImageOsVersionOverrideHasBeenSet() const { return m_imageOsVersionOverrideHasBeenSet; }
    template<typename ImageOsVersionOverrideT = Aws::String>
    void SetImageOsVersionOverride(ImageOsVersionOverrideT&& value) { m_imageOsVersionOverrideHasBeenSet = true; m_imageOsVersionOverride = std::forward<ImageOsVersionOverrideT>(value); }
    template<typename ImageOsVersionOverrideT = Aws::String>
    CreateContainerRecipeRequest& WithImageOsVersionOverride(ImageOsVersionOverrideT&& value) { SetImageOsVersionOverride(std::forward<ImageOsVersionOverrideT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The base image for the container recipe.</p>
     */
    inline const Aws::String& GetParentImage() const { return m_parentImage; }
    inline bool ParentImageHasBeenSet() const { return m_parentImageHasBeenSet; }
    template<typename ParentImageT = Aws::String>
    void SetParentImage(ParentImageT&& value) { m_parentImageHasBeenSet = true; m_parentImage = std::forward<ParentImageT>(value); }
    template<typename ParentImageT = Aws::String>
    CreateContainerRecipeRequest& WithParentImage(ParentImageT&& value) { SetParentImage(std::forward<ParentImageT>(value)); return *this;}
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
    CreateContainerRecipeRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateContainerRecipeRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
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
    CreateContainerRecipeRequest& WithWorkingDirectory(WorkingDirectoryT&& value) { SetWorkingDirectory(std::forward<WorkingDirectoryT>(value)); return *this;}
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
    CreateContainerRecipeRequest& WithTargetRepository(TargetRepositoryT&& value) { SetTargetRepository(std::forward<TargetRepositoryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifies which KMS key is used to encrypt the Dockerfile template.</p>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    CreateContainerRecipeRequest& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique, case-sensitive identifier you provide to ensure idempotency of the
     * request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a> in the <i>Amazon EC2 API Reference</i>.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateContainerRecipeRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}
  private:

    ContainerType m_containerType{ContainerType::NOT_SET};
    bool m_containerTypeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_semanticVersion;
    bool m_semanticVersionHasBeenSet = false;

    Aws::Vector<ComponentConfiguration> m_components;
    bool m_componentsHasBeenSet = false;

    InstanceConfiguration m_instanceConfiguration;
    bool m_instanceConfigurationHasBeenSet = false;

    Aws::String m_dockerfileTemplateData;
    bool m_dockerfileTemplateDataHasBeenSet = false;

    Aws::String m_dockerfileTemplateUri;
    bool m_dockerfileTemplateUriHasBeenSet = false;

    Platform m_platformOverride{Platform::NOT_SET};
    bool m_platformOverrideHasBeenSet = false;

    Aws::String m_imageOsVersionOverride;
    bool m_imageOsVersionOverrideHasBeenSet = false;

    Aws::String m_parentImage;
    bool m_parentImageHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_workingDirectory;
    bool m_workingDirectoryHasBeenSet = false;

    TargetContainerRepository m_targetRepository;
    bool m_targetRepositoryHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
