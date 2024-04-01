/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/deadline/model/AssignedSessionActionDefinition.h>
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
namespace deadline
{
namespace Model
{

  /**
   * <p>The action for a session defined by the session action ID.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/AssignedSessionAction">AWS
   * API Reference</a></p>
   */
  class AssignedSessionAction
  {
  public:
    AWS_DEADLINE_API AssignedSessionAction();
    AWS_DEADLINE_API AssignedSessionAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API AssignedSessionAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The definition of the assigned session action.</p>
     */
    inline const AssignedSessionActionDefinition& GetDefinition() const{ return m_definition; }

    /**
     * <p>The definition of the assigned session action.</p>
     */
    inline bool DefinitionHasBeenSet() const { return m_definitionHasBeenSet; }

    /**
     * <p>The definition of the assigned session action.</p>
     */
    inline void SetDefinition(const AssignedSessionActionDefinition& value) { m_definitionHasBeenSet = true; m_definition = value; }

    /**
     * <p>The definition of the assigned session action.</p>
     */
    inline void SetDefinition(AssignedSessionActionDefinition&& value) { m_definitionHasBeenSet = true; m_definition = std::move(value); }

    /**
     * <p>The definition of the assigned session action.</p>
     */
    inline AssignedSessionAction& WithDefinition(const AssignedSessionActionDefinition& value) { SetDefinition(value); return *this;}

    /**
     * <p>The definition of the assigned session action.</p>
     */
    inline AssignedSessionAction& WithDefinition(AssignedSessionActionDefinition&& value) { SetDefinition(std::move(value)); return *this;}


    /**
     * <p>The session action ID for the assigned session.</p>
     */
    inline const Aws::String& GetSessionActionId() const{ return m_sessionActionId; }

    /**
     * <p>The session action ID for the assigned session.</p>
     */
    inline bool SessionActionIdHasBeenSet() const { return m_sessionActionIdHasBeenSet; }

    /**
     * <p>The session action ID for the assigned session.</p>
     */
    inline void SetSessionActionId(const Aws::String& value) { m_sessionActionIdHasBeenSet = true; m_sessionActionId = value; }

    /**
     * <p>The session action ID for the assigned session.</p>
     */
    inline void SetSessionActionId(Aws::String&& value) { m_sessionActionIdHasBeenSet = true; m_sessionActionId = std::move(value); }

    /**
     * <p>The session action ID for the assigned session.</p>
     */
    inline void SetSessionActionId(const char* value) { m_sessionActionIdHasBeenSet = true; m_sessionActionId.assign(value); }

    /**
     * <p>The session action ID for the assigned session.</p>
     */
    inline AssignedSessionAction& WithSessionActionId(const Aws::String& value) { SetSessionActionId(value); return *this;}

    /**
     * <p>The session action ID for the assigned session.</p>
     */
    inline AssignedSessionAction& WithSessionActionId(Aws::String&& value) { SetSessionActionId(std::move(value)); return *this;}

    /**
     * <p>The session action ID for the assigned session.</p>
     */
    inline AssignedSessionAction& WithSessionActionId(const char* value) { SetSessionActionId(value); return *this;}

  private:

    AssignedSessionActionDefinition m_definition;
    bool m_definitionHasBeenSet = false;

    Aws::String m_sessionActionId;
    bool m_sessionActionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
