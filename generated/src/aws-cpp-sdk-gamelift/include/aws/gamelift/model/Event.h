/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class JsonView;
} // namespace Json
} // namespace Utils
namespace GameLift
{
namespace Model
{

  /**
   * <p>Log entry describing an event that involves Amazon GameLift Servers resources
   * (such as a fleet). In addition to tracking activity, event codes and messages
   * can provide additional information for troubleshooting and debugging
   * problems.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/Event">AWS API
   * Reference</a></p>
   */
  class Event
  {
  public:
    AWS_GAMELIFT_API Event() = default;
    AWS_GAMELIFT_API Event(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Event& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique identifier for a fleet event.</p>
     */
    inline const Aws::String& GetEventId() const { return m_eventId; }
    inline bool EventIdHasBeenSet() const { return m_eventIdHasBeenSet; }
    template<typename EventIdT = Aws::String>
    void SetEventId(EventIdT&& value) { m_eventIdHasBeenSet = true; m_eventId = std::forward<EventIdT>(value); }
    template<typename EventIdT = Aws::String>
    Event& WithEventId(EventIdT&& value) { SetEventId(std::forward<EventIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for an event resource, such as a fleet ID.</p>
     */
    inline const Aws::String& GetResourceId() const { return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    template<typename ResourceIdT = Aws::String>
    void SetResourceId(ResourceIdT&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::forward<ResourceIdT>(value); }
    template<typename ResourceIdT = Aws::String>
    Event& WithResourceId(ResourceIdT&& value) { SetResourceId(std::forward<ResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of event being logged. </p> <p> <b>Fleet state transition
     * events:</b> </p> <ul> <li> <p>FLEET_CREATED -- A fleet resource was successfully
     * created with a status of <code>NEW</code>. Event messaging includes the fleet
     * ID.</p> </li> <li> <p>FLEET_STATE_DOWNLOADING -- Fleet status changed from
     * <code>NEW</code> to <code>DOWNLOADING</code>. Amazon GameLift Servers is
     * downloading the compressed build and running install scripts.</p> </li> <li>
     * <p>FLEET_STATE_VALIDATING -- Fleet status changed from <code>DOWNLOADING</code>
     * to <code>VALIDATING</code>. Amazon GameLift Servers has successfully installed
     * build and is now validating the build files.</p> </li> <li>
     * <p>FLEET_STATE_BUILDING -- Fleet status changed from <code>VALIDATING</code> to
     * <code>BUILDING</code>. Amazon GameLift Servers has successfully verified the
     * build files and is now launching a fleet instance.</p> </li> <li>
     * <p>FLEET_STATE_ACTIVATING -- Fleet status changed from <code>BUILDING</code> to
     * <code>ACTIVATING</code>. Amazon GameLift Servers is launching a game server
     * process on the fleet instance and is testing its connectivity with the Amazon
     * GameLift Servers service.</p> </li> <li> <p>FLEET_STATE_ACTIVE -- The fleet's
     * status changed from <code>ACTIVATING</code> to <code>ACTIVE</code>. The fleet is
     * now ready to host game sessions.</p> </li> <li> <p>FLEET_STATE_ERROR -- The
     * Fleet's status changed to <code>ERROR</code>. Describe the fleet event message
     * for more details.</p> </li> </ul> <p> <b>Fleet creation events (ordered by fleet
     * creation activity):</b> </p> <ul> <li> <p>FLEET_BINARY_DOWNLOAD_FAILED -- The
     * build failed to download to the fleet instance.</p> </li> <li>
     * <p>FLEET_CREATION_EXTRACTING_BUILD -- The game server build was successfully
     * downloaded to an instance, and Amazon GameLift Serversis now extracting the
     * build files from the uploaded build. Failure at this stage prevents a fleet from
     * moving to ACTIVE status. Logs for this stage display a list of the files that
     * are extracted and saved on the instance. Access the logs by using the URL in
     * <i>PreSignedLogUrl</i>.</p> </li> <li> <p>FLEET_CREATION_RUNNING_INSTALLER --
     * The game server build files were successfully extracted, and Amazon GameLift
     * Servers is now running the build's install script (if one is included). Failure
     * in this stage prevents a fleet from moving to ACTIVE status. Logs for this stage
     * list the installation steps and whether or not the install completed
     * successfully. Access the logs by using the URL in <i>PreSignedLogUrl</i>.</p>
     * </li> <li> <p>FLEET_CREATION_COMPLETED_INSTALLER -- The game server build files
     * were successfully installed and validation of the installation will begin
     * soon.</p> </li> <li> <p>FLEET_CREATION_FAILED_INSTALLER -- The installed failed
     * while attempting to install the build files. This event indicates that the
     * failure occurred before Amazon GameLift Servers could start validation. </p>
     * </li> <li> <p>FLEET_CREATION_VALIDATING_RUNTIME_CONFIG -- The build process was
     * successful, and the GameLift is now verifying that the game server launch paths,
     * which are specified in the fleet's runtime configuration, exist. If any listed
     * launch path exists, Amazon GameLift Servers tries to launch a game server
     * process and waits for the process to report ready. Failures in this stage
     * prevent a fleet from moving to <code>ACTIVE</code> status. Logs for this stage
     * list the launch paths in the runtime configuration and indicate whether each is
     * found. Access the logs by using the URL in <i>PreSignedLogUrl</i>.</p> </li>
     * <li> <p>FLEET_VALIDATION_LAUNCH_PATH_NOT_FOUND -- Validation of the runtime
     * configuration failed because the executable specified in a launch path does not
     * exist on the instance.</p> </li> <li>
     * <p>FLEET_VALIDATION_EXECUTABLE_RUNTIME_FAILURE -- Validation of the runtime
     * configuration failed because the executable specified in a launch path failed to
     * run on the fleet instance.</p> </li> <li> <p>FLEET_VALIDATION_TIMED_OUT --
     * Validation of the fleet at the end of creation timed out. Try fleet creation
     * again.</p> </li> <li> <p>FLEET_ACTIVATION_FAILED -- The fleet failed to
     * successfully complete one of the steps in the fleet activation process. This
     * event code indicates that the game build was successfully downloaded to a fleet
     * instance, built, and validated, but was not able to start a server process. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-creating-debug.html#fleets-creating-debug-creation">Debug
     * Fleet Creation Issues</a>.</p> </li> <li>
     * <p>FLEET_ACTIVATION_FAILED_NO_INSTANCES -- Fleet creation was not able to obtain
     * any instances based on the input fleet attributes. Try again at a different time
     * or choose a different combination of fleet attributes such as fleet type,
     * instance type, etc.</p> </li> <li> <p>FLEET_INITIALIZATION_FAILED -- A generic
     * exception occurred during fleet creation. Describe the fleet event message for
     * more details.</p> </li> </ul> <p> <b>VPC peering events:</b> </p> <ul> <li>
     * <p>FLEET_VPC_PEERING_SUCCEEDED -- A VPC peering connection has been established
     * between the VPC for an Amazon GameLift Servers fleet and a VPC in your Amazon
     * Web Services account.</p> </li> <li> <p>FLEET_VPC_PEERING_FAILED -- A requested
     * VPC peering connection has failed. Event details and status information provide
     * additional detail. A common reason for peering failure is that the two VPCs have
     * overlapping CIDR blocks of IPv4 addresses. To resolve this, change the CIDR
     * block for the VPC in your Amazon Web Services account. For more information on
     * VPC peering failures, see <a
     * href="https://docs.aws.amazon.com/AmazonVPC/latest/PeeringGuide/invalid-peering-configurations.html">https://docs.aws.amazon.com/AmazonVPC/latest/PeeringGuide/invalid-peering-configurations.html</a>
     * </p> </li> <li> <p>FLEET_VPC_PEERING_DELETED -- A VPC peering connection has
     * been successfully deleted.</p> </li> </ul> <p> <b>Spot instance events:</b> </p>
     * <ul> <li> <p> INSTANCE_INTERRUPTED -- A spot instance was interrupted by EC2
     * with a two-minute notification.</p> </li> <li> <p>INSTANCE_RECYCLED -- A spot
     * instance was determined to have a high risk of interruption and is scheduled to
     * be recycled once it has no active game sessions.</p> </li> </ul> <p> <b>Server
     * process events:</b> </p> <ul> <li> <p>SERVER_PROCESS_INVALID_PATH -- The game
     * server executable or script could not be found based on the Fleet runtime
     * configuration. Check that the launch path is correct based on the operating
     * system of the Fleet.</p> </li> <li> <p>SERVER_PROCESS_SDK_INITIALIZATION_TIMEOUT
     * -- The server process did not call <code>InitSDK()</code> within the time
     * expected (5 minutes). Check your game session log to see why
     * <code>InitSDK()</code> was not called in time. This event is not emitted for
     * managed container fleets and Anywhere fleets unless they're deployed with the
     * Amazon GameLift Servers Agent.</p> </li> <li>
     * <p>SERVER_PROCESS_PROCESS_READY_TIMEOUT -- The server process did not call
     * <code>ProcessReady()</code> within the time expected (5 minutes) after calling
     * <code>InitSDK()</code>. Check your game session log to see why
     * <code>ProcessReady()</code> was not called in time.</p> </li> <li>
     * <p>SERVER_PROCESS_CRASHED -- The server process exited without calling
     * <code>ProcessEnding()</code>. Check your game session log to see why
     * <code>ProcessEnding()</code> was not called.</p> </li> <li>
     * <p>SERVER_PROCESS_TERMINATED_UNHEALTHY -- The server process did not report a
     * valid health check for too long and was therefore terminated by GameLift. Check
     * your game session log to see if the thread became stuck processing a synchronous
     * task for too long.</p> </li> <li> <p>SERVER_PROCESS_FORCE_TERMINATED -- The
     * server process did not exit cleanly within the time expected after
     * <code>OnProcessTerminate()</code> was sent. Check your game session log to see
     * why termination took longer than expected.</p> </li> <li>
     * <p>SERVER_PROCESS_PROCESS_EXIT_TIMEOUT -- The server process did not exit
     * cleanly within the time expected (30 seconds) after calling
     * <code>ProcessEnding()</code>. Check your game session log to see why termination
     * took longer than expected.</p> </li> </ul> <p> <b>Game session events:</b> </p>
     * <ul> <li> <p>GAME_SESSION_ACTIVATION_TIMEOUT -- GameSession failed to activate
     * within the expected time. Check your game session log to see why
     * <code>ActivateGameSession()</code> took longer to complete than expected.</p>
     * </li> </ul> <p> <b>Other fleet events:</b> </p> <ul> <li> <p>FLEET_SCALING_EVENT
     * -- A change was made to the fleet's capacity settings (desired instances,
     * minimum/maximum scaling limits). Event messaging includes the new capacity
     * settings.</p> </li> <li> <p>FLEET_NEW_GAME_SESSION_PROTECTION_POLICY_UPDATED --
     * A change was made to the fleet's game session protection policy setting. Event
     * messaging includes both the old and new policy setting. </p> </li> <li>
     * <p>FLEET_DELETED -- A request to delete a fleet was initiated.</p> </li> <li>
     * <p> GENERIC_EVENT -- An unspecified event has occurred.</p> </li> </ul>
     */
    inline EventCode GetEventCode() const { return m_eventCode; }
    inline bool EventCodeHasBeenSet() const { return m_eventCodeHasBeenSet; }
    inline void SetEventCode(EventCode value) { m_eventCodeHasBeenSet = true; m_eventCode = value; }
    inline Event& WithEventCode(EventCode value) { SetEventCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional information related to the event.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    Event& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Time stamp indicating when this event occurred. Format is a number expressed
     * in Unix time as milliseconds (for example <code>"1469498468.057"</code>).</p>
     */
    inline const Aws::Utils::DateTime& GetEventTime() const { return m_eventTime; }
    inline bool EventTimeHasBeenSet() const { return m_eventTimeHasBeenSet; }
    template<typename EventTimeT = Aws::Utils::DateTime>
    void SetEventTime(EventTimeT&& value) { m_eventTimeHasBeenSet = true; m_eventTime = std::forward<EventTimeT>(value); }
    template<typename EventTimeT = Aws::Utils::DateTime>
    Event& WithEventTime(EventTimeT&& value) { SetEventTime(std::forward<EventTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Location of stored logs with additional detail that is related to the event.
     * This is useful for debugging issues. The URL is valid for 15 minutes. You can
     * also access fleet creation logs through the Amazon GameLift Servers console.</p>
     */
    inline const Aws::String& GetPreSignedLogUrl() const { return m_preSignedLogUrl; }
    inline bool PreSignedLogUrlHasBeenSet() const { return m_preSignedLogUrlHasBeenSet; }
    template<typename PreSignedLogUrlT = Aws::String>
    void SetPreSignedLogUrl(PreSignedLogUrlT&& value) { m_preSignedLogUrlHasBeenSet = true; m_preSignedLogUrl = std::forward<PreSignedLogUrlT>(value); }
    template<typename PreSignedLogUrlT = Aws::String>
    Event& WithPreSignedLogUrl(PreSignedLogUrlT&& value) { SetPreSignedLogUrl(std::forward<PreSignedLogUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of times that this event occurred.</p>
     */
    inline long long GetCount() const { return m_count; }
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }
    inline void SetCount(long long value) { m_countHasBeenSet = true; m_count = value; }
    inline Event& WithCount(long long value) { SetCount(value); return *this;}
    ///@}
  private:

    Aws::String m_eventId;
    bool m_eventIdHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    EventCode m_eventCode{EventCode::NOT_SET};
    bool m_eventCodeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::Utils::DateTime m_eventTime{};
    bool m_eventTimeHasBeenSet = false;

    Aws::String m_preSignedLogUrl;
    bool m_preSignedLogUrlHasBeenSet = false;

    long long m_count{0};
    bool m_countHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
