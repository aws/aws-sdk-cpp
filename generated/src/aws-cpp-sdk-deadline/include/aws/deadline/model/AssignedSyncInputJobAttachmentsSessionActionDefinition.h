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
   * <p>The details for an assigned session action as it relates to a job
   * attachment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/AssignedSyncInputJobAttachmentsSessionActionDefinition">AWS
   * API Reference</a></p>
   */
  class AssignedSyncInputJobAttachmentsSessionActionDefinition
  {
  public:
    AWS_DEADLINE_API AssignedSyncInputJobAttachmentsSessionActionDefinition();
    AWS_DEADLINE_API AssignedSyncInputJobAttachmentsSessionActionDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API AssignedSyncInputJobAttachmentsSessionActionDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The step ID.</p>
     */
    inline const Aws::String& GetStepId() const{ return m_stepId; }
    inline bool StepIdHasBeenSet() const { return m_stepIdHasBeenSet; }
    inline void SetStepId(const Aws::String& value) { m_stepIdHasBeenSet = true; m_stepId = value; }
    inline void SetStepId(Aws::String&& value) { m_stepIdHasBeenSet = true; m_stepId = std::move(value); }
    inline void SetStepId(const char* value) { m_stepIdHasBeenSet = true; m_stepId.assign(value); }
    inline AssignedSyncInputJobAttachmentsSessionActionDefinition& WithStepId(const Aws::String& value) { SetStepId(value); return *this;}
    inline AssignedSyncInputJobAttachmentsSessionActionDefinition& WithStepId(Aws::String&& value) { SetStepId(std::move(value)); return *this;}
    inline AssignedSyncInputJobAttachmentsSessionActionDefinition& WithStepId(const char* value) { SetStepId(value); return *this;}
    ///@}
  private:

    Aws::String m_stepId;
    bool m_stepIdHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
