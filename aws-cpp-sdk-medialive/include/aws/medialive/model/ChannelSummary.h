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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/model/ChannelClass.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/medialive/model/InputSpecification.h>
#include <aws/medialive/model/LogLevel.h>
#include <aws/medialive/model/ChannelState.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
   * Placeholder documentation for ChannelSummary<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ChannelSummary">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API ChannelSummary
  {
  public:
    ChannelSummary();
    ChannelSummary(Aws::Utils::Json::JsonView jsonValue);
    ChannelSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The unique arn of the channel.
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * The unique arn of the channel.
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

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
    inline ChannelSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * The unique arn of the channel.
     */
    inline ChannelSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * The unique arn of the channel.
     */
    inline ChannelSummary& WithArn(const char* value) { SetArn(value); return *this;}


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
    inline ChannelSummary& WithChannelClass(const ChannelClass& value) { SetChannelClass(value); return *this;}

    /**
     * The class for this channel. STANDARD for a channel with two pipelines or
     * SINGLE_PIPELINE for a channel with one pipeline.
     */
    inline ChannelSummary& WithChannelClass(ChannelClass&& value) { SetChannelClass(std::move(value)); return *this;}


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
    inline bool DestinationsHasBeenSet() const { return m_destinationsHasBeenSet; }

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
    inline ChannelSummary& WithDestinations(const Aws::Vector<OutputDestination>& value) { SetDestinations(value); return *this;}

    /**
     * A list of destinations of the channel. For UDP outputs, there is one
destination
     * per output. For other types (HLS, for example), there is
one destination per
     * packager.

     */
    inline ChannelSummary& WithDestinations(Aws::Vector<OutputDestination>&& value) { SetDestinations(std::move(value)); return *this;}

    /**
     * A list of destinations of the channel. For UDP outputs, there is one
destination
     * per output. For other types (HLS, for example), there is
one destination per
     * packager.

     */
    inline ChannelSummary& AddDestinations(const OutputDestination& value) { m_destinationsHasBeenSet = true; m_destinations.push_back(value); return *this; }

    /**
     * A list of destinations of the channel. For UDP outputs, there is one
destination
     * per output. For other types (HLS, for example), there is
one destination per
     * packager.

     */
    inline ChannelSummary& AddDestinations(OutputDestination&& value) { m_destinationsHasBeenSet = true; m_destinations.push_back(std::move(value)); return *this; }


    /**
     * The endpoints where outgoing connections initiate from
     */
    inline const Aws::Vector<ChannelEgressEndpoint>& GetEgressEndpoints() const{ return m_egressEndpoints; }

    /**
     * The endpoints where outgoing connections initiate from
     */
    inline bool EgressEndpointsHasBeenSet() const { return m_egressEndpointsHasBeenSet; }

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
    inline ChannelSummary& WithEgressEndpoints(const Aws::Vector<ChannelEgressEndpoint>& value) { SetEgressEndpoints(value); return *this;}

    /**
     * The endpoints where outgoing connections initiate from
     */
    inline ChannelSummary& WithEgressEndpoints(Aws::Vector<ChannelEgressEndpoint>&& value) { SetEgressEndpoints(std::move(value)); return *this;}

    /**
     * The endpoints where outgoing connections initiate from
     */
    inline ChannelSummary& AddEgressEndpoints(const ChannelEgressEndpoint& value) { m_egressEndpointsHasBeenSet = true; m_egressEndpoints.push_back(value); return *this; }

    /**
     * The endpoints where outgoing connections initiate from
     */
    inline ChannelSummary& AddEgressEndpoints(ChannelEgressEndpoint&& value) { m_egressEndpointsHasBeenSet = true; m_egressEndpoints.push_back(std::move(value)); return *this; }


    /**
     * The unique id of the channel.
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * The unique id of the channel.
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

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
    inline ChannelSummary& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * The unique id of the channel.
     */
    inline ChannelSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * The unique id of the channel.
     */
    inline ChannelSummary& WithId(const char* value) { SetId(value); return *this;}


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
    inline ChannelSummary& WithInputAttachments(const Aws::Vector<InputAttachment>& value) { SetInputAttachments(value); return *this;}

    /**
     * List of input attachments for channel.
     */
    inline ChannelSummary& WithInputAttachments(Aws::Vector<InputAttachment>&& value) { SetInputAttachments(std::move(value)); return *this;}

    /**
     * List of input attachments for channel.
     */
    inline ChannelSummary& AddInputAttachments(const InputAttachment& value) { m_inputAttachmentsHasBeenSet = true; m_inputAttachments.push_back(value); return *this; }

    /**
     * List of input attachments for channel.
     */
    inline ChannelSummary& AddInputAttachments(InputAttachment&& value) { m_inputAttachmentsHasBeenSet = true; m_inputAttachments.push_back(std::move(value)); return *this; }


    
    inline const InputSpecification& GetInputSpecification() const{ return m_inputSpecification; }

    
    inline bool InputSpecificationHasBeenSet() const { return m_inputSpecificationHasBeenSet; }

    
    inline void SetInputSpecification(const InputSpecification& value) { m_inputSpecificationHasBeenSet = true; m_inputSpecification = value; }

    
    inline void SetInputSpecification(InputSpecification&& value) { m_inputSpecificationHasBeenSet = true; m_inputSpecification = std::move(value); }

    
    inline ChannelSummary& WithInputSpecification(const InputSpecification& value) { SetInputSpecification(value); return *this;}

    
    inline ChannelSummary& WithInputSpecification(InputSpecification&& value) { SetInputSpecification(std::move(value)); return *this;}


    /**
     * The log level being written to CloudWatch Logs.
     */
    inline const LogLevel& GetLogLevel() const{ return m_logLevel; }

    /**
     * The log level being written to CloudWatch Logs.
     */
    inline bool LogLevelHasBeenSet() const { return m_logLevelHasBeenSet; }

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
    inline ChannelSummary& WithLogLevel(const LogLevel& value) { SetLogLevel(value); return *this;}

    /**
     * The log level being written to CloudWatch Logs.
     */
    inline ChannelSummary& WithLogLevel(LogLevel&& value) { SetLogLevel(std::move(value)); return *this;}


    /**
     * The name of the channel. (user-mutable)
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * The name of the channel. (user-mutable)
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

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
    inline ChannelSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * The name of the channel. (user-mutable)
     */
    inline ChannelSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * The name of the channel. (user-mutable)
     */
    inline ChannelSummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * The number of currently healthy pipelines.
     */
    inline int GetPipelinesRunningCount() const{ return m_pipelinesRunningCount; }

    /**
     * The number of currently healthy pipelines.
     */
    inline bool PipelinesRunningCountHasBeenSet() const { return m_pipelinesRunningCountHasBeenSet; }

    /**
     * The number of currently healthy pipelines.
     */
    inline void SetPipelinesRunningCount(int value) { m_pipelinesRunningCountHasBeenSet = true; m_pipelinesRunningCount = value; }

    /**
     * The number of currently healthy pipelines.
     */
    inline ChannelSummary& WithPipelinesRunningCount(int value) { SetPipelinesRunningCount(value); return *this;}


    /**
     * The Amazon Resource Name (ARN) of the role assumed when running the Channel.
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * The Amazon Resource Name (ARN) of the role assumed when running the Channel.
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

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
    inline ChannelSummary& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * The Amazon Resource Name (ARN) of the role assumed when running the Channel.
     */
    inline ChannelSummary& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * The Amazon Resource Name (ARN) of the role assumed when running the Channel.
     */
    inline ChannelSummary& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    
    inline const ChannelState& GetState() const{ return m_state; }

    
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    
    inline void SetState(const ChannelState& value) { m_stateHasBeenSet = true; m_state = value; }

    
    inline void SetState(ChannelState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    
    inline ChannelSummary& WithState(const ChannelState& value) { SetState(value); return *this;}

    
    inline ChannelSummary& WithState(ChannelState&& value) { SetState(std::move(value)); return *this;}


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
    inline ChannelSummary& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * A collection of key-value pairs.
     */
    inline ChannelSummary& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * A collection of key-value pairs.
     */
    inline ChannelSummary& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * A collection of key-value pairs.
     */
    inline ChannelSummary& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * A collection of key-value pairs.
     */
    inline ChannelSummary& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * A collection of key-value pairs.
     */
    inline ChannelSummary& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * A collection of key-value pairs.
     */
    inline ChannelSummary& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * A collection of key-value pairs.
     */
    inline ChannelSummary& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * A collection of key-value pairs.
     */
    inline ChannelSummary& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    ChannelClass m_channelClass;
    bool m_channelClassHasBeenSet;

    Aws::Vector<OutputDestination> m_destinations;
    bool m_destinationsHasBeenSet;

    Aws::Vector<ChannelEgressEndpoint> m_egressEndpoints;
    bool m_egressEndpointsHasBeenSet;

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

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
