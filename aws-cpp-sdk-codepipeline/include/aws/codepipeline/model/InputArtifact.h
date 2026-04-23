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
   * <p>Represents information about an artifact to be worked on, such as a test or
   * build artifact.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/InputArtifact">AWS
   * API Reference</a></p>
   */
  class AWS_CODEPIPELINE_API InputArtifact
  {
  public:
    InputArtifact();
    InputArtifact(Aws::Utils::Json::JsonView jsonValue);
    InputArtifact& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the artifact to be worked on, for example, "My App".</p> <p>The
     * input artifact of an action must exactly match the output artifact declared in a
     * preceding action, but the input artifact does not have to be the next action in
     * strict sequence from the action that provided the output artifact. Actions in
     * parallel can declare different output artifacts, which are in turn consumed by
     * different following actions.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the artifact to be worked on, for example, "My App".</p> <p>The
     * input artifact of an action must exactly match the output artifact declared in a
     * preceding action, but the input artifact does not have to be the next action in
     * strict sequence from the action that provided the output artifact. Actions in
     * parallel can declare different output artifacts, which are in turn consumed by
     * different following actions.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the artifact to be worked on, for example, "My App".</p> <p>The
     * input artifact of an action must exactly match the output artifact declared in a
     * preceding action, but the input artifact does not have to be the next action in
     * strict sequence from the action that provided the output artifact. Actions in
     * parallel can declare different output artifacts, which are in turn consumed by
     * different following actions.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the artifact to be worked on, for example, "My App".</p> <p>The
     * input artifact of an action must exactly match the output artifact declared in a
     * preceding action, but the input artifact does not have to be the next action in
     * strict sequence from the action that provided the output artifact. Actions in
     * parallel can declare different output artifacts, which are in turn consumed by
     * different following actions.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the artifact to be worked on, for example, "My App".</p> <p>The
     * input artifact of an action must exactly match the output artifact declared in a
     * preceding action, but the input artifact does not have to be the next action in
     * strict sequence from the action that provided the output artifact. Actions in
     * parallel can declare different output artifacts, which are in turn consumed by
     * different following actions.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the artifact to be worked on, for example, "My App".</p> <p>The
     * input artifact of an action must exactly match the output artifact declared in a
     * preceding action, but the input artifact does not have to be the next action in
     * strict sequence from the action that provided the output artifact. Actions in
     * parallel can declare different output artifacts, which are in turn consumed by
     * different following actions.</p>
     */
    inline InputArtifact& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the artifact to be worked on, for example, "My App".</p> <p>The
     * input artifact of an action must exactly match the output artifact declared in a
     * preceding action, but the input artifact does not have to be the next action in
     * strict sequence from the action that provided the output artifact. Actions in
     * parallel can declare different output artifacts, which are in turn consumed by
     * different following actions.</p>
     */
    inline InputArtifact& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the artifact to be worked on, for example, "My App".</p> <p>The
     * input artifact of an action must exactly match the output artifact declared in a
     * preceding action, but the input artifact does not have to be the next action in
     * strict sequence from the action that provided the output artifact. Actions in
     * parallel can declare different output artifacts, which are in turn consumed by
     * different following actions.</p>
     */
    inline InputArtifact& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
