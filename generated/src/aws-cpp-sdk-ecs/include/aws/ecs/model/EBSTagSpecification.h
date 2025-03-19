/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/EBSResourceType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecs/model/PropagateTags.h>
#include <aws/ecs/model/Tag.h>
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
namespace ECS
{
namespace Model
{

  /**
   * <p>The tag specifications of an Amazon EBS volume.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/EBSTagSpecification">AWS
   * API Reference</a></p>
   */
  class EBSTagSpecification
  {
  public:
    AWS_ECS_API EBSTagSpecification() = default;
    AWS_ECS_API EBSTagSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API EBSTagSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of volume resource.</p>
     */
    inline EBSResourceType GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(EBSResourceType value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline EBSTagSpecification& WithResourceType(EBSResourceType value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags applied to this Amazon EBS volume. <code>AmazonECSCreated</code> and
     * <code>AmazonECSManaged</code> are reserved tags that can't be used.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    EBSTagSpecification& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    EBSTagSpecification& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Determines whether to propagate the tags from the task definition to
     * &#x2028;the Amazon EBS volume. Tags can only propagate to a <code>SERVICE</code>
     * specified in &#x2028;<code>ServiceVolumeConfiguration</code>. If no value is
     * specified, the tags aren't &#x2028;propagated.</p>
     */
    inline PropagateTags GetPropagateTags() const { return m_propagateTags; }
    inline bool PropagateTagsHasBeenSet() const { return m_propagateTagsHasBeenSet; }
    inline void SetPropagateTags(PropagateTags value) { m_propagateTagsHasBeenSet = true; m_propagateTags = value; }
    inline EBSTagSpecification& WithPropagateTags(PropagateTags value) { SetPropagateTags(value); return *this;}
    ///@}
  private:

    EBSResourceType m_resourceType{EBSResourceType::NOT_SET};
    bool m_resourceTypeHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    PropagateTags m_propagateTags{PropagateTags::NOT_SET};
    bool m_propagateTagsHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
