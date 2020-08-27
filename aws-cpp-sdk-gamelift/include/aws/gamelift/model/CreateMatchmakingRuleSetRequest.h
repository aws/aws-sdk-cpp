/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/GameLiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/gamelift/model/Tag.h>
#include <utility>

namespace Aws
{
namespace GameLift
{
namespace Model
{

  /**
   * <p>Represents the input for a request operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/CreateMatchmakingRuleSetInput">AWS
   * API Reference</a></p>
   */
  class AWS_GAMELIFT_API CreateMatchmakingRuleSetRequest : public GameLiftRequest
  {
  public:
    CreateMatchmakingRuleSetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateMatchmakingRuleSet"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A unique identifier for a matchmaking rule set. A matchmaking configuration
     * identifies the rule set it uses by this name value. Note that the rule set name
     * is different from the optional <code>name</code> field in the rule set body.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A unique identifier for a matchmaking rule set. A matchmaking configuration
     * identifies the rule set it uses by this name value. Note that the rule set name
     * is different from the optional <code>name</code> field in the rule set body.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A unique identifier for a matchmaking rule set. A matchmaking configuration
     * identifies the rule set it uses by this name value. Note that the rule set name
     * is different from the optional <code>name</code> field in the rule set body.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A unique identifier for a matchmaking rule set. A matchmaking configuration
     * identifies the rule set it uses by this name value. Note that the rule set name
     * is different from the optional <code>name</code> field in the rule set body.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A unique identifier for a matchmaking rule set. A matchmaking configuration
     * identifies the rule set it uses by this name value. Note that the rule set name
     * is different from the optional <code>name</code> field in the rule set body.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A unique identifier for a matchmaking rule set. A matchmaking configuration
     * identifies the rule set it uses by this name value. Note that the rule set name
     * is different from the optional <code>name</code> field in the rule set body.</p>
     */
    inline CreateMatchmakingRuleSetRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A unique identifier for a matchmaking rule set. A matchmaking configuration
     * identifies the rule set it uses by this name value. Note that the rule set name
     * is different from the optional <code>name</code> field in the rule set body.</p>
     */
    inline CreateMatchmakingRuleSetRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for a matchmaking rule set. A matchmaking configuration
     * identifies the rule set it uses by this name value. Note that the rule set name
     * is different from the optional <code>name</code> field in the rule set body.</p>
     */
    inline CreateMatchmakingRuleSetRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A collection of matchmaking rules, formatted as a JSON string. Comments are
     * not allowed in JSON, but most elements support a description field.</p>
     */
    inline const Aws::String& GetRuleSetBody() const{ return m_ruleSetBody; }

    /**
     * <p>A collection of matchmaking rules, formatted as a JSON string. Comments are
     * not allowed in JSON, but most elements support a description field.</p>
     */
    inline bool RuleSetBodyHasBeenSet() const { return m_ruleSetBodyHasBeenSet; }

    /**
     * <p>A collection of matchmaking rules, formatted as a JSON string. Comments are
     * not allowed in JSON, but most elements support a description field.</p>
     */
    inline void SetRuleSetBody(const Aws::String& value) { m_ruleSetBodyHasBeenSet = true; m_ruleSetBody = value; }

    /**
     * <p>A collection of matchmaking rules, formatted as a JSON string. Comments are
     * not allowed in JSON, but most elements support a description field.</p>
     */
    inline void SetRuleSetBody(Aws::String&& value) { m_ruleSetBodyHasBeenSet = true; m_ruleSetBody = std::move(value); }

    /**
     * <p>A collection of matchmaking rules, formatted as a JSON string. Comments are
     * not allowed in JSON, but most elements support a description field.</p>
     */
    inline void SetRuleSetBody(const char* value) { m_ruleSetBodyHasBeenSet = true; m_ruleSetBody.assign(value); }

    /**
     * <p>A collection of matchmaking rules, formatted as a JSON string. Comments are
     * not allowed in JSON, but most elements support a description field.</p>
     */
    inline CreateMatchmakingRuleSetRequest& WithRuleSetBody(const Aws::String& value) { SetRuleSetBody(value); return *this;}

    /**
     * <p>A collection of matchmaking rules, formatted as a JSON string. Comments are
     * not allowed in JSON, but most elements support a description field.</p>
     */
    inline CreateMatchmakingRuleSetRequest& WithRuleSetBody(Aws::String&& value) { SetRuleSetBody(std::move(value)); return *this;}

    /**
     * <p>A collection of matchmaking rules, formatted as a JSON string. Comments are
     * not allowed in JSON, but most elements support a description field.</p>
     */
    inline CreateMatchmakingRuleSetRequest& WithRuleSetBody(const char* value) { SetRuleSetBody(value); return *this;}


    /**
     * <p>A list of labels to assign to the new matchmaking rule set resource. Tags are
     * developer-defined key-value pairs. Tagging AWS resources are useful for resource
     * management, access management and cost allocation. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html"> Tagging
     * AWS Resources</a> in the <i>AWS General Reference</i>. Once the resource is
     * created, you can use <a>TagResource</a>, <a>UntagResource</a>, and
     * <a>ListTagsForResource</a> to add, remove, and view tags. The maximum tag limit
     * may be lower than stated. See the AWS General Reference for actual tagging
     * limits.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of labels to assign to the new matchmaking rule set resource. Tags are
     * developer-defined key-value pairs. Tagging AWS resources are useful for resource
     * management, access management and cost allocation. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html"> Tagging
     * AWS Resources</a> in the <i>AWS General Reference</i>. Once the resource is
     * created, you can use <a>TagResource</a>, <a>UntagResource</a>, and
     * <a>ListTagsForResource</a> to add, remove, and view tags. The maximum tag limit
     * may be lower than stated. See the AWS General Reference for actual tagging
     * limits.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of labels to assign to the new matchmaking rule set resource. Tags are
     * developer-defined key-value pairs. Tagging AWS resources are useful for resource
     * management, access management and cost allocation. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html"> Tagging
     * AWS Resources</a> in the <i>AWS General Reference</i>. Once the resource is
     * created, you can use <a>TagResource</a>, <a>UntagResource</a>, and
     * <a>ListTagsForResource</a> to add, remove, and view tags. The maximum tag limit
     * may be lower than stated. See the AWS General Reference for actual tagging
     * limits.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of labels to assign to the new matchmaking rule set resource. Tags are
     * developer-defined key-value pairs. Tagging AWS resources are useful for resource
     * management, access management and cost allocation. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html"> Tagging
     * AWS Resources</a> in the <i>AWS General Reference</i>. Once the resource is
     * created, you can use <a>TagResource</a>, <a>UntagResource</a>, and
     * <a>ListTagsForResource</a> to add, remove, and view tags. The maximum tag limit
     * may be lower than stated. See the AWS General Reference for actual tagging
     * limits.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of labels to assign to the new matchmaking rule set resource. Tags are
     * developer-defined key-value pairs. Tagging AWS resources are useful for resource
     * management, access management and cost allocation. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html"> Tagging
     * AWS Resources</a> in the <i>AWS General Reference</i>. Once the resource is
     * created, you can use <a>TagResource</a>, <a>UntagResource</a>, and
     * <a>ListTagsForResource</a> to add, remove, and view tags. The maximum tag limit
     * may be lower than stated. See the AWS General Reference for actual tagging
     * limits.</p>
     */
    inline CreateMatchmakingRuleSetRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of labels to assign to the new matchmaking rule set resource. Tags are
     * developer-defined key-value pairs. Tagging AWS resources are useful for resource
     * management, access management and cost allocation. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html"> Tagging
     * AWS Resources</a> in the <i>AWS General Reference</i>. Once the resource is
     * created, you can use <a>TagResource</a>, <a>UntagResource</a>, and
     * <a>ListTagsForResource</a> to add, remove, and view tags. The maximum tag limit
     * may be lower than stated. See the AWS General Reference for actual tagging
     * limits.</p>
     */
    inline CreateMatchmakingRuleSetRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of labels to assign to the new matchmaking rule set resource. Tags are
     * developer-defined key-value pairs. Tagging AWS resources are useful for resource
     * management, access management and cost allocation. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html"> Tagging
     * AWS Resources</a> in the <i>AWS General Reference</i>. Once the resource is
     * created, you can use <a>TagResource</a>, <a>UntagResource</a>, and
     * <a>ListTagsForResource</a> to add, remove, and view tags. The maximum tag limit
     * may be lower than stated. See the AWS General Reference for actual tagging
     * limits.</p>
     */
    inline CreateMatchmakingRuleSetRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of labels to assign to the new matchmaking rule set resource. Tags are
     * developer-defined key-value pairs. Tagging AWS resources are useful for resource
     * management, access management and cost allocation. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html"> Tagging
     * AWS Resources</a> in the <i>AWS General Reference</i>. Once the resource is
     * created, you can use <a>TagResource</a>, <a>UntagResource</a>, and
     * <a>ListTagsForResource</a> to add, remove, and view tags. The maximum tag limit
     * may be lower than stated. See the AWS General Reference for actual tagging
     * limits.</p>
     */
    inline CreateMatchmakingRuleSetRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_ruleSetBody;
    bool m_ruleSetBodyHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
