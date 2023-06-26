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
    AWS_CODECOMMIT_API RepositoryTriggerExecutionFailure();
    AWS_CODECOMMIT_API RepositoryTriggerExecutionFailure(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API RepositoryTriggerExecutionFailure& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the trigger that did not run.</p>
     */
    inline const Aws::String& GetTrigger() const{ return m_trigger; }

    /**
     * <p>The name of the trigger that did not run.</p>
     */
    inline bool TriggerHasBeenSet() const { return m_triggerHasBeenSet; }

    /**
     * <p>The name of the trigger that did not run.</p>
     */
    inline void SetTrigger(const Aws::String& value) { m_triggerHasBeenSet = true; m_trigger = value; }

    /**
     * <p>The name of the trigger that did not run.</p>
     */
    inline void SetTrigger(Aws::String&& value) { m_triggerHasBeenSet = true; m_trigger = std::move(value); }

    /**
     * <p>The name of the trigger that did not run.</p>
     */
    inline void SetTrigger(const char* value) { m_triggerHasBeenSet = true; m_trigger.assign(value); }

    /**
     * <p>The name of the trigger that did not run.</p>
     */
    inline RepositoryTriggerExecutionFailure& WithTrigger(const Aws::String& value) { SetTrigger(value); return *this;}

    /**
     * <p>The name of the trigger that did not run.</p>
     */
    inline RepositoryTriggerExecutionFailure& WithTrigger(Aws::String&& value) { SetTrigger(std::move(value)); return *this;}

    /**
     * <p>The name of the trigger that did not run.</p>
     */
    inline RepositoryTriggerExecutionFailure& WithTrigger(const char* value) { SetTrigger(value); return *this;}


    /**
     * <p>Message information about the trigger that did not run.</p>
     */
    inline const Aws::String& GetFailureMessage() const{ return m_failureMessage; }

    /**
     * <p>Message information about the trigger that did not run.</p>
     */
    inline bool FailureMessageHasBeenSet() const { return m_failureMessageHasBeenSet; }

    /**
     * <p>Message information about the trigger that did not run.</p>
     */
    inline void SetFailureMessage(const Aws::String& value) { m_failureMessageHasBeenSet = true; m_failureMessage = value; }

    /**
     * <p>Message information about the trigger that did not run.</p>
     */
    inline void SetFailureMessage(Aws::String&& value) { m_failureMessageHasBeenSet = true; m_failureMessage = std::move(value); }

    /**
     * <p>Message information about the trigger that did not run.</p>
     */
    inline void SetFailureMessage(const char* value) { m_failureMessageHasBeenSet = true; m_failureMessage.assign(value); }

    /**
     * <p>Message information about the trigger that did not run.</p>
     */
    inline RepositoryTriggerExecutionFailure& WithFailureMessage(const Aws::String& value) { SetFailureMessage(value); return *this;}

    /**
     * <p>Message information about the trigger that did not run.</p>
     */
    inline RepositoryTriggerExecutionFailure& WithFailureMessage(Aws::String&& value) { SetFailureMessage(std::move(value)); return *this;}

    /**
     * <p>Message information about the trigger that did not run.</p>
     */
    inline RepositoryTriggerExecutionFailure& WithFailureMessage(const char* value) { SetFailureMessage(value); return *this;}

  private:

    Aws::String m_trigger;
    bool m_triggerHasBeenSet = false;

    Aws::String m_failureMessage;
    bool m_failureMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
