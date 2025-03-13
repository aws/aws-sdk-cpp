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
    AWS_IMAGEBUILDER_API ComponentSummary() = default;
    AWS_IMAGEBUILDER_API ComponentSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API ComponentSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the component.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    ComponentSummary& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the component.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ComponentSummary& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the component.</p>
     */
    inline const Aws::String& GetVersion() const { return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    template<typename VersionT = Aws::String>
    void SetVersion(VersionT&& value) { m_versionHasBeenSet = true; m_version = std::forward<VersionT>(value); }
    template<typename VersionT = Aws::String>
    ComponentSummary& WithVersion(VersionT&& value) { SetVersion(std::forward<VersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operating system platform of the component.</p>
     */
    inline Platform GetPlatform() const { return m_platform; }
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }
    inline void SetPlatform(Platform value) { m_platformHasBeenSet = true; m_platform = value; }
    inline ComponentSummary& WithPlatform(Platform value) { SetPlatform(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operating system (OS) version that the component supports. If the OS
     * information is available, Image Builder performs a prefix match against the base
     * image OS version during image recipe creation.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSupportedOsVersions() const { return m_supportedOsVersions; }
    inline bool SupportedOsVersionsHasBeenSet() const { return m_supportedOsVersionsHasBeenSet; }
    template<typename SupportedOsVersionsT = Aws::Vector<Aws::String>>
    void SetSupportedOsVersions(SupportedOsVersionsT&& value) { m_supportedOsVersionsHasBeenSet = true; m_supportedOsVersions = std::forward<SupportedOsVersionsT>(value); }
    template<typename SupportedOsVersionsT = Aws::Vector<Aws::String>>
    ComponentSummary& WithSupportedOsVersions(SupportedOsVersionsT&& value) { SetSupportedOsVersions(std::forward<SupportedOsVersionsT>(value)); return *this;}
    template<typename SupportedOsVersionsT = Aws::String>
    ComponentSummary& AddSupportedOsVersions(SupportedOsVersionsT&& value) { m_supportedOsVersionsHasBeenSet = true; m_supportedOsVersions.emplace_back(std::forward<SupportedOsVersionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Describes the current status of the component.</p>
     */
    inline const ComponentState& GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    template<typename StateT = ComponentState>
    void SetState(StateT&& value) { m_stateHasBeenSet = true; m_state = std::forward<StateT>(value); }
    template<typename StateT = ComponentState>
    ComponentSummary& WithState(StateT&& value) { SetState(std::forward<StateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The component type specifies whether Image Builder uses the component to
     * build the image or only to test it.</p>
     */
    inline ComponentType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(ComponentType value) { m_typeHasBeenSet = true; m_type = value; }
    inline ComponentSummary& WithType(ComponentType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The owner of the component.</p>
     */
    inline const Aws::String& GetOwner() const { return m_owner; }
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }
    template<typename OwnerT = Aws::String>
    void SetOwner(OwnerT&& value) { m_ownerHasBeenSet = true; m_owner = std::forward<OwnerT>(value); }
    template<typename OwnerT = Aws::String>
    ComponentSummary& WithOwner(OwnerT&& value) { SetOwner(std::forward<OwnerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the component.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    ComponentSummary& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The change description for the current version of the component.</p>
     */
    inline const Aws::String& GetChangeDescription() const { return m_changeDescription; }
    inline bool ChangeDescriptionHasBeenSet() const { return m_changeDescriptionHasBeenSet; }
    template<typename ChangeDescriptionT = Aws::String>
    void SetChangeDescription(ChangeDescriptionT&& value) { m_changeDescriptionHasBeenSet = true; m_changeDescription = std::forward<ChangeDescriptionT>(value); }
    template<typename ChangeDescriptionT = Aws::String>
    ComponentSummary& WithChangeDescription(ChangeDescriptionT&& value) { SetChangeDescription(std::forward<ChangeDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The original creation date of the component.</p>
     */
    inline const Aws::String& GetDateCreated() const { return m_dateCreated; }
    inline bool DateCreatedHasBeenSet() const { return m_dateCreatedHasBeenSet; }
    template<typename DateCreatedT = Aws::String>
    void SetDateCreated(DateCreatedT&& value) { m_dateCreatedHasBeenSet = true; m_dateCreated = std::forward<DateCreatedT>(value); }
    template<typename DateCreatedT = Aws::String>
    ComponentSummary& WithDateCreated(DateCreatedT&& value) { SetDateCreated(std::forward<DateCreatedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags that apply to the component.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    ComponentSummary& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    ComponentSummary& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Contains the name of the publisher if this is a third-party component.
     * Otherwise, this property is empty.</p>
     */
    inline const Aws::String& GetPublisher() const { return m_publisher; }
    inline bool PublisherHasBeenSet() const { return m_publisherHasBeenSet; }
    template<typename PublisherT = Aws::String>
    void SetPublisher(PublisherT&& value) { m_publisherHasBeenSet = true; m_publisher = std::forward<PublisherT>(value); }
    template<typename PublisherT = Aws::String>
    ComponentSummary& WithPublisher(PublisherT&& value) { SetPublisher(std::forward<PublisherT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether component source is hidden from view in the console, and
     * from component detail results for API, CLI, or SDK operations.</p>
     */
    inline bool GetObfuscate() const { return m_obfuscate; }
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

    Platform m_platform{Platform::NOT_SET};
    bool m_platformHasBeenSet = false;

    Aws::Vector<Aws::String> m_supportedOsVersions;
    bool m_supportedOsVersionsHasBeenSet = false;

    ComponentState m_state;
    bool m_stateHasBeenSet = false;

    ComponentType m_type{ComponentType::NOT_SET};
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

    bool m_obfuscate{false};
    bool m_obfuscateHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
