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
    AWS_CLOUDFORMATION_API StackRefactorAction();
    AWS_CLOUDFORMATION_API StackRefactorAction(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFORMATION_API StackRefactorAction& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The action that CloudFormation takes on the stack.</p>
     */
    inline const StackRefactorActionType& GetAction() const{ return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(const StackRefactorActionType& value) { m_actionHasBeenSet = true; m_action = value; }
    inline void SetAction(StackRefactorActionType&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }
    inline StackRefactorAction& WithAction(const StackRefactorActionType& value) { SetAction(value); return *this;}
    inline StackRefactorAction& WithAction(StackRefactorActionType&& value) { SetAction(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type that will be evaluated in the <code>StackRefactorAction</code>. The
     * following are potential <code>Entity</code> types:</p> <ul> <li> <p>
     * <code>Stack</code> </p> </li> <li> <p> <code>Resource</code> </p> </li> </ul>
     */
    inline const StackRefactorActionEntity& GetEntity() const{ return m_entity; }
    inline bool EntityHasBeenSet() const { return m_entityHasBeenSet; }
    inline void SetEntity(const StackRefactorActionEntity& value) { m_entityHasBeenSet = true; m_entity = value; }
    inline void SetEntity(StackRefactorActionEntity&& value) { m_entityHasBeenSet = true; m_entity = std::move(value); }
    inline StackRefactorAction& WithEntity(const StackRefactorActionEntity& value) { SetEntity(value); return *this;}
    inline StackRefactorAction& WithEntity(StackRefactorActionEntity&& value) { SetEntity(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name or unique identifier associated with the physical instance of the
     * resource.</p>
     */
    inline const Aws::String& GetPhysicalResourceId() const{ return m_physicalResourceId; }
    inline bool PhysicalResourceIdHasBeenSet() const { return m_physicalResourceIdHasBeenSet; }
    inline void SetPhysicalResourceId(const Aws::String& value) { m_physicalResourceIdHasBeenSet = true; m_physicalResourceId = value; }
    inline void SetPhysicalResourceId(Aws::String&& value) { m_physicalResourceIdHasBeenSet = true; m_physicalResourceId = std::move(value); }
    inline void SetPhysicalResourceId(const char* value) { m_physicalResourceIdHasBeenSet = true; m_physicalResourceId.assign(value); }
    inline StackRefactorAction& WithPhysicalResourceId(const Aws::String& value) { SetPhysicalResourceId(value); return *this;}
    inline StackRefactorAction& WithPhysicalResourceId(Aws::String&& value) { SetPhysicalResourceId(std::move(value)); return *this;}
    inline StackRefactorAction& WithPhysicalResourceId(const char* value) { SetPhysicalResourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A key-value pair that identifies the target resource. The key is an
     * identifier property (for example, <code>BucketName</code> for
     * <code>AWS::S3::Bucket</code> resources) and the value is the actual property
     * value (for example, <code>MyS3Bucket</code>).</p>
     */
    inline const Aws::String& GetResourceIdentifier() const{ return m_resourceIdentifier; }
    inline bool ResourceIdentifierHasBeenSet() const { return m_resourceIdentifierHasBeenSet; }
    inline void SetResourceIdentifier(const Aws::String& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = value; }
    inline void SetResourceIdentifier(Aws::String&& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = std::move(value); }
    inline void SetResourceIdentifier(const char* value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier.assign(value); }
    inline StackRefactorAction& WithResourceIdentifier(const Aws::String& value) { SetResourceIdentifier(value); return *this;}
    inline StackRefactorAction& WithResourceIdentifier(Aws::String&& value) { SetResourceIdentifier(std::move(value)); return *this;}
    inline StackRefactorAction& WithResourceIdentifier(const char* value) { SetResourceIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description to help you identify the refactor.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline StackRefactorAction& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline StackRefactorAction& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline StackRefactorAction& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The detection type is one of the following:</p> <ul> <li> <p>Auto:
     * CloudFormation figured out the mapping on its own.</p> </li> <li> <p>Manual: The
     * customer provided the mapping in the <code>ResourceMapping</code> parameter.</p>
     * </li> </ul>
     */
    inline const StackRefactorDetection& GetDetection() const{ return m_detection; }
    inline bool DetectionHasBeenSet() const { return m_detectionHasBeenSet; }
    inline void SetDetection(const StackRefactorDetection& value) { m_detectionHasBeenSet = true; m_detection = value; }
    inline void SetDetection(StackRefactorDetection&& value) { m_detectionHasBeenSet = true; m_detection = std::move(value); }
    inline StackRefactorAction& WithDetection(const StackRefactorDetection& value) { SetDetection(value); return *this;}
    inline StackRefactorAction& WithDetection(StackRefactorDetection&& value) { SetDetection(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the detection type.</p>
     */
    inline const Aws::String& GetDetectionReason() const{ return m_detectionReason; }
    inline bool DetectionReasonHasBeenSet() const { return m_detectionReasonHasBeenSet; }
    inline void SetDetectionReason(const Aws::String& value) { m_detectionReasonHasBeenSet = true; m_detectionReason = value; }
    inline void SetDetectionReason(Aws::String&& value) { m_detectionReasonHasBeenSet = true; m_detectionReason = std::move(value); }
    inline void SetDetectionReason(const char* value) { m_detectionReasonHasBeenSet = true; m_detectionReason.assign(value); }
    inline StackRefactorAction& WithDetectionReason(const Aws::String& value) { SetDetectionReason(value); return *this;}
    inline StackRefactorAction& WithDetectionReason(Aws::String&& value) { SetDetectionReason(std::move(value)); return *this;}
    inline StackRefactorAction& WithDetectionReason(const char* value) { SetDetectionReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Assigns one or more tags to specified resources.</p>
     */
    inline const Aws::Vector<Tag>& GetTagResources() const{ return m_tagResources; }
    inline bool TagResourcesHasBeenSet() const { return m_tagResourcesHasBeenSet; }
    inline void SetTagResources(const Aws::Vector<Tag>& value) { m_tagResourcesHasBeenSet = true; m_tagResources = value; }
    inline void SetTagResources(Aws::Vector<Tag>&& value) { m_tagResourcesHasBeenSet = true; m_tagResources = std::move(value); }
    inline StackRefactorAction& WithTagResources(const Aws::Vector<Tag>& value) { SetTagResources(value); return *this;}
    inline StackRefactorAction& WithTagResources(Aws::Vector<Tag>&& value) { SetTagResources(std::move(value)); return *this;}
    inline StackRefactorAction& AddTagResources(const Tag& value) { m_tagResourcesHasBeenSet = true; m_tagResources.push_back(value); return *this; }
    inline StackRefactorAction& AddTagResources(Tag&& value) { m_tagResourcesHasBeenSet = true; m_tagResources.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Removes one or more tags to specified resources.</p>
     */
    inline const Aws::Vector<Aws::String>& GetUntagResources() const{ return m_untagResources; }
    inline bool UntagResourcesHasBeenSet() const { return m_untagResourcesHasBeenSet; }
    inline void SetUntagResources(const Aws::Vector<Aws::String>& value) { m_untagResourcesHasBeenSet = true; m_untagResources = value; }
    inline void SetUntagResources(Aws::Vector<Aws::String>&& value) { m_untagResourcesHasBeenSet = true; m_untagResources = std::move(value); }
    inline StackRefactorAction& WithUntagResources(const Aws::Vector<Aws::String>& value) { SetUntagResources(value); return *this;}
    inline StackRefactorAction& WithUntagResources(Aws::Vector<Aws::String>&& value) { SetUntagResources(std::move(value)); return *this;}
    inline StackRefactorAction& AddUntagResources(const Aws::String& value) { m_untagResourcesHasBeenSet = true; m_untagResources.push_back(value); return *this; }
    inline StackRefactorAction& AddUntagResources(Aws::String&& value) { m_untagResourcesHasBeenSet = true; m_untagResources.push_back(std::move(value)); return *this; }
    inline StackRefactorAction& AddUntagResources(const char* value) { m_untagResourcesHasBeenSet = true; m_untagResources.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The mapping for the stack resource <code>Source</code> and stack resource
     * <code>Destination</code>.</p>
     */
    inline const ResourceMapping& GetResourceMapping() const{ return m_resourceMapping; }
    inline bool ResourceMappingHasBeenSet() const { return m_resourceMappingHasBeenSet; }
    inline void SetResourceMapping(const ResourceMapping& value) { m_resourceMappingHasBeenSet = true; m_resourceMapping = value; }
    inline void SetResourceMapping(ResourceMapping&& value) { m_resourceMappingHasBeenSet = true; m_resourceMapping = std::move(value); }
    inline StackRefactorAction& WithResourceMapping(const ResourceMapping& value) { SetResourceMapping(value); return *this;}
    inline StackRefactorAction& WithResourceMapping(ResourceMapping&& value) { SetResourceMapping(std::move(value)); return *this;}
    ///@}
  private:

    StackRefactorActionType m_action;
    bool m_actionHasBeenSet = false;

    StackRefactorActionEntity m_entity;
    bool m_entityHasBeenSet = false;

    Aws::String m_physicalResourceId;
    bool m_physicalResourceIdHasBeenSet = false;

    Aws::String m_resourceIdentifier;
    bool m_resourceIdentifierHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    StackRefactorDetection m_detection;
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
