/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/imagebuilder/model/ContainerType.h>
#include <aws/imagebuilder/model/Platform.h>
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
   * <p>A summary of a container recipe</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/ContainerRecipeSummary">AWS
   * API Reference</a></p>
   */
  class ContainerRecipeSummary
  {
  public:
    AWS_IMAGEBUILDER_API ContainerRecipeSummary();
    AWS_IMAGEBUILDER_API ContainerRecipeSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API ContainerRecipeSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the container recipe.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the container recipe.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the container recipe.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the container recipe.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the container recipe.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the container recipe.</p>
     */
    inline ContainerRecipeSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the container recipe.</p>
     */
    inline ContainerRecipeSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the container recipe.</p>
     */
    inline ContainerRecipeSummary& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>Specifies the type of container, such as "Docker".</p>
     */
    inline const ContainerType& GetContainerType() const{ return m_containerType; }

    /**
     * <p>Specifies the type of container, such as "Docker".</p>
     */
    inline bool ContainerTypeHasBeenSet() const { return m_containerTypeHasBeenSet; }

    /**
     * <p>Specifies the type of container, such as "Docker".</p>
     */
    inline void SetContainerType(const ContainerType& value) { m_containerTypeHasBeenSet = true; m_containerType = value; }

    /**
     * <p>Specifies the type of container, such as "Docker".</p>
     */
    inline void SetContainerType(ContainerType&& value) { m_containerTypeHasBeenSet = true; m_containerType = std::move(value); }

    /**
     * <p>Specifies the type of container, such as "Docker".</p>
     */
    inline ContainerRecipeSummary& WithContainerType(const ContainerType& value) { SetContainerType(value); return *this;}

    /**
     * <p>Specifies the type of container, such as "Docker".</p>
     */
    inline ContainerRecipeSummary& WithContainerType(ContainerType&& value) { SetContainerType(std::move(value)); return *this;}


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
    inline ContainerRecipeSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the container recipe.</p>
     */
    inline ContainerRecipeSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the container recipe.</p>
     */
    inline ContainerRecipeSummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The system platform for the container, such as Windows or Linux.</p>
     */
    inline const Platform& GetPlatform() const{ return m_platform; }

    /**
     * <p>The system platform for the container, such as Windows or Linux.</p>
     */
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }

    /**
     * <p>The system platform for the container, such as Windows or Linux.</p>
     */
    inline void SetPlatform(const Platform& value) { m_platformHasBeenSet = true; m_platform = value; }

    /**
     * <p>The system platform for the container, such as Windows or Linux.</p>
     */
    inline void SetPlatform(Platform&& value) { m_platformHasBeenSet = true; m_platform = std::move(value); }

    /**
     * <p>The system platform for the container, such as Windows or Linux.</p>
     */
    inline ContainerRecipeSummary& WithPlatform(const Platform& value) { SetPlatform(value); return *this;}

    /**
     * <p>The system platform for the container, such as Windows or Linux.</p>
     */
    inline ContainerRecipeSummary& WithPlatform(Platform&& value) { SetPlatform(std::move(value)); return *this;}


    /**
     * <p>The owner of the container recipe.</p>
     */
    inline const Aws::String& GetOwner() const{ return m_owner; }

    /**
     * <p>The owner of the container recipe.</p>
     */
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }

    /**
     * <p>The owner of the container recipe.</p>
     */
    inline void SetOwner(const Aws::String& value) { m_ownerHasBeenSet = true; m_owner = value; }

    /**
     * <p>The owner of the container recipe.</p>
     */
    inline void SetOwner(Aws::String&& value) { m_ownerHasBeenSet = true; m_owner = std::move(value); }

    /**
     * <p>The owner of the container recipe.</p>
     */
    inline void SetOwner(const char* value) { m_ownerHasBeenSet = true; m_owner.assign(value); }

    /**
     * <p>The owner of the container recipe.</p>
     */
    inline ContainerRecipeSummary& WithOwner(const Aws::String& value) { SetOwner(value); return *this;}

    /**
     * <p>The owner of the container recipe.</p>
     */
    inline ContainerRecipeSummary& WithOwner(Aws::String&& value) { SetOwner(std::move(value)); return *this;}

    /**
     * <p>The owner of the container recipe.</p>
     */
    inline ContainerRecipeSummary& WithOwner(const char* value) { SetOwner(value); return *this;}


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
    inline ContainerRecipeSummary& WithParentImage(const Aws::String& value) { SetParentImage(value); return *this;}

    /**
     * <p>The base image for the container recipe.</p>
     */
    inline ContainerRecipeSummary& WithParentImage(Aws::String&& value) { SetParentImage(std::move(value)); return *this;}

    /**
     * <p>The base image for the container recipe.</p>
     */
    inline ContainerRecipeSummary& WithParentImage(const char* value) { SetParentImage(value); return *this;}


    /**
     * <p>The date when this container recipe was created.</p>
     */
    inline const Aws::String& GetDateCreated() const{ return m_dateCreated; }

    /**
     * <p>The date when this container recipe was created.</p>
     */
    inline bool DateCreatedHasBeenSet() const { return m_dateCreatedHasBeenSet; }

    /**
     * <p>The date when this container recipe was created.</p>
     */
    inline void SetDateCreated(const Aws::String& value) { m_dateCreatedHasBeenSet = true; m_dateCreated = value; }

    /**
     * <p>The date when this container recipe was created.</p>
     */
    inline void SetDateCreated(Aws::String&& value) { m_dateCreatedHasBeenSet = true; m_dateCreated = std::move(value); }

    /**
     * <p>The date when this container recipe was created.</p>
     */
    inline void SetDateCreated(const char* value) { m_dateCreatedHasBeenSet = true; m_dateCreated.assign(value); }

    /**
     * <p>The date when this container recipe was created.</p>
     */
    inline ContainerRecipeSummary& WithDateCreated(const Aws::String& value) { SetDateCreated(value); return *this;}

    /**
     * <p>The date when this container recipe was created.</p>
     */
    inline ContainerRecipeSummary& WithDateCreated(Aws::String&& value) { SetDateCreated(std::move(value)); return *this;}

    /**
     * <p>The date when this container recipe was created.</p>
     */
    inline ContainerRecipeSummary& WithDateCreated(const char* value) { SetDateCreated(value); return *this;}


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
    inline ContainerRecipeSummary& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Tags that are attached to the container recipe.</p>
     */
    inline ContainerRecipeSummary& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Tags that are attached to the container recipe.</p>
     */
    inline ContainerRecipeSummary& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>Tags that are attached to the container recipe.</p>
     */
    inline ContainerRecipeSummary& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags that are attached to the container recipe.</p>
     */
    inline ContainerRecipeSummary& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags that are attached to the container recipe.</p>
     */
    inline ContainerRecipeSummary& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Tags that are attached to the container recipe.</p>
     */
    inline ContainerRecipeSummary& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags that are attached to the container recipe.</p>
     */
    inline ContainerRecipeSummary& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags that are attached to the container recipe.</p>
     */
    inline ContainerRecipeSummary& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    ContainerType m_containerType;
    bool m_containerTypeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Platform m_platform;
    bool m_platformHasBeenSet = false;

    Aws::String m_owner;
    bool m_ownerHasBeenSet = false;

    Aws::String m_parentImage;
    bool m_parentImageHasBeenSet = false;

    Aws::String m_dateCreated;
    bool m_dateCreatedHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
