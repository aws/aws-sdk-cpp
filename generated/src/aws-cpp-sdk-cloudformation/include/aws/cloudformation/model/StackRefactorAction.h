/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/cloudformation/model/StackRefactorActionType.h>
#include <aws/cloudformation/model/StackRefactorActionEntity.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudformation/model/StackRefactorDetection.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudformation/model/ResourceMapping.h>
#include <aws/cloudformation/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace CloudFormation
{
namespace Model
{

  /**
   * <p>Describes the stack and the action that CloudFormation will perform on it if
   * you execute the stack refactor.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/StackRefactorAction">AWS
   * API Reference</a></p>
   */
  class StackRefactorAction
  {
  public:
    AWS_CLOUDFORMATION_API StackRefactorAction() = default;
    AWS_CLOUDFORMATION_API StackRefactorAction(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFORMATION_API StackRefactorAction& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The action that CloudFormation takes on the stack.</p>
     */
    inline StackRefactorActionType GetAction() const { return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(StackRefactorActionType value) { m_actionHasBeenSet = true; m_action = value; }
    inline StackRefactorAction& WithAction(StackRefactorActionType value) { SetAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type that will be evaluated in the <code>StackRefactorAction</code>. The
     * following are potential <code>Entity</code> types:</p> <ul> <li> <p>
     * <code>Stack</code> </p> </li> <li> <p> <code>Resource</code> </p> </li> </ul>
     */
    inline StackRefactorActionEntity GetEntity() const { return m_entity; }
    inline bool EntityHasBeenSet() const { return m_entityHasBeenSet; }
    inline void SetEntity(StackRefactorActionEntity value) { m_entityHasBeenSet = true; m_entity = value; }
    inline StackRefactorAction& WithEntity(StackRefactorActionEntity value) { SetEntity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name or unique identifier associated with the physical instance of the
     * resource.</p>
     */
    inline const Aws::String& GetPhysicalResourceId() const { return m_physicalResourceId; }
    inline bool PhysicalResourceIdHasBeenSet() const { return m_physicalResourceIdHasBeenSet; }
    template<typename PhysicalResourceIdT = Aws::String>
    void SetPhysicalResourceId(PhysicalResourceIdT&& value) { m_physicalResourceIdHasBeenSet = true; m_physicalResourceId = std::forward<PhysicalResourceIdT>(value); }
    template<typename PhysicalResourceIdT = Aws::String>
    StackRefactorAction& WithPhysicalResourceId(PhysicalResourceIdT&& value) { SetPhysicalResourceId(std::forward<PhysicalResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A key-value pair that identifies the target resource. The key is an
     * identifier property (for example, <code>BucketName</code> for
     * <code>AWS::S3::Bucket</code> resources) and the value is the actual property
     * value (for example, <code>MyS3Bucket</code>).</p>
     */
    inline const Aws::String& GetResourceIdentifier() const { return m_resourceIdentifier; }
    inline bool ResourceIdentifierHasBeenSet() const { return m_resourceIdentifierHasBeenSet; }
    template<typename ResourceIdentifierT = Aws::String>
    void SetResourceIdentifier(ResourceIdentifierT&& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = std::forward<ResourceIdentifierT>(value); }
    template<typename ResourceIdentifierT = Aws::String>
    StackRefactorAction& WithResourceIdentifier(ResourceIdentifierT&& value) { SetResourceIdentifier(std::forward<ResourceIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description to help you identify the refactor.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    StackRefactorAction& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The detection type is one of the following:</p> <ul> <li> <p>Auto:
     * CloudFormation figured out the mapping on its own.</p> </li> <li> <p>Manual: The
     * customer provided the mapping in the <code>ResourceMapping</code> parameter.</p>
     * </li> </ul>
     */
    inline StackRefactorDetection GetDetection() const { return m_detection; }
    inline bool DetectionHasBeenSet() const { return m_detectionHasBeenSet; }
    inline void SetDetection(StackRefactorDetection value) { m_detectionHasBeenSet = true; m_detection = value; }
    inline StackRefactorAction& WithDetection(StackRefactorDetection value) { SetDetection(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the detection type.</p>
     */
    inline const Aws::String& GetDetectionReason() const { return m_detectionReason; }
    inline bool DetectionReasonHasBeenSet() const { return m_detectionReasonHasBeenSet; }
    template<typename DetectionReasonT = Aws::String>
    void SetDetectionReason(DetectionReasonT&& value) { m_detectionReasonHasBeenSet = true; m_detectionReason = std::forward<DetectionReasonT>(value); }
    template<typename DetectionReasonT = Aws::String>
    StackRefactorAction& WithDetectionReason(DetectionReasonT&& value) { SetDetectionReason(std::forward<DetectionReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Assigns one or more tags to specified resources.</p>
     */
    inline const Aws::Vector<Tag>& GetTagResources() const { return m_tagResources; }
    inline bool TagResourcesHasBeenSet() const { return m_tagResourcesHasBeenSet; }
    template<typename TagResourcesT = Aws::Vector<Tag>>
    void SetTagResources(TagResourcesT&& value) { m_tagResourcesHasBeenSet = true; m_tagResources = std::forward<TagResourcesT>(value); }
    template<typename TagResourcesT = Aws::Vector<Tag>>
    StackRefactorAction& WithTagResources(TagResourcesT&& value) { SetTagResources(std::forward<TagResourcesT>(value)); return *this;}
    template<typename TagResourcesT = Tag>
    StackRefactorAction& AddTagResources(TagResourcesT&& value) { m_tagResourcesHasBeenSet = true; m_tagResources.emplace_back(std::forward<TagResourcesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Removes one or more tags to specified resources.</p>
     */
    inline const Aws::Vector<Aws::String>& GetUntagResources() const { return m_untagResources; }
    inline bool UntagResourcesHasBeenSet() const { return m_untagResourcesHasBeenSet; }
    template<typename UntagResourcesT = Aws::Vector<Aws::String>>
    void SetUntagResources(UntagResourcesT&& value) { m_untagResourcesHasBeenSet = true; m_untagResources = std::forward<UntagResourcesT>(value); }
    template<typename UntagResourcesT = Aws::Vector<Aws::String>>
    StackRefactorAction& WithUntagResources(UntagResourcesT&& value) { SetUntagResources(std::forward<UntagResourcesT>(value)); return *this;}
    template<typename UntagResourcesT = Aws::String>
    StackRefactorAction& AddUntagResources(UntagResourcesT&& value) { m_untagResourcesHasBeenSet = true; m_untagResources.emplace_back(std::forward<UntagResourcesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The mapping for the stack resource <code>Source</code> and stack resource
     * <code>Destination</code>.</p>
     */
    inline const ResourceMapping& GetResourceMapping() const { return m_resourceMapping; }
    inline bool ResourceMappingHasBeenSet() const { return m_resourceMappingHasBeenSet; }
    template<typename ResourceMappingT = ResourceMapping>
    void SetResourceMapping(ResourceMappingT&& value) { m_resourceMappingHasBeenSet = true; m_resourceMapping = std::forward<ResourceMappingT>(value); }
    template<typename ResourceMappingT = ResourceMapping>
    StackRefactorAction& WithResourceMapping(ResourceMappingT&& value) { SetResourceMapping(std::forward<ResourceMappingT>(value)); return *this;}
    ///@}
  private:

    StackRefactorActionType m_action{StackRefactorActionType::NOT_SET};
    bool m_actionHasBeenSet = false;

    StackRefactorActionEntity m_entity{StackRefactorActionEntity::NOT_SET};
    bool m_entityHasBeenSet = false;

    Aws::String m_physicalResourceId;
    bool m_physicalResourceIdHasBeenSet = false;

    Aws::String m_resourceIdentifier;
    bool m_resourceIdentifierHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    StackRefactorDetection m_detection{StackRefactorDetection::NOT_SET};
    bool m_detectionHasBeenSet = false;

    Aws::String m_detectionReason;
    bool m_detectionReasonHasBeenSet = false;

    Aws::Vector<Tag> m_tagResources;
    bool m_tagResourcesHasBeenSet = false;

    Aws::Vector<Aws::String> m_untagResources;
    bool m_untagResourcesHasBeenSet = false;

    ResourceMapping m_resourceMapping;
    bool m_resourceMappingHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
