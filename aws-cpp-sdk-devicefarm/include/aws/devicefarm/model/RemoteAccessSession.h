/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/devicefarm/model/ExecutionStatus.h>
#include <aws/devicefarm/model/ExecutionResult.h>
#include <aws/devicefarm/model/Device.h>
#include <aws/devicefarm/model/BillingMethod.h>
#include <aws/devicefarm/model/DeviceMinutes.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace DeviceFarm
{
namespace Model
{

  /**
   * <p>Represents information about the remote access session.</p>
   */
  class AWS_DEVICEFARM_API RemoteAccessSession
  {
  public:
    RemoteAccessSession();
    RemoteAccessSession(const Aws::Utils::Json::JsonValue& jsonValue);
    RemoteAccessSession& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The Amazon Resource Name (ARN) of the remote access session.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the remote access session.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the remote access session.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the remote access session.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the remote access session.</p>
     */
    inline RemoteAccessSession& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the remote access session.</p>
     */
    inline RemoteAccessSession& WithArn(Aws::String&& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the remote access session.</p>
     */
    inline RemoteAccessSession& WithArn(const char* value) { SetArn(value); return *this;}

    /**
     * <p>The name of the remote access session.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the remote access session.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the remote access session.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the remote access session.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the remote access session.</p>
     */
    inline RemoteAccessSession& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the remote access session.</p>
     */
    inline RemoteAccessSession& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>The name of the remote access session.</p>
     */
    inline RemoteAccessSession& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>The date and time the remote access session was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreated() const{ return m_created; }

    /**
     * <p>The date and time the remote access session was created.</p>
     */
    inline void SetCreated(const Aws::Utils::DateTime& value) { m_createdHasBeenSet = true; m_created = value; }

    /**
     * <p>The date and time the remote access session was created.</p>
     */
    inline void SetCreated(Aws::Utils::DateTime&& value) { m_createdHasBeenSet = true; m_created = value; }

    /**
     * <p>The date and time the remote access session was created.</p>
     */
    inline RemoteAccessSession& WithCreated(const Aws::Utils::DateTime& value) { SetCreated(value); return *this;}

    /**
     * <p>The date and time the remote access session was created.</p>
     */
    inline RemoteAccessSession& WithCreated(Aws::Utils::DateTime&& value) { SetCreated(value); return *this;}

    /**
     * <p>The status of the remote access session. Can be any of the following:</p>
     * <ul> <li> <p>PENDING: A pending status.</p> </li> <li> <p>PENDING_CONCURRENCY: A
     * pending concurrency status.</p> </li> <li> <p>PENDING_DEVICE: A pending device
     * status.</p> </li> <li> <p>PROCESSING: A processing status.</p> </li> <li>
     * <p>SCHEDULING: A scheduling status.</p> </li> <li> <p>PREPARING: A preparing
     * status.</p> </li> <li> <p>RUNNING: A running status.</p> </li> <li>
     * <p>COMPLETED: A completed status.</p> </li> <li> <p>STOPPING: A stopping
     * status.</p> </li> </ul>
     */
    inline const ExecutionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the remote access session. Can be any of the following:</p>
     * <ul> <li> <p>PENDING: A pending status.</p> </li> <li> <p>PENDING_CONCURRENCY: A
     * pending concurrency status.</p> </li> <li> <p>PENDING_DEVICE: A pending device
     * status.</p> </li> <li> <p>PROCESSING: A processing status.</p> </li> <li>
     * <p>SCHEDULING: A scheduling status.</p> </li> <li> <p>PREPARING: A preparing
     * status.</p> </li> <li> <p>RUNNING: A running status.</p> </li> <li>
     * <p>COMPLETED: A completed status.</p> </li> <li> <p>STOPPING: A stopping
     * status.</p> </li> </ul>
     */
    inline void SetStatus(const ExecutionStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the remote access session. Can be any of the following:</p>
     * <ul> <li> <p>PENDING: A pending status.</p> </li> <li> <p>PENDING_CONCURRENCY: A
     * pending concurrency status.</p> </li> <li> <p>PENDING_DEVICE: A pending device
     * status.</p> </li> <li> <p>PROCESSING: A processing status.</p> </li> <li>
     * <p>SCHEDULING: A scheduling status.</p> </li> <li> <p>PREPARING: A preparing
     * status.</p> </li> <li> <p>RUNNING: A running status.</p> </li> <li>
     * <p>COMPLETED: A completed status.</p> </li> <li> <p>STOPPING: A stopping
     * status.</p> </li> </ul>
     */
    inline void SetStatus(ExecutionStatus&& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the remote access session. Can be any of the following:</p>
     * <ul> <li> <p>PENDING: A pending status.</p> </li> <li> <p>PENDING_CONCURRENCY: A
     * pending concurrency status.</p> </li> <li> <p>PENDING_DEVICE: A pending device
     * status.</p> </li> <li> <p>PROCESSING: A processing status.</p> </li> <li>
     * <p>SCHEDULING: A scheduling status.</p> </li> <li> <p>PREPARING: A preparing
     * status.</p> </li> <li> <p>RUNNING: A running status.</p> </li> <li>
     * <p>COMPLETED: A completed status.</p> </li> <li> <p>STOPPING: A stopping
     * status.</p> </li> </ul>
     */
    inline RemoteAccessSession& WithStatus(const ExecutionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the remote access session. Can be any of the following:</p>
     * <ul> <li> <p>PENDING: A pending status.</p> </li> <li> <p>PENDING_CONCURRENCY: A
     * pending concurrency status.</p> </li> <li> <p>PENDING_DEVICE: A pending device
     * status.</p> </li> <li> <p>PROCESSING: A processing status.</p> </li> <li>
     * <p>SCHEDULING: A scheduling status.</p> </li> <li> <p>PREPARING: A preparing
     * status.</p> </li> <li> <p>RUNNING: A running status.</p> </li> <li>
     * <p>COMPLETED: A completed status.</p> </li> <li> <p>STOPPING: A stopping
     * status.</p> </li> </ul>
     */
    inline RemoteAccessSession& WithStatus(ExecutionStatus&& value) { SetStatus(value); return *this;}

    /**
     * <p>The result of the remote access session. Can be any of the following:</p>
     * <ul> <li> <p>PENDING: A pending condition.</p> </li> <li> <p>PASSED: A passing
     * condition.</p> </li> <li> <p>WARNED: A warning condition.</p> </li> <li>
     * <p>FAILED: A failed condition.</p> </li> <li> <p>SKIPPED: A skipped
     * condition.</p> </li> <li> <p>ERRORED: An error condition.</p> </li> <li>
     * <p>STOPPED: A stopped condition.</p> </li> </ul>
     */
    inline const ExecutionResult& GetResult() const{ return m_result; }

    /**
     * <p>The result of the remote access session. Can be any of the following:</p>
     * <ul> <li> <p>PENDING: A pending condition.</p> </li> <li> <p>PASSED: A passing
     * condition.</p> </li> <li> <p>WARNED: A warning condition.</p> </li> <li>
     * <p>FAILED: A failed condition.</p> </li> <li> <p>SKIPPED: A skipped
     * condition.</p> </li> <li> <p>ERRORED: An error condition.</p> </li> <li>
     * <p>STOPPED: A stopped condition.</p> </li> </ul>
     */
    inline void SetResult(const ExecutionResult& value) { m_resultHasBeenSet = true; m_result = value; }

    /**
     * <p>The result of the remote access session. Can be any of the following:</p>
     * <ul> <li> <p>PENDING: A pending condition.</p> </li> <li> <p>PASSED: A passing
     * condition.</p> </li> <li> <p>WARNED: A warning condition.</p> </li> <li>
     * <p>FAILED: A failed condition.</p> </li> <li> <p>SKIPPED: A skipped
     * condition.</p> </li> <li> <p>ERRORED: An error condition.</p> </li> <li>
     * <p>STOPPED: A stopped condition.</p> </li> </ul>
     */
    inline void SetResult(ExecutionResult&& value) { m_resultHasBeenSet = true; m_result = value; }

    /**
     * <p>The result of the remote access session. Can be any of the following:</p>
     * <ul> <li> <p>PENDING: A pending condition.</p> </li> <li> <p>PASSED: A passing
     * condition.</p> </li> <li> <p>WARNED: A warning condition.</p> </li> <li>
     * <p>FAILED: A failed condition.</p> </li> <li> <p>SKIPPED: A skipped
     * condition.</p> </li> <li> <p>ERRORED: An error condition.</p> </li> <li>
     * <p>STOPPED: A stopped condition.</p> </li> </ul>
     */
    inline RemoteAccessSession& WithResult(const ExecutionResult& value) { SetResult(value); return *this;}

    /**
     * <p>The result of the remote access session. Can be any of the following:</p>
     * <ul> <li> <p>PENDING: A pending condition.</p> </li> <li> <p>PASSED: A passing
     * condition.</p> </li> <li> <p>WARNED: A warning condition.</p> </li> <li>
     * <p>FAILED: A failed condition.</p> </li> <li> <p>SKIPPED: A skipped
     * condition.</p> </li> <li> <p>ERRORED: An error condition.</p> </li> <li>
     * <p>STOPPED: A stopped condition.</p> </li> </ul>
     */
    inline RemoteAccessSession& WithResult(ExecutionResult&& value) { SetResult(value); return *this;}

    /**
     * <p>A message about the remote access session.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>A message about the remote access session.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>A message about the remote access session.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>A message about the remote access session.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>A message about the remote access session.</p>
     */
    inline RemoteAccessSession& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>A message about the remote access session.</p>
     */
    inline RemoteAccessSession& WithMessage(Aws::String&& value) { SetMessage(value); return *this;}

    /**
     * <p>A message about the remote access session.</p>
     */
    inline RemoteAccessSession& WithMessage(const char* value) { SetMessage(value); return *this;}

    /**
     * <p>The date and time the remote access session was started.</p>
     */
    inline const Aws::Utils::DateTime& GetStarted() const{ return m_started; }

    /**
     * <p>The date and time the remote access session was started.</p>
     */
    inline void SetStarted(const Aws::Utils::DateTime& value) { m_startedHasBeenSet = true; m_started = value; }

    /**
     * <p>The date and time the remote access session was started.</p>
     */
    inline void SetStarted(Aws::Utils::DateTime&& value) { m_startedHasBeenSet = true; m_started = value; }

    /**
     * <p>The date and time the remote access session was started.</p>
     */
    inline RemoteAccessSession& WithStarted(const Aws::Utils::DateTime& value) { SetStarted(value); return *this;}

    /**
     * <p>The date and time the remote access session was started.</p>
     */
    inline RemoteAccessSession& WithStarted(Aws::Utils::DateTime&& value) { SetStarted(value); return *this;}

    /**
     * <p>The date and time the remote access session was stopped.</p>
     */
    inline const Aws::Utils::DateTime& GetStopped() const{ return m_stopped; }

    /**
     * <p>The date and time the remote access session was stopped.</p>
     */
    inline void SetStopped(const Aws::Utils::DateTime& value) { m_stoppedHasBeenSet = true; m_stopped = value; }

    /**
     * <p>The date and time the remote access session was stopped.</p>
     */
    inline void SetStopped(Aws::Utils::DateTime&& value) { m_stoppedHasBeenSet = true; m_stopped = value; }

    /**
     * <p>The date and time the remote access session was stopped.</p>
     */
    inline RemoteAccessSession& WithStopped(const Aws::Utils::DateTime& value) { SetStopped(value); return *this;}

    /**
     * <p>The date and time the remote access session was stopped.</p>
     */
    inline RemoteAccessSession& WithStopped(Aws::Utils::DateTime&& value) { SetStopped(value); return *this;}

    
    inline const Device& GetDevice() const{ return m_device; }

    
    inline void SetDevice(const Device& value) { m_deviceHasBeenSet = true; m_device = value; }

    
    inline void SetDevice(Device&& value) { m_deviceHasBeenSet = true; m_device = value; }

    
    inline RemoteAccessSession& WithDevice(const Device& value) { SetDevice(value); return *this;}

    
    inline RemoteAccessSession& WithDevice(Device&& value) { SetDevice(value); return *this;}

    /**
     * <p>The billing method of the remote access session. Possible values include
     * <code>METERED</code> or <code>UNMETERED</code>. For more information about
     * metered devices, see <a
     * href="http://docs.aws.amazon.com/devicefarm/latest/developerguide/welcome.html#welcome-terminology">AWS
     * Device Farm terminology</a>."</p>
     */
    inline const BillingMethod& GetBillingMethod() const{ return m_billingMethod; }

    /**
     * <p>The billing method of the remote access session. Possible values include
     * <code>METERED</code> or <code>UNMETERED</code>. For more information about
     * metered devices, see <a
     * href="http://docs.aws.amazon.com/devicefarm/latest/developerguide/welcome.html#welcome-terminology">AWS
     * Device Farm terminology</a>."</p>
     */
    inline void SetBillingMethod(const BillingMethod& value) { m_billingMethodHasBeenSet = true; m_billingMethod = value; }

    /**
     * <p>The billing method of the remote access session. Possible values include
     * <code>METERED</code> or <code>UNMETERED</code>. For more information about
     * metered devices, see <a
     * href="http://docs.aws.amazon.com/devicefarm/latest/developerguide/welcome.html#welcome-terminology">AWS
     * Device Farm terminology</a>."</p>
     */
    inline void SetBillingMethod(BillingMethod&& value) { m_billingMethodHasBeenSet = true; m_billingMethod = value; }

    /**
     * <p>The billing method of the remote access session. Possible values include
     * <code>METERED</code> or <code>UNMETERED</code>. For more information about
     * metered devices, see <a
     * href="http://docs.aws.amazon.com/devicefarm/latest/developerguide/welcome.html#welcome-terminology">AWS
     * Device Farm terminology</a>."</p>
     */
    inline RemoteAccessSession& WithBillingMethod(const BillingMethod& value) { SetBillingMethod(value); return *this;}

    /**
     * <p>The billing method of the remote access session. Possible values include
     * <code>METERED</code> or <code>UNMETERED</code>. For more information about
     * metered devices, see <a
     * href="http://docs.aws.amazon.com/devicefarm/latest/developerguide/welcome.html#welcome-terminology">AWS
     * Device Farm terminology</a>."</p>
     */
    inline RemoteAccessSession& WithBillingMethod(BillingMethod&& value) { SetBillingMethod(value); return *this;}

    
    inline const DeviceMinutes& GetDeviceMinutes() const{ return m_deviceMinutes; }

    
    inline void SetDeviceMinutes(const DeviceMinutes& value) { m_deviceMinutesHasBeenSet = true; m_deviceMinutes = value; }

    
    inline void SetDeviceMinutes(DeviceMinutes&& value) { m_deviceMinutesHasBeenSet = true; m_deviceMinutes = value; }

    
    inline RemoteAccessSession& WithDeviceMinutes(const DeviceMinutes& value) { SetDeviceMinutes(value); return *this;}

    
    inline RemoteAccessSession& WithDeviceMinutes(DeviceMinutes&& value) { SetDeviceMinutes(value); return *this;}

    /**
     * <p>The endpoint for the remote access sesssion.</p>
     */
    inline const Aws::String& GetEndpoint() const{ return m_endpoint; }

    /**
     * <p>The endpoint for the remote access sesssion.</p>
     */
    inline void SetEndpoint(const Aws::String& value) { m_endpointHasBeenSet = true; m_endpoint = value; }

    /**
     * <p>The endpoint for the remote access sesssion.</p>
     */
    inline void SetEndpoint(Aws::String&& value) { m_endpointHasBeenSet = true; m_endpoint = value; }

    /**
     * <p>The endpoint for the remote access sesssion.</p>
     */
    inline void SetEndpoint(const char* value) { m_endpointHasBeenSet = true; m_endpoint.assign(value); }

    /**
     * <p>The endpoint for the remote access sesssion.</p>
     */
    inline RemoteAccessSession& WithEndpoint(const Aws::String& value) { SetEndpoint(value); return *this;}

    /**
     * <p>The endpoint for the remote access sesssion.</p>
     */
    inline RemoteAccessSession& WithEndpoint(Aws::String&& value) { SetEndpoint(value); return *this;}

    /**
     * <p>The endpoint for the remote access sesssion.</p>
     */
    inline RemoteAccessSession& WithEndpoint(const char* value) { SetEndpoint(value); return *this;}

  private:
    Aws::String m_arn;
    bool m_arnHasBeenSet;
    Aws::String m_name;
    bool m_nameHasBeenSet;
    Aws::Utils::DateTime m_created;
    bool m_createdHasBeenSet;
    ExecutionStatus m_status;
    bool m_statusHasBeenSet;
    ExecutionResult m_result;
    bool m_resultHasBeenSet;
    Aws::String m_message;
    bool m_messageHasBeenSet;
    Aws::Utils::DateTime m_started;
    bool m_startedHasBeenSet;
    Aws::Utils::DateTime m_stopped;
    bool m_stoppedHasBeenSet;
    Device m_device;
    bool m_deviceHasBeenSet;
    BillingMethod m_billingMethod;
    bool m_billingMethodHasBeenSet;
    DeviceMinutes m_deviceMinutes;
    bool m_deviceMinutesHasBeenSet;
    Aws::String m_endpoint;
    bool m_endpointHasBeenSet;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
