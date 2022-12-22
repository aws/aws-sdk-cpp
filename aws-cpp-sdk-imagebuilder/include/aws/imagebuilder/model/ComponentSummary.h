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


    /**
     * <p>The Amazon Resource Name (ARN) of the component.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the component.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the component.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the component.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the component.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the component.</p>
     */
    inline ComponentSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the component.</p>
     */
    inline ComponentSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the component.</p>
     */
    inline ComponentSummary& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The name of the component.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the component.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the component.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the component.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the component.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the component.</p>
     */
    inline ComponentSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the component.</p>
     */
    inline ComponentSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the component.</p>
     */
    inline ComponentSummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The version of the component.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>The version of the component.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The version of the component.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The version of the component.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>The version of the component.</p>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>The version of the component.</p>
     */
    inline ComponentSummary& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>The version of the component.</p>
     */
    inline ComponentSummary& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the component.</p>
     */
    inline ComponentSummary& WithVersion(const char* value) { SetVersion(value); return *this;}


    /**
     * <p>The platform of the component.</p>
     */
    inline const Platform& GetPlatform() const{ return m_platform; }

    /**
     * <p>The platform of the component.</p>
     */
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }

    /**
     * <p>The platform of the component.</p>
     */
    inline void SetPlatform(const Platform& value) { m_platformHasBeenSet = true; m_platform = value; }

    /**
     * <p>The platform of the component.</p>
     */
    inline void SetPlatform(Platform&& value) { m_platformHasBeenSet = true; m_platform = std::move(value); }

    /**
     * <p>The platform of the component.</p>
     */
    inline ComponentSummary& WithPlatform(const Platform& value) { SetPlatform(value); return *this;}

    /**
     * <p>The platform of the component.</p>
     */
    inline ComponentSummary& WithPlatform(Platform&& value) { SetPlatform(std::move(value)); return *this;}


    /**
     * <p>The operating system (OS) version supported by the component. If the OS
     * information is available, a prefix match is performed against the base image OS
     * version during image recipe creation.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSupportedOsVersions() const{ return m_supportedOsVersions; }

    /**
     * <p>The operating system (OS) version supported by the component. If the OS
     * information is available, a prefix match is performed against the base image OS
     * version during image recipe creation.</p>
     */
    inline bool SupportedOsVersionsHasBeenSet() const { return m_supportedOsVersionsHasBeenSet; }

    /**
     * <p>The operating system (OS) version supported by the component. If the OS
     * information is available, a prefix match is performed against the base image OS
     * version during image recipe creation.</p>
     */
    inline void SetSupportedOsVersions(const Aws::Vector<Aws::String>& value) { m_supportedOsVersionsHasBeenSet = true; m_supportedOsVersions = value; }

    /**
     * <p>The operating system (OS) version supported by the component. If the OS
     * information is available, a prefix match is performed against the base image OS
     * version during image recipe creation.</p>
     */
    inline void SetSupportedOsVersions(Aws::Vector<Aws::String>&& value) { m_supportedOsVersionsHasBeenSet = true; m_supportedOsVersions = std::move(value); }

    /**
     * <p>The operating system (OS) version supported by the component. If the OS
     * information is available, a prefix match is performed against the base image OS
     * version during image recipe creation.</p>
     */
    inline ComponentSummary& WithSupportedOsVersions(const Aws::Vector<Aws::String>& value) { SetSupportedOsVersions(value); return *this;}

    /**
     * <p>The operating system (OS) version supported by the component. If the OS
     * information is available, a prefix match is performed against the base image OS
     * version during image recipe creation.</p>
     */
    inline ComponentSummary& WithSupportedOsVersions(Aws::Vector<Aws::String>&& value) { SetSupportedOsVersions(std::move(value)); return *this;}

    /**
     * <p>The operating system (OS) version supported by the component. If the OS
     * information is available, a prefix match is performed against the base image OS
     * version during image recipe creation.</p>
     */
    inline ComponentSummary& AddSupportedOsVersions(const Aws::String& value) { m_supportedOsVersionsHasBeenSet = true; m_supportedOsVersions.push_back(value); return *this; }

    /**
     * <p>The operating system (OS) version supported by the component. If the OS
     * information is available, a prefix match is performed against the base image OS
     * version during image recipe creation.</p>
     */
    inline ComponentSummary& AddSupportedOsVersions(Aws::String&& value) { m_supportedOsVersionsHasBeenSet = true; m_supportedOsVersions.push_back(std::move(value)); return *this; }

    /**
     * <p>The operating system (OS) version supported by the component. If the OS
     * information is available, a prefix match is performed against the base image OS
     * version during image recipe creation.</p>
     */
    inline ComponentSummary& AddSupportedOsVersions(const char* value) { m_supportedOsVersionsHasBeenSet = true; m_supportedOsVersions.push_back(value); return *this; }


    /**
     * <p>Describes the current status of the component.</p>
     */
    inline const ComponentState& GetState() const{ return m_state; }

    /**
     * <p>Describes the current status of the component.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>Describes the current status of the component.</p>
     */
    inline void SetState(const ComponentState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>Describes the current status of the component.</p>
     */
    inline void SetState(ComponentState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>Describes the current status of the component.</p>
     */
    inline ComponentSummary& WithState(const ComponentState& value) { SetState(value); return *this;}

    /**
     * <p>Describes the current status of the component.</p>
     */
    inline ComponentSummary& WithState(ComponentState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The type of the component denotes whether the component is used to build the
     * image or only to test it.</p>
     */
    inline const ComponentType& GetType() const{ return m_type; }

    /**
     * <p>The type of the component denotes whether the component is used to build the
     * image or only to test it.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of the component denotes whether the component is used to build the
     * image or only to test it.</p>
     */
    inline void SetType(const ComponentType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the component denotes whether the component is used to build the
     * image or only to test it.</p>
     */
    inline void SetType(ComponentType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of the component denotes whether the component is used to build the
     * image or only to test it.</p>
     */
    inline ComponentSummary& WithType(const ComponentType& value) { SetType(value); return *this;}

    /**
     * <p>The type of the component denotes whether the component is used to build the
     * image or only to test it.</p>
     */
    inline ComponentSummary& WithType(ComponentType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The owner of the component.</p>
     */
    inline const Aws::String& GetOwner() const{ return m_owner; }

    /**
     * <p>The owner of the component.</p>
     */
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }

    /**
     * <p>The owner of the component.</p>
     */
    inline void SetOwner(const Aws::String& value) { m_ownerHasBeenSet = true; m_owner = value; }

    /**
     * <p>The owner of the component.</p>
     */
    inline void SetOwner(Aws::String&& value) { m_ownerHasBeenSet = true; m_owner = std::move(value); }

    /**
     * <p>The owner of the component.</p>
     */
    inline void SetOwner(const char* value) { m_ownerHasBeenSet = true; m_owner.assign(value); }

    /**
     * <p>The owner of the component.</p>
     */
    inline ComponentSummary& WithOwner(const Aws::String& value) { SetOwner(value); return *this;}

    /**
     * <p>The owner of the component.</p>
     */
    inline ComponentSummary& WithOwner(Aws::String&& value) { SetOwner(std::move(value)); return *this;}

    /**
     * <p>The owner of the component.</p>
     */
    inline ComponentSummary& WithOwner(const char* value) { SetOwner(value); return *this;}


    /**
     * <p>The description of the component.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the component.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the component.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the component.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the component.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the component.</p>
     */
    inline ComponentSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the component.</p>
     */
    inline ComponentSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the component.</p>
     */
    inline ComponentSummary& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The change description of the component.</p>
     */
    inline const Aws::String& GetChangeDescription() const{ return m_changeDescription; }

    /**
     * <p>The change description of the component.</p>
     */
    inline bool ChangeDescriptionHasBeenSet() const { return m_changeDescriptionHasBeenSet; }

    /**
     * <p>The change description of the component.</p>
     */
    inline void SetChangeDescription(const Aws::String& value) { m_changeDescriptionHasBeenSet = true; m_changeDescription = value; }

    /**
     * <p>The change description of the component.</p>
     */
    inline void SetChangeDescription(Aws::String&& value) { m_changeDescriptionHasBeenSet = true; m_changeDescription = std::move(value); }

    /**
     * <p>The change description of the component.</p>
     */
    inline void SetChangeDescription(const char* value) { m_changeDescriptionHasBeenSet = true; m_changeDescription.assign(value); }

    /**
     * <p>The change description of the component.</p>
     */
    inline ComponentSummary& WithChangeDescription(const Aws::String& value) { SetChangeDescription(value); return *this;}

    /**
     * <p>The change description of the component.</p>
     */
    inline ComponentSummary& WithChangeDescription(Aws::String&& value) { SetChangeDescription(std::move(value)); return *this;}

    /**
     * <p>The change description of the component.</p>
     */
    inline ComponentSummary& WithChangeDescription(const char* value) { SetChangeDescription(value); return *this;}


    /**
     * <p>The date that the component was created.</p>
     */
    inline const Aws::String& GetDateCreated() const{ return m_dateCreated; }

    /**
     * <p>The date that the component was created.</p>
     */
    inline bool DateCreatedHasBeenSet() const { return m_dateCreatedHasBeenSet; }

    /**
     * <p>The date that the component was created.</p>
     */
    inline void SetDateCreated(const Aws::String& value) { m_dateCreatedHasBeenSet = true; m_dateCreated = value; }

    /**
     * <p>The date that the component was created.</p>
     */
    inline void SetDateCreated(Aws::String&& value) { m_dateCreatedHasBeenSet = true; m_dateCreated = std::move(value); }

    /**
     * <p>The date that the component was created.</p>
     */
    inline void SetDateCreated(const char* value) { m_dateCreatedHasBeenSet = true; m_dateCreated.assign(value); }

    /**
     * <p>The date that the component was created.</p>
     */
    inline ComponentSummary& WithDateCreated(const Aws::String& value) { SetDateCreated(value); return *this;}

    /**
     * <p>The date that the component was created.</p>
     */
    inline ComponentSummary& WithDateCreated(Aws::String&& value) { SetDateCreated(std::move(value)); return *this;}

    /**
     * <p>The date that the component was created.</p>
     */
    inline ComponentSummary& WithDateCreated(const char* value) { SetDateCreated(value); return *this;}


    /**
     * <p>The tags associated with the component.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags associated with the component.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags associated with the component.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags associated with the component.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags associated with the component.</p>
     */
    inline ComponentSummary& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags associated with the component.</p>
     */
    inline ComponentSummary& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags associated with the component.</p>
     */
    inline ComponentSummary& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags associated with the component.</p>
     */
    inline ComponentSummary& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags associated with the component.</p>
     */
    inline ComponentSummary& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags associated with the component.</p>
     */
    inline ComponentSummary& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags associated with the component.</p>
     */
    inline ComponentSummary& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags associated with the component.</p>
     */
    inline ComponentSummary& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags associated with the component.</p>
     */
    inline ComponentSummary& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

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
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
