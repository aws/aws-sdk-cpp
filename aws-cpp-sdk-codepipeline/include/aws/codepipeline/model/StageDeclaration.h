/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codepipeline/model/BlockerDeclaration.h>
#include <aws/codepipeline/model/ActionDeclaration.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CodePipeline
{
namespace Model
{

  /**
   * <p>Represents information about a stage and its definition.</p>
   */
  class AWS_CODEPIPELINE_API StageDeclaration
  {
  public:
    StageDeclaration();
    StageDeclaration(const Aws::Utils::Json::JsonValue& jsonValue);
    StageDeclaration& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The name of the stage.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the stage.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the stage.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the stage.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the stage.</p>
     */
    inline StageDeclaration& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the stage.</p>
     */
    inline StageDeclaration& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>The name of the stage.</p>
     */
    inline StageDeclaration& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>Reserved for future use.</p>
     */
    inline const Aws::Vector<BlockerDeclaration>& GetBlockers() const{ return m_blockers; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetBlockers(const Aws::Vector<BlockerDeclaration>& value) { m_blockersHasBeenSet = true; m_blockers = value; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetBlockers(Aws::Vector<BlockerDeclaration>&& value) { m_blockersHasBeenSet = true; m_blockers = value; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline StageDeclaration& WithBlockers(const Aws::Vector<BlockerDeclaration>& value) { SetBlockers(value); return *this;}

    /**
     * <p>Reserved for future use.</p>
     */
    inline StageDeclaration& WithBlockers(Aws::Vector<BlockerDeclaration>&& value) { SetBlockers(value); return *this;}

    /**
     * <p>Reserved for future use.</p>
     */
    inline StageDeclaration& AddBlockers(const BlockerDeclaration& value) { m_blockersHasBeenSet = true; m_blockers.push_back(value); return *this; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline StageDeclaration& AddBlockers(BlockerDeclaration&& value) { m_blockersHasBeenSet = true; m_blockers.push_back(value); return *this; }

    /**
     * <p>The actions included in a stage.</p>
     */
    inline const Aws::Vector<ActionDeclaration>& GetActions() const{ return m_actions; }

    /**
     * <p>The actions included in a stage.</p>
     */
    inline void SetActions(const Aws::Vector<ActionDeclaration>& value) { m_actionsHasBeenSet = true; m_actions = value; }

    /**
     * <p>The actions included in a stage.</p>
     */
    inline void SetActions(Aws::Vector<ActionDeclaration>&& value) { m_actionsHasBeenSet = true; m_actions = value; }

    /**
     * <p>The actions included in a stage.</p>
     */
    inline StageDeclaration& WithActions(const Aws::Vector<ActionDeclaration>& value) { SetActions(value); return *this;}

    /**
     * <p>The actions included in a stage.</p>
     */
    inline StageDeclaration& WithActions(Aws::Vector<ActionDeclaration>&& value) { SetActions(value); return *this;}

    /**
     * <p>The actions included in a stage.</p>
     */
    inline StageDeclaration& AddActions(const ActionDeclaration& value) { m_actionsHasBeenSet = true; m_actions.push_back(value); return *this; }

    /**
     * <p>The actions included in a stage.</p>
     */
    inline StageDeclaration& AddActions(ActionDeclaration&& value) { m_actionsHasBeenSet = true; m_actions.push_back(value); return *this; }

  private:
    Aws::String m_name;
    bool m_nameHasBeenSet;
    Aws::Vector<BlockerDeclaration> m_blockers;
    bool m_blockersHasBeenSet;
    Aws::Vector<ActionDeclaration> m_actions;
    bool m_actionsHasBeenSet;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
