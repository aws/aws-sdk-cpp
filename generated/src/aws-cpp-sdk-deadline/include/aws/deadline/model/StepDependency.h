/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/deadline/model/DependencyConsumerResolutionStatus.h>
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
   * <p>The details of step dependency.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/StepDependency">AWS
   * API Reference</a></p>
   */
  class StepDependency
  {
  public:
    AWS_DEADLINE_API StepDependency();
    AWS_DEADLINE_API StepDependency(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API StepDependency& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline StepDependency& WithStepId(const Aws::String& value) { SetStepId(value); return *this;}
    inline StepDependency& WithStepId(Aws::String&& value) { SetStepId(std::move(value)); return *this;}
    inline StepDependency& WithStepId(const char* value) { SetStepId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The step dependency status.</p>
     */
    inline const DependencyConsumerResolutionStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const DependencyConsumerResolutionStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(DependencyConsumerResolutionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline StepDependency& WithStatus(const DependencyConsumerResolutionStatus& value) { SetStatus(value); return *this;}
    inline StepDependency& WithStatus(DependencyConsumerResolutionStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_stepId;
    bool m_stepIdHasBeenSet = false;

    DependencyConsumerResolutionStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
