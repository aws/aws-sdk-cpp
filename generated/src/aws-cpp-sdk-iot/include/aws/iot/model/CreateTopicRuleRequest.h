/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class CreateTopicRuleRequest : public IoTRequest
  {
  public:
    AWS_IOT_API CreateTopicRuleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateTopicRule"; }

    AWS_IOT_API Aws::String SerializePayload() const override;

    AWS_IOT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
     * <p>Metadata which can be used to manage the topic rule.</p>  <p>For URI
     * Request parameters use format: ...key1=value1&amp;key2=value2...</p> <p>For the
     * CLI command-line parameter use format: --tags
     * "key1=value1&amp;key2=value2..."</p> <p>For the cli-input-json file use format:
     * "tags": "key1=value1&amp;key2=value2..."</p> 
     */
    inline const Aws::String& GetTags() const{ return m_tags; }

    /**
     * <p>Metadata which can be used to manage the topic rule.</p>  <p>For URI
     * Request parameters use format: ...key1=value1&amp;key2=value2...</p> <p>For the
     * CLI command-line parameter use format: --tags
     * "key1=value1&amp;key2=value2..."</p> <p>For the cli-input-json file use format:
     * "tags": "key1=value1&amp;key2=value2..."</p> 
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Metadata which can be used to manage the topic rule.</p>  <p>For URI
     * Request parameters use format: ...key1=value1&amp;key2=value2...</p> <p>For the
     * CLI command-line parameter use format: --tags
     * "key1=value1&amp;key2=value2..."</p> <p>For the cli-input-json file use format:
     * "tags": "key1=value1&amp;key2=value2..."</p> 
     */
    inline void SetTags(const Aws::String& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Metadata which can be used to manage the topic rule.</p>  <p>For URI
     * Request parameters use format: ...key1=value1&amp;key2=value2...</p> <p>For the
     * CLI command-line parameter use format: --tags
     * "key1=value1&amp;key2=value2..."</p> <p>For the cli-input-json file use format:
     * "tags": "key1=value1&amp;key2=value2..."</p> 
     */
    inline void SetTags(Aws::String&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Metadata which can be used to manage the topic rule.</p>  <p>For URI
     * Request parameters use format: ...key1=value1&amp;key2=value2...</p> <p>For the
     * CLI command-line parameter use format: --tags
     * "key1=value1&amp;key2=value2..."</p> <p>For the cli-input-json file use format:
     * "tags": "key1=value1&amp;key2=value2..."</p> 
     */
    inline void SetTags(const char* value) { m_tagsHasBeenSet = true; m_tags.assign(value); }

    /**
     * <p>Metadata which can be used to manage the topic rule.</p>  <p>For URI
     * Request parameters use format: ...key1=value1&amp;key2=value2...</p> <p>For the
     * CLI command-line parameter use format: --tags
     * "key1=value1&amp;key2=value2..."</p> <p>For the cli-input-json file use format:
     * "tags": "key1=value1&amp;key2=value2..."</p> 
     */
    inline CreateTopicRuleRequest& WithTags(const Aws::String& value) { SetTags(value); return *this;}

    /**
     * <p>Metadata which can be used to manage the topic rule.</p>  <p>For URI
     * Request parameters use format: ...key1=value1&amp;key2=value2...</p> <p>For the
     * CLI command-line parameter use format: --tags
     * "key1=value1&amp;key2=value2..."</p> <p>For the cli-input-json file use format:
     * "tags": "key1=value1&amp;key2=value2..."</p> 
     */
    inline CreateTopicRuleRequest& WithTags(Aws::String&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Metadata which can be used to manage the topic rule.</p>  <p>For URI
     * Request parameters use format: ...key1=value1&amp;key2=value2...</p> <p>For the
     * CLI command-line parameter use format: --tags
     * "key1=value1&amp;key2=value2..."</p> <p>For the cli-input-json file use format:
     * "tags": "key1=value1&amp;key2=value2..."</p> 
     */
    inline CreateTopicRuleRequest& WithTags(const char* value) { SetTags(value); return *this;}

  private:

    Aws::String m_ruleName;
    bool m_ruleNameHasBeenSet = false;

    TopicRulePayload m_topicRulePayload;
    bool m_topicRulePayloadHasBeenSet = false;

    Aws::String m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
