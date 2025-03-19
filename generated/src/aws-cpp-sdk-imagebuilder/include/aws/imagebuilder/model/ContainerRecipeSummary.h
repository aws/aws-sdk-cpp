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
    AWS_IMAGEBUILDER_API ContainerRecipeSummary() = default;
    AWS_IMAGEBUILDER_API ContainerRecipeSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API ContainerRecipeSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the container recipe.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    ContainerRecipeSummary& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the type of container, such as "Docker".</p>
     */
    inline ContainerType GetContainerType() const { return m_containerType; }
    inline bool ContainerTypeHasBeenSet() const { return m_containerTypeHasBeenSet; }
    inline void SetContainerType(ContainerType value) { m_containerTypeHasBeenSet = true; m_containerType = value; }
    inline ContainerRecipeSummary& WithContainerType(ContainerType value) { SetContainerType(value); return *this;}
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
    ContainerRecipeSummary& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The system platform for the container, such as Windows or Linux.</p>
     */
    inline Platform GetPlatform() const { return m_platform; }
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }
    inline void SetPlatform(Platform value) { m_platformHasBeenSet = true; m_platform = value; }
    inline ContainerRecipeSummary& WithPlatform(Platform value) { SetPlatform(value); return *this;}
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
    ContainerRecipeSummary& WithOwner(OwnerT&& value) { SetOwner(std::forward<OwnerT>(value)); return *this;}
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
    ContainerRecipeSummary& WithParentImage(ParentImageT&& value) { SetParentImage(std::forward<ParentImageT>(value)); return *this;}
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
    ContainerRecipeSummary& WithDateCreated(DateCreatedT&& value) { SetDateCreated(std::forward<DateCreatedT>(value)); return *this;}
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
    ContainerRecipeSummary& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    ContainerRecipeSummary& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    ContainerType m_containerType{ContainerType::NOT_SET};
    bool m_containerTypeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Platform m_platform{Platform::NOT_SET};
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
