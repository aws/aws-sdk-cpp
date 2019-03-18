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
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>The job process details.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/JobProcessDetails">AWS
   * API Reference</a></p>
   */
  class AWS_IOT_API JobProcessDetails
  {
  public:
    JobProcessDetails();
    JobProcessDetails(Aws::Utils::Json::JsonView jsonValue);
    JobProcessDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The target devices to which the job execution is being rolled out. This value
     * will be null after the job execution has finished rolling out to all the target
     * devices.</p>
     */
    inline const Aws::Vector<Aws::String>& GetProcessingTargets() const{ return m_processingTargets; }

    /**
     * <p>The target devices to which the job execution is being rolled out. This value
     * will be null after the job execution has finished rolling out to all the target
     * devices.</p>
     */
    inline bool ProcessingTargetsHasBeenSet() const { return m_processingTargetsHasBeenSet; }

    /**
     * <p>The target devices to which the job execution is being rolled out. This value
     * will be null after the job execution has finished rolling out to all the target
     * devices.</p>
     */
    inline void SetProcessingTargets(const Aws::Vector<Aws::String>& value) { m_processingTargetsHasBeenSet = true; m_processingTargets = value; }

    /**
     * <p>The target devices to which the job execution is being rolled out. This value
     * will be null after the job execution has finished rolling out to all the target
     * devices.</p>
     */
    inline void SetProcessingTargets(Aws::Vector<Aws::String>&& value) { m_processingTargetsHasBeenSet = true; m_processingTargets = std::move(value); }

    /**
     * <p>The target devices to which the job execution is being rolled out. This value
     * will be null after the job execution has finished rolling out to all the target
     * devices.</p>
     */
    inline JobProcessDetails& WithProcessingTargets(const Aws::Vector<Aws::String>& value) { SetProcessingTargets(value); return *this;}

    /**
     * <p>The target devices to which the job execution is being rolled out. This value
     * will be null after the job execution has finished rolling out to all the target
     * devices.</p>
     */
    inline JobProcessDetails& WithProcessingTargets(Aws::Vector<Aws::String>&& value) { SetProcessingTargets(std::move(value)); return *this;}

    /**
     * <p>The target devices to which the job execution is being rolled out. This value
     * will be null after the job execution has finished rolling out to all the target
     * devices.</p>
     */
    inline JobProcessDetails& AddProcessingTargets(const Aws::String& value) { m_processingTargetsHasBeenSet = true; m_processingTargets.push_back(value); return *this; }

    /**
     * <p>The target devices to which the job execution is being rolled out. This value
     * will be null after the job execution has finished rolling out to all the target
     * devices.</p>
     */
    inline JobProcessDetails& AddProcessingTargets(Aws::String&& value) { m_processingTargetsHasBeenSet = true; m_processingTargets.push_back(std::move(value)); return *this; }

    /**
     * <p>The target devices to which the job execution is being rolled out. This value
     * will be null after the job execution has finished rolling out to all the target
     * devices.</p>
     */
    inline JobProcessDetails& AddProcessingTargets(const char* value) { m_processingTargetsHasBeenSet = true; m_processingTargets.push_back(value); return *this; }


    /**
     * <p>The number of things that cancelled the job.</p>
     */
    inline int GetNumberOfCanceledThings() const{ return m_numberOfCanceledThings; }

    /**
     * <p>The number of things that cancelled the job.</p>
     */
    inline bool NumberOfCanceledThingsHasBeenSet() const { return m_numberOfCanceledThingsHasBeenSet; }

    /**
     * <p>The number of things that cancelled the job.</p>
     */
    inline void SetNumberOfCanceledThings(int value) { m_numberOfCanceledThingsHasBeenSet = true; m_numberOfCanceledThings = value; }

    /**
     * <p>The number of things that cancelled the job.</p>
     */
    inline JobProcessDetails& WithNumberOfCanceledThings(int value) { SetNumberOfCanceledThings(value); return *this;}


    /**
     * <p>The number of things which successfully completed the job.</p>
     */
    inline int GetNumberOfSucceededThings() const{ return m_numberOfSucceededThings; }

    /**
     * <p>The number of things which successfully completed the job.</p>
     */
    inline bool NumberOfSucceededThingsHasBeenSet() const { return m_numberOfSucceededThingsHasBeenSet; }

    /**
     * <p>The number of things which successfully completed the job.</p>
     */
    inline void SetNumberOfSucceededThings(int value) { m_numberOfSucceededThingsHasBeenSet = true; m_numberOfSucceededThings = value; }

    /**
     * <p>The number of things which successfully completed the job.</p>
     */
    inline JobProcessDetails& WithNumberOfSucceededThings(int value) { SetNumberOfSucceededThings(value); return *this;}


    /**
     * <p>The number of things that failed executing the job.</p>
     */
    inline int GetNumberOfFailedThings() const{ return m_numberOfFailedThings; }

    /**
     * <p>The number of things that failed executing the job.</p>
     */
    inline bool NumberOfFailedThingsHasBeenSet() const { return m_numberOfFailedThingsHasBeenSet; }

    /**
     * <p>The number of things that failed executing the job.</p>
     */
    inline void SetNumberOfFailedThings(int value) { m_numberOfFailedThingsHasBeenSet = true; m_numberOfFailedThings = value; }

    /**
     * <p>The number of things that failed executing the job.</p>
     */
    inline JobProcessDetails& WithNumberOfFailedThings(int value) { SetNumberOfFailedThings(value); return *this;}


    /**
     * <p>The number of things that rejected the job.</p>
     */
    inline int GetNumberOfRejectedThings() const{ return m_numberOfRejectedThings; }

    /**
     * <p>The number of things that rejected the job.</p>
     */
    inline bool NumberOfRejectedThingsHasBeenSet() const { return m_numberOfRejectedThingsHasBeenSet; }

    /**
     * <p>The number of things that rejected the job.</p>
     */
    inline void SetNumberOfRejectedThings(int value) { m_numberOfRejectedThingsHasBeenSet = true; m_numberOfRejectedThings = value; }

    /**
     * <p>The number of things that rejected the job.</p>
     */
    inline JobProcessDetails& WithNumberOfRejectedThings(int value) { SetNumberOfRejectedThings(value); return *this;}


    /**
     * <p>The number of things that are awaiting execution of the job.</p>
     */
    inline int GetNumberOfQueuedThings() const{ return m_numberOfQueuedThings; }

    /**
     * <p>The number of things that are awaiting execution of the job.</p>
     */
    inline bool NumberOfQueuedThingsHasBeenSet() const { return m_numberOfQueuedThingsHasBeenSet; }

    /**
     * <p>The number of things that are awaiting execution of the job.</p>
     */
    inline void SetNumberOfQueuedThings(int value) { m_numberOfQueuedThingsHasBeenSet = true; m_numberOfQueuedThings = value; }

    /**
     * <p>The number of things that are awaiting execution of the job.</p>
     */
    inline JobProcessDetails& WithNumberOfQueuedThings(int value) { SetNumberOfQueuedThings(value); return *this;}


    /**
     * <p>The number of things currently executing the job.</p>
     */
    inline int GetNumberOfInProgressThings() const{ return m_numberOfInProgressThings; }

    /**
     * <p>The number of things currently executing the job.</p>
     */
    inline bool NumberOfInProgressThingsHasBeenSet() const { return m_numberOfInProgressThingsHasBeenSet; }

    /**
     * <p>The number of things currently executing the job.</p>
     */
    inline void SetNumberOfInProgressThings(int value) { m_numberOfInProgressThingsHasBeenSet = true; m_numberOfInProgressThings = value; }

    /**
     * <p>The number of things currently executing the job.</p>
     */
    inline JobProcessDetails& WithNumberOfInProgressThings(int value) { SetNumberOfInProgressThings(value); return *this;}


    /**
     * <p>The number of things that are no longer scheduled to execute the job because
     * they have been deleted or have been removed from the group that was a target of
     * the job.</p>
     */
    inline int GetNumberOfRemovedThings() const{ return m_numberOfRemovedThings; }

    /**
     * <p>The number of things that are no longer scheduled to execute the job because
     * they have been deleted or have been removed from the group that was a target of
     * the job.</p>
     */
    inline bool NumberOfRemovedThingsHasBeenSet() const { return m_numberOfRemovedThingsHasBeenSet; }

    /**
     * <p>The number of things that are no longer scheduled to execute the job because
     * they have been deleted or have been removed from the group that was a target of
     * the job.</p>
     */
    inline void SetNumberOfRemovedThings(int value) { m_numberOfRemovedThingsHasBeenSet = true; m_numberOfRemovedThings = value; }

    /**
     * <p>The number of things that are no longer scheduled to execute the job because
     * they have been deleted or have been removed from the group that was a target of
     * the job.</p>
     */
    inline JobProcessDetails& WithNumberOfRemovedThings(int value) { SetNumberOfRemovedThings(value); return *this;}


    /**
     * <p>The number of things whose job execution status is
     * <code>TIMED_OUT</code>.</p>
     */
    inline int GetNumberOfTimedOutThings() const{ return m_numberOfTimedOutThings; }

    /**
     * <p>The number of things whose job execution status is
     * <code>TIMED_OUT</code>.</p>
     */
    inline bool NumberOfTimedOutThingsHasBeenSet() const { return m_numberOfTimedOutThingsHasBeenSet; }

    /**
     * <p>The number of things whose job execution status is
     * <code>TIMED_OUT</code>.</p>
     */
    inline void SetNumberOfTimedOutThings(int value) { m_numberOfTimedOutThingsHasBeenSet = true; m_numberOfTimedOutThings = value; }

    /**
     * <p>The number of things whose job execution status is
     * <code>TIMED_OUT</code>.</p>
     */
    inline JobProcessDetails& WithNumberOfTimedOutThings(int value) { SetNumberOfTimedOutThings(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_processingTargets;
    bool m_processingTargetsHasBeenSet;

    int m_numberOfCanceledThings;
    bool m_numberOfCanceledThingsHasBeenSet;

    int m_numberOfSucceededThings;
    bool m_numberOfSucceededThingsHasBeenSet;

    int m_numberOfFailedThings;
    bool m_numberOfFailedThingsHasBeenSet;

    int m_numberOfRejectedThings;
    bool m_numberOfRejectedThingsHasBeenSet;

    int m_numberOfQueuedThings;
    bool m_numberOfQueuedThingsHasBeenSet;

    int m_numberOfInProgressThings;
    bool m_numberOfInProgressThingsHasBeenSet;

    int m_numberOfRemovedThings;
    bool m_numberOfRemovedThingsHasBeenSet;

    int m_numberOfTimedOutThings;
    bool m_numberOfTimedOutThingsHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
