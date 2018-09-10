﻿/*
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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/medialive/model/EncoderSettings.h>
#include <aws/medialive/model/InputSpecification.h>
#include <aws/medialive/model/LogLevel.h>
#include <aws/medialive/model/ChannelState.h>
#include <aws/medialive/model/OutputDestination.h>
#include <aws/medialive/model/ChannelEgressEndpoint.h>
#include <aws/medialive/model/InputAttachment.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * Placeholder documentation for Channel<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/Channel">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API Channel
  {
  public:
    Channel();
    Channel(Aws::Utils::Json::JsonView jsonValue);
    Channel& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The unique arn of the channel.
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * The unique arn of the channel.
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * The unique arn of the channel.
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * The unique arn of the channel.
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * The unique arn of the channel.
     */
    inline Channel& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * The unique arn of the channel.
     */
    inline Channel& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * The unique arn of the channel.
     */
    inline Channel& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * A list of destinations of the channel. For UDP outputs, there is one
destination
     * per output. For other types (HLS, for example), there is
one destination per
     * packager.

     */
    inline const Aws::Vector<OutputDestination>& GetDestinations() const{ return m_destinations; }

    /**
     * A list of destinations of the channel. For UDP outputs, there is one
destination
     * per output. For other types (HLS, for example), there is
one destination per
     * packager.

     */
    inline void SetDestinations(const Aws::Vector<OutputDestination>& value) { m_destinationsHasBeenSet = true; m_destinations = value; }

    /**
     * A list of destinations of the channel. For UDP outputs, there is one
destination
     * per output. For other types (HLS, for example), there is
one destination per
     * packager.

     */
    inline void SetDestinations(Aws::Vector<OutputDestination>&& value) { m_destinationsHasBeenSet = true; m_destinations = std::move(value); }

    /**
     * A list of destinations of the channel. For UDP outputs, there is one
destination
     * per output. For other types (HLS, for example), there is
one destination per
     * packager.

     */
    inline Channel& WithDestinations(const Aws::Vector<OutputDestination>& value) { SetDestinations(value); return *this;}

    /**
     * A list of destinations of the channel. For UDP outputs, there is one
destination
     * per output. For other types (HLS, for example), there is
one destination per
     * packager.

     */
    inline Channel& WithDestinations(Aws::Vector<OutputDestination>&& value) { SetDestinations(std::move(value)); return *this;}

    /**
     * A list of destinations of the channel. For UDP outputs, there is one
destination
     * per output. For other types (HLS, for example), there is
one destination per
     * packager.

     */
    inline Channel& AddDestinations(const OutputDestination& value) { m_destinationsHasBeenSet = true; m_destinations.push_back(value); return *this; }

    /**
     * A list of destinations of the channel. For UDP outputs, there is one
destination
     * per output. For other types (HLS, for example), there is
one destination per
     * packager.

     */
    inline Channel& AddDestinations(OutputDestination&& value) { m_destinationsHasBeenSet = true; m_destinations.push_back(std::move(value)); return *this; }


    /**
     * The endpoints where outgoing connections initiate from
     */
    inline const Aws::Vector<ChannelEgressEndpoint>& GetEgressEndpoints() const{ return m_egressEndpoints; }

    /**
     * The endpoints where outgoing connections initiate from
     */
    inline void SetEgressEndpoints(const Aws::Vector<ChannelEgressEndpoint>& value) { m_egressEndpointsHasBeenSet = true; m_egressEndpoints = value; }

    /**
     * The endpoints where outgoing connections initiate from
     */
    inline void SetEgressEndpoints(Aws::Vector<ChannelEgressEndpoint>&& value) { m_egressEndpointsHasBeenSet = true; m_egressEndpoints = std::move(value); }

    /**
     * The endpoints where outgoing connections initiate from
     */
    inline Channel& WithEgressEndpoints(const Aws::Vector<ChannelEgressEndpoint>& value) { SetEgressEndpoints(value); return *this;}

    /**
     * The endpoints where outgoing connections initiate from
     */
    inline Channel& WithEgressEndpoints(Aws::Vector<ChannelEgressEndpoint>&& value) { SetEgressEndpoints(std::move(value)); return *this;}

    /**
     * The endpoints where outgoing connections initiate from
     */
    inline Channel& AddEgressEndpoints(const ChannelEgressEndpoint& value) { m_egressEndpointsHasBeenSet = true; m_egressEndpoints.push_back(value); return *this; }

    /**
     * The endpoints where outgoing connections initiate from
     */
    inline Channel& AddEgressEndpoints(ChannelEgressEndpoint&& value) { m_egressEndpointsHasBeenSet = true; m_egressEndpoints.push_back(std::move(value)); return *this; }


    
    inline const EncoderSettings& GetEncoderSettings() const{ return m_encoderSettings; }

    
    inline void SetEncoderSettings(const EncoderSettings& value) { m_encoderSettingsHasBeenSet = true; m_encoderSettings = value; }

    
    inline void SetEncoderSettings(EncoderSettings&& value) { m_encoderSettingsHasBeenSet = true; m_encoderSettings = std::move(value); }

    
    inline Channel& WithEncoderSettings(const EncoderSettings& value) { SetEncoderSettings(value); return *this;}

    
    inline Channel& WithEncoderSettings(EncoderSettings&& value) { SetEncoderSettings(std::move(value)); return *this;}


    /**
     * The unique id of the channel.
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * The unique id of the channel.
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * The unique id of the channel.
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * The unique id of the channel.
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * The unique id of the channel.
     */
    inline Channel& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * The unique id of the channel.
     */
    inline Channel& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * The unique id of the channel.
     */
    inline Channel& WithId(const char* value) { SetId(value); return *this;}


    /**
     * List of input attachments for channel.
     */
    inline const Aws::Vector<InputAttachment>& GetInputAttachments() const{ return m_inputAttachments; }

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
    inline Channel& WithInputAttachments(const Aws::Vector<InputAttachment>& value) { SetInputAttachments(value); return *this;}

    /**
     * List of input attachments for channel.
     */
    inline Channel& WithInputAttachments(Aws::Vector<InputAttachment>&& value) { SetInputAttachments(std::move(value)); return *this;}

    /**
     * List of input attachments for channel.
     */
    inline Channel& AddInputAttachments(const InputAttachment& value) { m_inputAttachmentsHasBeenSet = true; m_inputAttachments.push_back(value); return *this; }

    /**
     * List of input attachments for channel.
     */
    inline Channel& AddInputAttachments(InputAttachment&& value) { m_inputAttachmentsHasBeenSet = true; m_inputAttachments.push_back(std::move(value)); return *this; }


    
    inline const InputSpecification& GetInputSpecification() const{ return m_inputSpecification; }

    
    inline void SetInputSpecification(const InputSpecification& value) { m_inputSpecificationHasBeenSet = true; m_inputSpecification = value; }

    
    inline void SetInputSpecification(InputSpecification&& value) { m_inputSpecificationHasBeenSet = true; m_inputSpecification = std::move(value); }

    
    inline Channel& WithInputSpecification(const InputSpecification& value) { SetInputSpecification(value); return *this;}

    
    inline Channel& WithInputSpecification(InputSpecification&& value) { SetInputSpecification(std::move(value)); return *this;}


    /**
     * The log level being written to CloudWatch Logs.
     */
    inline const LogLevel& GetLogLevel() const{ return m_logLevel; }

    /**
     * The log level being written to CloudWatch Logs.
     */
    inline void SetLogLevel(const LogLevel& value) { m_logLevelHasBeenSet = true; m_logLevel = value; }

    /**
     * The log level being written to CloudWatch Logs.
     */
    inline void SetLogLevel(LogLevel&& value) { m_logLevelHasBeenSet = true; m_logLevel = std::move(value); }

    /**
     * The log level being written to CloudWatch Logs.
     */
    inline Channel& WithLogLevel(const LogLevel& value) { SetLogLevel(value); return *this;}

    /**
     * The log level being written to CloudWatch Logs.
     */
    inline Channel& WithLogLevel(LogLevel&& value) { SetLogLevel(std::move(value)); return *this;}


    /**
     * The name of the channel. (user-mutable)
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * The name of the channel. (user-mutable)
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * The name of the channel. (user-mutable)
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * The name of the channel. (user-mutable)
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * The name of the channel. (user-mutable)
     */
    inline Channel& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * The name of the channel. (user-mutable)
     */
    inline Channel& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * The name of the channel. (user-mutable)
     */
    inline Channel& WithName(const char* value) { SetName(value); return *this;}


    /**
     * The number of currently healthy pipelines.
     */
    inline int GetPipelinesRunningCount() const{ return m_pipelinesRunningCount; }

    /**
     * The number of currently healthy pipelines.
     */
    inline void SetPipelinesRunningCount(int value) { m_pipelinesRunningCountHasBeenSet = true; m_pipelinesRunningCount = value; }

    /**
     * The number of currently healthy pipelines.
     */
    inline Channel& WithPipelinesRunningCount(int value) { SetPipelinesRunningCount(value); return *this;}


    /**
     * The Amazon Resource Name (ARN) of the role assumed when running the Channel.
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * The Amazon Resource Name (ARN) of the role assumed when running the Channel.
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * The Amazon Resource Name (ARN) of the role assumed when running the Channel.
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * The Amazon Resource Name (ARN) of the role assumed when running the Channel.
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * The Amazon Resource Name (ARN) of the role assumed when running the Channel.
     */
    inline Channel& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * The Amazon Resource Name (ARN) of the role assumed when running the Channel.
     */
    inline Channel& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * The Amazon Resource Name (ARN) of the role assumed when running the Channel.
     */
    inline Channel& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    
    inline const ChannelState& GetState() const{ return m_state; }

    
    inline void SetState(const ChannelState& value) { m_stateHasBeenSet = true; m_state = value; }

    
    inline void SetState(ChannelState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    
    inline Channel& WithState(const ChannelState& value) { SetState(value); return *this;}

    
    inline Channel& WithState(ChannelState&& value) { SetState(std::move(value)); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    Aws::Vector<OutputDestination> m_destinations;
    bool m_destinationsHasBeenSet;

    Aws::Vector<ChannelEgressEndpoint> m_egressEndpoints;
    bool m_egressEndpointsHasBeenSet;

    EncoderSettings m_encoderSettings;
    bool m_encoderSettingsHasBeenSet;

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::Vector<InputAttachment> m_inputAttachments;
    bool m_inputAttachmentsHasBeenSet;

    InputSpecification m_inputSpecification;
    bool m_inputSpecificationHasBeenSet;

    LogLevel m_logLevel;
    bool m_logLevelHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    int m_pipelinesRunningCount;
    bool m_pipelinesRunningCountHasBeenSet;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet;

    ChannelState m_state;
    bool m_stateHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
