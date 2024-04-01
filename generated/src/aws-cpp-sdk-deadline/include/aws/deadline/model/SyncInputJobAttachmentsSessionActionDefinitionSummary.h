/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
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
   * <p>The details of a synced job attachment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/SyncInputJobAttachmentsSessionActionDefinitionSummary">AWS
   * API Reference</a></p>
   */
  class SyncInputJobAttachmentsSessionActionDefinitionSummary
  {
  public:
    AWS_DEADLINE_API SyncInputJobAttachmentsSessionActionDefinitionSummary();
    AWS_DEADLINE_API SyncInputJobAttachmentsSessionActionDefinitionSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API SyncInputJobAttachmentsSessionActionDefinitionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The step ID of the step in the job attachment.</p>
     */
    inline const Aws::String& GetStepId() const{ return m_stepId; }

    /**
     * <p>The step ID of the step in the job attachment.</p>
     */
    inline bool StepIdHasBeenSet() const { return m_stepIdHasBeenSet; }

    /**
     * <p>The step ID of the step in the job attachment.</p>
     */
    inline void SetStepId(const Aws::String& value) { m_stepIdHasBeenSet = true; m_stepId = value; }

    /**
     * <p>The step ID of the step in the job attachment.</p>
     */
    inline void SetStepId(Aws::String&& value) { m_stepIdHasBeenSet = true; m_stepId = std::move(value); }

    /**
     * <p>The step ID of the step in the job attachment.</p>
     */
    inline void SetStepId(const char* value) { m_stepIdHasBeenSet = true; m_stepId.assign(value); }

    /**
     * <p>The step ID of the step in the job attachment.</p>
     */
    inline SyncInputJobAttachmentsSessionActionDefinitionSummary& WithStepId(const Aws::String& value) { SetStepId(value); return *this;}

    /**
     * <p>The step ID of the step in the job attachment.</p>
     */
    inline SyncInputJobAttachmentsSessionActionDefinitionSummary& WithStepId(Aws::String&& value) { SetStepId(std::move(value)); return *this;}

    /**
     * <p>The step ID of the step in the job attachment.</p>
     */
    inline SyncInputJobAttachmentsSessionActionDefinitionSummary& WithStepId(const char* value) { SetStepId(value); return *this;}

  private:

    Aws::String m_stepId;
    bool m_stepIdHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
