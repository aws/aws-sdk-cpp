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
     * <p>The tags to apply to policy-created resources. These user-defined tags are in
     * addition to the AWS-added lifecycle tags.</p>
     */
    inline const Aws::Vector<Tag>& GetTagsToAdd() const{ return m_tagsToAdd; }

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
     * <p>The create rule.</p>
     */
    inline const CreateRule& GetCreateRule() const{ return m_createRule; }

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

    Aws::Vector<Tag> m_tagsToAdd;
    bool m_tagsToAddHasBeenSet;

    CreateRule m_createRule;
    bool m_createRuleHasBeenSet;

    RetainRule m_retainRule;
    bool m_retainRuleHasBeenSet;
  };

} // namespace Model
} // namespace DLM
} // namespace Aws
