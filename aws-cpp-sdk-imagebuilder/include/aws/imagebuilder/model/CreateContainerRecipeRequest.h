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
    AWS_IMAGEBUILDER_API CreateContainerRecipeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateContainerRecipe"; }

    AWS_IMAGEBUILDER_API Aws::String SerializePayload() const override;


    /**
     * <p>The type of container to create.</p>
     */
    inline const ContainerType& GetContainerType() const{ return m_containerType; }

    /**
     * <p>The type of container to create.</p>
     */
    inline bool ContainerTypeHasBeenSet() const { return m_containerTypeHasBeenSet; }

    /**
     * <p>The type of container to create.</p>
     */
    inline void SetContainerType(const ContainerType& value) { m_containerTypeHasBeenSet = true; m_containerType = value; }

    /**
     * <p>The type of container to create.</p>
     */
    inline void SetContainerType(ContainerType&& value) { m_containerTypeHasBeenSet = true; m_containerType = std::move(value); }

    /**
     * <p>The type of container to create.</p>
     */
    inline CreateContainerRecipeRequest& WithContainerType(const ContainerType& value) { SetContainerType(value); return *this;}

    /**
     * <p>The type of container to create.</p>
     */
    inline CreateContainerRecipeRequest& WithContainerType(ContainerType&& value) { SetContainerType(std::move(value)); return *this;}


    /**
     * <p>The name of the container recipe.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the container recipe.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the container recipe.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the container recipe.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the container recipe.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the container recipe.</p>
     */
    inline CreateContainerRecipeRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the container recipe.</p>
     */
    inline CreateContainerRecipeRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the container recipe.</p>
     */
    inline CreateContainerRecipeRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The description of the container recipe.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the container recipe.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the container recipe.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the container recipe.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the container recipe.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the container recipe.</p>
     */
    inline CreateContainerRecipeRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the container recipe.</p>
     */
    inline CreateContainerRecipeRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the container recipe.</p>
     */
    inline CreateContainerRecipeRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


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
    inline const Aws::String& GetSemanticVersion() const{ return m_semanticVersion; }

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
    inline bool SemanticVersionHasBeenSet() const { return m_semanticVersionHasBeenSet; }

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
    inline void SetSemanticVersion(const Aws::String& value) { m_semanticVersionHasBeenSet = true; m_semanticVersion = value; }

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
    inline void SetSemanticVersion(Aws::String&& value) { m_semanticVersionHasBeenSet = true; m_semanticVersion = std::move(value); }

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
    inline void SetSemanticVersion(const char* value) { m_semanticVersionHasBeenSet = true; m_semanticVersion.assign(value); }

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
    inline CreateContainerRecipeRequest& WithSemanticVersion(const Aws::String& value) { SetSemanticVersion(value); return *this;}

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
    inline CreateContainerRecipeRequest& WithSemanticVersion(Aws::String&& value) { SetSemanticVersion(std::move(value)); return *this;}

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
    inline CreateContainerRecipeRequest& WithSemanticVersion(const char* value) { SetSemanticVersion(value); return *this;}


    /**
     * <p>Components for build and test that are included in the container recipe.</p>
     */
    inline const Aws::Vector<ComponentConfiguration>& GetComponents() const{ return m_components; }

    /**
     * <p>Components for build and test that are included in the container recipe.</p>
     */
    inline bool ComponentsHasBeenSet() const { return m_componentsHasBeenSet; }

    /**
     * <p>Components for build and test that are included in the container recipe.</p>
     */
    inline void SetComponents(const Aws::Vector<ComponentConfiguration>& value) { m_componentsHasBeenSet = true; m_components = value; }

    /**
     * <p>Components for build and test that are included in the container recipe.</p>
     */
    inline void SetComponents(Aws::Vector<ComponentConfiguration>&& value) { m_componentsHasBeenSet = true; m_components = std::move(value); }

    /**
     * <p>Components for build and test that are included in the container recipe.</p>
     */
    inline CreateContainerRecipeRequest& WithComponents(const Aws::Vector<ComponentConfiguration>& value) { SetComponents(value); return *this;}

    /**
     * <p>Components for build and test that are included in the container recipe.</p>
     */
    inline CreateContainerRecipeRequest& WithComponents(Aws::Vector<ComponentConfiguration>&& value) { SetComponents(std::move(value)); return *this;}

    /**
     * <p>Components for build and test that are included in the container recipe.</p>
     */
    inline CreateContainerRecipeRequest& AddComponents(const ComponentConfiguration& value) { m_componentsHasBeenSet = true; m_components.push_back(value); return *this; }

    /**
     * <p>Components for build and test that are included in the container recipe.</p>
     */
    inline CreateContainerRecipeRequest& AddComponents(ComponentConfiguration&& value) { m_componentsHasBeenSet = true; m_components.push_back(std::move(value)); return *this; }


    /**
     * <p>A group of options that can be used to configure an instance for building and
     * testing container images.</p>
     */
    inline const InstanceConfiguration& GetInstanceConfiguration() const{ return m_instanceConfiguration; }

    /**
     * <p>A group of options that can be used to configure an instance for building and
     * testing container images.</p>
     */
    inline bool InstanceConfigurationHasBeenSet() const { return m_instanceConfigurationHasBeenSet; }

    /**
     * <p>A group of options that can be used to configure an instance for building and
     * testing container images.</p>
     */
    inline void SetInstanceConfiguration(const InstanceConfiguration& value) { m_instanceConfigurationHasBeenSet = true; m_instanceConfiguration = value; }

    /**
     * <p>A group of options that can be used to configure an instance for building and
     * testing container images.</p>
     */
    inline void SetInstanceConfiguration(InstanceConfiguration&& value) { m_instanceConfigurationHasBeenSet = true; m_instanceConfiguration = std::move(value); }

    /**
     * <p>A group of options that can be used to configure an instance for building and
     * testing container images.</p>
     */
    inline CreateContainerRecipeRequest& WithInstanceConfiguration(const InstanceConfiguration& value) { SetInstanceConfiguration(value); return *this;}

    /**
     * <p>A group of options that can be used to configure an instance for building and
     * testing container images.</p>
     */
    inline CreateContainerRecipeRequest& WithInstanceConfiguration(InstanceConfiguration&& value) { SetInstanceConfiguration(std::move(value)); return *this;}


    /**
     * <p>The Dockerfile template used to build your image as an inline data blob.</p>
     */
    inline const Aws::String& GetDockerfileTemplateData() const{ return m_dockerfileTemplateData; }

    /**
     * <p>The Dockerfile template used to build your image as an inline data blob.</p>
     */
    inline bool DockerfileTemplateDataHasBeenSet() const { return m_dockerfileTemplateDataHasBeenSet; }

    /**
     * <p>The Dockerfile template used to build your image as an inline data blob.</p>
     */
    inline void SetDockerfileTemplateData(const Aws::String& value) { m_dockerfileTemplateDataHasBeenSet = true; m_dockerfileTemplateData = value; }

    /**
     * <p>The Dockerfile template used to build your image as an inline data blob.</p>
     */
    inline void SetDockerfileTemplateData(Aws::String&& value) { m_dockerfileTemplateDataHasBeenSet = true; m_dockerfileTemplateData = std::move(value); }

    /**
     * <p>The Dockerfile template used to build your image as an inline data blob.</p>
     */
    inline void SetDockerfileTemplateData(const char* value) { m_dockerfileTemplateDataHasBeenSet = true; m_dockerfileTemplateData.assign(value); }

    /**
     * <p>The Dockerfile template used to build your image as an inline data blob.</p>
     */
    inline CreateContainerRecipeRequest& WithDockerfileTemplateData(const Aws::String& value) { SetDockerfileTemplateData(value); return *this;}

    /**
     * <p>The Dockerfile template used to build your image as an inline data blob.</p>
     */
    inline CreateContainerRecipeRequest& WithDockerfileTemplateData(Aws::String&& value) { SetDockerfileTemplateData(std::move(value)); return *this;}

    /**
     * <p>The Dockerfile template used to build your image as an inline data blob.</p>
     */
    inline CreateContainerRecipeRequest& WithDockerfileTemplateData(const char* value) { SetDockerfileTemplateData(value); return *this;}


    /**
     * <p>The Amazon S3 URI for the Dockerfile that will be used to build your
     * container image.</p>
     */
    inline const Aws::String& GetDockerfileTemplateUri() const{ return m_dockerfileTemplateUri; }

    /**
     * <p>The Amazon S3 URI for the Dockerfile that will be used to build your
     * container image.</p>
     */
    inline bool DockerfileTemplateUriHasBeenSet() const { return m_dockerfileTemplateUriHasBeenSet; }

    /**
     * <p>The Amazon S3 URI for the Dockerfile that will be used to build your
     * container image.</p>
     */
    inline void SetDockerfileTemplateUri(const Aws::String& value) { m_dockerfileTemplateUriHasBeenSet = true; m_dockerfileTemplateUri = value; }

    /**
     * <p>The Amazon S3 URI for the Dockerfile that will be used to build your
     * container image.</p>
     */
    inline void SetDockerfileTemplateUri(Aws::String&& value) { m_dockerfileTemplateUriHasBeenSet = true; m_dockerfileTemplateUri = std::move(value); }

    /**
     * <p>The Amazon S3 URI for the Dockerfile that will be used to build your
     * container image.</p>
     */
    inline void SetDockerfileTemplateUri(const char* value) { m_dockerfileTemplateUriHasBeenSet = true; m_dockerfileTemplateUri.assign(value); }

    /**
     * <p>The Amazon S3 URI for the Dockerfile that will be used to build your
     * container image.</p>
     */
    inline CreateContainerRecipeRequest& WithDockerfileTemplateUri(const Aws::String& value) { SetDockerfileTemplateUri(value); return *this;}

    /**
     * <p>The Amazon S3 URI for the Dockerfile that will be used to build your
     * container image.</p>
     */
    inline CreateContainerRecipeRequest& WithDockerfileTemplateUri(Aws::String&& value) { SetDockerfileTemplateUri(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 URI for the Dockerfile that will be used to build your
     * container image.</p>
     */
    inline CreateContainerRecipeRequest& WithDockerfileTemplateUri(const char* value) { SetDockerfileTemplateUri(value); return *this;}


    /**
     * <p>Specifies the operating system platform when you use a custom base image.</p>
     */
    inline const Platform& GetPlatformOverride() const{ return m_platformOverride; }

    /**
     * <p>Specifies the operating system platform when you use a custom base image.</p>
     */
    inline bool PlatformOverrideHasBeenSet() const { return m_platformOverrideHasBeenSet; }

    /**
     * <p>Specifies the operating system platform when you use a custom base image.</p>
     */
    inline void SetPlatformOverride(const Platform& value) { m_platformOverrideHasBeenSet = true; m_platformOverride = value; }

    /**
     * <p>Specifies the operating system platform when you use a custom base image.</p>
     */
    inline void SetPlatformOverride(Platform&& value) { m_platformOverrideHasBeenSet = true; m_platformOverride = std::move(value); }

    /**
     * <p>Specifies the operating system platform when you use a custom base image.</p>
     */
    inline CreateContainerRecipeRequest& WithPlatformOverride(const Platform& value) { SetPlatformOverride(value); return *this;}

    /**
     * <p>Specifies the operating system platform when you use a custom base image.</p>
     */
    inline CreateContainerRecipeRequest& WithPlatformOverride(Platform&& value) { SetPlatformOverride(std::move(value)); return *this;}


    /**
     * <p>Specifies the operating system version for the base image.</p>
     */
    inline const Aws::String& GetImageOsVersionOverride() const{ return m_imageOsVersionOverride; }

    /**
     * <p>Specifies the operating system version for the base image.</p>
     */
    inline bool ImageOsVersionOverrideHasBeenSet() const { return m_imageOsVersionOverrideHasBeenSet; }

    /**
     * <p>Specifies the operating system version for the base image.</p>
     */
    inline void SetImageOsVersionOverride(const Aws::String& value) { m_imageOsVersionOverrideHasBeenSet = true; m_imageOsVersionOverride = value; }

    /**
     * <p>Specifies the operating system version for the base image.</p>
     */
    inline void SetImageOsVersionOverride(Aws::String&& value) { m_imageOsVersionOverrideHasBeenSet = true; m_imageOsVersionOverride = std::move(value); }

    /**
     * <p>Specifies the operating system version for the base image.</p>
     */
    inline void SetImageOsVersionOverride(const char* value) { m_imageOsVersionOverrideHasBeenSet = true; m_imageOsVersionOverride.assign(value); }

    /**
     * <p>Specifies the operating system version for the base image.</p>
     */
    inline CreateContainerRecipeRequest& WithImageOsVersionOverride(const Aws::String& value) { SetImageOsVersionOverride(value); return *this;}

    /**
     * <p>Specifies the operating system version for the base image.</p>
     */
    inline CreateContainerRecipeRequest& WithImageOsVersionOverride(Aws::String&& value) { SetImageOsVersionOverride(std::move(value)); return *this;}

    /**
     * <p>Specifies the operating system version for the base image.</p>
     */
    inline CreateContainerRecipeRequest& WithImageOsVersionOverride(const char* value) { SetImageOsVersionOverride(value); return *this;}


    /**
     * <p>The base image for the container recipe.</p>
     */
    inline const Aws::String& GetParentImage() const{ return m_parentImage; }

    /**
     * <p>The base image for the container recipe.</p>
     */
    inline bool ParentImageHasBeenSet() const { return m_parentImageHasBeenSet; }

    /**
     * <p>The base image for the container recipe.</p>
     */
    inline void SetParentImage(const Aws::String& value) { m_parentImageHasBeenSet = true; m_parentImage = value; }

    /**
     * <p>The base image for the container recipe.</p>
     */
    inline void SetParentImage(Aws::String&& value) { m_parentImageHasBeenSet = true; m_parentImage = std::move(value); }

    /**
     * <p>The base image for the container recipe.</p>
     */
    inline void SetParentImage(const char* value) { m_parentImageHasBeenSet = true; m_parentImage.assign(value); }

    /**
     * <p>The base image for the container recipe.</p>
     */
    inline CreateContainerRecipeRequest& WithParentImage(const Aws::String& value) { SetParentImage(value); return *this;}

    /**
     * <p>The base image for the container recipe.</p>
     */
    inline CreateContainerRecipeRequest& WithParentImage(Aws::String&& value) { SetParentImage(std::move(value)); return *this;}

    /**
     * <p>The base image for the container recipe.</p>
     */
    inline CreateContainerRecipeRequest& WithParentImage(const char* value) { SetParentImage(value); return *this;}


    /**
     * <p>Tags that are attached to the container recipe.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Tags that are attached to the container recipe.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Tags that are attached to the container recipe.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Tags that are attached to the container recipe.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Tags that are attached to the container recipe.</p>
     */
    inline CreateContainerRecipeRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Tags that are attached to the container recipe.</p>
     */
    inline CreateContainerRecipeRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Tags that are attached to the container recipe.</p>
     */
    inline CreateContainerRecipeRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>Tags that are attached to the container recipe.</p>
     */
    inline CreateContainerRecipeRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags that are attached to the container recipe.</p>
     */
    inline CreateContainerRecipeRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags that are attached to the container recipe.</p>
     */
    inline CreateContainerRecipeRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Tags that are attached to the container recipe.</p>
     */
    inline CreateContainerRecipeRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags that are attached to the container recipe.</p>
     */
    inline CreateContainerRecipeRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags that are attached to the container recipe.</p>
     */
    inline CreateContainerRecipeRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>The working directory for use during build and test workflows.</p>
     */
    inline const Aws::String& GetWorkingDirectory() const{ return m_workingDirectory; }

    /**
     * <p>The working directory for use during build and test workflows.</p>
     */
    inline bool WorkingDirectoryHasBeenSet() const { return m_workingDirectoryHasBeenSet; }

    /**
     * <p>The working directory for use during build and test workflows.</p>
     */
    inline void SetWorkingDirectory(const Aws::String& value) { m_workingDirectoryHasBeenSet = true; m_workingDirectory = value; }

    /**
     * <p>The working directory for use during build and test workflows.</p>
     */
    inline void SetWorkingDirectory(Aws::String&& value) { m_workingDirectoryHasBeenSet = true; m_workingDirectory = std::move(value); }

    /**
     * <p>The working directory for use during build and test workflows.</p>
     */
    inline void SetWorkingDirectory(const char* value) { m_workingDirectoryHasBeenSet = true; m_workingDirectory.assign(value); }

    /**
     * <p>The working directory for use during build and test workflows.</p>
     */
    inline CreateContainerRecipeRequest& WithWorkingDirectory(const Aws::String& value) { SetWorkingDirectory(value); return *this;}

    /**
     * <p>The working directory for use during build and test workflows.</p>
     */
    inline CreateContainerRecipeRequest& WithWorkingDirectory(Aws::String&& value) { SetWorkingDirectory(std::move(value)); return *this;}

    /**
     * <p>The working directory for use during build and test workflows.</p>
     */
    inline CreateContainerRecipeRequest& WithWorkingDirectory(const char* value) { SetWorkingDirectory(value); return *this;}


    /**
     * <p>The destination repository for the container image.</p>
     */
    inline const TargetContainerRepository& GetTargetRepository() const{ return m_targetRepository; }

    /**
     * <p>The destination repository for the container image.</p>
     */
    inline bool TargetRepositoryHasBeenSet() const { return m_targetRepositoryHasBeenSet; }

    /**
     * <p>The destination repository for the container image.</p>
     */
    inline void SetTargetRepository(const TargetContainerRepository& value) { m_targetRepositoryHasBeenSet = true; m_targetRepository = value; }

    /**
     * <p>The destination repository for the container image.</p>
     */
    inline void SetTargetRepository(TargetContainerRepository&& value) { m_targetRepositoryHasBeenSet = true; m_targetRepository = std::move(value); }

    /**
     * <p>The destination repository for the container image.</p>
     */
    inline CreateContainerRecipeRequest& WithTargetRepository(const TargetContainerRepository& value) { SetTargetRepository(value); return *this;}

    /**
     * <p>The destination repository for the container image.</p>
     */
    inline CreateContainerRecipeRequest& WithTargetRepository(TargetContainerRepository&& value) { SetTargetRepository(std::move(value)); return *this;}


    /**
     * <p>Identifies which KMS key is used to encrypt the container image.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>Identifies which KMS key is used to encrypt the container image.</p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>Identifies which KMS key is used to encrypt the container image.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>Identifies which KMS key is used to encrypt the container image.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>Identifies which KMS key is used to encrypt the container image.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>Identifies which KMS key is used to encrypt the container image.</p>
     */
    inline CreateContainerRecipeRequest& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>Identifies which KMS key is used to encrypt the container image.</p>
     */
    inline CreateContainerRecipeRequest& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>Identifies which KMS key is used to encrypt the container image.</p>
     */
    inline CreateContainerRecipeRequest& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>The client token used to make this request idempotent.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>The client token used to make this request idempotent.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>The client token used to make this request idempotent.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>The client token used to make this request idempotent.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>The client token used to make this request idempotent.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>The client token used to make this request idempotent.</p>
     */
    inline CreateContainerRecipeRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>The client token used to make this request idempotent.</p>
     */
    inline CreateContainerRecipeRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>The client token used to make this request idempotent.</p>
     */
    inline CreateContainerRecipeRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}

  private:

    ContainerType m_containerType;
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

    Platform m_platformOverride;
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

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
