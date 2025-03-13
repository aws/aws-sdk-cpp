/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
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
namespace CodeCommit
{
namespace Model
{

  /**
   * <p>A trigger failed to run.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/RepositoryTriggerExecutionFailure">AWS
   * API Reference</a></p>
   */
  class RepositoryTriggerExecutionFailure
  {
  public:
    AWS_CODECOMMIT_API RepositoryTriggerExecutionFailure() = default;
    AWS_CODECOMMIT_API RepositoryTriggerExecutionFailure(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API RepositoryTriggerExecutionFailure& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the trigger that did not run.</p>
     */
    inline const Aws::String& GetTrigger() const { return m_trigger; }
    inline bool TriggerHasBeenSet() const { return m_triggerHasBeenSet; }
    template<typename TriggerT = Aws::String>
    void SetTrigger(TriggerT&& value) { m_triggerHasBeenSet = true; m_trigger = std::forward<TriggerT>(value); }
    template<typename TriggerT = Aws::String>
    RepositoryTriggerExecutionFailure& WithTrigger(TriggerT&& value) { SetTrigger(std::forward<TriggerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Message information about the trigger that did not run.</p>
     */
    inline const Aws::String& GetFailureMessage() const { return m_failureMessage; }
    inline bool FailureMessageHasBeenSet() const { return m_failureMessageHasBeenSet; }
    template<typename FailureMessageT = Aws::String>
    void SetFailureMessage(FailureMessageT&& value) { m_failureMessageHasBeenSet = true; m_failureMessage = std::forward<FailureMessageT>(value); }
    template<typename FailureMessageT = Aws::String>
    RepositoryTriggerExecutionFailure& WithFailureMessage(FailureMessageT&& value) { SetFailureMessage(std::forward<FailureMessageT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_trigger;
    bool m_triggerHasBeenSet = false;

    Aws::String m_failureMessage;
    bool m_failureMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
