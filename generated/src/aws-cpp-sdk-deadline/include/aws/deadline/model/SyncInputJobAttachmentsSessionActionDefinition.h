﻿/**
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
   * <p>The job attachment in a session action to sync.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/SyncInputJobAttachmentsSessionActionDefinition">AWS
   * API Reference</a></p>
   */
  class SyncInputJobAttachmentsSessionActionDefinition
  {
  public:
    AWS_DEADLINE_API SyncInputJobAttachmentsSessionActionDefinition() = default;
    AWS_DEADLINE_API SyncInputJobAttachmentsSessionActionDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API SyncInputJobAttachmentsSessionActionDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The step ID for the step in the job attachment.</p>
     */
    inline const Aws::String& GetStepId() const { return m_stepId; }
    inline bool StepIdHasBeenSet() const { return m_stepIdHasBeenSet; }
    template<typename StepIdT = Aws::String>
    void SetStepId(StepIdT&& value) { m_stepIdHasBeenSet = true; m_stepId = std::forward<StepIdT>(value); }
    template<typename StepIdT = Aws::String>
    SyncInputJobAttachmentsSessionActionDefinition& WithStepId(StepIdT&& value) { SetStepId(std::forward<StepIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_stepId;
    bool m_stepIdHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
