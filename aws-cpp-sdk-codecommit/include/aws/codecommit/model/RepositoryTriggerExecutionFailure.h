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
  class AWS_CODECOMMIT_API RepositoryTriggerExecutionFailure
  {
  public:
    RepositoryTriggerExecutionFailure();
    RepositoryTriggerExecutionFailure(Aws::Utils::Json::JsonView jsonValue);
    RepositoryTriggerExecutionFailure& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
     * <p>Additional message information about the trigger that did not run.</p>
     */
    inline const Aws::String& GetFailureMessage() const{ return m_failureMessage; }

    /**
     * <p>Additional message information about the trigger that did not run.</p>
     */
    inline bool FailureMessageHasBeenSet() const { return m_failureMessageHasBeenSet; }

    /**
     * <p>Additional message information about the trigger that did not run.</p>
     */
    inline void SetFailureMessage(const Aws::String& value) { m_failureMessageHasBeenSet = true; m_failureMessage = value; }

    /**
     * <p>Additional message information about the trigger that did not run.</p>
     */
    inline void SetFailureMessage(Aws::String&& value) { m_failureMessageHasBeenSet = true; m_failureMessage = std::move(value); }

    /**
     * <p>Additional message information about the trigger that did not run.</p>
     */
    inline void SetFailureMessage(const char* value) { m_failureMessageHasBeenSet = true; m_failureMessage.assign(value); }

    /**
     * <p>Additional message information about the trigger that did not run.</p>
     */
    inline RepositoryTriggerExecutionFailure& WithFailureMessage(const Aws::String& value) { SetFailureMessage(value); return *this;}

    /**
     * <p>Additional message information about the trigger that did not run.</p>
     */
    inline RepositoryTriggerExecutionFailure& WithFailureMessage(Aws::String&& value) { SetFailureMessage(std::move(value)); return *this;}

    /**
     * <p>Additional message information about the trigger that did not run.</p>
     */
    inline RepositoryTriggerExecutionFailure& WithFailureMessage(const char* value) { SetFailureMessage(value); return *this;}

  private:

    Aws::String m_trigger;
    bool m_triggerHasBeenSet;

    Aws::String m_failureMessage;
    bool m_failureMessageHasBeenSet;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
