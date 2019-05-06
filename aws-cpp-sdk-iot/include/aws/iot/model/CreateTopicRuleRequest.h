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
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/TopicRulePayload.h>
#include <utility>

namespace Aws
{
namespace IoT
{
namespace Model
{

  /**
   * <p>The input for the CreateTopicRule operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CreateTopicRuleRequest">AWS
   * API Reference</a></p>
   */
  class AWS_IOT_API CreateTopicRuleRequest : public IoTRequest
  {
  public:
    CreateTopicRuleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateTopicRule"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the rule.</p>
     */
    inline const Aws::String& GetRuleName() const{ return m_ruleName; }

    /**
     * <p>The name of the rule.</p>
     */
    inline bool RuleNameHasBeenSet() const { return m_ruleNameHasBeenSet; }

    /**
     * <p>The name of the rule.</p>
     */
    inline void SetRuleName(const Aws::String& value) { m_ruleNameHasBeenSet = true; m_ruleName = value; }

    /**
     * <p>The name of the rule.</p>
     */
    inline void SetRuleName(Aws::String&& value) { m_ruleNameHasBeenSet = true; m_ruleName = std::move(value); }

    /**
     * <p>The name of the rule.</p>
     */
    inline void SetRuleName(const char* value) { m_ruleNameHasBeenSet = true; m_ruleName.assign(value); }

    /**
     * <p>The name of the rule.</p>
     */
    inline CreateTopicRuleRequest& WithRuleName(const Aws::String& value) { SetRuleName(value); return *this;}

    /**
     * <p>The name of the rule.</p>
     */
    inline CreateTopicRuleRequest& WithRuleName(Aws::String&& value) { SetRuleName(std::move(value)); return *this;}

    /**
     * <p>The name of the rule.</p>
     */
    inline CreateTopicRuleRequest& WithRuleName(const char* value) { SetRuleName(value); return *this;}


    /**
     * <p>The rule payload.</p>
     */
    inline const TopicRulePayload& GetTopicRulePayload() const{ return m_topicRulePayload; }

    /**
     * <p>The rule payload.</p>
     */
    inline bool TopicRulePayloadHasBeenSet() const { return m_topicRulePayloadHasBeenSet; }

    /**
     * <p>The rule payload.</p>
     */
    inline void SetTopicRulePayload(const TopicRulePayload& value) { m_topicRulePayloadHasBeenSet = true; m_topicRulePayload = value; }

    /**
     * <p>The rule payload.</p>
     */
    inline void SetTopicRulePayload(TopicRulePayload&& value) { m_topicRulePayloadHasBeenSet = true; m_topicRulePayload = std::move(value); }

    /**
     * <p>The rule payload.</p>
     */
    inline CreateTopicRuleRequest& WithTopicRulePayload(const TopicRulePayload& value) { SetTopicRulePayload(value); return *this;}

    /**
     * <p>The rule payload.</p>
     */
    inline CreateTopicRuleRequest& WithTopicRulePayload(TopicRulePayload&& value) { SetTopicRulePayload(std::move(value)); return *this;}


    /**
     * <p>Metadata which can be used to manage the topic rule.</p> <note> <p>For URI
     * Request parameters use format: ...key1=value1&amp;key2=value2...</p> <p>For the
     * CLI command-line parameter use format: --tags
     * "key1=value1&amp;key2=value2..."</p> <p>For the cli-input-json file use format:
     * "tags": "key1=value1&amp;key2=value2..."</p> </note>
     */
    inline const Aws::String& GetTags() const{ return m_tags; }

    /**
     * <p>Metadata which can be used to manage the topic rule.</p> <note> <p>For URI
     * Request parameters use format: ...key1=value1&amp;key2=value2...</p> <p>For the
     * CLI command-line parameter use format: --tags
     * "key1=value1&amp;key2=value2..."</p> <p>For the cli-input-json file use format:
     * "tags": "key1=value1&amp;key2=value2..."</p> </note>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Metadata which can be used to manage the topic rule.</p> <note> <p>For URI
     * Request parameters use format: ...key1=value1&amp;key2=value2...</p> <p>For the
     * CLI command-line parameter use format: --tags
     * "key1=value1&amp;key2=value2..."</p> <p>For the cli-input-json file use format:
     * "tags": "key1=value1&amp;key2=value2..."</p> </note>
     */
    inline void SetTags(const Aws::String& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Metadata which can be used to manage the topic rule.</p> <note> <p>For URI
     * Request parameters use format: ...key1=value1&amp;key2=value2...</p> <p>For the
     * CLI command-line parameter use format: --tags
     * "key1=value1&amp;key2=value2..."</p> <p>For the cli-input-json file use format:
     * "tags": "key1=value1&amp;key2=value2..."</p> </note>
     */
    inline void SetTags(Aws::String&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Metadata which can be used to manage the topic rule.</p> <note> <p>For URI
     * Request parameters use format: ...key1=value1&amp;key2=value2...</p> <p>For the
     * CLI command-line parameter use format: --tags
     * "key1=value1&amp;key2=value2..."</p> <p>For the cli-input-json file use format:
     * "tags": "key1=value1&amp;key2=value2..."</p> </note>
     */
    inline void SetTags(const char* value) { m_tagsHasBeenSet = true; m_tags.assign(value); }

    /**
     * <p>Metadata which can be used to manage the topic rule.</p> <note> <p>For URI
     * Request parameters use format: ...key1=value1&amp;key2=value2...</p> <p>For the
     * CLI command-line parameter use format: --tags
     * "key1=value1&amp;key2=value2..."</p> <p>For the cli-input-json file use format:
     * "tags": "key1=value1&amp;key2=value2..."</p> </note>
     */
    inline CreateTopicRuleRequest& WithTags(const Aws::String& value) { SetTags(value); return *this;}

    /**
     * <p>Metadata which can be used to manage the topic rule.</p> <note> <p>For URI
     * Request parameters use format: ...key1=value1&amp;key2=value2...</p> <p>For the
     * CLI command-line parameter use format: --tags
     * "key1=value1&amp;key2=value2..."</p> <p>For the cli-input-json file use format:
     * "tags": "key1=value1&amp;key2=value2..."</p> </note>
     */
    inline CreateTopicRuleRequest& WithTags(Aws::String&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Metadata which can be used to manage the topic rule.</p> <note> <p>For URI
     * Request parameters use format: ...key1=value1&amp;key2=value2...</p> <p>For the
     * CLI command-line parameter use format: --tags
     * "key1=value1&amp;key2=value2..."</p> <p>For the cli-input-json file use format:
     * "tags": "key1=value1&amp;key2=value2..."</p> </note>
     */
    inline CreateTopicRuleRequest& WithTags(const char* value) { SetTags(value); return *this;}

  private:

    Aws::String m_ruleName;
    bool m_ruleNameHasBeenSet;

    TopicRulePayload m_topicRulePayload;
    bool m_topicRulePayloadHasBeenSet;

    Aws::String m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
