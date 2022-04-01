/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/nimble/NimbleStudio_EXPORTS.h>
#include <aws/nimble/model/StreamingClipboardMode.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/nimble/model/StreamConfigurationSessionStorage.h>
#include <aws/nimble/model/StreamingInstanceType.h>
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
namespace NimbleStudio
{
namespace Model
{

  /**
   * <p>Configuration for streaming workstations created using this launch
   * profile.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/StreamConfigurationCreate">AWS
   * API Reference</a></p>
   */
  class AWS_NIMBLESTUDIO_API StreamConfigurationCreate
  {
  public:
    StreamConfigurationCreate();
    StreamConfigurationCreate(Aws::Utils::Json::JsonView jsonValue);
    StreamConfigurationCreate& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Enable or disable the use of the system clipboard to copy and paste between
     * the streaming session and streaming client.</p>
     */
    inline const StreamingClipboardMode& GetClipboardMode() const{ return m_clipboardMode; }

    /**
     * <p>Enable or disable the use of the system clipboard to copy and paste between
     * the streaming session and streaming client.</p>
     */
    inline bool ClipboardModeHasBeenSet() const { return m_clipboardModeHasBeenSet; }

    /**
     * <p>Enable or disable the use of the system clipboard to copy and paste between
     * the streaming session and streaming client.</p>
     */
    inline void SetClipboardMode(const StreamingClipboardMode& value) { m_clipboardModeHasBeenSet = true; m_clipboardMode = value; }

    /**
     * <p>Enable or disable the use of the system clipboard to copy and paste between
     * the streaming session and streaming client.</p>
     */
    inline void SetClipboardMode(StreamingClipboardMode&& value) { m_clipboardModeHasBeenSet = true; m_clipboardMode = std::move(value); }

    /**
     * <p>Enable or disable the use of the system clipboard to copy and paste between
     * the streaming session and streaming client.</p>
     */
    inline StreamConfigurationCreate& WithClipboardMode(const StreamingClipboardMode& value) { SetClipboardMode(value); return *this;}

    /**
     * <p>Enable or disable the use of the system clipboard to copy and paste between
     * the streaming session and streaming client.</p>
     */
    inline StreamConfigurationCreate& WithClipboardMode(StreamingClipboardMode&& value) { SetClipboardMode(std::move(value)); return *this;}


    /**
     * <p>The EC2 instance types that users can select from when launching a streaming
     * session with this launch profile.</p>
     */
    inline const Aws::Vector<StreamingInstanceType>& GetEc2InstanceTypes() const{ return m_ec2InstanceTypes; }

    /**
     * <p>The EC2 instance types that users can select from when launching a streaming
     * session with this launch profile.</p>
     */
    inline bool Ec2InstanceTypesHasBeenSet() const { return m_ec2InstanceTypesHasBeenSet; }

    /**
     * <p>The EC2 instance types that users can select from when launching a streaming
     * session with this launch profile.</p>
     */
    inline void SetEc2InstanceTypes(const Aws::Vector<StreamingInstanceType>& value) { m_ec2InstanceTypesHasBeenSet = true; m_ec2InstanceTypes = value; }

    /**
     * <p>The EC2 instance types that users can select from when launching a streaming
     * session with this launch profile.</p>
     */
    inline void SetEc2InstanceTypes(Aws::Vector<StreamingInstanceType>&& value) { m_ec2InstanceTypesHasBeenSet = true; m_ec2InstanceTypes = std::move(value); }

    /**
     * <p>The EC2 instance types that users can select from when launching a streaming
     * session with this launch profile.</p>
     */
    inline StreamConfigurationCreate& WithEc2InstanceTypes(const Aws::Vector<StreamingInstanceType>& value) { SetEc2InstanceTypes(value); return *this;}

    /**
     * <p>The EC2 instance types that users can select from when launching a streaming
     * session with this launch profile.</p>
     */
    inline StreamConfigurationCreate& WithEc2InstanceTypes(Aws::Vector<StreamingInstanceType>&& value) { SetEc2InstanceTypes(std::move(value)); return *this;}

    /**
     * <p>The EC2 instance types that users can select from when launching a streaming
     * session with this launch profile.</p>
     */
    inline StreamConfigurationCreate& AddEc2InstanceTypes(const StreamingInstanceType& value) { m_ec2InstanceTypesHasBeenSet = true; m_ec2InstanceTypes.push_back(value); return *this; }

    /**
     * <p>The EC2 instance types that users can select from when launching a streaming
     * session with this launch profile.</p>
     */
    inline StreamConfigurationCreate& AddEc2InstanceTypes(StreamingInstanceType&& value) { m_ec2InstanceTypesHasBeenSet = true; m_ec2InstanceTypes.push_back(std::move(value)); return *this; }


    /**
     * <p>The length of time, in minutes, that a streaming session can be active before
     * it is stopped or terminated. After this point, Nimble Studio automatically
     * terminates or stops the session. The default length of time is 690 minutes, and
     * the maximum length of time is 30 days.</p>
     */
    inline int GetMaxSessionLengthInMinutes() const{ return m_maxSessionLengthInMinutes; }

    /**
     * <p>The length of time, in minutes, that a streaming session can be active before
     * it is stopped or terminated. After this point, Nimble Studio automatically
     * terminates or stops the session. The default length of time is 690 minutes, and
     * the maximum length of time is 30 days.</p>
     */
    inline bool MaxSessionLengthInMinutesHasBeenSet() const { return m_maxSessionLengthInMinutesHasBeenSet; }

    /**
     * <p>The length of time, in minutes, that a streaming session can be active before
     * it is stopped or terminated. After this point, Nimble Studio automatically
     * terminates or stops the session. The default length of time is 690 minutes, and
     * the maximum length of time is 30 days.</p>
     */
    inline void SetMaxSessionLengthInMinutes(int value) { m_maxSessionLengthInMinutesHasBeenSet = true; m_maxSessionLengthInMinutes = value; }

    /**
     * <p>The length of time, in minutes, that a streaming session can be active before
     * it is stopped or terminated. After this point, Nimble Studio automatically
     * terminates or stops the session. The default length of time is 690 minutes, and
     * the maximum length of time is 30 days.</p>
     */
    inline StreamConfigurationCreate& WithMaxSessionLengthInMinutes(int value) { SetMaxSessionLengthInMinutes(value); return *this;}


    /**
     * <p>Integer that determines if you can start and stop your sessions and how long
     * a session can stay in the STOPPED state. The default value is 0. The maximum
     * value is 5760.</p> <p>If the value is missing or set to 0, your sessions can’t
     * be stopped. If you then call <code>StopStreamingSession</code>, the session
     * fails. If the time that a session stays in the READY state exceeds the
     * <code>maxSessionLengthInMinutes</code> value, the session will automatically be
     * terminated (instead of stopped).</p> <p>If the value is set to a positive
     * number, the session can be stopped. You can call
     * <code>StopStreamingSession</code> to stop sessions in the READY state. If the
     * time that a session stays in the READY state exceeds the
     * <code>maxSessionLengthInMinutes</code> value, the session will automatically be
     * stopped (instead of terminated).</p>
     */
    inline int GetMaxStoppedSessionLengthInMinutes() const{ return m_maxStoppedSessionLengthInMinutes; }

    /**
     * <p>Integer that determines if you can start and stop your sessions and how long
     * a session can stay in the STOPPED state. The default value is 0. The maximum
     * value is 5760.</p> <p>If the value is missing or set to 0, your sessions can’t
     * be stopped. If you then call <code>StopStreamingSession</code>, the session
     * fails. If the time that a session stays in the READY state exceeds the
     * <code>maxSessionLengthInMinutes</code> value, the session will automatically be
     * terminated (instead of stopped).</p> <p>If the value is set to a positive
     * number, the session can be stopped. You can call
     * <code>StopStreamingSession</code> to stop sessions in the READY state. If the
     * time that a session stays in the READY state exceeds the
     * <code>maxSessionLengthInMinutes</code> value, the session will automatically be
     * stopped (instead of terminated).</p>
     */
    inline bool MaxStoppedSessionLengthInMinutesHasBeenSet() const { return m_maxStoppedSessionLengthInMinutesHasBeenSet; }

    /**
     * <p>Integer that determines if you can start and stop your sessions and how long
     * a session can stay in the STOPPED state. The default value is 0. The maximum
     * value is 5760.</p> <p>If the value is missing or set to 0, your sessions can’t
     * be stopped. If you then call <code>StopStreamingSession</code>, the session
     * fails. If the time that a session stays in the READY state exceeds the
     * <code>maxSessionLengthInMinutes</code> value, the session will automatically be
     * terminated (instead of stopped).</p> <p>If the value is set to a positive
     * number, the session can be stopped. You can call
     * <code>StopStreamingSession</code> to stop sessions in the READY state. If the
     * time that a session stays in the READY state exceeds the
     * <code>maxSessionLengthInMinutes</code> value, the session will automatically be
     * stopped (instead of terminated).</p>
     */
    inline void SetMaxStoppedSessionLengthInMinutes(int value) { m_maxStoppedSessionLengthInMinutesHasBeenSet = true; m_maxStoppedSessionLengthInMinutes = value; }

    /**
     * <p>Integer that determines if you can start and stop your sessions and how long
     * a session can stay in the STOPPED state. The default value is 0. The maximum
     * value is 5760.</p> <p>If the value is missing or set to 0, your sessions can’t
     * be stopped. If you then call <code>StopStreamingSession</code>, the session
     * fails. If the time that a session stays in the READY state exceeds the
     * <code>maxSessionLengthInMinutes</code> value, the session will automatically be
     * terminated (instead of stopped).</p> <p>If the value is set to a positive
     * number, the session can be stopped. You can call
     * <code>StopStreamingSession</code> to stop sessions in the READY state. If the
     * time that a session stays in the READY state exceeds the
     * <code>maxSessionLengthInMinutes</code> value, the session will automatically be
     * stopped (instead of terminated).</p>
     */
    inline StreamConfigurationCreate& WithMaxStoppedSessionLengthInMinutes(int value) { SetMaxStoppedSessionLengthInMinutes(value); return *this;}


    /**
     * <p>(Optional) The upload storage for a streaming workstation that is created
     * using this launch profile.</p>
     */
    inline const StreamConfigurationSessionStorage& GetSessionStorage() const{ return m_sessionStorage; }

    /**
     * <p>(Optional) The upload storage for a streaming workstation that is created
     * using this launch profile.</p>
     */
    inline bool SessionStorageHasBeenSet() const { return m_sessionStorageHasBeenSet; }

    /**
     * <p>(Optional) The upload storage for a streaming workstation that is created
     * using this launch profile.</p>
     */
    inline void SetSessionStorage(const StreamConfigurationSessionStorage& value) { m_sessionStorageHasBeenSet = true; m_sessionStorage = value; }

    /**
     * <p>(Optional) The upload storage for a streaming workstation that is created
     * using this launch profile.</p>
     */
    inline void SetSessionStorage(StreamConfigurationSessionStorage&& value) { m_sessionStorageHasBeenSet = true; m_sessionStorage = std::move(value); }

    /**
     * <p>(Optional) The upload storage for a streaming workstation that is created
     * using this launch profile.</p>
     */
    inline StreamConfigurationCreate& WithSessionStorage(const StreamConfigurationSessionStorage& value) { SetSessionStorage(value); return *this;}

    /**
     * <p>(Optional) The upload storage for a streaming workstation that is created
     * using this launch profile.</p>
     */
    inline StreamConfigurationCreate& WithSessionStorage(StreamConfigurationSessionStorage&& value) { SetSessionStorage(std::move(value)); return *this;}


    /**
     * <p>The streaming images that users can select from when launching a streaming
     * session with this launch profile.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStreamingImageIds() const{ return m_streamingImageIds; }

    /**
     * <p>The streaming images that users can select from when launching a streaming
     * session with this launch profile.</p>
     */
    inline bool StreamingImageIdsHasBeenSet() const { return m_streamingImageIdsHasBeenSet; }

    /**
     * <p>The streaming images that users can select from when launching a streaming
     * session with this launch profile.</p>
     */
    inline void SetStreamingImageIds(const Aws::Vector<Aws::String>& value) { m_streamingImageIdsHasBeenSet = true; m_streamingImageIds = value; }

    /**
     * <p>The streaming images that users can select from when launching a streaming
     * session with this launch profile.</p>
     */
    inline void SetStreamingImageIds(Aws::Vector<Aws::String>&& value) { m_streamingImageIdsHasBeenSet = true; m_streamingImageIds = std::move(value); }

    /**
     * <p>The streaming images that users can select from when launching a streaming
     * session with this launch profile.</p>
     */
    inline StreamConfigurationCreate& WithStreamingImageIds(const Aws::Vector<Aws::String>& value) { SetStreamingImageIds(value); return *this;}

    /**
     * <p>The streaming images that users can select from when launching a streaming
     * session with this launch profile.</p>
     */
    inline StreamConfigurationCreate& WithStreamingImageIds(Aws::Vector<Aws::String>&& value) { SetStreamingImageIds(std::move(value)); return *this;}

    /**
     * <p>The streaming images that users can select from when launching a streaming
     * session with this launch profile.</p>
     */
    inline StreamConfigurationCreate& AddStreamingImageIds(const Aws::String& value) { m_streamingImageIdsHasBeenSet = true; m_streamingImageIds.push_back(value); return *this; }

    /**
     * <p>The streaming images that users can select from when launching a streaming
     * session with this launch profile.</p>
     */
    inline StreamConfigurationCreate& AddStreamingImageIds(Aws::String&& value) { m_streamingImageIdsHasBeenSet = true; m_streamingImageIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The streaming images that users can select from when launching a streaming
     * session with this launch profile.</p>
     */
    inline StreamConfigurationCreate& AddStreamingImageIds(const char* value) { m_streamingImageIdsHasBeenSet = true; m_streamingImageIds.push_back(value); return *this; }

  private:

    StreamingClipboardMode m_clipboardMode;
    bool m_clipboardModeHasBeenSet;

    Aws::Vector<StreamingInstanceType> m_ec2InstanceTypes;
    bool m_ec2InstanceTypesHasBeenSet;

    int m_maxSessionLengthInMinutes;
    bool m_maxSessionLengthInMinutesHasBeenSet;

    int m_maxStoppedSessionLengthInMinutes;
    bool m_maxStoppedSessionLengthInMinutesHasBeenSet;

    StreamConfigurationSessionStorage m_sessionStorage;
    bool m_sessionStorageHasBeenSet;

    Aws::Vector<Aws::String> m_streamingImageIds;
    bool m_streamingImageIdsHasBeenSet;
  };

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
