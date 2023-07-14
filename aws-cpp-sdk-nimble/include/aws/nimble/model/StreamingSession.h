/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/nimble/NimbleStudio_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/nimble/model/StreamingSessionState.h>
#include <aws/nimble/model/StreamingSessionStatusCode.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace NimbleStudio
{
namespace Model
{

  /**
   * <p>A streaming session is a virtual workstation created using a particular
   * launch profile.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/StreamingSession">AWS
   * API Reference</a></p>
   */
  class AWS_NIMBLESTUDIO_API StreamingSession
  {
  public:
    StreamingSession();
    StreamingSession(Aws::Utils::Json::JsonView jsonValue);
    StreamingSession& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the resource.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN of the resource.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The ARN of the resource.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The ARN of the resource.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The ARN of the resource.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The ARN of the resource.</p>
     */
    inline StreamingSession& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN of the resource.</p>
     */
    inline StreamingSession& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the resource.</p>
     */
    inline StreamingSession& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The Unix epoch timestamp in seconds for when the resource was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The Unix epoch timestamp in seconds for when the resource was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The Unix epoch timestamp in seconds for when the resource was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The Unix epoch timestamp in seconds for when the resource was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The Unix epoch timestamp in seconds for when the resource was created.</p>
     */
    inline StreamingSession& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The Unix epoch timestamp in seconds for when the resource was created.</p>
     */
    inline StreamingSession& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The user ID of the user that created the streaming session.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }

    /**
     * <p>The user ID of the user that created the streaming session.</p>
     */
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }

    /**
     * <p>The user ID of the user that created the streaming session.</p>
     */
    inline void SetCreatedBy(const Aws::String& value) { m_createdByHasBeenSet = true; m_createdBy = value; }

    /**
     * <p>The user ID of the user that created the streaming session.</p>
     */
    inline void SetCreatedBy(Aws::String&& value) { m_createdByHasBeenSet = true; m_createdBy = std::move(value); }

    /**
     * <p>The user ID of the user that created the streaming session.</p>
     */
    inline void SetCreatedBy(const char* value) { m_createdByHasBeenSet = true; m_createdBy.assign(value); }

    /**
     * <p>The user ID of the user that created the streaming session.</p>
     */
    inline StreamingSession& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}

    /**
     * <p>The user ID of the user that created the streaming session.</p>
     */
    inline StreamingSession& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}

    /**
     * <p>The user ID of the user that created the streaming session.</p>
     */
    inline StreamingSession& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}


    /**
     * <p>The EC2 Instance type used for the streaming session.</p>
     */
    inline const Aws::String& GetEc2InstanceType() const{ return m_ec2InstanceType; }

    /**
     * <p>The EC2 Instance type used for the streaming session.</p>
     */
    inline bool Ec2InstanceTypeHasBeenSet() const { return m_ec2InstanceTypeHasBeenSet; }

    /**
     * <p>The EC2 Instance type used for the streaming session.</p>
     */
    inline void SetEc2InstanceType(const Aws::String& value) { m_ec2InstanceTypeHasBeenSet = true; m_ec2InstanceType = value; }

    /**
     * <p>The EC2 Instance type used for the streaming session.</p>
     */
    inline void SetEc2InstanceType(Aws::String&& value) { m_ec2InstanceTypeHasBeenSet = true; m_ec2InstanceType = std::move(value); }

    /**
     * <p>The EC2 Instance type used for the streaming session.</p>
     */
    inline void SetEc2InstanceType(const char* value) { m_ec2InstanceTypeHasBeenSet = true; m_ec2InstanceType.assign(value); }

    /**
     * <p>The EC2 Instance type used for the streaming session.</p>
     */
    inline StreamingSession& WithEc2InstanceType(const Aws::String& value) { SetEc2InstanceType(value); return *this;}

    /**
     * <p>The EC2 Instance type used for the streaming session.</p>
     */
    inline StreamingSession& WithEc2InstanceType(Aws::String&& value) { SetEc2InstanceType(std::move(value)); return *this;}

    /**
     * <p>The EC2 Instance type used for the streaming session.</p>
     */
    inline StreamingSession& WithEc2InstanceType(const char* value) { SetEc2InstanceType(value); return *this;}


    /**
     * <p>The ID of the launch profile used to control access from the streaming
     * session.</p>
     */
    inline const Aws::String& GetLaunchProfileId() const{ return m_launchProfileId; }

    /**
     * <p>The ID of the launch profile used to control access from the streaming
     * session.</p>
     */
    inline bool LaunchProfileIdHasBeenSet() const { return m_launchProfileIdHasBeenSet; }

    /**
     * <p>The ID of the launch profile used to control access from the streaming
     * session.</p>
     */
    inline void SetLaunchProfileId(const Aws::String& value) { m_launchProfileIdHasBeenSet = true; m_launchProfileId = value; }

    /**
     * <p>The ID of the launch profile used to control access from the streaming
     * session.</p>
     */
    inline void SetLaunchProfileId(Aws::String&& value) { m_launchProfileIdHasBeenSet = true; m_launchProfileId = std::move(value); }

    /**
     * <p>The ID of the launch profile used to control access from the streaming
     * session.</p>
     */
    inline void SetLaunchProfileId(const char* value) { m_launchProfileIdHasBeenSet = true; m_launchProfileId.assign(value); }

    /**
     * <p>The ID of the launch profile used to control access from the streaming
     * session.</p>
     */
    inline StreamingSession& WithLaunchProfileId(const Aws::String& value) { SetLaunchProfileId(value); return *this;}

    /**
     * <p>The ID of the launch profile used to control access from the streaming
     * session.</p>
     */
    inline StreamingSession& WithLaunchProfileId(Aws::String&& value) { SetLaunchProfileId(std::move(value)); return *this;}

    /**
     * <p>The ID of the launch profile used to control access from the streaming
     * session.</p>
     */
    inline StreamingSession& WithLaunchProfileId(const char* value) { SetLaunchProfileId(value); return *this;}


    /**
     * <p>The user ID of the user that owns the streaming session. The user that owns
     * the session will be logging into the session and interacting with the virtual
     * workstation.</p>
     */
    inline const Aws::String& GetOwnedBy() const{ return m_ownedBy; }

    /**
     * <p>The user ID of the user that owns the streaming session. The user that owns
     * the session will be logging into the session and interacting with the virtual
     * workstation.</p>
     */
    inline bool OwnedByHasBeenSet() const { return m_ownedByHasBeenSet; }

    /**
     * <p>The user ID of the user that owns the streaming session. The user that owns
     * the session will be logging into the session and interacting with the virtual
     * workstation.</p>
     */
    inline void SetOwnedBy(const Aws::String& value) { m_ownedByHasBeenSet = true; m_ownedBy = value; }

    /**
     * <p>The user ID of the user that owns the streaming session. The user that owns
     * the session will be logging into the session and interacting with the virtual
     * workstation.</p>
     */
    inline void SetOwnedBy(Aws::String&& value) { m_ownedByHasBeenSet = true; m_ownedBy = std::move(value); }

    /**
     * <p>The user ID of the user that owns the streaming session. The user that owns
     * the session will be logging into the session and interacting with the virtual
     * workstation.</p>
     */
    inline void SetOwnedBy(const char* value) { m_ownedByHasBeenSet = true; m_ownedBy.assign(value); }

    /**
     * <p>The user ID of the user that owns the streaming session. The user that owns
     * the session will be logging into the session and interacting with the virtual
     * workstation.</p>
     */
    inline StreamingSession& WithOwnedBy(const Aws::String& value) { SetOwnedBy(value); return *this;}

    /**
     * <p>The user ID of the user that owns the streaming session. The user that owns
     * the session will be logging into the session and interacting with the virtual
     * workstation.</p>
     */
    inline StreamingSession& WithOwnedBy(Aws::String&& value) { SetOwnedBy(std::move(value)); return *this;}

    /**
     * <p>The user ID of the user that owns the streaming session. The user that owns
     * the session will be logging into the session and interacting with the virtual
     * workstation.</p>
     */
    inline StreamingSession& WithOwnedBy(const char* value) { SetOwnedBy(value); return *this;}


    /**
     * <p>The session ID.</p>
     */
    inline const Aws::String& GetSessionId() const{ return m_sessionId; }

    /**
     * <p>The session ID.</p>
     */
    inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }

    /**
     * <p>The session ID.</p>
     */
    inline void SetSessionId(const Aws::String& value) { m_sessionIdHasBeenSet = true; m_sessionId = value; }

    /**
     * <p>The session ID.</p>
     */
    inline void SetSessionId(Aws::String&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::move(value); }

    /**
     * <p>The session ID.</p>
     */
    inline void SetSessionId(const char* value) { m_sessionIdHasBeenSet = true; m_sessionId.assign(value); }

    /**
     * <p>The session ID.</p>
     */
    inline StreamingSession& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}

    /**
     * <p>The session ID.</p>
     */
    inline StreamingSession& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}

    /**
     * <p>The session ID.</p>
     */
    inline StreamingSession& WithSessionId(const char* value) { SetSessionId(value); return *this;}


    /**
     * <p>The time the session entered START_IN_PROGRESS state.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedAt() const{ return m_startedAt; }

    /**
     * <p>The time the session entered START_IN_PROGRESS state.</p>
     */
    inline bool StartedAtHasBeenSet() const { return m_startedAtHasBeenSet; }

    /**
     * <p>The time the session entered START_IN_PROGRESS state.</p>
     */
    inline void SetStartedAt(const Aws::Utils::DateTime& value) { m_startedAtHasBeenSet = true; m_startedAt = value; }

    /**
     * <p>The time the session entered START_IN_PROGRESS state.</p>
     */
    inline void SetStartedAt(Aws::Utils::DateTime&& value) { m_startedAtHasBeenSet = true; m_startedAt = std::move(value); }

    /**
     * <p>The time the session entered START_IN_PROGRESS state.</p>
     */
    inline StreamingSession& WithStartedAt(const Aws::Utils::DateTime& value) { SetStartedAt(value); return *this;}

    /**
     * <p>The time the session entered START_IN_PROGRESS state.</p>
     */
    inline StreamingSession& WithStartedAt(Aws::Utils::DateTime&& value) { SetStartedAt(std::move(value)); return *this;}


    /**
     * <p>The user ID of the user that started the streaming session.</p>
     */
    inline const Aws::String& GetStartedBy() const{ return m_startedBy; }

    /**
     * <p>The user ID of the user that started the streaming session.</p>
     */
    inline bool StartedByHasBeenSet() const { return m_startedByHasBeenSet; }

    /**
     * <p>The user ID of the user that started the streaming session.</p>
     */
    inline void SetStartedBy(const Aws::String& value) { m_startedByHasBeenSet = true; m_startedBy = value; }

    /**
     * <p>The user ID of the user that started the streaming session.</p>
     */
    inline void SetStartedBy(Aws::String&& value) { m_startedByHasBeenSet = true; m_startedBy = std::move(value); }

    /**
     * <p>The user ID of the user that started the streaming session.</p>
     */
    inline void SetStartedBy(const char* value) { m_startedByHasBeenSet = true; m_startedBy.assign(value); }

    /**
     * <p>The user ID of the user that started the streaming session.</p>
     */
    inline StreamingSession& WithStartedBy(const Aws::String& value) { SetStartedBy(value); return *this;}

    /**
     * <p>The user ID of the user that started the streaming session.</p>
     */
    inline StreamingSession& WithStartedBy(Aws::String&& value) { SetStartedBy(std::move(value)); return *this;}

    /**
     * <p>The user ID of the user that started the streaming session.</p>
     */
    inline StreamingSession& WithStartedBy(const char* value) { SetStartedBy(value); return *this;}


    /**
     * <p>The current state.</p>
     */
    inline const StreamingSessionState& GetState() const{ return m_state; }

    /**
     * <p>The current state.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The current state.</p>
     */
    inline void SetState(const StreamingSessionState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The current state.</p>
     */
    inline void SetState(StreamingSessionState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The current state.</p>
     */
    inline StreamingSession& WithState(const StreamingSessionState& value) { SetState(value); return *this;}

    /**
     * <p>The current state.</p>
     */
    inline StreamingSession& WithState(StreamingSessionState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The status code.</p>
     */
    inline const StreamingSessionStatusCode& GetStatusCode() const{ return m_statusCode; }

    /**
     * <p>The status code.</p>
     */
    inline bool StatusCodeHasBeenSet() const { return m_statusCodeHasBeenSet; }

    /**
     * <p>The status code.</p>
     */
    inline void SetStatusCode(const StreamingSessionStatusCode& value) { m_statusCodeHasBeenSet = true; m_statusCode = value; }

    /**
     * <p>The status code.</p>
     */
    inline void SetStatusCode(StreamingSessionStatusCode&& value) { m_statusCodeHasBeenSet = true; m_statusCode = std::move(value); }

    /**
     * <p>The status code.</p>
     */
    inline StreamingSession& WithStatusCode(const StreamingSessionStatusCode& value) { SetStatusCode(value); return *this;}

    /**
     * <p>The status code.</p>
     */
    inline StreamingSession& WithStatusCode(StreamingSessionStatusCode&& value) { SetStatusCode(std::move(value)); return *this;}


    /**
     * <p>The status message for the streaming session.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>The status message for the streaming session.</p>
     */
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }

    /**
     * <p>The status message for the streaming session.</p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }

    /**
     * <p>The status message for the streaming session.</p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }

    /**
     * <p>The status message for the streaming session.</p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }

    /**
     * <p>The status message for the streaming session.</p>
     */
    inline StreamingSession& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>The status message for the streaming session.</p>
     */
    inline StreamingSession& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>The status message for the streaming session.</p>
     */
    inline StreamingSession& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}


    /**
     * <p>The time the streaming session will automatically be stopped if the user
     * doesn’t stop the session themselves. </p>
     */
    inline const Aws::Utils::DateTime& GetStopAt() const{ return m_stopAt; }

    /**
     * <p>The time the streaming session will automatically be stopped if the user
     * doesn’t stop the session themselves. </p>
     */
    inline bool StopAtHasBeenSet() const { return m_stopAtHasBeenSet; }

    /**
     * <p>The time the streaming session will automatically be stopped if the user
     * doesn’t stop the session themselves. </p>
     */
    inline void SetStopAt(const Aws::Utils::DateTime& value) { m_stopAtHasBeenSet = true; m_stopAt = value; }

    /**
     * <p>The time the streaming session will automatically be stopped if the user
     * doesn’t stop the session themselves. </p>
     */
    inline void SetStopAt(Aws::Utils::DateTime&& value) { m_stopAtHasBeenSet = true; m_stopAt = std::move(value); }

    /**
     * <p>The time the streaming session will automatically be stopped if the user
     * doesn’t stop the session themselves. </p>
     */
    inline StreamingSession& WithStopAt(const Aws::Utils::DateTime& value) { SetStopAt(value); return *this;}

    /**
     * <p>The time the streaming session will automatically be stopped if the user
     * doesn’t stop the session themselves. </p>
     */
    inline StreamingSession& WithStopAt(Aws::Utils::DateTime&& value) { SetStopAt(std::move(value)); return *this;}


    /**
     * <p>The time the session entered STOP_IN_PROGRESS state.</p>
     */
    inline const Aws::Utils::DateTime& GetStoppedAt() const{ return m_stoppedAt; }

    /**
     * <p>The time the session entered STOP_IN_PROGRESS state.</p>
     */
    inline bool StoppedAtHasBeenSet() const { return m_stoppedAtHasBeenSet; }

    /**
     * <p>The time the session entered STOP_IN_PROGRESS state.</p>
     */
    inline void SetStoppedAt(const Aws::Utils::DateTime& value) { m_stoppedAtHasBeenSet = true; m_stoppedAt = value; }

    /**
     * <p>The time the session entered STOP_IN_PROGRESS state.</p>
     */
    inline void SetStoppedAt(Aws::Utils::DateTime&& value) { m_stoppedAtHasBeenSet = true; m_stoppedAt = std::move(value); }

    /**
     * <p>The time the session entered STOP_IN_PROGRESS state.</p>
     */
    inline StreamingSession& WithStoppedAt(const Aws::Utils::DateTime& value) { SetStoppedAt(value); return *this;}

    /**
     * <p>The time the session entered STOP_IN_PROGRESS state.</p>
     */
    inline StreamingSession& WithStoppedAt(Aws::Utils::DateTime&& value) { SetStoppedAt(std::move(value)); return *this;}


    /**
     * <p>The user ID of the user that stopped the streaming session.</p>
     */
    inline const Aws::String& GetStoppedBy() const{ return m_stoppedBy; }

    /**
     * <p>The user ID of the user that stopped the streaming session.</p>
     */
    inline bool StoppedByHasBeenSet() const { return m_stoppedByHasBeenSet; }

    /**
     * <p>The user ID of the user that stopped the streaming session.</p>
     */
    inline void SetStoppedBy(const Aws::String& value) { m_stoppedByHasBeenSet = true; m_stoppedBy = value; }

    /**
     * <p>The user ID of the user that stopped the streaming session.</p>
     */
    inline void SetStoppedBy(Aws::String&& value) { m_stoppedByHasBeenSet = true; m_stoppedBy = std::move(value); }

    /**
     * <p>The user ID of the user that stopped the streaming session.</p>
     */
    inline void SetStoppedBy(const char* value) { m_stoppedByHasBeenSet = true; m_stoppedBy.assign(value); }

    /**
     * <p>The user ID of the user that stopped the streaming session.</p>
     */
    inline StreamingSession& WithStoppedBy(const Aws::String& value) { SetStoppedBy(value); return *this;}

    /**
     * <p>The user ID of the user that stopped the streaming session.</p>
     */
    inline StreamingSession& WithStoppedBy(Aws::String&& value) { SetStoppedBy(std::move(value)); return *this;}

    /**
     * <p>The user ID of the user that stopped the streaming session.</p>
     */
    inline StreamingSession& WithStoppedBy(const char* value) { SetStoppedBy(value); return *this;}


    /**
     * <p>The ID of the streaming image.</p>
     */
    inline const Aws::String& GetStreamingImageId() const{ return m_streamingImageId; }

    /**
     * <p>The ID of the streaming image.</p>
     */
    inline bool StreamingImageIdHasBeenSet() const { return m_streamingImageIdHasBeenSet; }

    /**
     * <p>The ID of the streaming image.</p>
     */
    inline void SetStreamingImageId(const Aws::String& value) { m_streamingImageIdHasBeenSet = true; m_streamingImageId = value; }

    /**
     * <p>The ID of the streaming image.</p>
     */
    inline void SetStreamingImageId(Aws::String&& value) { m_streamingImageIdHasBeenSet = true; m_streamingImageId = std::move(value); }

    /**
     * <p>The ID of the streaming image.</p>
     */
    inline void SetStreamingImageId(const char* value) { m_streamingImageIdHasBeenSet = true; m_streamingImageId.assign(value); }

    /**
     * <p>The ID of the streaming image.</p>
     */
    inline StreamingSession& WithStreamingImageId(const Aws::String& value) { SetStreamingImageId(value); return *this;}

    /**
     * <p>The ID of the streaming image.</p>
     */
    inline StreamingSession& WithStreamingImageId(Aws::String&& value) { SetStreamingImageId(std::move(value)); return *this;}

    /**
     * <p>The ID of the streaming image.</p>
     */
    inline StreamingSession& WithStreamingImageId(const char* value) { SetStreamingImageId(value); return *this;}


    /**
     * <p>A collection of labels, in the form of key:value pairs, that apply to this
     * resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>A collection of labels, in the form of key:value pairs, that apply to this
     * resource.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A collection of labels, in the form of key:value pairs, that apply to this
     * resource.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A collection of labels, in the form of key:value pairs, that apply to this
     * resource.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A collection of labels, in the form of key:value pairs, that apply to this
     * resource.</p>
     */
    inline StreamingSession& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>A collection of labels, in the form of key:value pairs, that apply to this
     * resource.</p>
     */
    inline StreamingSession& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A collection of labels, in the form of key:value pairs, that apply to this
     * resource.</p>
     */
    inline StreamingSession& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>A collection of labels, in the form of key:value pairs, that apply to this
     * resource.</p>
     */
    inline StreamingSession& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A collection of labels, in the form of key:value pairs, that apply to this
     * resource.</p>
     */
    inline StreamingSession& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A collection of labels, in the form of key:value pairs, that apply to this
     * resource.</p>
     */
    inline StreamingSession& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A collection of labels, in the form of key:value pairs, that apply to this
     * resource.</p>
     */
    inline StreamingSession& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A collection of labels, in the form of key:value pairs, that apply to this
     * resource.</p>
     */
    inline StreamingSession& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A collection of labels, in the form of key:value pairs, that apply to this
     * resource.</p>
     */
    inline StreamingSession& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>The time the streaming session will automatically terminate if not terminated
     * by the user.</p>
     */
    inline const Aws::Utils::DateTime& GetTerminateAt() const{ return m_terminateAt; }

    /**
     * <p>The time the streaming session will automatically terminate if not terminated
     * by the user.</p>
     */
    inline bool TerminateAtHasBeenSet() const { return m_terminateAtHasBeenSet; }

    /**
     * <p>The time the streaming session will automatically terminate if not terminated
     * by the user.</p>
     */
    inline void SetTerminateAt(const Aws::Utils::DateTime& value) { m_terminateAtHasBeenSet = true; m_terminateAt = value; }

    /**
     * <p>The time the streaming session will automatically terminate if not terminated
     * by the user.</p>
     */
    inline void SetTerminateAt(Aws::Utils::DateTime&& value) { m_terminateAtHasBeenSet = true; m_terminateAt = std::move(value); }

    /**
     * <p>The time the streaming session will automatically terminate if not terminated
     * by the user.</p>
     */
    inline StreamingSession& WithTerminateAt(const Aws::Utils::DateTime& value) { SetTerminateAt(value); return *this;}

    /**
     * <p>The time the streaming session will automatically terminate if not terminated
     * by the user.</p>
     */
    inline StreamingSession& WithTerminateAt(Aws::Utils::DateTime&& value) { SetTerminateAt(std::move(value)); return *this;}


    /**
     * <p>The Unix epoch timestamp in seconds for when the resource was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The Unix epoch timestamp in seconds for when the resource was updated.</p>
     */
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }

    /**
     * <p>The Unix epoch timestamp in seconds for when the resource was updated.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }

    /**
     * <p>The Unix epoch timestamp in seconds for when the resource was updated.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }

    /**
     * <p>The Unix epoch timestamp in seconds for when the resource was updated.</p>
     */
    inline StreamingSession& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The Unix epoch timestamp in seconds for when the resource was updated.</p>
     */
    inline StreamingSession& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>The user ID of the user that most recently updated the resource.</p>
     */
    inline const Aws::String& GetUpdatedBy() const{ return m_updatedBy; }

    /**
     * <p>The user ID of the user that most recently updated the resource.</p>
     */
    inline bool UpdatedByHasBeenSet() const { return m_updatedByHasBeenSet; }

    /**
     * <p>The user ID of the user that most recently updated the resource.</p>
     */
    inline void SetUpdatedBy(const Aws::String& value) { m_updatedByHasBeenSet = true; m_updatedBy = value; }

    /**
     * <p>The user ID of the user that most recently updated the resource.</p>
     */
    inline void SetUpdatedBy(Aws::String&& value) { m_updatedByHasBeenSet = true; m_updatedBy = std::move(value); }

    /**
     * <p>The user ID of the user that most recently updated the resource.</p>
     */
    inline void SetUpdatedBy(const char* value) { m_updatedByHasBeenSet = true; m_updatedBy.assign(value); }

    /**
     * <p>The user ID of the user that most recently updated the resource.</p>
     */
    inline StreamingSession& WithUpdatedBy(const Aws::String& value) { SetUpdatedBy(value); return *this;}

    /**
     * <p>The user ID of the user that most recently updated the resource.</p>
     */
    inline StreamingSession& WithUpdatedBy(Aws::String&& value) { SetUpdatedBy(std::move(value)); return *this;}

    /**
     * <p>The user ID of the user that most recently updated the resource.</p>
     */
    inline StreamingSession& WithUpdatedBy(const char* value) { SetUpdatedBy(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet;

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet;

    Aws::String m_ec2InstanceType;
    bool m_ec2InstanceTypeHasBeenSet;

    Aws::String m_launchProfileId;
    bool m_launchProfileIdHasBeenSet;

    Aws::String m_ownedBy;
    bool m_ownedByHasBeenSet;

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet;

    Aws::Utils::DateTime m_startedAt;
    bool m_startedAtHasBeenSet;

    Aws::String m_startedBy;
    bool m_startedByHasBeenSet;

    StreamingSessionState m_state;
    bool m_stateHasBeenSet;

    StreamingSessionStatusCode m_statusCode;
    bool m_statusCodeHasBeenSet;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet;

    Aws::Utils::DateTime m_stopAt;
    bool m_stopAtHasBeenSet;

    Aws::Utils::DateTime m_stoppedAt;
    bool m_stoppedAtHasBeenSet;

    Aws::String m_stoppedBy;
    bool m_stoppedByHasBeenSet;

    Aws::String m_streamingImageId;
    bool m_streamingImageIdHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet;

    Aws::Utils::DateTime m_terminateAt;
    bool m_terminateAtHasBeenSet;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet;

    Aws::String m_updatedBy;
    bool m_updatedByHasBeenSet;
  };

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
