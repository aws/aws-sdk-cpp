﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class JobProcessDetails
  {
  public:
    AWS_IOT_API JobProcessDetails();
    AWS_IOT_API JobProcessDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API JobProcessDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The target devices to which the job execution is being rolled out. This value
     * will be null after the job execution has finished rolling out to all the target
     * devices.</p>
     */
    inline const Aws::Vector<Aws::String>& GetProcessingTargets() const{ return m_processingTargets; }
    inline bool ProcessingTargetsHasBeenSet() const { return m_processingTargetsHasBeenSet; }
    inline void SetProcessingTargets(const Aws::Vector<Aws::String>& value) { m_processingTargetsHasBeenSet = true; m_processingTargets = value; }
    inline void SetProcessingTargets(Aws::Vector<Aws::String>&& value) { m_processingTargetsHasBeenSet = true; m_processingTargets = std::move(value); }
    inline JobProcessDetails& WithProcessingTargets(const Aws::Vector<Aws::String>& value) { SetProcessingTargets(value); return *this;}
    inline JobProcessDetails& WithProcessingTargets(Aws::Vector<Aws::String>&& value) { SetProcessingTargets(std::move(value)); return *this;}
    inline JobProcessDetails& AddProcessingTargets(const Aws::String& value) { m_processingTargetsHasBeenSet = true; m_processingTargets.push_back(value); return *this; }
    inline JobProcessDetails& AddProcessingTargets(Aws::String&& value) { m_processingTargetsHasBeenSet = true; m_processingTargets.push_back(std::move(value)); return *this; }
    inline JobProcessDetails& AddProcessingTargets(const char* value) { m_processingTargetsHasBeenSet = true; m_processingTargets.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of things that cancelled the job.</p>
     */
    inline int GetNumberOfCanceledThings() const{ return m_numberOfCanceledThings; }
    inline bool NumberOfCanceledThingsHasBeenSet() const { return m_numberOfCanceledThingsHasBeenSet; }
    inline void SetNumberOfCanceledThings(int value) { m_numberOfCanceledThingsHasBeenSet = true; m_numberOfCanceledThings = value; }
    inline JobProcessDetails& WithNumberOfCanceledThings(int value) { SetNumberOfCanceledThings(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of things which successfully completed the job.</p>
     */
    inline int GetNumberOfSucceededThings() const{ return m_numberOfSucceededThings; }
    inline bool NumberOfSucceededThingsHasBeenSet() const { return m_numberOfSucceededThingsHasBeenSet; }
    inline void SetNumberOfSucceededThings(int value) { m_numberOfSucceededThingsHasBeenSet = true; m_numberOfSucceededThings = value; }
    inline JobProcessDetails& WithNumberOfSucceededThings(int value) { SetNumberOfSucceededThings(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of things that failed executing the job.</p>
     */
    inline int GetNumberOfFailedThings() const{ return m_numberOfFailedThings; }
    inline bool NumberOfFailedThingsHasBeenSet() const { return m_numberOfFailedThingsHasBeenSet; }
    inline void SetNumberOfFailedThings(int value) { m_numberOfFailedThingsHasBeenSet = true; m_numberOfFailedThings = value; }
    inline JobProcessDetails& WithNumberOfFailedThings(int value) { SetNumberOfFailedThings(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of things that rejected the job.</p>
     */
    inline int GetNumberOfRejectedThings() const{ return m_numberOfRejectedThings; }
    inline bool NumberOfRejectedThingsHasBeenSet() const { return m_numberOfRejectedThingsHasBeenSet; }
    inline void SetNumberOfRejectedThings(int value) { m_numberOfRejectedThingsHasBeenSet = true; m_numberOfRejectedThings = value; }
    inline JobProcessDetails& WithNumberOfRejectedThings(int value) { SetNumberOfRejectedThings(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of things that are awaiting execution of the job.</p>
     */
    inline int GetNumberOfQueuedThings() const{ return m_numberOfQueuedThings; }
    inline bool NumberOfQueuedThingsHasBeenSet() const { return m_numberOfQueuedThingsHasBeenSet; }
    inline void SetNumberOfQueuedThings(int value) { m_numberOfQueuedThingsHasBeenSet = true; m_numberOfQueuedThings = value; }
    inline JobProcessDetails& WithNumberOfQueuedThings(int value) { SetNumberOfQueuedThings(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of things currently executing the job.</p>
     */
    inline int GetNumberOfInProgressThings() const{ return m_numberOfInProgressThings; }
    inline bool NumberOfInProgressThingsHasBeenSet() const { return m_numberOfInProgressThingsHasBeenSet; }
    inline void SetNumberOfInProgressThings(int value) { m_numberOfInProgressThingsHasBeenSet = true; m_numberOfInProgressThings = value; }
    inline JobProcessDetails& WithNumberOfInProgressThings(int value) { SetNumberOfInProgressThings(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of things that are no longer scheduled to execute the job because
     * they have been deleted or have been removed from the group that was a target of
     * the job.</p>
     */
    inline int GetNumberOfRemovedThings() const{ return m_numberOfRemovedThings; }
    inline bool NumberOfRemovedThingsHasBeenSet() const { return m_numberOfRemovedThingsHasBeenSet; }
    inline void SetNumberOfRemovedThings(int value) { m_numberOfRemovedThingsHasBeenSet = true; m_numberOfRemovedThings = value; }
    inline JobProcessDetails& WithNumberOfRemovedThings(int value) { SetNumberOfRemovedThings(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of things whose job execution status is
     * <code>TIMED_OUT</code>.</p>
     */
    inline int GetNumberOfTimedOutThings() const{ return m_numberOfTimedOutThings; }
    inline bool NumberOfTimedOutThingsHasBeenSet() const { return m_numberOfTimedOutThingsHasBeenSet; }
    inline void SetNumberOfTimedOutThings(int value) { m_numberOfTimedOutThingsHasBeenSet = true; m_numberOfTimedOutThings = value; }
    inline JobProcessDetails& WithNumberOfTimedOutThings(int value) { SetNumberOfTimedOutThings(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_processingTargets;
    bool m_processingTargetsHasBeenSet = false;

    int m_numberOfCanceledThings;
    bool m_numberOfCanceledThingsHasBeenSet = false;

    int m_numberOfSucceededThings;
    bool m_numberOfSucceededThingsHasBeenSet = false;

    int m_numberOfFailedThings;
    bool m_numberOfFailedThingsHasBeenSet = false;

    int m_numberOfRejectedThings;
    bool m_numberOfRejectedThingsHasBeenSet = false;

    int m_numberOfQueuedThings;
    bool m_numberOfQueuedThingsHasBeenSet = false;

    int m_numberOfInProgressThings;
    bool m_numberOfInProgressThingsHasBeenSet = false;

    int m_numberOfRemovedThings;
    bool m_numberOfRemovedThingsHasBeenSet = false;

    int m_numberOfTimedOutThings;
    bool m_numberOfTimedOutThingsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
