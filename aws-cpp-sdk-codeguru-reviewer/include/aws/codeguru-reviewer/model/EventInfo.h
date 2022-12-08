/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-reviewer/CodeGuruReviewer_EXPORTS.h>
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
namespace CodeGuruReviewer
{
namespace Model
{

  /**
   * <p>Information about an event. The event might be a push, pull request,
   * scheduled request, or another type of event.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-reviewer-2019-09-19/EventInfo">AWS
   * API Reference</a></p>
   */
  class EventInfo
  {
  public:
    AWS_CODEGURUREVIEWER_API EventInfo();
    AWS_CODEGURUREVIEWER_API EventInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUREVIEWER_API EventInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUREVIEWER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the event. The possible names are <code>pull_request</code>,
     * <code>workflow_dispatch</code>, <code>schedule</code>, and <code>push</code>
     * </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the event. The possible names are <code>pull_request</code>,
     * <code>workflow_dispatch</code>, <code>schedule</code>, and <code>push</code>
     * </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the event. The possible names are <code>pull_request</code>,
     * <code>workflow_dispatch</code>, <code>schedule</code>, and <code>push</code>
     * </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the event. The possible names are <code>pull_request</code>,
     * <code>workflow_dispatch</code>, <code>schedule</code>, and <code>push</code>
     * </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the event. The possible names are <code>pull_request</code>,
     * <code>workflow_dispatch</code>, <code>schedule</code>, and <code>push</code>
     * </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the event. The possible names are <code>pull_request</code>,
     * <code>workflow_dispatch</code>, <code>schedule</code>, and <code>push</code>
     * </p>
     */
    inline EventInfo& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the event. The possible names are <code>pull_request</code>,
     * <code>workflow_dispatch</code>, <code>schedule</code>, and <code>push</code>
     * </p>
     */
    inline EventInfo& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the event. The possible names are <code>pull_request</code>,
     * <code>workflow_dispatch</code>, <code>schedule</code>, and <code>push</code>
     * </p>
     */
    inline EventInfo& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The state of an event. The state might be open, closed, or another state.</p>
     */
    inline const Aws::String& GetState() const{ return m_state; }

    /**
     * <p>The state of an event. The state might be open, closed, or another state.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The state of an event. The state might be open, closed, or another state.</p>
     */
    inline void SetState(const Aws::String& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of an event. The state might be open, closed, or another state.</p>
     */
    inline void SetState(Aws::String&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of an event. The state might be open, closed, or another state.</p>
     */
    inline void SetState(const char* value) { m_stateHasBeenSet = true; m_state.assign(value); }

    /**
     * <p>The state of an event. The state might be open, closed, or another state.</p>
     */
    inline EventInfo& WithState(const Aws::String& value) { SetState(value); return *this;}

    /**
     * <p>The state of an event. The state might be open, closed, or another state.</p>
     */
    inline EventInfo& WithState(Aws::String&& value) { SetState(std::move(value)); return *this;}

    /**
     * <p>The state of an event. The state might be open, closed, or another state.</p>
     */
    inline EventInfo& WithState(const char* value) { SetState(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_state;
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruReviewer
} // namespace Aws
