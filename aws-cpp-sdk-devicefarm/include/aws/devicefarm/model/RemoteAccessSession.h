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
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/devicefarm/model/ExecutionStatus.h>
#include <aws/devicefarm/model/ExecutionResult.h>
#include <aws/devicefarm/model/Device.h>
#include <aws/devicefarm/model/BillingMethod.h>
#include <aws/devicefarm/model/DeviceMinutes.h>
#include <aws/devicefarm/model/InteractionMode.h>
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
namespace DeviceFarm
{
namespace Model
{

  /**
   * <p>Represents information about the remote access session.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/RemoteAccessSession">AWS
   * API Reference</a></p>
   */
  class AWS_DEVICEFARM_API RemoteAccessSession
  {
  public:
    RemoteAccessSession();
    RemoteAccessSession(Aws::Utils::Json::JsonView jsonValue);
    RemoteAccessSession& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the remote access session.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the remote access session.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the remote access session.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the remote access session.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

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
    inline RemoteAccessSession& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

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
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the remote access session.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the remote access session.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

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
    inline RemoteAccessSession& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

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
    inline bool CreatedHasBeenSet() const { return m_createdHasBeenSet; }

    /**
     * <p>The date and time the remote access session was created.</p>
     */
    inline void SetCreated(const Aws::Utils::DateTime& value) { m_createdHasBeenSet = true; m_created = value; }

    /**
     * <p>The date and time the remote access session was created.</p>
     */
    inline void SetCreated(Aws::Utils::DateTime&& value) { m_createdHasBeenSet = true; m_created = std::move(value); }

    /**
     * <p>The date and time the remote access session was created.</p>
     */
    inline RemoteAccessSession& WithCreated(const Aws::Utils::DateTime& value) { SetCreated(value); return *this;}

    /**
     * <p>The date and time the remote access session was created.</p>
     */
    inline RemoteAccessSession& WithCreated(Aws::Utils::DateTime&& value) { SetCreated(std::move(value)); return *this;}


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
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

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
    inline void SetStatus(ExecutionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

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
    inline RemoteAccessSession& WithStatus(ExecutionStatus&& value) { SetStatus(std::move(value)); return *this;}


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
    inline bool ResultHasBeenSet() const { return m_resultHasBeenSet; }

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
    inline void SetResult(ExecutionResult&& value) { m_resultHasBeenSet = true; m_result = std::move(value); }

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
    inline RemoteAccessSession& WithResult(ExecutionResult&& value) { SetResult(std::move(value)); return *this;}


    /**
     * <p>A message about the remote access session.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>A message about the remote access session.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>A message about the remote access session.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>A message about the remote access session.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

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
    inline RemoteAccessSession& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

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
    inline bool StartedHasBeenSet() const { return m_startedHasBeenSet; }

    /**
     * <p>The date and time the remote access session was started.</p>
     */
    inline void SetStarted(const Aws::Utils::DateTime& value) { m_startedHasBeenSet = true; m_started = value; }

    /**
     * <p>The date and time the remote access session was started.</p>
     */
    inline void SetStarted(Aws::Utils::DateTime&& value) { m_startedHasBeenSet = true; m_started = std::move(value); }

    /**
     * <p>The date and time the remote access session was started.</p>
     */
    inline RemoteAccessSession& WithStarted(const Aws::Utils::DateTime& value) { SetStarted(value); return *this;}

    /**
     * <p>The date and time the remote access session was started.</p>
     */
    inline RemoteAccessSession& WithStarted(Aws::Utils::DateTime&& value) { SetStarted(std::move(value)); return *this;}


    /**
     * <p>The date and time the remote access session was stopped.</p>
     */
    inline const Aws::Utils::DateTime& GetStopped() const{ return m_stopped; }

    /**
     * <p>The date and time the remote access session was stopped.</p>
     */
    inline bool StoppedHasBeenSet() const { return m_stoppedHasBeenSet; }

    /**
     * <p>The date and time the remote access session was stopped.</p>
     */
    inline void SetStopped(const Aws::Utils::DateTime& value) { m_stoppedHasBeenSet = true; m_stopped = value; }

    /**
     * <p>The date and time the remote access session was stopped.</p>
     */
    inline void SetStopped(Aws::Utils::DateTime&& value) { m_stoppedHasBeenSet = true; m_stopped = std::move(value); }

    /**
     * <p>The date and time the remote access session was stopped.</p>
     */
    inline RemoteAccessSession& WithStopped(const Aws::Utils::DateTime& value) { SetStopped(value); return *this;}

    /**
     * <p>The date and time the remote access session was stopped.</p>
     */
    inline RemoteAccessSession& WithStopped(Aws::Utils::DateTime&& value) { SetStopped(std::move(value)); return *this;}


    /**
     * <p>The device (phone or tablet) used in the remote access session.</p>
     */
    inline const Device& GetDevice() const{ return m_device; }

    /**
     * <p>The device (phone or tablet) used in the remote access session.</p>
     */
    inline bool DeviceHasBeenSet() const { return m_deviceHasBeenSet; }

    /**
     * <p>The device (phone or tablet) used in the remote access session.</p>
     */
    inline void SetDevice(const Device& value) { m_deviceHasBeenSet = true; m_device = value; }

    /**
     * <p>The device (phone or tablet) used in the remote access session.</p>
     */
    inline void SetDevice(Device&& value) { m_deviceHasBeenSet = true; m_device = std::move(value); }

    /**
     * <p>The device (phone or tablet) used in the remote access session.</p>
     */
    inline RemoteAccessSession& WithDevice(const Device& value) { SetDevice(value); return *this;}

    /**
     * <p>The device (phone or tablet) used in the remote access session.</p>
     */
    inline RemoteAccessSession& WithDevice(Device&& value) { SetDevice(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the instance.</p>
     */
    inline const Aws::String& GetInstanceArn() const{ return m_instanceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the instance.</p>
     */
    inline bool InstanceArnHasBeenSet() const { return m_instanceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the instance.</p>
     */
    inline void SetInstanceArn(const Aws::String& value) { m_instanceArnHasBeenSet = true; m_instanceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the instance.</p>
     */
    inline void SetInstanceArn(Aws::String&& value) { m_instanceArnHasBeenSet = true; m_instanceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the instance.</p>
     */
    inline void SetInstanceArn(const char* value) { m_instanceArnHasBeenSet = true; m_instanceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the instance.</p>
     */
    inline RemoteAccessSession& WithInstanceArn(const Aws::String& value) { SetInstanceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the instance.</p>
     */
    inline RemoteAccessSession& WithInstanceArn(Aws::String&& value) { SetInstanceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the instance.</p>
     */
    inline RemoteAccessSession& WithInstanceArn(const char* value) { SetInstanceArn(value); return *this;}


    /**
     * <p>This flag is set to <code>true</code> if remote debugging is enabled for the
     * remote access session.</p>
     */
    inline bool GetRemoteDebugEnabled() const{ return m_remoteDebugEnabled; }

    /**
     * <p>This flag is set to <code>true</code> if remote debugging is enabled for the
     * remote access session.</p>
     */
    inline bool RemoteDebugEnabledHasBeenSet() const { return m_remoteDebugEnabledHasBeenSet; }

    /**
     * <p>This flag is set to <code>true</code> if remote debugging is enabled for the
     * remote access session.</p>
     */
    inline void SetRemoteDebugEnabled(bool value) { m_remoteDebugEnabledHasBeenSet = true; m_remoteDebugEnabled = value; }

    /**
     * <p>This flag is set to <code>true</code> if remote debugging is enabled for the
     * remote access session.</p>
     */
    inline RemoteAccessSession& WithRemoteDebugEnabled(bool value) { SetRemoteDebugEnabled(value); return *this;}


    /**
     * <p>This flag is set to <code>true</code> if remote recording is enabled for the
     * remote access session.</p>
     */
    inline bool GetRemoteRecordEnabled() const{ return m_remoteRecordEnabled; }

    /**
     * <p>This flag is set to <code>true</code> if remote recording is enabled for the
     * remote access session.</p>
     */
    inline bool RemoteRecordEnabledHasBeenSet() const { return m_remoteRecordEnabledHasBeenSet; }

    /**
     * <p>This flag is set to <code>true</code> if remote recording is enabled for the
     * remote access session.</p>
     */
    inline void SetRemoteRecordEnabled(bool value) { m_remoteRecordEnabledHasBeenSet = true; m_remoteRecordEnabled = value; }

    /**
     * <p>This flag is set to <code>true</code> if remote recording is enabled for the
     * remote access session.</p>
     */
    inline RemoteAccessSession& WithRemoteRecordEnabled(bool value) { SetRemoteRecordEnabled(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) for the app to be recorded in the remote
     * access session.</p>
     */
    inline const Aws::String& GetRemoteRecordAppArn() const{ return m_remoteRecordAppArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the app to be recorded in the remote
     * access session.</p>
     */
    inline bool RemoteRecordAppArnHasBeenSet() const { return m_remoteRecordAppArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for the app to be recorded in the remote
     * access session.</p>
     */
    inline void SetRemoteRecordAppArn(const Aws::String& value) { m_remoteRecordAppArnHasBeenSet = true; m_remoteRecordAppArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the app to be recorded in the remote
     * access session.</p>
     */
    inline void SetRemoteRecordAppArn(Aws::String&& value) { m_remoteRecordAppArnHasBeenSet = true; m_remoteRecordAppArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the app to be recorded in the remote
     * access session.</p>
     */
    inline void SetRemoteRecordAppArn(const char* value) { m_remoteRecordAppArnHasBeenSet = true; m_remoteRecordAppArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the app to be recorded in the remote
     * access session.</p>
     */
    inline RemoteAccessSession& WithRemoteRecordAppArn(const Aws::String& value) { SetRemoteRecordAppArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the app to be recorded in the remote
     * access session.</p>
     */
    inline RemoteAccessSession& WithRemoteRecordAppArn(Aws::String&& value) { SetRemoteRecordAppArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the app to be recorded in the remote
     * access session.</p>
     */
    inline RemoteAccessSession& WithRemoteRecordAppArn(const char* value) { SetRemoteRecordAppArn(value); return *this;}


    /**
     * <p>IP address of the EC2 host where you need to connect to remotely debug
     * devices. Only returned if remote debugging is enabled for the remote access
     * session.</p>
     */
    inline const Aws::String& GetHostAddress() const{ return m_hostAddress; }

    /**
     * <p>IP address of the EC2 host where you need to connect to remotely debug
     * devices. Only returned if remote debugging is enabled for the remote access
     * session.</p>
     */
    inline bool HostAddressHasBeenSet() const { return m_hostAddressHasBeenSet; }

    /**
     * <p>IP address of the EC2 host where you need to connect to remotely debug
     * devices. Only returned if remote debugging is enabled for the remote access
     * session.</p>
     */
    inline void SetHostAddress(const Aws::String& value) { m_hostAddressHasBeenSet = true; m_hostAddress = value; }

    /**
     * <p>IP address of the EC2 host where you need to connect to remotely debug
     * devices. Only returned if remote debugging is enabled for the remote access
     * session.</p>
     */
    inline void SetHostAddress(Aws::String&& value) { m_hostAddressHasBeenSet = true; m_hostAddress = std::move(value); }

    /**
     * <p>IP address of the EC2 host where you need to connect to remotely debug
     * devices. Only returned if remote debugging is enabled for the remote access
     * session.</p>
     */
    inline void SetHostAddress(const char* value) { m_hostAddressHasBeenSet = true; m_hostAddress.assign(value); }

    /**
     * <p>IP address of the EC2 host where you need to connect to remotely debug
     * devices. Only returned if remote debugging is enabled for the remote access
     * session.</p>
     */
    inline RemoteAccessSession& WithHostAddress(const Aws::String& value) { SetHostAddress(value); return *this;}

    /**
     * <p>IP address of the EC2 host where you need to connect to remotely debug
     * devices. Only returned if remote debugging is enabled for the remote access
     * session.</p>
     */
    inline RemoteAccessSession& WithHostAddress(Aws::String&& value) { SetHostAddress(std::move(value)); return *this;}

    /**
     * <p>IP address of the EC2 host where you need to connect to remotely debug
     * devices. Only returned if remote debugging is enabled for the remote access
     * session.</p>
     */
    inline RemoteAccessSession& WithHostAddress(const char* value) { SetHostAddress(value); return *this;}


    /**
     * <p>Unique identifier of your client for the remote access session. Only returned
     * if remote debugging is enabled for the remote access session.</p>
     */
    inline const Aws::String& GetClientId() const{ return m_clientId; }

    /**
     * <p>Unique identifier of your client for the remote access session. Only returned
     * if remote debugging is enabled for the remote access session.</p>
     */
    inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }

    /**
     * <p>Unique identifier of your client for the remote access session. Only returned
     * if remote debugging is enabled for the remote access session.</p>
     */
    inline void SetClientId(const Aws::String& value) { m_clientIdHasBeenSet = true; m_clientId = value; }

    /**
     * <p>Unique identifier of your client for the remote access session. Only returned
     * if remote debugging is enabled for the remote access session.</p>
     */
    inline void SetClientId(Aws::String&& value) { m_clientIdHasBeenSet = true; m_clientId = std::move(value); }

    /**
     * <p>Unique identifier of your client for the remote access session. Only returned
     * if remote debugging is enabled for the remote access session.</p>
     */
    inline void SetClientId(const char* value) { m_clientIdHasBeenSet = true; m_clientId.assign(value); }

    /**
     * <p>Unique identifier of your client for the remote access session. Only returned
     * if remote debugging is enabled for the remote access session.</p>
     */
    inline RemoteAccessSession& WithClientId(const Aws::String& value) { SetClientId(value); return *this;}

    /**
     * <p>Unique identifier of your client for the remote access session. Only returned
     * if remote debugging is enabled for the remote access session.</p>
     */
    inline RemoteAccessSession& WithClientId(Aws::String&& value) { SetClientId(std::move(value)); return *this;}

    /**
     * <p>Unique identifier of your client for the remote access session. Only returned
     * if remote debugging is enabled for the remote access session.</p>
     */
    inline RemoteAccessSession& WithClientId(const char* value) { SetClientId(value); return *this;}


    /**
     * <p>The billing method of the remote access session. Possible values include
     * <code>METERED</code> or <code>UNMETERED</code>. For more information about
     * metered devices, see <a
     * href="https://docs.aws.amazon.com/devicefarm/latest/developerguide/welcome.html#welcome-terminology">AWS
     * Device Farm terminology</a>."</p>
     */
    inline const BillingMethod& GetBillingMethod() const{ return m_billingMethod; }

    /**
     * <p>The billing method of the remote access session. Possible values include
     * <code>METERED</code> or <code>UNMETERED</code>. For more information about
     * metered devices, see <a
     * href="https://docs.aws.amazon.com/devicefarm/latest/developerguide/welcome.html#welcome-terminology">AWS
     * Device Farm terminology</a>."</p>
     */
    inline bool BillingMethodHasBeenSet() const { return m_billingMethodHasBeenSet; }

    /**
     * <p>The billing method of the remote access session. Possible values include
     * <code>METERED</code> or <code>UNMETERED</code>. For more information about
     * metered devices, see <a
     * href="https://docs.aws.amazon.com/devicefarm/latest/developerguide/welcome.html#welcome-terminology">AWS
     * Device Farm terminology</a>."</p>
     */
    inline void SetBillingMethod(const BillingMethod& value) { m_billingMethodHasBeenSet = true; m_billingMethod = value; }

    /**
     * <p>The billing method of the remote access session. Possible values include
     * <code>METERED</code> or <code>UNMETERED</code>. For more information about
     * metered devices, see <a
     * href="https://docs.aws.amazon.com/devicefarm/latest/developerguide/welcome.html#welcome-terminology">AWS
     * Device Farm terminology</a>."</p>
     */
    inline void SetBillingMethod(BillingMethod&& value) { m_billingMethodHasBeenSet = true; m_billingMethod = std::move(value); }

    /**
     * <p>The billing method of the remote access session. Possible values include
     * <code>METERED</code> or <code>UNMETERED</code>. For more information about
     * metered devices, see <a
     * href="https://docs.aws.amazon.com/devicefarm/latest/developerguide/welcome.html#welcome-terminology">AWS
     * Device Farm terminology</a>."</p>
     */
    inline RemoteAccessSession& WithBillingMethod(const BillingMethod& value) { SetBillingMethod(value); return *this;}

    /**
     * <p>The billing method of the remote access session. Possible values include
     * <code>METERED</code> or <code>UNMETERED</code>. For more information about
     * metered devices, see <a
     * href="https://docs.aws.amazon.com/devicefarm/latest/developerguide/welcome.html#welcome-terminology">AWS
     * Device Farm terminology</a>."</p>
     */
    inline RemoteAccessSession& WithBillingMethod(BillingMethod&& value) { SetBillingMethod(std::move(value)); return *this;}


    /**
     * <p>The number of minutes a device is used in a remote access session (including
     * setup and teardown minutes).</p>
     */
    inline const DeviceMinutes& GetDeviceMinutes() const{ return m_deviceMinutes; }

    /**
     * <p>The number of minutes a device is used in a remote access session (including
     * setup and teardown minutes).</p>
     */
    inline bool DeviceMinutesHasBeenSet() const { return m_deviceMinutesHasBeenSet; }

    /**
     * <p>The number of minutes a device is used in a remote access session (including
     * setup and teardown minutes).</p>
     */
    inline void SetDeviceMinutes(const DeviceMinutes& value) { m_deviceMinutesHasBeenSet = true; m_deviceMinutes = value; }

    /**
     * <p>The number of minutes a device is used in a remote access session (including
     * setup and teardown minutes).</p>
     */
    inline void SetDeviceMinutes(DeviceMinutes&& value) { m_deviceMinutesHasBeenSet = true; m_deviceMinutes = std::move(value); }

    /**
     * <p>The number of minutes a device is used in a remote access session (including
     * setup and teardown minutes).</p>
     */
    inline RemoteAccessSession& WithDeviceMinutes(const DeviceMinutes& value) { SetDeviceMinutes(value); return *this;}

    /**
     * <p>The number of minutes a device is used in a remote access session (including
     * setup and teardown minutes).</p>
     */
    inline RemoteAccessSession& WithDeviceMinutes(DeviceMinutes&& value) { SetDeviceMinutes(std::move(value)); return *this;}


    /**
     * <p>The endpoint for the remote access sesssion.</p>
     */
    inline const Aws::String& GetEndpoint() const{ return m_endpoint; }

    /**
     * <p>The endpoint for the remote access sesssion.</p>
     */
    inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }

    /**
     * <p>The endpoint for the remote access sesssion.</p>
     */
    inline void SetEndpoint(const Aws::String& value) { m_endpointHasBeenSet = true; m_endpoint = value; }

    /**
     * <p>The endpoint for the remote access sesssion.</p>
     */
    inline void SetEndpoint(Aws::String&& value) { m_endpointHasBeenSet = true; m_endpoint = std::move(value); }

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
    inline RemoteAccessSession& WithEndpoint(Aws::String&& value) { SetEndpoint(std::move(value)); return *this;}

    /**
     * <p>The endpoint for the remote access sesssion.</p>
     */
    inline RemoteAccessSession& WithEndpoint(const char* value) { SetEndpoint(value); return *this;}


    /**
     * <p>Unique device identifier for the remote device. Only returned if remote
     * debugging is enabled for the remote access session.</p>
     */
    inline const Aws::String& GetDeviceUdid() const{ return m_deviceUdid; }

    /**
     * <p>Unique device identifier for the remote device. Only returned if remote
     * debugging is enabled for the remote access session.</p>
     */
    inline bool DeviceUdidHasBeenSet() const { return m_deviceUdidHasBeenSet; }

    /**
     * <p>Unique device identifier for the remote device. Only returned if remote
     * debugging is enabled for the remote access session.</p>
     */
    inline void SetDeviceUdid(const Aws::String& value) { m_deviceUdidHasBeenSet = true; m_deviceUdid = value; }

    /**
     * <p>Unique device identifier for the remote device. Only returned if remote
     * debugging is enabled for the remote access session.</p>
     */
    inline void SetDeviceUdid(Aws::String&& value) { m_deviceUdidHasBeenSet = true; m_deviceUdid = std::move(value); }

    /**
     * <p>Unique device identifier for the remote device. Only returned if remote
     * debugging is enabled for the remote access session.</p>
     */
    inline void SetDeviceUdid(const char* value) { m_deviceUdidHasBeenSet = true; m_deviceUdid.assign(value); }

    /**
     * <p>Unique device identifier for the remote device. Only returned if remote
     * debugging is enabled for the remote access session.</p>
     */
    inline RemoteAccessSession& WithDeviceUdid(const Aws::String& value) { SetDeviceUdid(value); return *this;}

    /**
     * <p>Unique device identifier for the remote device. Only returned if remote
     * debugging is enabled for the remote access session.</p>
     */
    inline RemoteAccessSession& WithDeviceUdid(Aws::String&& value) { SetDeviceUdid(std::move(value)); return *this;}

    /**
     * <p>Unique device identifier for the remote device. Only returned if remote
     * debugging is enabled for the remote access session.</p>
     */
    inline RemoteAccessSession& WithDeviceUdid(const char* value) { SetDeviceUdid(value); return *this;}


    /**
     * <p>The interaction mode of the remote access session. Valid values are:</p> <ul>
     * <li> <p>INTERACTIVE: You can interact with the iOS device by viewing, touching,
     * and rotating the screen. You <b>cannot</b> run XCUITest framework-based tests in
     * this mode.</p> </li> <li> <p>NO_VIDEO: You are connected to the device but
     * cannot interact with it or view the screen. This mode has the fastest test
     * execution speed. You <b>can</b> run XCUITest framework-based tests in this
     * mode.</p> </li> <li> <p>VIDEO_ONLY: You can view the screen but cannot touch or
     * rotate it. You <b>can</b> run XCUITest framework-based tests and watch the
     * screen in this mode.</p> </li> </ul>
     */
    inline const InteractionMode& GetInteractionMode() const{ return m_interactionMode; }

    /**
     * <p>The interaction mode of the remote access session. Valid values are:</p> <ul>
     * <li> <p>INTERACTIVE: You can interact with the iOS device by viewing, touching,
     * and rotating the screen. You <b>cannot</b> run XCUITest framework-based tests in
     * this mode.</p> </li> <li> <p>NO_VIDEO: You are connected to the device but
     * cannot interact with it or view the screen. This mode has the fastest test
     * execution speed. You <b>can</b> run XCUITest framework-based tests in this
     * mode.</p> </li> <li> <p>VIDEO_ONLY: You can view the screen but cannot touch or
     * rotate it. You <b>can</b> run XCUITest framework-based tests and watch the
     * screen in this mode.</p> </li> </ul>
     */
    inline bool InteractionModeHasBeenSet() const { return m_interactionModeHasBeenSet; }

    /**
     * <p>The interaction mode of the remote access session. Valid values are:</p> <ul>
     * <li> <p>INTERACTIVE: You can interact with the iOS device by viewing, touching,
     * and rotating the screen. You <b>cannot</b> run XCUITest framework-based tests in
     * this mode.</p> </li> <li> <p>NO_VIDEO: You are connected to the device but
     * cannot interact with it or view the screen. This mode has the fastest test
     * execution speed. You <b>can</b> run XCUITest framework-based tests in this
     * mode.</p> </li> <li> <p>VIDEO_ONLY: You can view the screen but cannot touch or
     * rotate it. You <b>can</b> run XCUITest framework-based tests and watch the
     * screen in this mode.</p> </li> </ul>
     */
    inline void SetInteractionMode(const InteractionMode& value) { m_interactionModeHasBeenSet = true; m_interactionMode = value; }

    /**
     * <p>The interaction mode of the remote access session. Valid values are:</p> <ul>
     * <li> <p>INTERACTIVE: You can interact with the iOS device by viewing, touching,
     * and rotating the screen. You <b>cannot</b> run XCUITest framework-based tests in
     * this mode.</p> </li> <li> <p>NO_VIDEO: You are connected to the device but
     * cannot interact with it or view the screen. This mode has the fastest test
     * execution speed. You <b>can</b> run XCUITest framework-based tests in this
     * mode.</p> </li> <li> <p>VIDEO_ONLY: You can view the screen but cannot touch or
     * rotate it. You <b>can</b> run XCUITest framework-based tests and watch the
     * screen in this mode.</p> </li> </ul>
     */
    inline void SetInteractionMode(InteractionMode&& value) { m_interactionModeHasBeenSet = true; m_interactionMode = std::move(value); }

    /**
     * <p>The interaction mode of the remote access session. Valid values are:</p> <ul>
     * <li> <p>INTERACTIVE: You can interact with the iOS device by viewing, touching,
     * and rotating the screen. You <b>cannot</b> run XCUITest framework-based tests in
     * this mode.</p> </li> <li> <p>NO_VIDEO: You are connected to the device but
     * cannot interact with it or view the screen. This mode has the fastest test
     * execution speed. You <b>can</b> run XCUITest framework-based tests in this
     * mode.</p> </li> <li> <p>VIDEO_ONLY: You can view the screen but cannot touch or
     * rotate it. You <b>can</b> run XCUITest framework-based tests and watch the
     * screen in this mode.</p> </li> </ul>
     */
    inline RemoteAccessSession& WithInteractionMode(const InteractionMode& value) { SetInteractionMode(value); return *this;}

    /**
     * <p>The interaction mode of the remote access session. Valid values are:</p> <ul>
     * <li> <p>INTERACTIVE: You can interact with the iOS device by viewing, touching,
     * and rotating the screen. You <b>cannot</b> run XCUITest framework-based tests in
     * this mode.</p> </li> <li> <p>NO_VIDEO: You are connected to the device but
     * cannot interact with it or view the screen. This mode has the fastest test
     * execution speed. You <b>can</b> run XCUITest framework-based tests in this
     * mode.</p> </li> <li> <p>VIDEO_ONLY: You can view the screen but cannot touch or
     * rotate it. You <b>can</b> run XCUITest framework-based tests and watch the
     * screen in this mode.</p> </li> </ul>
     */
    inline RemoteAccessSession& WithInteractionMode(InteractionMode&& value) { SetInteractionMode(std::move(value)); return *this;}


    /**
     * <p>When set to <code>true</code>, for private devices, Device Farm will not sign
     * your app again. For public devices, Device Farm always signs your apps again and
     * this parameter has no effect.</p> <p>For more information about how Device Farm
     * re-signs your app(s), see <a href="https://aws.amazon.com/device-farm/faq/">Do
     * you modify my app?</a> in the <i>AWS Device Farm FAQs</i>.</p>
     */
    inline bool GetSkipAppResign() const{ return m_skipAppResign; }

    /**
     * <p>When set to <code>true</code>, for private devices, Device Farm will not sign
     * your app again. For public devices, Device Farm always signs your apps again and
     * this parameter has no effect.</p> <p>For more information about how Device Farm
     * re-signs your app(s), see <a href="https://aws.amazon.com/device-farm/faq/">Do
     * you modify my app?</a> in the <i>AWS Device Farm FAQs</i>.</p>
     */
    inline bool SkipAppResignHasBeenSet() const { return m_skipAppResignHasBeenSet; }

    /**
     * <p>When set to <code>true</code>, for private devices, Device Farm will not sign
     * your app again. For public devices, Device Farm always signs your apps again and
     * this parameter has no effect.</p> <p>For more information about how Device Farm
     * re-signs your app(s), see <a href="https://aws.amazon.com/device-farm/faq/">Do
     * you modify my app?</a> in the <i>AWS Device Farm FAQs</i>.</p>
     */
    inline void SetSkipAppResign(bool value) { m_skipAppResignHasBeenSet = true; m_skipAppResign = value; }

    /**
     * <p>When set to <code>true</code>, for private devices, Device Farm will not sign
     * your app again. For public devices, Device Farm always signs your apps again and
     * this parameter has no effect.</p> <p>For more information about how Device Farm
     * re-signs your app(s), see <a href="https://aws.amazon.com/device-farm/faq/">Do
     * you modify my app?</a> in the <i>AWS Device Farm FAQs</i>.</p>
     */
    inline RemoteAccessSession& WithSkipAppResign(bool value) { SetSkipAppResign(value); return *this;}

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

    Aws::String m_instanceArn;
    bool m_instanceArnHasBeenSet;

    bool m_remoteDebugEnabled;
    bool m_remoteDebugEnabledHasBeenSet;

    bool m_remoteRecordEnabled;
    bool m_remoteRecordEnabledHasBeenSet;

    Aws::String m_remoteRecordAppArn;
    bool m_remoteRecordAppArnHasBeenSet;

    Aws::String m_hostAddress;
    bool m_hostAddressHasBeenSet;

    Aws::String m_clientId;
    bool m_clientIdHasBeenSet;

    BillingMethod m_billingMethod;
    bool m_billingMethodHasBeenSet;

    DeviceMinutes m_deviceMinutes;
    bool m_deviceMinutesHasBeenSet;

    Aws::String m_endpoint;
    bool m_endpointHasBeenSet;

    Aws::String m_deviceUdid;
    bool m_deviceUdidHasBeenSet;

    InteractionMode m_interactionMode;
    bool m_interactionModeHasBeenSet;

    bool m_skipAppResign;
    bool m_skipAppResignHasBeenSet;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
