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
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace IoT
{
namespace Model
{

  /**
   */
  class AWS_IOT_API CancelJobExecutionRequest : public IoTRequest
  {
  public:
    CancelJobExecutionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CancelJobExecution"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The ID of the job to be canceled.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>The ID of the job to be canceled.</p>
     */
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }

    /**
     * <p>The ID of the job to be canceled.</p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }

    /**
     * <p>The ID of the job to be canceled.</p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }

    /**
     * <p>The ID of the job to be canceled.</p>
     */
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }

    /**
     * <p>The ID of the job to be canceled.</p>
     */
    inline CancelJobExecutionRequest& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>The ID of the job to be canceled.</p>
     */
    inline CancelJobExecutionRequest& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p>The ID of the job to be canceled.</p>
     */
    inline CancelJobExecutionRequest& WithJobId(const char* value) { SetJobId(value); return *this;}


    /**
     * <p>The name of the thing whose execution of the job will be canceled.</p>
     */
    inline const Aws::String& GetThingName() const{ return m_thingName; }

    /**
     * <p>The name of the thing whose execution of the job will be canceled.</p>
     */
    inline bool ThingNameHasBeenSet() const { return m_thingNameHasBeenSet; }

    /**
     * <p>The name of the thing whose execution of the job will be canceled.</p>
     */
    inline void SetThingName(const Aws::String& value) { m_thingNameHasBeenSet = true; m_thingName = value; }

    /**
     * <p>The name of the thing whose execution of the job will be canceled.</p>
     */
    inline void SetThingName(Aws::String&& value) { m_thingNameHasBeenSet = true; m_thingName = std::move(value); }

    /**
     * <p>The name of the thing whose execution of the job will be canceled.</p>
     */
    inline void SetThingName(const char* value) { m_thingNameHasBeenSet = true; m_thingName.assign(value); }

    /**
     * <p>The name of the thing whose execution of the job will be canceled.</p>
     */
    inline CancelJobExecutionRequest& WithThingName(const Aws::String& value) { SetThingName(value); return *this;}

    /**
     * <p>The name of the thing whose execution of the job will be canceled.</p>
     */
    inline CancelJobExecutionRequest& WithThingName(Aws::String&& value) { SetThingName(std::move(value)); return *this;}

    /**
     * <p>The name of the thing whose execution of the job will be canceled.</p>
     */
    inline CancelJobExecutionRequest& WithThingName(const char* value) { SetThingName(value); return *this;}


    /**
     * <p>(Optional) If <code>true</code> the job execution will be canceled if it has
     * status IN_PROGRESS or QUEUED, otherwise the job execution will be canceled only
     * if it has status QUEUED. If you attempt to cancel a job execution that is
     * IN_PROGRESS, and you do not set <code>force</code> to <code>true</code>, then an
     * <code>InvalidStateTransitionException</code> will be thrown. The default is
     * <code>false</code>.</p> <p>Canceling a job execution which is "IN_PROGRESS",
     * will cause the device to be unable to update the job execution status. Use
     * caution and ensure that the device is able to recover to a valid state.</p>
     */
    inline bool GetForce() const{ return m_force; }

    /**
     * <p>(Optional) If <code>true</code> the job execution will be canceled if it has
     * status IN_PROGRESS or QUEUED, otherwise the job execution will be canceled only
     * if it has status QUEUED. If you attempt to cancel a job execution that is
     * IN_PROGRESS, and you do not set <code>force</code> to <code>true</code>, then an
     * <code>InvalidStateTransitionException</code> will be thrown. The default is
     * <code>false</code>.</p> <p>Canceling a job execution which is "IN_PROGRESS",
     * will cause the device to be unable to update the job execution status. Use
     * caution and ensure that the device is able to recover to a valid state.</p>
     */
    inline bool ForceHasBeenSet() const { return m_forceHasBeenSet; }

    /**
     * <p>(Optional) If <code>true</code> the job execution will be canceled if it has
     * status IN_PROGRESS or QUEUED, otherwise the job execution will be canceled only
     * if it has status QUEUED. If you attempt to cancel a job execution that is
     * IN_PROGRESS, and you do not set <code>force</code> to <code>true</code>, then an
     * <code>InvalidStateTransitionException</code> will be thrown. The default is
     * <code>false</code>.</p> <p>Canceling a job execution which is "IN_PROGRESS",
     * will cause the device to be unable to update the job execution status. Use
     * caution and ensure that the device is able to recover to a valid state.</p>
     */
    inline void SetForce(bool value) { m_forceHasBeenSet = true; m_force = value; }

    /**
     * <p>(Optional) If <code>true</code> the job execution will be canceled if it has
     * status IN_PROGRESS or QUEUED, otherwise the job execution will be canceled only
     * if it has status QUEUED. If you attempt to cancel a job execution that is
     * IN_PROGRESS, and you do not set <code>force</code> to <code>true</code>, then an
     * <code>InvalidStateTransitionException</code> will be thrown. The default is
     * <code>false</code>.</p> <p>Canceling a job execution which is "IN_PROGRESS",
     * will cause the device to be unable to update the job execution status. Use
     * caution and ensure that the device is able to recover to a valid state.</p>
     */
    inline CancelJobExecutionRequest& WithForce(bool value) { SetForce(value); return *this;}


    /**
     * <p>(Optional) The expected current version of the job execution. Each time you
     * update the job execution, its version is incremented. If the version of the job
     * execution stored in Jobs does not match, the update is rejected with a
     * VersionMismatch error, and an ErrorResponse that contains the current job
     * execution status data is returned. (This makes it unnecessary to perform a
     * separate DescribeJobExecution request in order to obtain the job execution
     * status data.)</p>
     */
    inline long long GetExpectedVersion() const{ return m_expectedVersion; }

    /**
     * <p>(Optional) The expected current version of the job execution. Each time you
     * update the job execution, its version is incremented. If the version of the job
     * execution stored in Jobs does not match, the update is rejected with a
     * VersionMismatch error, and an ErrorResponse that contains the current job
     * execution status data is returned. (This makes it unnecessary to perform a
     * separate DescribeJobExecution request in order to obtain the job execution
     * status data.)</p>
     */
    inline bool ExpectedVersionHasBeenSet() const { return m_expectedVersionHasBeenSet; }

    /**
     * <p>(Optional) The expected current version of the job execution. Each time you
     * update the job execution, its version is incremented. If the version of the job
     * execution stored in Jobs does not match, the update is rejected with a
     * VersionMismatch error, and an ErrorResponse that contains the current job
     * execution status data is returned. (This makes it unnecessary to perform a
     * separate DescribeJobExecution request in order to obtain the job execution
     * status data.)</p>
     */
    inline void SetExpectedVersion(long long value) { m_expectedVersionHasBeenSet = true; m_expectedVersion = value; }

    /**
     * <p>(Optional) The expected current version of the job execution. Each time you
     * update the job execution, its version is incremented. If the version of the job
     * execution stored in Jobs does not match, the update is rejected with a
     * VersionMismatch error, and an ErrorResponse that contains the current job
     * execution status data is returned. (This makes it unnecessary to perform a
     * separate DescribeJobExecution request in order to obtain the job execution
     * status data.)</p>
     */
    inline CancelJobExecutionRequest& WithExpectedVersion(long long value) { SetExpectedVersion(value); return *this;}


    /**
     * <p>A collection of name/value pairs that describe the status of the job
     * execution. If not specified, the statusDetails are unchanged. You can specify at
     * most 10 name/value pairs.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetStatusDetails() const{ return m_statusDetails; }

    /**
     * <p>A collection of name/value pairs that describe the status of the job
     * execution. If not specified, the statusDetails are unchanged. You can specify at
     * most 10 name/value pairs.</p>
     */
    inline bool StatusDetailsHasBeenSet() const { return m_statusDetailsHasBeenSet; }

    /**
     * <p>A collection of name/value pairs that describe the status of the job
     * execution. If not specified, the statusDetails are unchanged. You can specify at
     * most 10 name/value pairs.</p>
     */
    inline void SetStatusDetails(const Aws::Map<Aws::String, Aws::String>& value) { m_statusDetailsHasBeenSet = true; m_statusDetails = value; }

    /**
     * <p>A collection of name/value pairs that describe the status of the job
     * execution. If not specified, the statusDetails are unchanged. You can specify at
     * most 10 name/value pairs.</p>
     */
    inline void SetStatusDetails(Aws::Map<Aws::String, Aws::String>&& value) { m_statusDetailsHasBeenSet = true; m_statusDetails = std::move(value); }

    /**
     * <p>A collection of name/value pairs that describe the status of the job
     * execution. If not specified, the statusDetails are unchanged. You can specify at
     * most 10 name/value pairs.</p>
     */
    inline CancelJobExecutionRequest& WithStatusDetails(const Aws::Map<Aws::String, Aws::String>& value) { SetStatusDetails(value); return *this;}

    /**
     * <p>A collection of name/value pairs that describe the status of the job
     * execution. If not specified, the statusDetails are unchanged. You can specify at
     * most 10 name/value pairs.</p>
     */
    inline CancelJobExecutionRequest& WithStatusDetails(Aws::Map<Aws::String, Aws::String>&& value) { SetStatusDetails(std::move(value)); return *this;}

    /**
     * <p>A collection of name/value pairs that describe the status of the job
     * execution. If not specified, the statusDetails are unchanged. You can specify at
     * most 10 name/value pairs.</p>
     */
    inline CancelJobExecutionRequest& AddStatusDetails(const Aws::String& key, const Aws::String& value) { m_statusDetailsHasBeenSet = true; m_statusDetails.emplace(key, value); return *this; }

    /**
     * <p>A collection of name/value pairs that describe the status of the job
     * execution. If not specified, the statusDetails are unchanged. You can specify at
     * most 10 name/value pairs.</p>
     */
    inline CancelJobExecutionRequest& AddStatusDetails(Aws::String&& key, const Aws::String& value) { m_statusDetailsHasBeenSet = true; m_statusDetails.emplace(std::move(key), value); return *this; }

    /**
     * <p>A collection of name/value pairs that describe the status of the job
     * execution. If not specified, the statusDetails are unchanged. You can specify at
     * most 10 name/value pairs.</p>
     */
    inline CancelJobExecutionRequest& AddStatusDetails(const Aws::String& key, Aws::String&& value) { m_statusDetailsHasBeenSet = true; m_statusDetails.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A collection of name/value pairs that describe the status of the job
     * execution. If not specified, the statusDetails are unchanged. You can specify at
     * most 10 name/value pairs.</p>
     */
    inline CancelJobExecutionRequest& AddStatusDetails(Aws::String&& key, Aws::String&& value) { m_statusDetailsHasBeenSet = true; m_statusDetails.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A collection of name/value pairs that describe the status of the job
     * execution. If not specified, the statusDetails are unchanged. You can specify at
     * most 10 name/value pairs.</p>
     */
    inline CancelJobExecutionRequest& AddStatusDetails(const char* key, Aws::String&& value) { m_statusDetailsHasBeenSet = true; m_statusDetails.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A collection of name/value pairs that describe the status of the job
     * execution. If not specified, the statusDetails are unchanged. You can specify at
     * most 10 name/value pairs.</p>
     */
    inline CancelJobExecutionRequest& AddStatusDetails(Aws::String&& key, const char* value) { m_statusDetailsHasBeenSet = true; m_statusDetails.emplace(std::move(key), value); return *this; }

    /**
     * <p>A collection of name/value pairs that describe the status of the job
     * execution. If not specified, the statusDetails are unchanged. You can specify at
     * most 10 name/value pairs.</p>
     */
    inline CancelJobExecutionRequest& AddStatusDetails(const char* key, const char* value) { m_statusDetailsHasBeenSet = true; m_statusDetails.emplace(key, value); return *this; }

  private:

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet;

    Aws::String m_thingName;
    bool m_thingNameHasBeenSet;

    bool m_force;
    bool m_forceHasBeenSet;

    long long m_expectedVersion;
    bool m_expectedVersionHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_statusDetails;
    bool m_statusDetailsHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
