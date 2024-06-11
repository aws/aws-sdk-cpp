/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/imagebuilder/model/Platform.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/imagebuilder/model/ComponentState.h>
#include <aws/imagebuilder/model/ComponentType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
   * <p>A high-level summary of a component.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/ComponentSummary">AWS
   * API Reference</a></p>
   */
  class ComponentSummary
  {
  public:
    AWS_IMAGEBUILDER_API ComponentSummary();
    AWS_IMAGEBUILDER_API ComponentSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API ComponentSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the component.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline ComponentSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline ComponentSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline ComponentSummary& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the component.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ComponentSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ComponentSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ComponentSummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the component.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }
    inline ComponentSummary& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}
    inline ComponentSummary& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}
    inline ComponentSummary& WithVersion(const char* value) { SetVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operating system platform of the component.</p>
     */
    inline const Platform& GetPlatform() const{ return m_platform; }
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }
    inline void SetPlatform(const Platform& value) { m_platformHasBeenSet = true; m_platform = value; }
    inline void SetPlatform(Platform&& value) { m_platformHasBeenSet = true; m_platform = std::move(value); }
    inline ComponentSummary& WithPlatform(const Platform& value) { SetPlatform(value); return *this;}
    inline ComponentSummary& WithPlatform(Platform&& value) { SetPlatform(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operating system (OS) version that the component supports. If the OS
     * information is available, Image Builder performs a prefix match against the base
     * image OS version during image recipe creation.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSupportedOsVersions() const{ return m_supportedOsVersions; }
    inline bool SupportedOsVersionsHasBeenSet() const { return m_supportedOsVersionsHasBeenSet; }
    inline void SetSupportedOsVersions(const Aws::Vector<Aws::String>& value) { m_supportedOsVersionsHasBeenSet = true; m_supportedOsVersions = value; }
    inline void SetSupportedOsVersions(Aws::Vector<Aws::String>&& value) { m_supportedOsVersionsHasBeenSet = true; m_supportedOsVersions = std::move(value); }
    inline ComponentSummary& WithSupportedOsVersions(const Aws::Vector<Aws::String>& value) { SetSupportedOsVersions(value); return *this;}
    inline ComponentSummary& WithSupportedOsVersions(Aws::Vector<Aws::String>&& value) { SetSupportedOsVersions(std::move(value)); return *this;}
    inline ComponentSummary& AddSupportedOsVersions(const Aws::String& value) { m_supportedOsVersionsHasBeenSet = true; m_supportedOsVersions.push_back(value); return *this; }
    inline ComponentSummary& AddSupportedOsVersions(Aws::String&& value) { m_supportedOsVersionsHasBeenSet = true; m_supportedOsVersions.push_back(std::move(value)); return *this; }
    inline ComponentSummary& AddSupportedOsVersions(const char* value) { m_supportedOsVersionsHasBeenSet = true; m_supportedOsVersions.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Describes the current status of the component.</p>
     */
    inline const ComponentState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const ComponentState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(ComponentState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline ComponentSummary& WithState(const ComponentState& value) { SetState(value); return *this;}
    inline ComponentSummary& WithState(ComponentState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The component type specifies whether Image Builder uses the component to
     * build the image or only to test it.</p>
     */
    inline const ComponentType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const ComponentType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(ComponentType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline ComponentSummary& WithType(const ComponentType& value) { SetType(value); return *this;}
    inline ComponentSummary& WithType(ComponentType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The owner of the component.</p>
     */
    inline const Aws::String& GetOwner() const{ return m_owner; }
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }
    inline void SetOwner(const Aws::String& value) { m_ownerHasBeenSet = true; m_owner = value; }
    inline void SetOwner(Aws::String&& value) { m_ownerHasBeenSet = true; m_owner = std::move(value); }
    inline void SetOwner(const char* value) { m_ownerHasBeenSet = true; m_owner.assign(value); }
    inline ComponentSummary& WithOwner(const Aws::String& value) { SetOwner(value); return *this;}
    inline ComponentSummary& WithOwner(Aws::String&& value) { SetOwner(std::move(value)); return *this;}
    inline ComponentSummary& WithOwner(const char* value) { SetOwner(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the component.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline ComponentSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline ComponentSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline ComponentSummary& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The change description for the current version of the component.</p>
     */
    inline const Aws::String& GetChangeDescription() const{ return m_changeDescription; }
    inline bool ChangeDescriptionHasBeenSet() const { return m_changeDescriptionHasBeenSet; }
    inline void SetChangeDescription(const Aws::String& value) { m_changeDescriptionHasBeenSet = true; m_changeDescription = value; }
    inline void SetChangeDescription(Aws::String&& value) { m_changeDescriptionHasBeenSet = true; m_changeDescription = std::move(value); }
    inline void SetChangeDescription(const char* value) { m_changeDescriptionHasBeenSet = true; m_changeDescription.assign(value); }
    inline ComponentSummary& WithChangeDescription(const Aws::String& value) { SetChangeDescription(value); return *this;}
    inline ComponentSummary& WithChangeDescription(Aws::String&& value) { SetChangeDescription(std::move(value)); return *this;}
    inline ComponentSummary& WithChangeDescription(const char* value) { SetChangeDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The original creation date of the component.</p>
     */
    inline const Aws::String& GetDateCreated() const{ return m_dateCreated; }
    inline bool DateCreatedHasBeenSet() const { return m_dateCreatedHasBeenSet; }
    inline void SetDateCreated(const Aws::String& value) { m_dateCreatedHasBeenSet = true; m_dateCreated = value; }
    inline void SetDateCreated(Aws::String&& value) { m_dateCreatedHasBeenSet = true; m_dateCreated = std::move(value); }
    inline void SetDateCreated(const char* value) { m_dateCreatedHasBeenSet = true; m_dateCreated.assign(value); }
    inline ComponentSummary& WithDateCreated(const Aws::String& value) { SetDateCreated(value); return *this;}
    inline ComponentSummary& WithDateCreated(Aws::String&& value) { SetDateCreated(std::move(value)); return *this;}
    inline ComponentSummary& WithDateCreated(const char* value) { SetDateCreated(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags that apply to the component.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline ComponentSummary& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline ComponentSummary& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline ComponentSummary& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline ComponentSummary& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline ComponentSummary& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline ComponentSummary& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline ComponentSummary& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline ComponentSummary& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline ComponentSummary& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Contains the name of the publisher if this is a third-party component.
     * Otherwise, this property is empty.</p>
     */
    inline const Aws::String& GetPublisher() const{ return m_publisher; }
    inline bool PublisherHasBeenSet() const { return m_publisherHasBeenSet; }
    inline void SetPublisher(const Aws::String& value) { m_publisherHasBeenSet = true; m_publisher = value; }
    inline void SetPublisher(Aws::String&& value) { m_publisherHasBeenSet = true; m_publisher = std::move(value); }
    inline void SetPublisher(const char* value) { m_publisherHasBeenSet = true; m_publisher.assign(value); }
    inline ComponentSummary& WithPublisher(const Aws::String& value) { SetPublisher(value); return *this;}
    inline ComponentSummary& WithPublisher(Aws::String&& value) { SetPublisher(std::move(value)); return *this;}
    inline ComponentSummary& WithPublisher(const char* value) { SetPublisher(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether component source is hidden from view in the console, and
     * from component detail results for API, CLI, or SDK operations.</p>
     */
    inline bool GetObfuscate() const{ return m_obfuscate; }
    inline bool ObfuscateHasBeenSet() const { return m_obfuscateHasBeenSet; }
    inline void SetObfuscate(bool value) { m_obfuscateHasBeenSet = true; m_obfuscate = value; }
    inline ComponentSummary& WithObfuscate(bool value) { SetObfuscate(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

    Platform m_platform;
    bool m_platformHasBeenSet = false;

    Aws::Vector<Aws::String> m_supportedOsVersions;
    bool m_supportedOsVersionsHasBeenSet = false;

    ComponentState m_state;
    bool m_stateHasBeenSet = false;

    ComponentType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_owner;
    bool m_ownerHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_changeDescription;
    bool m_changeDescriptionHasBeenSet = false;

    Aws::String m_dateCreated;
    bool m_dateCreatedHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_publisher;
    bool m_publisherHasBeenSet = false;

    bool m_obfuscate;
    bool m_obfuscateHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
