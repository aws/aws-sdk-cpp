/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/imagebuilder/model/ImageType.h>
#include <aws/imagebuilder/model/Platform.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/imagebuilder/model/AdditionalInstanceConfiguration.h>
#include <aws/imagebuilder/model/ComponentConfiguration.h>
#include <aws/imagebuilder/model/InstanceBlockDeviceMapping.h>
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
   * <p>An image recipe.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/ImageRecipe">AWS
   * API Reference</a></p>
   */
  class ImageRecipe
  {
  public:
    AWS_IMAGEBUILDER_API ImageRecipe();
    AWS_IMAGEBUILDER_API ImageRecipe(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API ImageRecipe& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the image recipe.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the image recipe.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the image recipe.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the image recipe.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the image recipe.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the image recipe.</p>
     */
    inline ImageRecipe& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the image recipe.</p>
     */
    inline ImageRecipe& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the image recipe.</p>
     */
    inline ImageRecipe& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>Specifies which type of image is created by the recipe - an AMI or a
     * container image.</p>
     */
    inline const ImageType& GetType() const{ return m_type; }

    /**
     * <p>Specifies which type of image is created by the recipe - an AMI or a
     * container image.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>Specifies which type of image is created by the recipe - an AMI or a
     * container image.</p>
     */
    inline void SetType(const ImageType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>Specifies which type of image is created by the recipe - an AMI or a
     * container image.</p>
     */
    inline void SetType(ImageType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>Specifies which type of image is created by the recipe - an AMI or a
     * container image.</p>
     */
    inline ImageRecipe& WithType(const ImageType& value) { SetType(value); return *this;}

    /**
     * <p>Specifies which type of image is created by the recipe - an AMI or a
     * container image.</p>
     */
    inline ImageRecipe& WithType(ImageType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The name of the image recipe.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the image recipe.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the image recipe.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the image recipe.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the image recipe.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the image recipe.</p>
     */
    inline ImageRecipe& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the image recipe.</p>
     */
    inline ImageRecipe& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the image recipe.</p>
     */
    inline ImageRecipe& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The description of the image recipe.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the image recipe.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the image recipe.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the image recipe.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the image recipe.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the image recipe.</p>
     */
    inline ImageRecipe& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the image recipe.</p>
     */
    inline ImageRecipe& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the image recipe.</p>
     */
    inline ImageRecipe& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The platform of the image recipe.</p>
     */
    inline const Platform& GetPlatform() const{ return m_platform; }

    /**
     * <p>The platform of the image recipe.</p>
     */
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }

    /**
     * <p>The platform of the image recipe.</p>
     */
    inline void SetPlatform(const Platform& value) { m_platformHasBeenSet = true; m_platform = value; }

    /**
     * <p>The platform of the image recipe.</p>
     */
    inline void SetPlatform(Platform&& value) { m_platformHasBeenSet = true; m_platform = std::move(value); }

    /**
     * <p>The platform of the image recipe.</p>
     */
    inline ImageRecipe& WithPlatform(const Platform& value) { SetPlatform(value); return *this;}

    /**
     * <p>The platform of the image recipe.</p>
     */
    inline ImageRecipe& WithPlatform(Platform&& value) { SetPlatform(std::move(value)); return *this;}


    /**
     * <p>The owner of the image recipe.</p>
     */
    inline const Aws::String& GetOwner() const{ return m_owner; }

    /**
     * <p>The owner of the image recipe.</p>
     */
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }

    /**
     * <p>The owner of the image recipe.</p>
     */
    inline void SetOwner(const Aws::String& value) { m_ownerHasBeenSet = true; m_owner = value; }

    /**
     * <p>The owner of the image recipe.</p>
     */
    inline void SetOwner(Aws::String&& value) { m_ownerHasBeenSet = true; m_owner = std::move(value); }

    /**
     * <p>The owner of the image recipe.</p>
     */
    inline void SetOwner(const char* value) { m_ownerHasBeenSet = true; m_owner.assign(value); }

    /**
     * <p>The owner of the image recipe.</p>
     */
    inline ImageRecipe& WithOwner(const Aws::String& value) { SetOwner(value); return *this;}

    /**
     * <p>The owner of the image recipe.</p>
     */
    inline ImageRecipe& WithOwner(Aws::String&& value) { SetOwner(std::move(value)); return *this;}

    /**
     * <p>The owner of the image recipe.</p>
     */
    inline ImageRecipe& WithOwner(const char* value) { SetOwner(value); return *this;}


    /**
     * <p>The version of the image recipe.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>The version of the image recipe.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The version of the image recipe.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The version of the image recipe.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>The version of the image recipe.</p>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>The version of the image recipe.</p>
     */
    inline ImageRecipe& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>The version of the image recipe.</p>
     */
    inline ImageRecipe& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the image recipe.</p>
     */
    inline ImageRecipe& WithVersion(const char* value) { SetVersion(value); return *this;}


    /**
     * <p>The components of the image recipe.</p>
     */
    inline const Aws::Vector<ComponentConfiguration>& GetComponents() const{ return m_components; }

    /**
     * <p>The components of the image recipe.</p>
     */
    inline bool ComponentsHasBeenSet() const { return m_componentsHasBeenSet; }

    /**
     * <p>The components of the image recipe.</p>
     */
    inline void SetComponents(const Aws::Vector<ComponentConfiguration>& value) { m_componentsHasBeenSet = true; m_components = value; }

    /**
     * <p>The components of the image recipe.</p>
     */
    inline void SetComponents(Aws::Vector<ComponentConfiguration>&& value) { m_componentsHasBeenSet = true; m_components = std::move(value); }

    /**
     * <p>The components of the image recipe.</p>
     */
    inline ImageRecipe& WithComponents(const Aws::Vector<ComponentConfiguration>& value) { SetComponents(value); return *this;}

    /**
     * <p>The components of the image recipe.</p>
     */
    inline ImageRecipe& WithComponents(Aws::Vector<ComponentConfiguration>&& value) { SetComponents(std::move(value)); return *this;}

    /**
     * <p>The components of the image recipe.</p>
     */
    inline ImageRecipe& AddComponents(const ComponentConfiguration& value) { m_componentsHasBeenSet = true; m_components.push_back(value); return *this; }

    /**
     * <p>The components of the image recipe.</p>
     */
    inline ImageRecipe& AddComponents(ComponentConfiguration&& value) { m_componentsHasBeenSet = true; m_components.push_back(std::move(value)); return *this; }


    /**
     * <p>The base image of the image recipe.</p>
     */
    inline const Aws::String& GetParentImage() const{ return m_parentImage; }

    /**
     * <p>The base image of the image recipe.</p>
     */
    inline bool ParentImageHasBeenSet() const { return m_parentImageHasBeenSet; }

    /**
     * <p>The base image of the image recipe.</p>
     */
    inline void SetParentImage(const Aws::String& value) { m_parentImageHasBeenSet = true; m_parentImage = value; }

    /**
     * <p>The base image of the image recipe.</p>
     */
    inline void SetParentImage(Aws::String&& value) { m_parentImageHasBeenSet = true; m_parentImage = std::move(value); }

    /**
     * <p>The base image of the image recipe.</p>
     */
    inline void SetParentImage(const char* value) { m_parentImageHasBeenSet = true; m_parentImage.assign(value); }

    /**
     * <p>The base image of the image recipe.</p>
     */
    inline ImageRecipe& WithParentImage(const Aws::String& value) { SetParentImage(value); return *this;}

    /**
     * <p>The base image of the image recipe.</p>
     */
    inline ImageRecipe& WithParentImage(Aws::String&& value) { SetParentImage(std::move(value)); return *this;}

    /**
     * <p>The base image of the image recipe.</p>
     */
    inline ImageRecipe& WithParentImage(const char* value) { SetParentImage(value); return *this;}


    /**
     * <p>The block device mappings to apply when creating images from this recipe.</p>
     */
    inline const Aws::Vector<InstanceBlockDeviceMapping>& GetBlockDeviceMappings() const{ return m_blockDeviceMappings; }

    /**
     * <p>The block device mappings to apply when creating images from this recipe.</p>
     */
    inline bool BlockDeviceMappingsHasBeenSet() const { return m_blockDeviceMappingsHasBeenSet; }

    /**
     * <p>The block device mappings to apply when creating images from this recipe.</p>
     */
    inline void SetBlockDeviceMappings(const Aws::Vector<InstanceBlockDeviceMapping>& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings = value; }

    /**
     * <p>The block device mappings to apply when creating images from this recipe.</p>
     */
    inline void SetBlockDeviceMappings(Aws::Vector<InstanceBlockDeviceMapping>&& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings = std::move(value); }

    /**
     * <p>The block device mappings to apply when creating images from this recipe.</p>
     */
    inline ImageRecipe& WithBlockDeviceMappings(const Aws::Vector<InstanceBlockDeviceMapping>& value) { SetBlockDeviceMappings(value); return *this;}

    /**
     * <p>The block device mappings to apply when creating images from this recipe.</p>
     */
    inline ImageRecipe& WithBlockDeviceMappings(Aws::Vector<InstanceBlockDeviceMapping>&& value) { SetBlockDeviceMappings(std::move(value)); return *this;}

    /**
     * <p>The block device mappings to apply when creating images from this recipe.</p>
     */
    inline ImageRecipe& AddBlockDeviceMappings(const InstanceBlockDeviceMapping& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings.push_back(value); return *this; }

    /**
     * <p>The block device mappings to apply when creating images from this recipe.</p>
     */
    inline ImageRecipe& AddBlockDeviceMappings(InstanceBlockDeviceMapping&& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings.push_back(std::move(value)); return *this; }


    /**
     * <p>The date on which this image recipe was created.</p>
     */
    inline const Aws::String& GetDateCreated() const{ return m_dateCreated; }

    /**
     * <p>The date on which this image recipe was created.</p>
     */
    inline bool DateCreatedHasBeenSet() const { return m_dateCreatedHasBeenSet; }

    /**
     * <p>The date on which this image recipe was created.</p>
     */
    inline void SetDateCreated(const Aws::String& value) { m_dateCreatedHasBeenSet = true; m_dateCreated = value; }

    /**
     * <p>The date on which this image recipe was created.</p>
     */
    inline void SetDateCreated(Aws::String&& value) { m_dateCreatedHasBeenSet = true; m_dateCreated = std::move(value); }

    /**
     * <p>The date on which this image recipe was created.</p>
     */
    inline void SetDateCreated(const char* value) { m_dateCreatedHasBeenSet = true; m_dateCreated.assign(value); }

    /**
     * <p>The date on which this image recipe was created.</p>
     */
    inline ImageRecipe& WithDateCreated(const Aws::String& value) { SetDateCreated(value); return *this;}

    /**
     * <p>The date on which this image recipe was created.</p>
     */
    inline ImageRecipe& WithDateCreated(Aws::String&& value) { SetDateCreated(std::move(value)); return *this;}

    /**
     * <p>The date on which this image recipe was created.</p>
     */
    inline ImageRecipe& WithDateCreated(const char* value) { SetDateCreated(value); return *this;}


    /**
     * <p>The tags of the image recipe.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags of the image recipe.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags of the image recipe.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags of the image recipe.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags of the image recipe.</p>
     */
    inline ImageRecipe& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags of the image recipe.</p>
     */
    inline ImageRecipe& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags of the image recipe.</p>
     */
    inline ImageRecipe& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags of the image recipe.</p>
     */
    inline ImageRecipe& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags of the image recipe.</p>
     */
    inline ImageRecipe& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags of the image recipe.</p>
     */
    inline ImageRecipe& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags of the image recipe.</p>
     */
    inline ImageRecipe& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags of the image recipe.</p>
     */
    inline ImageRecipe& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags of the image recipe.</p>
     */
    inline ImageRecipe& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>The working directory to be used during build and test workflows.</p>
     */
    inline const Aws::String& GetWorkingDirectory() const{ return m_workingDirectory; }

    /**
     * <p>The working directory to be used during build and test workflows.</p>
     */
    inline bool WorkingDirectoryHasBeenSet() const { return m_workingDirectoryHasBeenSet; }

    /**
     * <p>The working directory to be used during build and test workflows.</p>
     */
    inline void SetWorkingDirectory(const Aws::String& value) { m_workingDirectoryHasBeenSet = true; m_workingDirectory = value; }

    /**
     * <p>The working directory to be used during build and test workflows.</p>
     */
    inline void SetWorkingDirectory(Aws::String&& value) { m_workingDirectoryHasBeenSet = true; m_workingDirectory = std::move(value); }

    /**
     * <p>The working directory to be used during build and test workflows.</p>
     */
    inline void SetWorkingDirectory(const char* value) { m_workingDirectoryHasBeenSet = true; m_workingDirectory.assign(value); }

    /**
     * <p>The working directory to be used during build and test workflows.</p>
     */
    inline ImageRecipe& WithWorkingDirectory(const Aws::String& value) { SetWorkingDirectory(value); return *this;}

    /**
     * <p>The working directory to be used during build and test workflows.</p>
     */
    inline ImageRecipe& WithWorkingDirectory(Aws::String&& value) { SetWorkingDirectory(std::move(value)); return *this;}

    /**
     * <p>The working directory to be used during build and test workflows.</p>
     */
    inline ImageRecipe& WithWorkingDirectory(const char* value) { SetWorkingDirectory(value); return *this;}


    /**
     * <p>Before you create a new AMI, Image Builder launches temporary Amazon EC2
     * instances to build and test your image configuration. Instance configuration
     * adds a layer of control over those instances. You can define settings and add
     * scripts to run when an instance is launched from your AMI.</p>
     */
    inline const AdditionalInstanceConfiguration& GetAdditionalInstanceConfiguration() const{ return m_additionalInstanceConfiguration; }

    /**
     * <p>Before you create a new AMI, Image Builder launches temporary Amazon EC2
     * instances to build and test your image configuration. Instance configuration
     * adds a layer of control over those instances. You can define settings and add
     * scripts to run when an instance is launched from your AMI.</p>
     */
    inline bool AdditionalInstanceConfigurationHasBeenSet() const { return m_additionalInstanceConfigurationHasBeenSet; }

    /**
     * <p>Before you create a new AMI, Image Builder launches temporary Amazon EC2
     * instances to build and test your image configuration. Instance configuration
     * adds a layer of control over those instances. You can define settings and add
     * scripts to run when an instance is launched from your AMI.</p>
     */
    inline void SetAdditionalInstanceConfiguration(const AdditionalInstanceConfiguration& value) { m_additionalInstanceConfigurationHasBeenSet = true; m_additionalInstanceConfiguration = value; }

    /**
     * <p>Before you create a new AMI, Image Builder launches temporary Amazon EC2
     * instances to build and test your image configuration. Instance configuration
     * adds a layer of control over those instances. You can define settings and add
     * scripts to run when an instance is launched from your AMI.</p>
     */
    inline void SetAdditionalInstanceConfiguration(AdditionalInstanceConfiguration&& value) { m_additionalInstanceConfigurationHasBeenSet = true; m_additionalInstanceConfiguration = std::move(value); }

    /**
     * <p>Before you create a new AMI, Image Builder launches temporary Amazon EC2
     * instances to build and test your image configuration. Instance configuration
     * adds a layer of control over those instances. You can define settings and add
     * scripts to run when an instance is launched from your AMI.</p>
     */
    inline ImageRecipe& WithAdditionalInstanceConfiguration(const AdditionalInstanceConfiguration& value) { SetAdditionalInstanceConfiguration(value); return *this;}

    /**
     * <p>Before you create a new AMI, Image Builder launches temporary Amazon EC2
     * instances to build and test your image configuration. Instance configuration
     * adds a layer of control over those instances. You can define settings and add
     * scripts to run when an instance is launched from your AMI.</p>
     */
    inline ImageRecipe& WithAdditionalInstanceConfiguration(AdditionalInstanceConfiguration&& value) { SetAdditionalInstanceConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    ImageType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Platform m_platform;
    bool m_platformHasBeenSet = false;

    Aws::String m_owner;
    bool m_ownerHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

    Aws::Vector<ComponentConfiguration> m_components;
    bool m_componentsHasBeenSet = false;

    Aws::String m_parentImage;
    bool m_parentImageHasBeenSet = false;

    Aws::Vector<InstanceBlockDeviceMapping> m_blockDeviceMappings;
    bool m_blockDeviceMappingsHasBeenSet = false;

    Aws::String m_dateCreated;
    bool m_dateCreatedHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_workingDirectory;
    bool m_workingDirectoryHasBeenSet = false;

    AdditionalInstanceConfiguration m_additionalInstanceConfiguration;
    bool m_additionalInstanceConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
