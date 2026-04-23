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
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/batch/model/AttemptContainerDetail.h>
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
namespace Batch
{
namespace Model
{

  /**
   * <p>An object representing a job attempt.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/AttemptDetail">AWS
   * API Reference</a></p>
   */
  class AWS_BATCH_API AttemptDetail
  {
  public:
    AttemptDetail();
    AttemptDetail(Aws::Utils::Json::JsonView jsonValue);
    AttemptDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Details about the container in this job attempt.</p>
     */
    inline const AttemptContainerDetail& GetContainer() const{ return m_container; }

    /**
     * <p>Details about the container in this job attempt.</p>
     */
    inline bool ContainerHasBeenSet() const { return m_containerHasBeenSet; }

    /**
     * <p>Details about the container in this job attempt.</p>
     */
    inline void SetContainer(const AttemptContainerDetail& value) { m_containerHasBeenSet = true; m_container = value; }

    /**
     * <p>Details about the container in this job attempt.</p>
     */
    inline void SetContainer(AttemptContainerDetail&& value) { m_containerHasBeenSet = true; m_container = std::move(value); }

    /**
     * <p>Details about the container in this job attempt.</p>
     */
    inline AttemptDetail& WithContainer(const AttemptContainerDetail& value) { SetContainer(value); return *this;}

    /**
     * <p>Details about the container in this job attempt.</p>
     */
    inline AttemptDetail& WithContainer(AttemptContainerDetail&& value) { SetContainer(std::move(value)); return *this;}


    /**
     * <p>The Unix timestamp (in seconds and milliseconds) for when the attempt was
     * started (when the attempt transitioned from the <code>STARTING</code> state to
     * the <code>RUNNING</code> state).</p>
     */
    inline long long GetStartedAt() const{ return m_startedAt; }

    /**
     * <p>The Unix timestamp (in seconds and milliseconds) for when the attempt was
     * started (when the attempt transitioned from the <code>STARTING</code> state to
     * the <code>RUNNING</code> state).</p>
     */
    inline bool StartedAtHasBeenSet() const { return m_startedAtHasBeenSet; }

    /**
     * <p>The Unix timestamp (in seconds and milliseconds) for when the attempt was
     * started (when the attempt transitioned from the <code>STARTING</code> state to
     * the <code>RUNNING</code> state).</p>
     */
    inline void SetStartedAt(long long value) { m_startedAtHasBeenSet = true; m_startedAt = value; }

    /**
     * <p>The Unix timestamp (in seconds and milliseconds) for when the attempt was
     * started (when the attempt transitioned from the <code>STARTING</code> state to
     * the <code>RUNNING</code> state).</p>
     */
    inline AttemptDetail& WithStartedAt(long long value) { SetStartedAt(value); return *this;}


    /**
     * <p>The Unix timestamp (in seconds and milliseconds) for when the attempt was
     * stopped (when the attempt transitioned from the <code>RUNNING</code> state to a
     * terminal state, such as <code>SUCCEEDED</code> or <code>FAILED</code>).</p>
     */
    inline long long GetStoppedAt() const{ return m_stoppedAt; }

    /**
     * <p>The Unix timestamp (in seconds and milliseconds) for when the attempt was
     * stopped (when the attempt transitioned from the <code>RUNNING</code> state to a
     * terminal state, such as <code>SUCCEEDED</code> or <code>FAILED</code>).</p>
     */
    inline bool StoppedAtHasBeenSet() const { return m_stoppedAtHasBeenSet; }

    /**
     * <p>The Unix timestamp (in seconds and milliseconds) for when the attempt was
     * stopped (when the attempt transitioned from the <code>RUNNING</code> state to a
     * terminal state, such as <code>SUCCEEDED</code> or <code>FAILED</code>).</p>
     */
    inline void SetStoppedAt(long long value) { m_stoppedAtHasBeenSet = true; m_stoppedAt = value; }

    /**
     * <p>The Unix timestamp (in seconds and milliseconds) for when the attempt was
     * stopped (when the attempt transitioned from the <code>RUNNING</code> state to a
     * terminal state, such as <code>SUCCEEDED</code> or <code>FAILED</code>).</p>
     */
    inline AttemptDetail& WithStoppedAt(long long value) { SetStoppedAt(value); return *this;}


    /**
     * <p>A short, human-readable string to provide additional details about the
     * current status of the job attempt.</p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }

    /**
     * <p>A short, human-readable string to provide additional details about the
     * current status of the job attempt.</p>
     */
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }

    /**
     * <p>A short, human-readable string to provide additional details about the
     * current status of the job attempt.</p>
     */
    inline void SetStatusReason(const Aws::String& value) { m_statusReasonHasBeenSet = true; m_statusReason = value; }

    /**
     * <p>A short, human-readable string to provide additional details about the
     * current status of the job attempt.</p>
     */
    inline void SetStatusReason(Aws::String&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::move(value); }

    /**
     * <p>A short, human-readable string to provide additional details about the
     * current status of the job attempt.</p>
     */
    inline void SetStatusReason(const char* value) { m_statusReasonHasBeenSet = true; m_statusReason.assign(value); }

    /**
     * <p>A short, human-readable string to provide additional details about the
     * current status of the job attempt.</p>
     */
    inline AttemptDetail& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}

    /**
     * <p>A short, human-readable string to provide additional details about the
     * current status of the job attempt.</p>
     */
    inline AttemptDetail& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}

    /**
     * <p>A short, human-readable string to provide additional details about the
     * current status of the job attempt.</p>
     */
    inline AttemptDetail& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}

  private:

    AttemptContainerDetail m_container;
    bool m_containerHasBeenSet;

    long long m_startedAt;
    bool m_startedAtHasBeenSet;

    long long m_stoppedAt;
    bool m_stoppedAtHasBeenSet;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
