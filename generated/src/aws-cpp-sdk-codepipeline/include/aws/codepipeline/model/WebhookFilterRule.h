/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace CodePipeline
{
namespace Model
{

  /**
   * <p>The event criteria that specify when a webhook notification is sent to your
   * URL.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/WebhookFilterRule">AWS
   * API Reference</a></p>
   */
  class WebhookFilterRule
  {
  public:
    AWS_CODEPIPELINE_API WebhookFilterRule();
    AWS_CODEPIPELINE_API WebhookFilterRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API WebhookFilterRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A JsonPath expression that is applied to the body/payload of the webhook. The
     * value selected by the JsonPath expression must match the value specified in the
     * <code>MatchEquals</code> field. Otherwise, the request is ignored. For more
     * information, see <a href="https://github.com/json-path/JsonPath">Java JsonPath
     * implementation</a> in GitHub.</p>
     */
    inline const Aws::String& GetJsonPath() const{ return m_jsonPath; }

    /**
     * <p>A JsonPath expression that is applied to the body/payload of the webhook. The
     * value selected by the JsonPath expression must match the value specified in the
     * <code>MatchEquals</code> field. Otherwise, the request is ignored. For more
     * information, see <a href="https://github.com/json-path/JsonPath">Java JsonPath
     * implementation</a> in GitHub.</p>
     */
    inline bool JsonPathHasBeenSet() const { return m_jsonPathHasBeenSet; }

    /**
     * <p>A JsonPath expression that is applied to the body/payload of the webhook. The
     * value selected by the JsonPath expression must match the value specified in the
     * <code>MatchEquals</code> field. Otherwise, the request is ignored. For more
     * information, see <a href="https://github.com/json-path/JsonPath">Java JsonPath
     * implementation</a> in GitHub.</p>
     */
    inline void SetJsonPath(const Aws::String& value) { m_jsonPathHasBeenSet = true; m_jsonPath = value; }

    /**
     * <p>A JsonPath expression that is applied to the body/payload of the webhook. The
     * value selected by the JsonPath expression must match the value specified in the
     * <code>MatchEquals</code> field. Otherwise, the request is ignored. For more
     * information, see <a href="https://github.com/json-path/JsonPath">Java JsonPath
     * implementation</a> in GitHub.</p>
     */
    inline void SetJsonPath(Aws::String&& value) { m_jsonPathHasBeenSet = true; m_jsonPath = std::move(value); }

    /**
     * <p>A JsonPath expression that is applied to the body/payload of the webhook. The
     * value selected by the JsonPath expression must match the value specified in the
     * <code>MatchEquals</code> field. Otherwise, the request is ignored. For more
     * information, see <a href="https://github.com/json-path/JsonPath">Java JsonPath
     * implementation</a> in GitHub.</p>
     */
    inline void SetJsonPath(const char* value) { m_jsonPathHasBeenSet = true; m_jsonPath.assign(value); }

    /**
     * <p>A JsonPath expression that is applied to the body/payload of the webhook. The
     * value selected by the JsonPath expression must match the value specified in the
     * <code>MatchEquals</code> field. Otherwise, the request is ignored. For more
     * information, see <a href="https://github.com/json-path/JsonPath">Java JsonPath
     * implementation</a> in GitHub.</p>
     */
    inline WebhookFilterRule& WithJsonPath(const Aws::String& value) { SetJsonPath(value); return *this;}

    /**
     * <p>A JsonPath expression that is applied to the body/payload of the webhook. The
     * value selected by the JsonPath expression must match the value specified in the
     * <code>MatchEquals</code> field. Otherwise, the request is ignored. For more
     * information, see <a href="https://github.com/json-path/JsonPath">Java JsonPath
     * implementation</a> in GitHub.</p>
     */
    inline WebhookFilterRule& WithJsonPath(Aws::String&& value) { SetJsonPath(std::move(value)); return *this;}

    /**
     * <p>A JsonPath expression that is applied to the body/payload of the webhook. The
     * value selected by the JsonPath expression must match the value specified in the
     * <code>MatchEquals</code> field. Otherwise, the request is ignored. For more
     * information, see <a href="https://github.com/json-path/JsonPath">Java JsonPath
     * implementation</a> in GitHub.</p>
     */
    inline WebhookFilterRule& WithJsonPath(const char* value) { SetJsonPath(value); return *this;}


    /**
     * <p>The value selected by the <code>JsonPath</code> expression must match what is
     * supplied in the <code>MatchEquals</code> field. Otherwise, the request is
     * ignored. Properties from the target action configuration can be included as
     * placeholders in this value by surrounding the action configuration key with
     * curly brackets. For example, if the value supplied here is "refs/heads/{Branch}"
     * and the target action has an action configuration property called "Branch" with
     * a value of "master", the <code>MatchEquals</code> value is evaluated as
     * "refs/heads/master". For a list of action configuration properties for built-in
     * action types, see <a
     * href="https://docs.aws.amazon.com/codepipeline/latest/userguide/reference-pipeline-structure.html#action-requirements">Pipeline
     * Structure Reference Action Requirements</a>.</p>
     */
    inline const Aws::String& GetMatchEquals() const{ return m_matchEquals; }

    /**
     * <p>The value selected by the <code>JsonPath</code> expression must match what is
     * supplied in the <code>MatchEquals</code> field. Otherwise, the request is
     * ignored. Properties from the target action configuration can be included as
     * placeholders in this value by surrounding the action configuration key with
     * curly brackets. For example, if the value supplied here is "refs/heads/{Branch}"
     * and the target action has an action configuration property called "Branch" with
     * a value of "master", the <code>MatchEquals</code> value is evaluated as
     * "refs/heads/master". For a list of action configuration properties for built-in
     * action types, see <a
     * href="https://docs.aws.amazon.com/codepipeline/latest/userguide/reference-pipeline-structure.html#action-requirements">Pipeline
     * Structure Reference Action Requirements</a>.</p>
     */
    inline bool MatchEqualsHasBeenSet() const { return m_matchEqualsHasBeenSet; }

    /**
     * <p>The value selected by the <code>JsonPath</code> expression must match what is
     * supplied in the <code>MatchEquals</code> field. Otherwise, the request is
     * ignored. Properties from the target action configuration can be included as
     * placeholders in this value by surrounding the action configuration key with
     * curly brackets. For example, if the value supplied here is "refs/heads/{Branch}"
     * and the target action has an action configuration property called "Branch" with
     * a value of "master", the <code>MatchEquals</code> value is evaluated as
     * "refs/heads/master". For a list of action configuration properties for built-in
     * action types, see <a
     * href="https://docs.aws.amazon.com/codepipeline/latest/userguide/reference-pipeline-structure.html#action-requirements">Pipeline
     * Structure Reference Action Requirements</a>.</p>
     */
    inline void SetMatchEquals(const Aws::String& value) { m_matchEqualsHasBeenSet = true; m_matchEquals = value; }

    /**
     * <p>The value selected by the <code>JsonPath</code> expression must match what is
     * supplied in the <code>MatchEquals</code> field. Otherwise, the request is
     * ignored. Properties from the target action configuration can be included as
     * placeholders in this value by surrounding the action configuration key with
     * curly brackets. For example, if the value supplied here is "refs/heads/{Branch}"
     * and the target action has an action configuration property called "Branch" with
     * a value of "master", the <code>MatchEquals</code> value is evaluated as
     * "refs/heads/master". For a list of action configuration properties for built-in
     * action types, see <a
     * href="https://docs.aws.amazon.com/codepipeline/latest/userguide/reference-pipeline-structure.html#action-requirements">Pipeline
     * Structure Reference Action Requirements</a>.</p>
     */
    inline void SetMatchEquals(Aws::String&& value) { m_matchEqualsHasBeenSet = true; m_matchEquals = std::move(value); }

    /**
     * <p>The value selected by the <code>JsonPath</code> expression must match what is
     * supplied in the <code>MatchEquals</code> field. Otherwise, the request is
     * ignored. Properties from the target action configuration can be included as
     * placeholders in this value by surrounding the action configuration key with
     * curly brackets. For example, if the value supplied here is "refs/heads/{Branch}"
     * and the target action has an action configuration property called "Branch" with
     * a value of "master", the <code>MatchEquals</code> value is evaluated as
     * "refs/heads/master". For a list of action configuration properties for built-in
     * action types, see <a
     * href="https://docs.aws.amazon.com/codepipeline/latest/userguide/reference-pipeline-structure.html#action-requirements">Pipeline
     * Structure Reference Action Requirements</a>.</p>
     */
    inline void SetMatchEquals(const char* value) { m_matchEqualsHasBeenSet = true; m_matchEquals.assign(value); }

    /**
     * <p>The value selected by the <code>JsonPath</code> expression must match what is
     * supplied in the <code>MatchEquals</code> field. Otherwise, the request is
     * ignored. Properties from the target action configuration can be included as
     * placeholders in this value by surrounding the action configuration key with
     * curly brackets. For example, if the value supplied here is "refs/heads/{Branch}"
     * and the target action has an action configuration property called "Branch" with
     * a value of "master", the <code>MatchEquals</code> value is evaluated as
     * "refs/heads/master". For a list of action configuration properties for built-in
     * action types, see <a
     * href="https://docs.aws.amazon.com/codepipeline/latest/userguide/reference-pipeline-structure.html#action-requirements">Pipeline
     * Structure Reference Action Requirements</a>.</p>
     */
    inline WebhookFilterRule& WithMatchEquals(const Aws::String& value) { SetMatchEquals(value); return *this;}

    /**
     * <p>The value selected by the <code>JsonPath</code> expression must match what is
     * supplied in the <code>MatchEquals</code> field. Otherwise, the request is
     * ignored. Properties from the target action configuration can be included as
     * placeholders in this value by surrounding the action configuration key with
     * curly brackets. For example, if the value supplied here is "refs/heads/{Branch}"
     * and the target action has an action configuration property called "Branch" with
     * a value of "master", the <code>MatchEquals</code> value is evaluated as
     * "refs/heads/master". For a list of action configuration properties for built-in
     * action types, see <a
     * href="https://docs.aws.amazon.com/codepipeline/latest/userguide/reference-pipeline-structure.html#action-requirements">Pipeline
     * Structure Reference Action Requirements</a>.</p>
     */
    inline WebhookFilterRule& WithMatchEquals(Aws::String&& value) { SetMatchEquals(std::move(value)); return *this;}

    /**
     * <p>The value selected by the <code>JsonPath</code> expression must match what is
     * supplied in the <code>MatchEquals</code> field. Otherwise, the request is
     * ignored. Properties from the target action configuration can be included as
     * placeholders in this value by surrounding the action configuration key with
     * curly brackets. For example, if the value supplied here is "refs/heads/{Branch}"
     * and the target action has an action configuration property called "Branch" with
     * a value of "master", the <code>MatchEquals</code> value is evaluated as
     * "refs/heads/master". For a list of action configuration properties for built-in
     * action types, see <a
     * href="https://docs.aws.amazon.com/codepipeline/latest/userguide/reference-pipeline-structure.html#action-requirements">Pipeline
     * Structure Reference Action Requirements</a>.</p>
     */
    inline WebhookFilterRule& WithMatchEquals(const char* value) { SetMatchEquals(value); return *this;}

  private:

    Aws::String m_jsonPath;
    bool m_jsonPathHasBeenSet = false;

    Aws::String m_matchEquals;
    bool m_matchEqualsHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
