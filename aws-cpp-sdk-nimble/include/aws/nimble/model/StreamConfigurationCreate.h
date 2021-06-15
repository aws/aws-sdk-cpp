/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/nimble/NimbleStudio_EXPORTS.h>
#include <aws/nimble/model/StreamingClipboardMode.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p><h3>See Also:</h3>   <a
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
     * <p>The length of time, in minutes, that a streaming session can run. After this
     * point, Nimble Studio automatically terminates the session.</p>
     */
    inline int GetMaxSessionLengthInMinutes() const{ return m_maxSessionLengthInMinutes; }

    /**
     * <p>The length of time, in minutes, that a streaming session can run. After this
     * point, Nimble Studio automatically terminates the session.</p>
     */
    inline bool MaxSessionLengthInMinutesHasBeenSet() const { return m_maxSessionLengthInMinutesHasBeenSet; }

    /**
     * <p>The length of time, in minutes, that a streaming session can run. After this
     * point, Nimble Studio automatically terminates the session.</p>
     */
    inline void SetMaxSessionLengthInMinutes(int value) { m_maxSessionLengthInMinutesHasBeenSet = true; m_maxSessionLengthInMinutes = value; }

    /**
     * <p>The length of time, in minutes, that a streaming session can run. After this
     * point, Nimble Studio automatically terminates the session.</p>
     */
    inline StreamConfigurationCreate& WithMaxSessionLengthInMinutes(int value) { SetMaxSessionLengthInMinutes(value); return *this;}


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

    Aws::Vector<Aws::String> m_streamingImageIds;
    bool m_streamingImageIdsHasBeenSet;
  };

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
