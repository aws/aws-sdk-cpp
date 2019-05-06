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
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/MediaLiveRequest.h>
#include <aws/medialive/model/ChannelClass.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/medialive/model/EncoderSettings.h>
#include <aws/medialive/model/InputSpecification.h>
#include <aws/medialive/model/LogLevel.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/medialive/model/OutputDestination.h>
#include <aws/medialive/model/InputAttachment.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace MediaLive
{
namespace Model
{

  /**
   * A request to create a channel<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/CreateChannelRequest">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API CreateChannelRequest : public MediaLiveRequest
  {
  public:
    CreateChannelRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateChannel"; }

    Aws::String SerializePayload() const override;


    /**
     * The class for this channel. STANDARD for a channel with two pipelines or
     * SINGLE_PIPELINE for a channel with one pipeline.
     */
    inline const ChannelClass& GetChannelClass() const{ return m_channelClass; }

    /**
     * The class for this channel. STANDARD for a channel with two pipelines or
     * SINGLE_PIPELINE for a channel with one pipeline.
     */
    inline bool ChannelClassHasBeenSet() const { return m_channelClassHasBeenSet; }

    /**
     * The class for this channel. STANDARD for a channel with two pipelines or
     * SINGLE_PIPELINE for a channel with one pipeline.
     */
    inline void SetChannelClass(const ChannelClass& value) { m_channelClassHasBeenSet = true; m_channelClass = value; }

    /**
     * The class for this channel. STANDARD for a channel with two pipelines or
     * SINGLE_PIPELINE for a channel with one pipeline.
     */
    inline void SetChannelClass(ChannelClass&& value) { m_channelClassHasBeenSet = true; m_channelClass = std::move(value); }

    /**
     * The class for this channel. STANDARD for a channel with two pipelines or
     * SINGLE_PIPELINE for a channel with one pipeline.
     */
    inline CreateChannelRequest& WithChannelClass(const ChannelClass& value) { SetChannelClass(value); return *this;}

    /**
     * The class for this channel. STANDARD for a channel with two pipelines or
     * SINGLE_PIPELINE for a channel with one pipeline.
     */
    inline CreateChannelRequest& WithChannelClass(ChannelClass&& value) { SetChannelClass(std::move(value)); return *this;}


    
    inline const Aws::Vector<OutputDestination>& GetDestinations() const{ return m_destinations; }

    
    inline bool DestinationsHasBeenSet() const { return m_destinationsHasBeenSet; }

    
    inline void SetDestinations(const Aws::Vector<OutputDestination>& value) { m_destinationsHasBeenSet = true; m_destinations = value; }

    
    inline void SetDestinations(Aws::Vector<OutputDestination>&& value) { m_destinationsHasBeenSet = true; m_destinations = std::move(value); }

    
    inline CreateChannelRequest& WithDestinations(const Aws::Vector<OutputDestination>& value) { SetDestinations(value); return *this;}

    
    inline CreateChannelRequest& WithDestinations(Aws::Vector<OutputDestination>&& value) { SetDestinations(std::move(value)); return *this;}

    
    inline CreateChannelRequest& AddDestinations(const OutputDestination& value) { m_destinationsHasBeenSet = true; m_destinations.push_back(value); return *this; }

    
    inline CreateChannelRequest& AddDestinations(OutputDestination&& value) { m_destinationsHasBeenSet = true; m_destinations.push_back(std::move(value)); return *this; }


    
    inline const EncoderSettings& GetEncoderSettings() const{ return m_encoderSettings; }

    
    inline bool EncoderSettingsHasBeenSet() const { return m_encoderSettingsHasBeenSet; }

    
    inline void SetEncoderSettings(const EncoderSettings& value) { m_encoderSettingsHasBeenSet = true; m_encoderSettings = value; }

    
    inline void SetEncoderSettings(EncoderSettings&& value) { m_encoderSettingsHasBeenSet = true; m_encoderSettings = std::move(value); }

    
    inline CreateChannelRequest& WithEncoderSettings(const EncoderSettings& value) { SetEncoderSettings(value); return *this;}

    
    inline CreateChannelRequest& WithEncoderSettings(EncoderSettings&& value) { SetEncoderSettings(std::move(value)); return *this;}


    /**
     * List of input attachments for channel.
     */
    inline const Aws::Vector<InputAttachment>& GetInputAttachments() const{ return m_inputAttachments; }

    /**
     * List of input attachments for channel.
     */
    inline bool InputAttachmentsHasBeenSet() const { return m_inputAttachmentsHasBeenSet; }

    /**
     * List of input attachments for channel.
     */
    inline void SetInputAttachments(const Aws::Vector<InputAttachment>& value) { m_inputAttachmentsHasBeenSet = true; m_inputAttachments = value; }

    /**
     * List of input attachments for channel.
     */
    inline void SetInputAttachments(Aws::Vector<InputAttachment>&& value) { m_inputAttachmentsHasBeenSet = true; m_inputAttachments = std::move(value); }

    /**
     * List of input attachments for channel.
     */
    inline CreateChannelRequest& WithInputAttachments(const Aws::Vector<InputAttachment>& value) { SetInputAttachments(value); return *this;}

    /**
     * List of input attachments for channel.
     */
    inline CreateChannelRequest& WithInputAttachments(Aws::Vector<InputAttachment>&& value) { SetInputAttachments(std::move(value)); return *this;}

    /**
     * List of input attachments for channel.
     */
    inline CreateChannelRequest& AddInputAttachments(const InputAttachment& value) { m_inputAttachmentsHasBeenSet = true; m_inputAttachments.push_back(value); return *this; }

    /**
     * List of input attachments for channel.
     */
    inline CreateChannelRequest& AddInputAttachments(InputAttachment&& value) { m_inputAttachmentsHasBeenSet = true; m_inputAttachments.push_back(std::move(value)); return *this; }


    /**
     * Specification of input for this channel (max. bitrate, resolution, codec, etc.)
     */
    inline const InputSpecification& GetInputSpecification() const{ return m_inputSpecification; }

    /**
     * Specification of input for this channel (max. bitrate, resolution, codec, etc.)
     */
    inline bool InputSpecificationHasBeenSet() const { return m_inputSpecificationHasBeenSet; }

    /**
     * Specification of input for this channel (max. bitrate, resolution, codec, etc.)
     */
    inline void SetInputSpecification(const InputSpecification& value) { m_inputSpecificationHasBeenSet = true; m_inputSpecification = value; }

    /**
     * Specification of input for this channel (max. bitrate, resolution, codec, etc.)
     */
    inline void SetInputSpecification(InputSpecification&& value) { m_inputSpecificationHasBeenSet = true; m_inputSpecification = std::move(value); }

    /**
     * Specification of input for this channel (max. bitrate, resolution, codec, etc.)
     */
    inline CreateChannelRequest& WithInputSpecification(const InputSpecification& value) { SetInputSpecification(value); return *this;}

    /**
     * Specification of input for this channel (max. bitrate, resolution, codec, etc.)
     */
    inline CreateChannelRequest& WithInputSpecification(InputSpecification&& value) { SetInputSpecification(std::move(value)); return *this;}


    /**
     * The log level to write to CloudWatch Logs.
     */
    inline const LogLevel& GetLogLevel() const{ return m_logLevel; }

    /**
     * The log level to write to CloudWatch Logs.
     */
    inline bool LogLevelHasBeenSet() const { return m_logLevelHasBeenSet; }

    /**
     * The log level to write to CloudWatch Logs.
     */
    inline void SetLogLevel(const LogLevel& value) { m_logLevelHasBeenSet = true; m_logLevel = value; }

    /**
     * The log level to write to CloudWatch Logs.
     */
    inline void SetLogLevel(LogLevel&& value) { m_logLevelHasBeenSet = true; m_logLevel = std::move(value); }

    /**
     * The log level to write to CloudWatch Logs.
     */
    inline CreateChannelRequest& WithLogLevel(const LogLevel& value) { SetLogLevel(value); return *this;}

    /**
     * The log level to write to CloudWatch Logs.
     */
    inline CreateChannelRequest& WithLogLevel(LogLevel&& value) { SetLogLevel(std::move(value)); return *this;}


    /**
     * Name of channel.
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * Name of channel.
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * Name of channel.
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * Name of channel.
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * Name of channel.
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * Name of channel.
     */
    inline CreateChannelRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * Name of channel.
     */
    inline CreateChannelRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * Name of channel.
     */
    inline CreateChannelRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * Unique request ID to be specified. This is needed to prevent retries
     * from
creating multiple resources.

     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    /**
     * Unique request ID to be specified. This is needed to prevent retries
     * from
creating multiple resources.

     */
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }

    /**
     * Unique request ID to be specified. This is needed to prevent retries
     * from
creating multiple resources.

     */
    inline void SetRequestId(const Aws::String& value) { m_requestIdHasBeenSet = true; m_requestId = value; }

    /**
     * Unique request ID to be specified. This is needed to prevent retries
     * from
creating multiple resources.

     */
    inline void SetRequestId(Aws::String&& value) { m_requestIdHasBeenSet = true; m_requestId = std::move(value); }

    /**
     * Unique request ID to be specified. This is needed to prevent retries
     * from
creating multiple resources.

     */
    inline void SetRequestId(const char* value) { m_requestIdHasBeenSet = true; m_requestId.assign(value); }

    /**
     * Unique request ID to be specified. This is needed to prevent retries
     * from
creating multiple resources.

     */
    inline CreateChannelRequest& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    /**
     * Unique request ID to be specified. This is needed to prevent retries
     * from
creating multiple resources.

     */
    inline CreateChannelRequest& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    /**
     * Unique request ID to be specified. This is needed to prevent retries
     * from
creating multiple resources.

     */
    inline CreateChannelRequest& WithRequestId(const char* value) { SetRequestId(value); return *this;}


    /**
     * An optional Amazon Resource Name (ARN) of the role to assume when running the
     * Channel.
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * An optional Amazon Resource Name (ARN) of the role to assume when running the
     * Channel.
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * An optional Amazon Resource Name (ARN) of the role to assume when running the
     * Channel.
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * An optional Amazon Resource Name (ARN) of the role to assume when running the
     * Channel.
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * An optional Amazon Resource Name (ARN) of the role to assume when running the
     * Channel.
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * An optional Amazon Resource Name (ARN) of the role to assume when running the
     * Channel.
     */
    inline CreateChannelRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * An optional Amazon Resource Name (ARN) of the role to assume when running the
     * Channel.
     */
    inline CreateChannelRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * An optional Amazon Resource Name (ARN) of the role to assume when running the
     * Channel.
     */
    inline CreateChannelRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * A collection of key-value pairs.
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * A collection of key-value pairs.
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * A collection of key-value pairs.
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * A collection of key-value pairs.
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * A collection of key-value pairs.
     */
    inline CreateChannelRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * A collection of key-value pairs.
     */
    inline CreateChannelRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * A collection of key-value pairs.
     */
    inline CreateChannelRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * A collection of key-value pairs.
     */
    inline CreateChannelRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * A collection of key-value pairs.
     */
    inline CreateChannelRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * A collection of key-value pairs.
     */
    inline CreateChannelRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * A collection of key-value pairs.
     */
    inline CreateChannelRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * A collection of key-value pairs.
     */
    inline CreateChannelRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * A collection of key-value pairs.
     */
    inline CreateChannelRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    ChannelClass m_channelClass;
    bool m_channelClassHasBeenSet;

    Aws::Vector<OutputDestination> m_destinations;
    bool m_destinationsHasBeenSet;

    EncoderSettings m_encoderSettings;
    bool m_encoderSettingsHasBeenSet;

    Aws::Vector<InputAttachment> m_inputAttachments;
    bool m_inputAttachmentsHasBeenSet;

    InputSpecification m_inputSpecification;
    bool m_inputSpecificationHasBeenSet;

    LogLevel m_logLevel;
    bool m_logLevelHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
