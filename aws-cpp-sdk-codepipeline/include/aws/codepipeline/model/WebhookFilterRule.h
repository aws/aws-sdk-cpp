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
  class AWS_CODEPIPELINE_API WebhookFilterRule
  {
  public:
    WebhookFilterRule();
    WebhookFilterRule(Aws::Utils::Json::JsonView jsonValue);
    WebhookFilterRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A JsonPath expression that will be applied to the body/payload of the
     * webhook. The value selected by the JsonPath expression must match the value
     * specified in the <code>MatchEquals</code> field, otherwise the request will be
     * ignored. For more information about JsonPath expressions, see <a
     * href="https://github.com/json-path/JsonPath">Java JsonPath implementation</a> in
     * GitHub.</p>
     */
    inline const Aws::String& GetJsonPath() const{ return m_jsonPath; }

    /**
     * <p>A JsonPath expression that will be applied to the body/payload of the
     * webhook. The value selected by the JsonPath expression must match the value
     * specified in the <code>MatchEquals</code> field, otherwise the request will be
     * ignored. For more information about JsonPath expressions, see <a
     * href="https://github.com/json-path/JsonPath">Java JsonPath implementation</a> in
     * GitHub.</p>
     */
    inline bool JsonPathHasBeenSet() const { return m_jsonPathHasBeenSet; }

    /**
     * <p>A JsonPath expression that will be applied to the body/payload of the
     * webhook. The value selected by the JsonPath expression must match the value
     * specified in the <code>MatchEquals</code> field, otherwise the request will be
     * ignored. For more information about JsonPath expressions, see <a
     * href="https://github.com/json-path/JsonPath">Java JsonPath implementation</a> in
     * GitHub.</p>
     */
    inline void SetJsonPath(const Aws::String& value) { m_jsonPathHasBeenSet = true; m_jsonPath = value; }

    /**
     * <p>A JsonPath expression that will be applied to the body/payload of the
     * webhook. The value selected by the JsonPath expression must match the value
     * specified in the <code>MatchEquals</code> field, otherwise the request will be
     * ignored. For more information about JsonPath expressions, see <a
     * href="https://github.com/json-path/JsonPath">Java JsonPath implementation</a> in
     * GitHub.</p>
     */
    inline void SetJsonPath(Aws::String&& value) { m_jsonPathHasBeenSet = true; m_jsonPath = std::move(value); }

    /**
     * <p>A JsonPath expression that will be applied to the body/payload of the
     * webhook. The value selected by the JsonPath expression must match the value
     * specified in the <code>MatchEquals</code> field, otherwise the request will be
     * ignored. For more information about JsonPath expressions, see <a
     * href="https://github.com/json-path/JsonPath">Java JsonPath implementation</a> in
     * GitHub.</p>
     */
    inline void SetJsonPath(const char* value) { m_jsonPathHasBeenSet = true; m_jsonPath.assign(value); }

    /**
     * <p>A JsonPath expression that will be applied to the body/payload of the
     * webhook. The value selected by the JsonPath expression must match the value
     * specified in the <code>MatchEquals</code> field, otherwise the request will be
     * ignored. For more information about JsonPath expressions, see <a
     * href="https://github.com/json-path/JsonPath">Java JsonPath implementation</a> in
     * GitHub.</p>
     */
    inline WebhookFilterRule& WithJsonPath(const Aws::String& value) { SetJsonPath(value); return *this;}

    /**
     * <p>A JsonPath expression that will be applied to the body/payload of the
     * webhook. The value selected by the JsonPath expression must match the value
     * specified in the <code>MatchEquals</code> field, otherwise the request will be
     * ignored. For more information about JsonPath expressions, see <a
     * href="https://github.com/json-path/JsonPath">Java JsonPath implementation</a> in
     * GitHub.</p>
     */
    inline WebhookFilterRule& WithJsonPath(Aws::String&& value) { SetJsonPath(std::move(value)); return *this;}

    /**
     * <p>A JsonPath expression that will be applied to the body/payload of the
     * webhook. The value selected by the JsonPath expression must match the value
     * specified in the <code>MatchEquals</code> field, otherwise the request will be
     * ignored. For more information about JsonPath expressions, see <a
     * href="https://github.com/json-path/JsonPath">Java JsonPath implementation</a> in
     * GitHub.</p>
     */
    inline WebhookFilterRule& WithJsonPath(const char* value) { SetJsonPath(value); return *this;}


    /**
     * <p>The value selected by the <code>JsonPath</code> expression must match what is
     * supplied in the <code>MatchEquals</code> field, otherwise the request will be
     * ignored. Properties from the target action configuration can be included as
     * placeholders in this value by surrounding the action configuration key with
     * curly braces. For example, if the value supplied here is "refs/heads/{Branch}"
     * and the target action has an action configuration property called "Branch" with
     * a value of "master", the <code>MatchEquals</code> value will be evaluated as
     * "refs/heads/master". For a list of action configuration properties for built-in
     * action types, see <a
     * href="https://docs.aws.amazon.com/codepipeline/latest/userguide/reference-pipeline-structure.html#action-requirements">Pipeline
     * Structure Reference Action Requirements</a>.</p>
     */
    inline const Aws::String& GetMatchEquals() const{ return m_matchEquals; }

    /**
     * <p>The value selected by the <code>JsonPath</code> expression must match what is
     * supplied in the <code>MatchEquals</code> field, otherwise the request will be
     * ignored. Properties from the target action configuration can be included as
     * placeholders in this value by surrounding the action configuration key with
     * curly braces. For example, if the value supplied here is "refs/heads/{Branch}"
     * and the target action has an action configuration property called "Branch" with
     * a value of "master", the <code>MatchEquals</code> value will be evaluated as
     * "refs/heads/master". For a list of action configuration properties for built-in
     * action types, see <a
     * href="https://docs.aws.amazon.com/codepipeline/latest/userguide/reference-pipeline-structure.html#action-requirements">Pipeline
     * Structure Reference Action Requirements</a>.</p>
     */
    inline bool MatchEqualsHasBeenSet() const { return m_matchEqualsHasBeenSet; }

    /**
     * <p>The value selected by the <code>JsonPath</code> expression must match what is
     * supplied in the <code>MatchEquals</code> field, otherwise the request will be
     * ignored. Properties from the target action configuration can be included as
     * placeholders in this value by surrounding the action configuration key with
     * curly braces. For example, if the value supplied here is "refs/heads/{Branch}"
     * and the target action has an action configuration property called "Branch" with
     * a value of "master", the <code>MatchEquals</code> value will be evaluated as
     * "refs/heads/master". For a list of action configuration properties for built-in
     * action types, see <a
     * href="https://docs.aws.amazon.com/codepipeline/latest/userguide/reference-pipeline-structure.html#action-requirements">Pipeline
     * Structure Reference Action Requirements</a>.</p>
     */
    inline void SetMatchEquals(const Aws::String& value) { m_matchEqualsHasBeenSet = true; m_matchEquals = value; }

    /**
     * <p>The value selected by the <code>JsonPath</code> expression must match what is
     * supplied in the <code>MatchEquals</code> field, otherwise the request will be
     * ignored. Properties from the target action configuration can be included as
     * placeholders in this value by surrounding the action configuration key with
     * curly braces. For example, if the value supplied here is "refs/heads/{Branch}"
     * and the target action has an action configuration property called "Branch" with
     * a value of "master", the <code>MatchEquals</code> value will be evaluated as
     * "refs/heads/master". For a list of action configuration properties for built-in
     * action types, see <a
     * href="https://docs.aws.amazon.com/codepipeline/latest/userguide/reference-pipeline-structure.html#action-requirements">Pipeline
     * Structure Reference Action Requirements</a>.</p>
     */
    inline void SetMatchEquals(Aws::String&& value) { m_matchEqualsHasBeenSet = true; m_matchEquals = std::move(value); }

    /**
     * <p>The value selected by the <code>JsonPath</code> expression must match what is
     * supplied in the <code>MatchEquals</code> field, otherwise the request will be
     * ignored. Properties from the target action configuration can be included as
     * placeholders in this value by surrounding the action configuration key with
     * curly braces. For example, if the value supplied here is "refs/heads/{Branch}"
     * and the target action has an action configuration property called "Branch" with
     * a value of "master", the <code>MatchEquals</code> value will be evaluated as
     * "refs/heads/master". For a list of action configuration properties for built-in
     * action types, see <a
     * href="https://docs.aws.amazon.com/codepipeline/latest/userguide/reference-pipeline-structure.html#action-requirements">Pipeline
     * Structure Reference Action Requirements</a>.</p>
     */
    inline void SetMatchEquals(const char* value) { m_matchEqualsHasBeenSet = true; m_matchEquals.assign(value); }

    /**
     * <p>The value selected by the <code>JsonPath</code> expression must match what is
     * supplied in the <code>MatchEquals</code> field, otherwise the request will be
     * ignored. Properties from the target action configuration can be included as
     * placeholders in this value by surrounding the action configuration key with
     * curly braces. For example, if the value supplied here is "refs/heads/{Branch}"
     * and the target action has an action configuration property called "Branch" with
     * a value of "master", the <code>MatchEquals</code> value will be evaluated as
     * "refs/heads/master". For a list of action configuration properties for built-in
     * action types, see <a
     * href="https://docs.aws.amazon.com/codepipeline/latest/userguide/reference-pipeline-structure.html#action-requirements">Pipeline
     * Structure Reference Action Requirements</a>.</p>
     */
    inline WebhookFilterRule& WithMatchEquals(const Aws::String& value) { SetMatchEquals(value); return *this;}

    /**
     * <p>The value selected by the <code>JsonPath</code> expression must match what is
     * supplied in the <code>MatchEquals</code> field, otherwise the request will be
     * ignored. Properties from the target action configuration can be included as
     * placeholders in this value by surrounding the action configuration key with
     * curly braces. For example, if the value supplied here is "refs/heads/{Branch}"
     * and the target action has an action configuration property called "Branch" with
     * a value of "master", the <code>MatchEquals</code> value will be evaluated as
     * "refs/heads/master". For a list of action configuration properties for built-in
     * action types, see <a
     * href="https://docs.aws.amazon.com/codepipeline/latest/userguide/reference-pipeline-structure.html#action-requirements">Pipeline
     * Structure Reference Action Requirements</a>.</p>
     */
    inline WebhookFilterRule& WithMatchEquals(Aws::String&& value) { SetMatchEquals(std::move(value)); return *this;}

    /**
     * <p>The value selected by the <code>JsonPath</code> expression must match what is
     * supplied in the <code>MatchEquals</code> field, otherwise the request will be
     * ignored. Properties from the target action configuration can be included as
     * placeholders in this value by surrounding the action configuration key with
     * curly braces. For example, if the value supplied here is "refs/heads/{Branch}"
     * and the target action has an action configuration property called "Branch" with
     * a value of "master", the <code>MatchEquals</code> value will be evaluated as
     * "refs/heads/master". For a list of action configuration properties for built-in
     * action types, see <a
     * href="https://docs.aws.amazon.com/codepipeline/latest/userguide/reference-pipeline-structure.html#action-requirements">Pipeline
     * Structure Reference Action Requirements</a>.</p>
     */
    inline WebhookFilterRule& WithMatchEquals(const char* value) { SetMatchEquals(value); return *this;}

  private:

    Aws::String m_jsonPath;
    bool m_jsonPathHasBeenSet;

    Aws::String m_matchEquals;
    bool m_matchEqualsHasBeenSet;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
