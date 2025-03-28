﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/cloudformation/model/ResourceTargetDefinition.h>
#include <aws/cloudformation/model/EvaluationType.h>
#include <aws/cloudformation/model/ChangeSource.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>For a resource with <code>Modify</code> as the action, the
   * <code>ResourceChange</code> structure describes the changes CloudFormation will
   * make to that resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/ResourceChangeDetail">AWS
   * API Reference</a></p>
   */
  class ResourceChangeDetail
  {
  public:
    AWS_CLOUDFORMATION_API ResourceChangeDetail() = default;
    AWS_CLOUDFORMATION_API ResourceChangeDetail(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFORMATION_API ResourceChangeDetail& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>A <code>ResourceTargetDefinition</code> structure that describes the field
     * that CloudFormation will change and whether the resource will be recreated.</p>
     */
    inline const ResourceTargetDefinition& GetTarget() const { return m_target; }
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }
    template<typename TargetT = ResourceTargetDefinition>
    void SetTarget(TargetT&& value) { m_targetHasBeenSet = true; m_target = std::forward<TargetT>(value); }
    template<typename TargetT = ResourceTargetDefinition>
    ResourceChangeDetail& WithTarget(TargetT&& value) { SetTarget(std::forward<TargetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether CloudFormation can determine the target value, and whether
     * the target value will change before you execute a change set.</p> <p>For
     * <code>Static</code> evaluations, CloudFormation can determine that the target
     * value will change, and its value. For example, if you directly modify the
     * <code>InstanceType</code> property of an EC2 instance, CloudFormation knows that
     * this property value will change, and its value, so this is a <code>Static</code>
     * evaluation.</p> <p>For <code>Dynamic</code> evaluations, can't determine the
     * target value because it depends on the result of an intrinsic function, such as
     * a <code>Ref</code> or <code>Fn::GetAtt</code> intrinsic function, when the stack
     * is updated. For example, if your template includes a reference to a resource
     * that's conditionally recreated, the value of the reference (the physical ID of
     * the resource) might change, depending on if the resource is recreated. If the
     * resource is recreated, it will have a new physical ID, so all references to that
     * resource will also be updated.</p>
     */
    inline EvaluationType GetEvaluation() const { return m_evaluation; }
    inline bool EvaluationHasBeenSet() const { return m_evaluationHasBeenSet; }
    inline void SetEvaluation(EvaluationType value) { m_evaluationHasBeenSet = true; m_evaluation = value; }
    inline ResourceChangeDetail& WithEvaluation(EvaluationType value) { SetEvaluation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The group to which the <code>CausingEntity</code> value belongs. There are
     * five entity groups:</p> <ul> <li> <p> <code>ResourceReference</code> entities
     * are <code>Ref</code> intrinsic functions that refer to resources in the
     * template, such as <code>{ "Ref" : "MyEC2InstanceResource" }</code>.</p> </li>
     * <li> <p> <code>ParameterReference</code> entities are <code>Ref</code> intrinsic
     * functions that get template parameter values, such as <code>{ "Ref" :
     * "MyPasswordParameter" }</code>.</p> </li> <li> <p>
     * <code>ResourceAttribute</code> entities are <code>Fn::GetAtt</code> intrinsic
     * functions that get resource attribute values, such as <code>{ "Fn::GetAtt" : [
     * "MyEC2InstanceResource", "PublicDnsName" ] }</code>.</p> </li> <li> <p>
     * <code>DirectModification</code> entities are changes that are made directly to
     * the template.</p> </li> <li> <p> <code>Automatic</code> entities are
     * <code>AWS::CloudFormation::Stack</code> resource types, which are also known as
     * nested stacks. If you made no changes to the
     * <code>AWS::CloudFormation::Stack</code> resource, CloudFormation sets the
     * <code>ChangeSource</code> to <code>Automatic</code> because the nested stack's
     * template might have changed. Changes to a nested stack's template aren't visible
     * to CloudFormation until you run an update on the parent stack.</p> </li> </ul>
     */
    inline ChangeSource GetChangeSource() const { return m_changeSource; }
    inline bool ChangeSourceHasBeenSet() const { return m_changeSourceHasBeenSet; }
    inline void SetChangeSource(ChangeSource value) { m_changeSourceHasBeenSet = true; m_changeSource = value; }
    inline ResourceChangeDetail& WithChangeSource(ChangeSource value) { SetChangeSource(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identity of the entity that triggered this change. This entity is a
     * member of the group that's specified by the <code>ChangeSource</code> field. For
     * example, if you modified the value of the <code>KeyPairName</code> parameter,
     * the <code>CausingEntity</code> is the name of the parameter
     * (<code>KeyPairName</code>).</p> <p>If the <code>ChangeSource</code> value is
     * <code>DirectModification</code>, no value is given for
     * <code>CausingEntity</code>.</p>
     */
    inline const Aws::String& GetCausingEntity() const { return m_causingEntity; }
    inline bool CausingEntityHasBeenSet() const { return m_causingEntityHasBeenSet; }
    template<typename CausingEntityT = Aws::String>
    void SetCausingEntity(CausingEntityT&& value) { m_causingEntityHasBeenSet = true; m_causingEntity = std::forward<CausingEntityT>(value); }
    template<typename CausingEntityT = Aws::String>
    ResourceChangeDetail& WithCausingEntity(CausingEntityT&& value) { SetCausingEntity(std::forward<CausingEntityT>(value)); return *this;}
    ///@}
  private:

    ResourceTargetDefinition m_target;
    bool m_targetHasBeenSet = false;

    EvaluationType m_evaluation{EvaluationType::NOT_SET};
    bool m_evaluationHasBeenSet = false;

    ChangeSource m_changeSource{ChangeSource::NOT_SET};
    bool m_changeSourceHasBeenSet = false;

    Aws::String m_causingEntity;
    bool m_causingEntityHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
