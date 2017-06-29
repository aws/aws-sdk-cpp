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
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gamelift/model/EventCode.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace GameLift
{
namespace Model
{

  /**
   * <p>Log entry describing an event that involves Amazon GameLift resources (such
   * as a fleet). In addition to tracking activity, event codes and messages can
   * provide additional information for troubleshooting and debugging
   * problems.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/Event">AWS API
   * Reference</a></p>
   */
  class AWS_GAMELIFT_API Event
  {
  public:
    Event();
    Event(const Aws::Utils::Json::JsonValue& jsonValue);
    Event& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>Unique identifier for a fleet event.</p>
     */
    inline const Aws::String& GetEventId() const{ return m_eventId; }

    /**
     * <p>Unique identifier for a fleet event.</p>
     */
    inline void SetEventId(const Aws::String& value) { m_eventIdHasBeenSet = true; m_eventId = value; }

    /**
     * <p>Unique identifier for a fleet event.</p>
     */
    inline void SetEventId(Aws::String&& value) { m_eventIdHasBeenSet = true; m_eventId = std::move(value); }

    /**
     * <p>Unique identifier for a fleet event.</p>
     */
    inline void SetEventId(const char* value) { m_eventIdHasBeenSet = true; m_eventId.assign(value); }

    /**
     * <p>Unique identifier for a fleet event.</p>
     */
    inline Event& WithEventId(const Aws::String& value) { SetEventId(value); return *this;}

    /**
     * <p>Unique identifier for a fleet event.</p>
     */
    inline Event& WithEventId(Aws::String&& value) { SetEventId(std::move(value)); return *this;}

    /**
     * <p>Unique identifier for a fleet event.</p>
     */
    inline Event& WithEventId(const char* value) { SetEventId(value); return *this;}

    /**
     * <p>Unique identifier for an event resource, such as a fleet ID.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>Unique identifier for an event resource, such as a fleet ID.</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>Unique identifier for an event resource, such as a fleet ID.</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p>Unique identifier for an event resource, such as a fleet ID.</p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>Unique identifier for an event resource, such as a fleet ID.</p>
     */
    inline Event& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>Unique identifier for an event resource, such as a fleet ID.</p>
     */
    inline Event& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>Unique identifier for an event resource, such as a fleet ID.</p>
     */
    inline Event& WithResourceId(const char* value) { SetResourceId(value); return *this;}

    /**
     * <p>Type of event being logged. The following events are currently in use:</p>
     * <ul> <li> <p>General events:</p> <ul> <li> <p> <b>GENERIC_EVENT</b> – An
     * unspecified event has occurred.</p> </li> </ul> </li> <li> <p>Fleet creation
     * events:</p> <ul> <li> <p> <b>FLEET_CREATED</b> – A fleet record was successfully
     * created with a status of NEW. Event messaging includes the fleet ID.</p> </li>
     * <li> <p> <b>FLEET_STATE_DOWNLOADING</b> – Fleet status changed from NEW to
     * DOWNLOADING. The compressed build has started downloading to a fleet instance
     * for installation.</p> </li> <li> <p> <b>FLEET_BINARY_DOWNLOAD_FAILED</b> – The
     * build failed to download to the fleet instance.</p> </li> <li> <p>
     * <b>FLEET_CREATION_EXTRACTING_BUILD</b> – The game server build was successfully
     * downloaded to an instance, and the build files are now being extracted from the
     * uploaded build and saved to an instance. Failure at this stage prevents a fleet
     * from moving to ACTIVE status. Logs for this stage display a list of the files
     * that are extracted and saved on the instance. Access the logs by using the URL
     * in <i>PreSignedLogUrl</i>).</p> </li> <li> <p>
     * <b>FLEET_CREATION_RUNNING_INSTALLER</b> – The game server build files were
     * successfully extracted, and the Amazon GameLift is now running the build's
     * install script (if one is included). Failure in this stage prevents a fleet from
     * moving to ACTIVE status. Logs for this stage list the installation steps and
     * whether or not the install completed sucessfully. Access the logs by using the
     * URL in <i>PreSignedLogUrl</i>). </p> </li> <li> <p>
     * <b>FLEET_CREATION_VALIDATING_RUNTIME_CONFIG</b> – The build process was
     * successful, and the Amazon GameLift is now verifying that the game server launch
     * path(s), which are specified in the fleet's run-time configuration, exist. If
     * any listed launch path exists, Amazon GameLift tries to launch a game server
     * process and waits for the process to report ready. Failures in this stage
     * prevent a fleet from moving to ACTIVE status. Logs for this stage list the
     * launch paths in the run-time configuration and indicate whether each is found.
     * Access the logs by using the URL in <i>PreSignedLogUrl</i>). Once the game
     * server is launched, failures and crashes are logged; these logs can be
     * downloaded from the Amazon GameLift console. </p> </li> <li> <p>
     * <b>FLEET_STATE_VALIDATING</b> – Fleet status changed from DOWNLOADING to
     * VALIDATING.</p> </li> <li> <p> <b>FLEET_VALIDATION_LAUNCH_PATH_NOT_FOUND</b> –
     * Validation of the run-time validation failed because the executable specified in
     * a launch path does not exist on the instance.</p> </li> <li> <p>
     * <b>FLEET_STATE_BUILDING</b> – Fleet status changed from VALIDATING to
     * BUILDING.</p> </li> <li> <p> <b>FLEET_VALIDATION_EXECUTABLE_RUNTIME_FAILURE</b>
     * – Validation of the runtime validation failed because the executable specified
     * in a launch path failed to run on the fleet instance.</p> </li> <li> <p>
     * <b>FLEET_STATE_ACTIVATING</b> – Fleet status changed from BUILDING to
     * ACTIVATING. </p> </li> <li> <p> <b>FLEET_ACTIVATION_FAILED</b> - The fleet
     * failed to successfully complete one of the steps in the fleet activation
     * process. This event code indicates that the game build was successfully
     * downloaded to a fleet instance, built, and validated, but was not able to start
     * a server process. A possible reason for failure is that the game server is not
     * reporting "process ready" to the Amazon GameLift service.</p> </li> <li> <p>
     * <b>FLEET_STATE_ACTIVE</b> – The fleet's status changed from ACTIVATING to
     * ACTIVE. The fleet is now ready to host game sessions.</p> </li> </ul> </li> <li>
     * <p>Other fleet events:</p> <ul> <li> <p> <b>FLEET_SCALING_EVENT</b> – A change
     * was made to the fleet's capacity settings (desired instances, minimum/maximum
     * scaling limits). Event messaging includes the new capacity settings.</p> </li>
     * <li> <p> <b>FLEET_NEW_GAME_SESSION_PROTECTION_POLICY_UPDATED</b> – A change was
     * made to the fleet's game session protection policy setting. Event messaging
     * includes both the old and new policy setting. </p> </li> <li> <p>
     * <b>FLEET_DELETED</b> – A request to delete a fleet was initiated.</p> </li>
     * </ul> </li> </ul>
     */
    inline const EventCode& GetEventCode() const{ return m_eventCode; }

    /**
     * <p>Type of event being logged. The following events are currently in use:</p>
     * <ul> <li> <p>General events:</p> <ul> <li> <p> <b>GENERIC_EVENT</b> – An
     * unspecified event has occurred.</p> </li> </ul> </li> <li> <p>Fleet creation
     * events:</p> <ul> <li> <p> <b>FLEET_CREATED</b> – A fleet record was successfully
     * created with a status of NEW. Event messaging includes the fleet ID.</p> </li>
     * <li> <p> <b>FLEET_STATE_DOWNLOADING</b> – Fleet status changed from NEW to
     * DOWNLOADING. The compressed build has started downloading to a fleet instance
     * for installation.</p> </li> <li> <p> <b>FLEET_BINARY_DOWNLOAD_FAILED</b> – The
     * build failed to download to the fleet instance.</p> </li> <li> <p>
     * <b>FLEET_CREATION_EXTRACTING_BUILD</b> – The game server build was successfully
     * downloaded to an instance, and the build files are now being extracted from the
     * uploaded build and saved to an instance. Failure at this stage prevents a fleet
     * from moving to ACTIVE status. Logs for this stage display a list of the files
     * that are extracted and saved on the instance. Access the logs by using the URL
     * in <i>PreSignedLogUrl</i>).</p> </li> <li> <p>
     * <b>FLEET_CREATION_RUNNING_INSTALLER</b> – The game server build files were
     * successfully extracted, and the Amazon GameLift is now running the build's
     * install script (if one is included). Failure in this stage prevents a fleet from
     * moving to ACTIVE status. Logs for this stage list the installation steps and
     * whether or not the install completed sucessfully. Access the logs by using the
     * URL in <i>PreSignedLogUrl</i>). </p> </li> <li> <p>
     * <b>FLEET_CREATION_VALIDATING_RUNTIME_CONFIG</b> – The build process was
     * successful, and the Amazon GameLift is now verifying that the game server launch
     * path(s), which are specified in the fleet's run-time configuration, exist. If
     * any listed launch path exists, Amazon GameLift tries to launch a game server
     * process and waits for the process to report ready. Failures in this stage
     * prevent a fleet from moving to ACTIVE status. Logs for this stage list the
     * launch paths in the run-time configuration and indicate whether each is found.
     * Access the logs by using the URL in <i>PreSignedLogUrl</i>). Once the game
     * server is launched, failures and crashes are logged; these logs can be
     * downloaded from the Amazon GameLift console. </p> </li> <li> <p>
     * <b>FLEET_STATE_VALIDATING</b> – Fleet status changed from DOWNLOADING to
     * VALIDATING.</p> </li> <li> <p> <b>FLEET_VALIDATION_LAUNCH_PATH_NOT_FOUND</b> –
     * Validation of the run-time validation failed because the executable specified in
     * a launch path does not exist on the instance.</p> </li> <li> <p>
     * <b>FLEET_STATE_BUILDING</b> – Fleet status changed from VALIDATING to
     * BUILDING.</p> </li> <li> <p> <b>FLEET_VALIDATION_EXECUTABLE_RUNTIME_FAILURE</b>
     * – Validation of the runtime validation failed because the executable specified
     * in a launch path failed to run on the fleet instance.</p> </li> <li> <p>
     * <b>FLEET_STATE_ACTIVATING</b> – Fleet status changed from BUILDING to
     * ACTIVATING. </p> </li> <li> <p> <b>FLEET_ACTIVATION_FAILED</b> - The fleet
     * failed to successfully complete one of the steps in the fleet activation
     * process. This event code indicates that the game build was successfully
     * downloaded to a fleet instance, built, and validated, but was not able to start
     * a server process. A possible reason for failure is that the game server is not
     * reporting "process ready" to the Amazon GameLift service.</p> </li> <li> <p>
     * <b>FLEET_STATE_ACTIVE</b> – The fleet's status changed from ACTIVATING to
     * ACTIVE. The fleet is now ready to host game sessions.</p> </li> </ul> </li> <li>
     * <p>Other fleet events:</p> <ul> <li> <p> <b>FLEET_SCALING_EVENT</b> – A change
     * was made to the fleet's capacity settings (desired instances, minimum/maximum
     * scaling limits). Event messaging includes the new capacity settings.</p> </li>
     * <li> <p> <b>FLEET_NEW_GAME_SESSION_PROTECTION_POLICY_UPDATED</b> – A change was
     * made to the fleet's game session protection policy setting. Event messaging
     * includes both the old and new policy setting. </p> </li> <li> <p>
     * <b>FLEET_DELETED</b> – A request to delete a fleet was initiated.</p> </li>
     * </ul> </li> </ul>
     */
    inline void SetEventCode(const EventCode& value) { m_eventCodeHasBeenSet = true; m_eventCode = value; }

    /**
     * <p>Type of event being logged. The following events are currently in use:</p>
     * <ul> <li> <p>General events:</p> <ul> <li> <p> <b>GENERIC_EVENT</b> – An
     * unspecified event has occurred.</p> </li> </ul> </li> <li> <p>Fleet creation
     * events:</p> <ul> <li> <p> <b>FLEET_CREATED</b> – A fleet record was successfully
     * created with a status of NEW. Event messaging includes the fleet ID.</p> </li>
     * <li> <p> <b>FLEET_STATE_DOWNLOADING</b> – Fleet status changed from NEW to
     * DOWNLOADING. The compressed build has started downloading to a fleet instance
     * for installation.</p> </li> <li> <p> <b>FLEET_BINARY_DOWNLOAD_FAILED</b> – The
     * build failed to download to the fleet instance.</p> </li> <li> <p>
     * <b>FLEET_CREATION_EXTRACTING_BUILD</b> – The game server build was successfully
     * downloaded to an instance, and the build files are now being extracted from the
     * uploaded build and saved to an instance. Failure at this stage prevents a fleet
     * from moving to ACTIVE status. Logs for this stage display a list of the files
     * that are extracted and saved on the instance. Access the logs by using the URL
     * in <i>PreSignedLogUrl</i>).</p> </li> <li> <p>
     * <b>FLEET_CREATION_RUNNING_INSTALLER</b> – The game server build files were
     * successfully extracted, and the Amazon GameLift is now running the build's
     * install script (if one is included). Failure in this stage prevents a fleet from
     * moving to ACTIVE status. Logs for this stage list the installation steps and
     * whether or not the install completed sucessfully. Access the logs by using the
     * URL in <i>PreSignedLogUrl</i>). </p> </li> <li> <p>
     * <b>FLEET_CREATION_VALIDATING_RUNTIME_CONFIG</b> – The build process was
     * successful, and the Amazon GameLift is now verifying that the game server launch
     * path(s), which are specified in the fleet's run-time configuration, exist. If
     * any listed launch path exists, Amazon GameLift tries to launch a game server
     * process and waits for the process to report ready. Failures in this stage
     * prevent a fleet from moving to ACTIVE status. Logs for this stage list the
     * launch paths in the run-time configuration and indicate whether each is found.
     * Access the logs by using the URL in <i>PreSignedLogUrl</i>). Once the game
     * server is launched, failures and crashes are logged; these logs can be
     * downloaded from the Amazon GameLift console. </p> </li> <li> <p>
     * <b>FLEET_STATE_VALIDATING</b> – Fleet status changed from DOWNLOADING to
     * VALIDATING.</p> </li> <li> <p> <b>FLEET_VALIDATION_LAUNCH_PATH_NOT_FOUND</b> –
     * Validation of the run-time validation failed because the executable specified in
     * a launch path does not exist on the instance.</p> </li> <li> <p>
     * <b>FLEET_STATE_BUILDING</b> – Fleet status changed from VALIDATING to
     * BUILDING.</p> </li> <li> <p> <b>FLEET_VALIDATION_EXECUTABLE_RUNTIME_FAILURE</b>
     * – Validation of the runtime validation failed because the executable specified
     * in a launch path failed to run on the fleet instance.</p> </li> <li> <p>
     * <b>FLEET_STATE_ACTIVATING</b> – Fleet status changed from BUILDING to
     * ACTIVATING. </p> </li> <li> <p> <b>FLEET_ACTIVATION_FAILED</b> - The fleet
     * failed to successfully complete one of the steps in the fleet activation
     * process. This event code indicates that the game build was successfully
     * downloaded to a fleet instance, built, and validated, but was not able to start
     * a server process. A possible reason for failure is that the game server is not
     * reporting "process ready" to the Amazon GameLift service.</p> </li> <li> <p>
     * <b>FLEET_STATE_ACTIVE</b> – The fleet's status changed from ACTIVATING to
     * ACTIVE. The fleet is now ready to host game sessions.</p> </li> </ul> </li> <li>
     * <p>Other fleet events:</p> <ul> <li> <p> <b>FLEET_SCALING_EVENT</b> – A change
     * was made to the fleet's capacity settings (desired instances, minimum/maximum
     * scaling limits). Event messaging includes the new capacity settings.</p> </li>
     * <li> <p> <b>FLEET_NEW_GAME_SESSION_PROTECTION_POLICY_UPDATED</b> – A change was
     * made to the fleet's game session protection policy setting. Event messaging
     * includes both the old and new policy setting. </p> </li> <li> <p>
     * <b>FLEET_DELETED</b> – A request to delete a fleet was initiated.</p> </li>
     * </ul> </li> </ul>
     */
    inline void SetEventCode(EventCode&& value) { m_eventCodeHasBeenSet = true; m_eventCode = std::move(value); }

    /**
     * <p>Type of event being logged. The following events are currently in use:</p>
     * <ul> <li> <p>General events:</p> <ul> <li> <p> <b>GENERIC_EVENT</b> – An
     * unspecified event has occurred.</p> </li> </ul> </li> <li> <p>Fleet creation
     * events:</p> <ul> <li> <p> <b>FLEET_CREATED</b> – A fleet record was successfully
     * created with a status of NEW. Event messaging includes the fleet ID.</p> </li>
     * <li> <p> <b>FLEET_STATE_DOWNLOADING</b> – Fleet status changed from NEW to
     * DOWNLOADING. The compressed build has started downloading to a fleet instance
     * for installation.</p> </li> <li> <p> <b>FLEET_BINARY_DOWNLOAD_FAILED</b> – The
     * build failed to download to the fleet instance.</p> </li> <li> <p>
     * <b>FLEET_CREATION_EXTRACTING_BUILD</b> – The game server build was successfully
     * downloaded to an instance, and the build files are now being extracted from the
     * uploaded build and saved to an instance. Failure at this stage prevents a fleet
     * from moving to ACTIVE status. Logs for this stage display a list of the files
     * that are extracted and saved on the instance. Access the logs by using the URL
     * in <i>PreSignedLogUrl</i>).</p> </li> <li> <p>
     * <b>FLEET_CREATION_RUNNING_INSTALLER</b> – The game server build files were
     * successfully extracted, and the Amazon GameLift is now running the build's
     * install script (if one is included). Failure in this stage prevents a fleet from
     * moving to ACTIVE status. Logs for this stage list the installation steps and
     * whether or not the install completed sucessfully. Access the logs by using the
     * URL in <i>PreSignedLogUrl</i>). </p> </li> <li> <p>
     * <b>FLEET_CREATION_VALIDATING_RUNTIME_CONFIG</b> – The build process was
     * successful, and the Amazon GameLift is now verifying that the game server launch
     * path(s), which are specified in the fleet's run-time configuration, exist. If
     * any listed launch path exists, Amazon GameLift tries to launch a game server
     * process and waits for the process to report ready. Failures in this stage
     * prevent a fleet from moving to ACTIVE status. Logs for this stage list the
     * launch paths in the run-time configuration and indicate whether each is found.
     * Access the logs by using the URL in <i>PreSignedLogUrl</i>). Once the game
     * server is launched, failures and crashes are logged; these logs can be
     * downloaded from the Amazon GameLift console. </p> </li> <li> <p>
     * <b>FLEET_STATE_VALIDATING</b> – Fleet status changed from DOWNLOADING to
     * VALIDATING.</p> </li> <li> <p> <b>FLEET_VALIDATION_LAUNCH_PATH_NOT_FOUND</b> –
     * Validation of the run-time validation failed because the executable specified in
     * a launch path does not exist on the instance.</p> </li> <li> <p>
     * <b>FLEET_STATE_BUILDING</b> – Fleet status changed from VALIDATING to
     * BUILDING.</p> </li> <li> <p> <b>FLEET_VALIDATION_EXECUTABLE_RUNTIME_FAILURE</b>
     * – Validation of the runtime validation failed because the executable specified
     * in a launch path failed to run on the fleet instance.</p> </li> <li> <p>
     * <b>FLEET_STATE_ACTIVATING</b> – Fleet status changed from BUILDING to
     * ACTIVATING. </p> </li> <li> <p> <b>FLEET_ACTIVATION_FAILED</b> - The fleet
     * failed to successfully complete one of the steps in the fleet activation
     * process. This event code indicates that the game build was successfully
     * downloaded to a fleet instance, built, and validated, but was not able to start
     * a server process. A possible reason for failure is that the game server is not
     * reporting "process ready" to the Amazon GameLift service.</p> </li> <li> <p>
     * <b>FLEET_STATE_ACTIVE</b> – The fleet's status changed from ACTIVATING to
     * ACTIVE. The fleet is now ready to host game sessions.</p> </li> </ul> </li> <li>
     * <p>Other fleet events:</p> <ul> <li> <p> <b>FLEET_SCALING_EVENT</b> – A change
     * was made to the fleet's capacity settings (desired instances, minimum/maximum
     * scaling limits). Event messaging includes the new capacity settings.</p> </li>
     * <li> <p> <b>FLEET_NEW_GAME_SESSION_PROTECTION_POLICY_UPDATED</b> – A change was
     * made to the fleet's game session protection policy setting. Event messaging
     * includes both the old and new policy setting. </p> </li> <li> <p>
     * <b>FLEET_DELETED</b> – A request to delete a fleet was initiated.</p> </li>
     * </ul> </li> </ul>
     */
    inline Event& WithEventCode(const EventCode& value) { SetEventCode(value); return *this;}

    /**
     * <p>Type of event being logged. The following events are currently in use:</p>
     * <ul> <li> <p>General events:</p> <ul> <li> <p> <b>GENERIC_EVENT</b> – An
     * unspecified event has occurred.</p> </li> </ul> </li> <li> <p>Fleet creation
     * events:</p> <ul> <li> <p> <b>FLEET_CREATED</b> – A fleet record was successfully
     * created with a status of NEW. Event messaging includes the fleet ID.</p> </li>
     * <li> <p> <b>FLEET_STATE_DOWNLOADING</b> – Fleet status changed from NEW to
     * DOWNLOADING. The compressed build has started downloading to a fleet instance
     * for installation.</p> </li> <li> <p> <b>FLEET_BINARY_DOWNLOAD_FAILED</b> – The
     * build failed to download to the fleet instance.</p> </li> <li> <p>
     * <b>FLEET_CREATION_EXTRACTING_BUILD</b> – The game server build was successfully
     * downloaded to an instance, and the build files are now being extracted from the
     * uploaded build and saved to an instance. Failure at this stage prevents a fleet
     * from moving to ACTIVE status. Logs for this stage display a list of the files
     * that are extracted and saved on the instance. Access the logs by using the URL
     * in <i>PreSignedLogUrl</i>).</p> </li> <li> <p>
     * <b>FLEET_CREATION_RUNNING_INSTALLER</b> – The game server build files were
     * successfully extracted, and the Amazon GameLift is now running the build's
     * install script (if one is included). Failure in this stage prevents a fleet from
     * moving to ACTIVE status. Logs for this stage list the installation steps and
     * whether or not the install completed sucessfully. Access the logs by using the
     * URL in <i>PreSignedLogUrl</i>). </p> </li> <li> <p>
     * <b>FLEET_CREATION_VALIDATING_RUNTIME_CONFIG</b> – The build process was
     * successful, and the Amazon GameLift is now verifying that the game server launch
     * path(s), which are specified in the fleet's run-time configuration, exist. If
     * any listed launch path exists, Amazon GameLift tries to launch a game server
     * process and waits for the process to report ready. Failures in this stage
     * prevent a fleet from moving to ACTIVE status. Logs for this stage list the
     * launch paths in the run-time configuration and indicate whether each is found.
     * Access the logs by using the URL in <i>PreSignedLogUrl</i>). Once the game
     * server is launched, failures and crashes are logged; these logs can be
     * downloaded from the Amazon GameLift console. </p> </li> <li> <p>
     * <b>FLEET_STATE_VALIDATING</b> – Fleet status changed from DOWNLOADING to
     * VALIDATING.</p> </li> <li> <p> <b>FLEET_VALIDATION_LAUNCH_PATH_NOT_FOUND</b> –
     * Validation of the run-time validation failed because the executable specified in
     * a launch path does not exist on the instance.</p> </li> <li> <p>
     * <b>FLEET_STATE_BUILDING</b> – Fleet status changed from VALIDATING to
     * BUILDING.</p> </li> <li> <p> <b>FLEET_VALIDATION_EXECUTABLE_RUNTIME_FAILURE</b>
     * – Validation of the runtime validation failed because the executable specified
     * in a launch path failed to run on the fleet instance.</p> </li> <li> <p>
     * <b>FLEET_STATE_ACTIVATING</b> – Fleet status changed from BUILDING to
     * ACTIVATING. </p> </li> <li> <p> <b>FLEET_ACTIVATION_FAILED</b> - The fleet
     * failed to successfully complete one of the steps in the fleet activation
     * process. This event code indicates that the game build was successfully
     * downloaded to a fleet instance, built, and validated, but was not able to start
     * a server process. A possible reason for failure is that the game server is not
     * reporting "process ready" to the Amazon GameLift service.</p> </li> <li> <p>
     * <b>FLEET_STATE_ACTIVE</b> – The fleet's status changed from ACTIVATING to
     * ACTIVE. The fleet is now ready to host game sessions.</p> </li> </ul> </li> <li>
     * <p>Other fleet events:</p> <ul> <li> <p> <b>FLEET_SCALING_EVENT</b> – A change
     * was made to the fleet's capacity settings (desired instances, minimum/maximum
     * scaling limits). Event messaging includes the new capacity settings.</p> </li>
     * <li> <p> <b>FLEET_NEW_GAME_SESSION_PROTECTION_POLICY_UPDATED</b> – A change was
     * made to the fleet's game session protection policy setting. Event messaging
     * includes both the old and new policy setting. </p> </li> <li> <p>
     * <b>FLEET_DELETED</b> – A request to delete a fleet was initiated.</p> </li>
     * </ul> </li> </ul>
     */
    inline Event& WithEventCode(EventCode&& value) { SetEventCode(std::move(value)); return *this;}

    /**
     * <p>Additional information related to the event.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>Additional information related to the event.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>Additional information related to the event.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>Additional information related to the event.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>Additional information related to the event.</p>
     */
    inline Event& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>Additional information related to the event.</p>
     */
    inline Event& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>Additional information related to the event.</p>
     */
    inline Event& WithMessage(const char* value) { SetMessage(value); return *this;}

    /**
     * <p>Time stamp indicating when this event occurred. Format is a number expressed
     * in Unix time as milliseconds (for example "1469498468.057").</p>
     */
    inline const Aws::Utils::DateTime& GetEventTime() const{ return m_eventTime; }

    /**
     * <p>Time stamp indicating when this event occurred. Format is a number expressed
     * in Unix time as milliseconds (for example "1469498468.057").</p>
     */
    inline void SetEventTime(const Aws::Utils::DateTime& value) { m_eventTimeHasBeenSet = true; m_eventTime = value; }

    /**
     * <p>Time stamp indicating when this event occurred. Format is a number expressed
     * in Unix time as milliseconds (for example "1469498468.057").</p>
     */
    inline void SetEventTime(Aws::Utils::DateTime&& value) { m_eventTimeHasBeenSet = true; m_eventTime = std::move(value); }

    /**
     * <p>Time stamp indicating when this event occurred. Format is a number expressed
     * in Unix time as milliseconds (for example "1469498468.057").</p>
     */
    inline Event& WithEventTime(const Aws::Utils::DateTime& value) { SetEventTime(value); return *this;}

    /**
     * <p>Time stamp indicating when this event occurred. Format is a number expressed
     * in Unix time as milliseconds (for example "1469498468.057").</p>
     */
    inline Event& WithEventTime(Aws::Utils::DateTime&& value) { SetEventTime(std::move(value)); return *this;}

    /**
     * <p>Location of stored logs with additional detail related to the event, useful
     * for debugging issues. The URL is valid for 15 minutes. Fleet creation logs can
     * also be accessed through the Amazon GameLift console.</p>
     */
    inline const Aws::String& GetPreSignedLogUrl() const{ return m_preSignedLogUrl; }

    /**
     * <p>Location of stored logs with additional detail related to the event, useful
     * for debugging issues. The URL is valid for 15 minutes. Fleet creation logs can
     * also be accessed through the Amazon GameLift console.</p>
     */
    inline void SetPreSignedLogUrl(const Aws::String& value) { m_preSignedLogUrlHasBeenSet = true; m_preSignedLogUrl = value; }

    /**
     * <p>Location of stored logs with additional detail related to the event, useful
     * for debugging issues. The URL is valid for 15 minutes. Fleet creation logs can
     * also be accessed through the Amazon GameLift console.</p>
     */
    inline void SetPreSignedLogUrl(Aws::String&& value) { m_preSignedLogUrlHasBeenSet = true; m_preSignedLogUrl = std::move(value); }

    /**
     * <p>Location of stored logs with additional detail related to the event, useful
     * for debugging issues. The URL is valid for 15 minutes. Fleet creation logs can
     * also be accessed through the Amazon GameLift console.</p>
     */
    inline void SetPreSignedLogUrl(const char* value) { m_preSignedLogUrlHasBeenSet = true; m_preSignedLogUrl.assign(value); }

    /**
     * <p>Location of stored logs with additional detail related to the event, useful
     * for debugging issues. The URL is valid for 15 minutes. Fleet creation logs can
     * also be accessed through the Amazon GameLift console.</p>
     */
    inline Event& WithPreSignedLogUrl(const Aws::String& value) { SetPreSignedLogUrl(value); return *this;}

    /**
     * <p>Location of stored logs with additional detail related to the event, useful
     * for debugging issues. The URL is valid for 15 minutes. Fleet creation logs can
     * also be accessed through the Amazon GameLift console.</p>
     */
    inline Event& WithPreSignedLogUrl(Aws::String&& value) { SetPreSignedLogUrl(std::move(value)); return *this;}

    /**
     * <p>Location of stored logs with additional detail related to the event, useful
     * for debugging issues. The URL is valid for 15 minutes. Fleet creation logs can
     * also be accessed through the Amazon GameLift console.</p>
     */
    inline Event& WithPreSignedLogUrl(const char* value) { SetPreSignedLogUrl(value); return *this;}

  private:
    Aws::String m_eventId;
    bool m_eventIdHasBeenSet;
    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet;
    EventCode m_eventCode;
    bool m_eventCodeHasBeenSet;
    Aws::String m_message;
    bool m_messageHasBeenSet;
    Aws::Utils::DateTime m_eventTime;
    bool m_eventTimeHasBeenSet;
    Aws::String m_preSignedLogUrl;
    bool m_preSignedLogUrlHasBeenSet;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
