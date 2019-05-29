/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/dlm/DLM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dlm/model/CreateRule.h>
#include <aws/dlm/model/RetainRule.h>
#include <aws/dlm/model/Tag.h>
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
namespace DLM
{
namespace Model
{

  /**
   * <p>Specifies a schedule.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dlm-2018-01-12/Schedule">AWS API
   * Reference</a></p>
   */
  class AWS_DLM_API Schedule
  {
  public:
    Schedule();
    Schedule(Aws::Utils::Json::JsonView jsonValue);
    Schedule& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the schedule.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the schedule.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the schedule.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the schedule.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the schedule.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the schedule.</p>
     */
    inline Schedule& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the schedule.</p>
     */
    inline Schedule& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the schedule.</p>
     */
    inline Schedule& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Copy all user-defined tags on a source volume to snapshots of the volume
     * created by this policy.</p>
     */
    inline bool GetCopyTags() const{ return m_copyTags; }

    /**
     * <p>Copy all user-defined tags on a source volume to snapshots of the volume
     * created by this policy.</p>
     */
    inline bool CopyTagsHasBeenSet() const { return m_copyTagsHasBeenSet; }

    /**
     * <p>Copy all user-defined tags on a source volume to snapshots of the volume
     * created by this policy.</p>
     */
    inline void SetCopyTags(bool value) { m_copyTagsHasBeenSet = true; m_copyTags = value; }

    /**
     * <p>Copy all user-defined tags on a source volume to snapshots of the volume
     * created by this policy.</p>
     */
    inline Schedule& WithCopyTags(bool value) { SetCopyTags(value); return *this;}


    /**
     * <p>The tags to apply to policy-created resources. These user-defined tags are in
     * addition to the AWS-added lifecycle tags.</p>
     */
    inline const Aws::Vector<Tag>& GetTagsToAdd() const{ return m_tagsToAdd; }

    /**
     * <p>The tags to apply to policy-created resources. These user-defined tags are in
     * addition to the AWS-added lifecycle tags.</p>
     */
    inline bool TagsToAddHasBeenSet() const { return m_tagsToAddHasBeenSet; }

    /**
     * <p>The tags to apply to policy-created resources. These user-defined tags are in
     * addition to the AWS-added lifecycle tags.</p>
     */
    inline void SetTagsToAdd(const Aws::Vector<Tag>& value) { m_tagsToAddHasBeenSet = true; m_tagsToAdd = value; }

    /**
     * <p>The tags to apply to policy-created resources. These user-defined tags are in
     * addition to the AWS-added lifecycle tags.</p>
     */
    inline void SetTagsToAdd(Aws::Vector<Tag>&& value) { m_tagsToAddHasBeenSet = true; m_tagsToAdd = std::move(value); }

    /**
     * <p>The tags to apply to policy-created resources. These user-defined tags are in
     * addition to the AWS-added lifecycle tags.</p>
     */
    inline Schedule& WithTagsToAdd(const Aws::Vector<Tag>& value) { SetTagsToAdd(value); return *this;}

    /**
     * <p>The tags to apply to policy-created resources. These user-defined tags are in
     * addition to the AWS-added lifecycle tags.</p>
     */
    inline Schedule& WithTagsToAdd(Aws::Vector<Tag>&& value) { SetTagsToAdd(std::move(value)); return *this;}

    /**
     * <p>The tags to apply to policy-created resources. These user-defined tags are in
     * addition to the AWS-added lifecycle tags.</p>
     */
    inline Schedule& AddTagsToAdd(const Tag& value) { m_tagsToAddHasBeenSet = true; m_tagsToAdd.push_back(value); return *this; }

    /**
     * <p>The tags to apply to policy-created resources. These user-defined tags are in
     * addition to the AWS-added lifecycle tags.</p>
     */
    inline Schedule& AddTagsToAdd(Tag&& value) { m_tagsToAddHasBeenSet = true; m_tagsToAdd.push_back(std::move(value)); return *this; }


    /**
     * <p>A collection of key/value pairs with values determined dynamically when the
     * policy is executed. Keys may be any valid Amazon EC2 tag key. Values must be in
     * one of the two following formats: <code>$(instance-id)</code> or
     * <code>$(timestamp)</code>. Variable tags are only valid for EBS Snapshot
     * Management – Instance policies.</p>
     */
    inline const Aws::Vector<Tag>& GetVariableTags() const{ return m_variableTags; }

    /**
     * <p>A collection of key/value pairs with values determined dynamically when the
     * policy is executed. Keys may be any valid Amazon EC2 tag key. Values must be in
     * one of the two following formats: <code>$(instance-id)</code> or
     * <code>$(timestamp)</code>. Variable tags are only valid for EBS Snapshot
     * Management – Instance policies.</p>
     */
    inline bool VariableTagsHasBeenSet() const { return m_variableTagsHasBeenSet; }

    /**
     * <p>A collection of key/value pairs with values determined dynamically when the
     * policy is executed. Keys may be any valid Amazon EC2 tag key. Values must be in
     * one of the two following formats: <code>$(instance-id)</code> or
     * <code>$(timestamp)</code>. Variable tags are only valid for EBS Snapshot
     * Management – Instance policies.</p>
     */
    inline void SetVariableTags(const Aws::Vector<Tag>& value) { m_variableTagsHasBeenSet = true; m_variableTags = value; }

    /**
     * <p>A collection of key/value pairs with values determined dynamically when the
     * policy is executed. Keys may be any valid Amazon EC2 tag key. Values must be in
     * one of the two following formats: <code>$(instance-id)</code> or
     * <code>$(timestamp)</code>. Variable tags are only valid for EBS Snapshot
     * Management – Instance policies.</p>
     */
    inline void SetVariableTags(Aws::Vector<Tag>&& value) { m_variableTagsHasBeenSet = true; m_variableTags = std::move(value); }

    /**
     * <p>A collection of key/value pairs with values determined dynamically when the
     * policy is executed. Keys may be any valid Amazon EC2 tag key. Values must be in
     * one of the two following formats: <code>$(instance-id)</code> or
     * <code>$(timestamp)</code>. Variable tags are only valid for EBS Snapshot
     * Management – Instance policies.</p>
     */
    inline Schedule& WithVariableTags(const Aws::Vector<Tag>& value) { SetVariableTags(value); return *this;}

    /**
     * <p>A collection of key/value pairs with values determined dynamically when the
     * policy is executed. Keys may be any valid Amazon EC2 tag key. Values must be in
     * one of the two following formats: <code>$(instance-id)</code> or
     * <code>$(timestamp)</code>. Variable tags are only valid for EBS Snapshot
     * Management – Instance policies.</p>
     */
    inline Schedule& WithVariableTags(Aws::Vector<Tag>&& value) { SetVariableTags(std::move(value)); return *this;}

    /**
     * <p>A collection of key/value pairs with values determined dynamically when the
     * policy is executed. Keys may be any valid Amazon EC2 tag key. Values must be in
     * one of the two following formats: <code>$(instance-id)</code> or
     * <code>$(timestamp)</code>. Variable tags are only valid for EBS Snapshot
     * Management – Instance policies.</p>
     */
    inline Schedule& AddVariableTags(const Tag& value) { m_variableTagsHasBeenSet = true; m_variableTags.push_back(value); return *this; }

    /**
     * <p>A collection of key/value pairs with values determined dynamically when the
     * policy is executed. Keys may be any valid Amazon EC2 tag key. Values must be in
     * one of the two following formats: <code>$(instance-id)</code> or
     * <code>$(timestamp)</code>. Variable tags are only valid for EBS Snapshot
     * Management – Instance policies.</p>
     */
    inline Schedule& AddVariableTags(Tag&& value) { m_variableTagsHasBeenSet = true; m_variableTags.push_back(std::move(value)); return *this; }


    /**
     * <p>The create rule.</p>
     */
    inline const CreateRule& GetCreateRule() const{ return m_createRule; }

    /**
     * <p>The create rule.</p>
     */
    inline bool CreateRuleHasBeenSet() const { return m_createRuleHasBeenSet; }

    /**
     * <p>The create rule.</p>
     */
    inline void SetCreateRule(const CreateRule& value) { m_createRuleHasBeenSet = true; m_createRule = value; }

    /**
     * <p>The create rule.</p>
     */
    inline void SetCreateRule(CreateRule&& value) { m_createRuleHasBeenSet = true; m_createRule = std::move(value); }

    /**
     * <p>The create rule.</p>
     */
    inline Schedule& WithCreateRule(const CreateRule& value) { SetCreateRule(value); return *this;}

    /**
     * <p>The create rule.</p>
     */
    inline Schedule& WithCreateRule(CreateRule&& value) { SetCreateRule(std::move(value)); return *this;}


    /**
     * <p>The retain rule.</p>
     */
    inline const RetainRule& GetRetainRule() const{ return m_retainRule; }

    /**
     * <p>The retain rule.</p>
     */
    inline bool RetainRuleHasBeenSet() const { return m_retainRuleHasBeenSet; }

    /**
     * <p>The retain rule.</p>
     */
    inline void SetRetainRule(const RetainRule& value) { m_retainRuleHasBeenSet = true; m_retainRule = value; }

    /**
     * <p>The retain rule.</p>
     */
    inline void SetRetainRule(RetainRule&& value) { m_retainRuleHasBeenSet = true; m_retainRule = std::move(value); }

    /**
     * <p>The retain rule.</p>
     */
    inline Schedule& WithRetainRule(const RetainRule& value) { SetRetainRule(value); return *this;}

    /**
     * <p>The retain rule.</p>
     */
    inline Schedule& WithRetainRule(RetainRule&& value) { SetRetainRule(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    bool m_copyTags;
    bool m_copyTagsHasBeenSet;

    Aws::Vector<Tag> m_tagsToAdd;
    bool m_tagsToAddHasBeenSet;

    Aws::Vector<Tag> m_variableTags;
    bool m_variableTagsHasBeenSet;

    CreateRule m_createRule;
    bool m_createRuleHasBeenSet;

    RetainRule m_retainRule;
    bool m_retainRuleHasBeenSet;
  };

} // namespace Model
} // namespace DLM
} // namespace Aws
