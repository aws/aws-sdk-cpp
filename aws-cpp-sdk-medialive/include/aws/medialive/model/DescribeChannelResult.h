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
#include <aws/medialive/model/EncoderSettings.h>
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
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace MediaLive
{
namespace Model
{
  /**
   * Placeholder documentation for DescribeChannelResponse<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DescribeChannelResponse">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API DescribeChannelResult
  {
  public:
    DescribeChannelResult();
    DescribeChannelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeChannelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * The unique arn of the channel.
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * The unique arn of the channel.
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * The unique arn of the channel.
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * The unique arn of the channel.
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * The unique arn of the channel.
     */
    inline DescribeChannelResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * The unique arn of the channel.
     */
    inline DescribeChannelResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * The unique arn of the channel.
     */
    inline DescribeChannelResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * The class for this channel. STANDARD for a channel with two pipelines or
     * SINGLE_PIPELINE for a channel with one pipeline.
     */
    inline const ChannelClass& GetChannelClass() const{ return m_channelClass; }

    /**
     * The class for this channel. STANDARD for a channel with two pipelines or
     * SINGLE_PIPELINE for a channel with one pipeline.
     */
    inline void SetChannelClass(const ChannelClass& value) { m_channelClass = value; }

    /**
     * The class for this channel. STANDARD for a channel with two pipelines or
     * SINGLE_PIPELINE for a channel with one pipeline.
     */
    inline void SetChannelClass(ChannelClass&& value) { m_channelClass = std::move(value); }

    /**
     * The class for this channel. STANDARD for a channel with two pipelines or
     * SINGLE_PIPELINE for a channel with one pipeline.
     */
    inline DescribeChannelResult& WithChannelClass(const ChannelClass& value) { SetChannelClass(value); return *this;}

    /**
     * The class for this channel. STANDARD for a channel with two pipelines or
     * SINGLE_PIPELINE for a channel with one pipeline.
     */
    inline DescribeChannelResult& WithChannelClass(ChannelClass&& value) { SetChannelClass(std::move(value)); return *this;}


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
    inline void SetDestinations(const Aws::Vector<OutputDestination>& value) { m_destinations = value; }

    /**
     * A list of destinations of the channel. For UDP outputs, there is one
destination
     * per output. For other types (HLS, for example), there is
one destination per
     * packager.

     */
    inline void SetDestinations(Aws::Vector<OutputDestination>&& value) { m_destinations = std::move(value); }

    /**
     * A list of destinations of the channel. For UDP outputs, there is one
destination
     * per output. For other types (HLS, for example), there is
one destination per
     * packager.

     */
    inline DescribeChannelResult& WithDestinations(const Aws::Vector<OutputDestination>& value) { SetDestinations(value); return *this;}

    /**
     * A list of destinations of the channel. For UDP outputs, there is one
destination
     * per output. For other types (HLS, for example), there is
one destination per
     * packager.

     */
    inline DescribeChannelResult& WithDestinations(Aws::Vector<OutputDestination>&& value) { SetDestinations(std::move(value)); return *this;}

    /**
     * A list of destinations of the channel. For UDP outputs, there is one
destination
     * per output. For other types (HLS, for example), there is
one destination per
     * packager.

     */
    inline DescribeChannelResult& AddDestinations(const OutputDestination& value) { m_destinations.push_back(value); return *this; }

    /**
     * A list of destinations of the channel. For UDP outputs, there is one
destination
     * per output. For other types (HLS, for example), there is
one destination per
     * packager.

     */
    inline DescribeChannelResult& AddDestinations(OutputDestination&& value) { m_destinations.push_back(std::move(value)); return *this; }


    /**
     * The endpoints where outgoing connections initiate from
     */
    inline const Aws::Vector<ChannelEgressEndpoint>& GetEgressEndpoints() const{ return m_egressEndpoints; }

    /**
     * The endpoints where outgoing connections initiate from
     */
    inline void SetEgressEndpoints(const Aws::Vector<ChannelEgressEndpoint>& value) { m_egressEndpoints = value; }

    /**
     * The endpoints where outgoing connections initiate from
     */
    inline void SetEgressEndpoints(Aws::Vector<ChannelEgressEndpoint>&& value) { m_egressEndpoints = std::move(value); }

    /**
     * The endpoints where outgoing connections initiate from
     */
    inline DescribeChannelResult& WithEgressEndpoints(const Aws::Vector<ChannelEgressEndpoint>& value) { SetEgressEndpoints(value); return *this;}

    /**
     * The endpoints where outgoing connections initiate from
     */
    inline DescribeChannelResult& WithEgressEndpoints(Aws::Vector<ChannelEgressEndpoint>&& value) { SetEgressEndpoints(std::move(value)); return *this;}

    /**
     * The endpoints where outgoing connections initiate from
     */
    inline DescribeChannelResult& AddEgressEndpoints(const ChannelEgressEndpoint& value) { m_egressEndpoints.push_back(value); return *this; }

    /**
     * The endpoints where outgoing connections initiate from
     */
    inline DescribeChannelResult& AddEgressEndpoints(ChannelEgressEndpoint&& value) { m_egressEndpoints.push_back(std::move(value)); return *this; }


    
    inline const EncoderSettings& GetEncoderSettings() const{ return m_encoderSettings; }

    
    inline void SetEncoderSettings(const EncoderSettings& value) { m_encoderSettings = value; }

    
    inline void SetEncoderSettings(EncoderSettings&& value) { m_encoderSettings = std::move(value); }

    
    inline DescribeChannelResult& WithEncoderSettings(const EncoderSettings& value) { SetEncoderSettings(value); return *this;}

    
    inline DescribeChannelResult& WithEncoderSettings(EncoderSettings&& value) { SetEncoderSettings(std::move(value)); return *this;}


    /**
     * The unique id of the channel.
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * The unique id of the channel.
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * The unique id of the channel.
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * The unique id of the channel.
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * The unique id of the channel.
     */
    inline DescribeChannelResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * The unique id of the channel.
     */
    inline DescribeChannelResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * The unique id of the channel.
     */
    inline DescribeChannelResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * List of input attachments for channel.
     */
    inline const Aws::Vector<InputAttachment>& GetInputAttachments() const{ return m_inputAttachments; }

    /**
     * List of input attachments for channel.
     */
    inline void SetInputAttachments(const Aws::Vector<InputAttachment>& value) { m_inputAttachments = value; }

    /**
     * List of input attachments for channel.
     */
    inline void SetInputAttachments(Aws::Vector<InputAttachment>&& value) { m_inputAttachments = std::move(value); }

    /**
     * List of input attachments for channel.
     */
    inline DescribeChannelResult& WithInputAttachments(const Aws::Vector<InputAttachment>& value) { SetInputAttachments(value); return *this;}

    /**
     * List of input attachments for channel.
     */
    inline DescribeChannelResult& WithInputAttachments(Aws::Vector<InputAttachment>&& value) { SetInputAttachments(std::move(value)); return *this;}

    /**
     * List of input attachments for channel.
     */
    inline DescribeChannelResult& AddInputAttachments(const InputAttachment& value) { m_inputAttachments.push_back(value); return *this; }

    /**
     * List of input attachments for channel.
     */
    inline DescribeChannelResult& AddInputAttachments(InputAttachment&& value) { m_inputAttachments.push_back(std::move(value)); return *this; }


    
    inline const InputSpecification& GetInputSpecification() const{ return m_inputSpecification; }

    
    inline void SetInputSpecification(const InputSpecification& value) { m_inputSpecification = value; }

    
    inline void SetInputSpecification(InputSpecification&& value) { m_inputSpecification = std::move(value); }

    
    inline DescribeChannelResult& WithInputSpecification(const InputSpecification& value) { SetInputSpecification(value); return *this;}

    
    inline DescribeChannelResult& WithInputSpecification(InputSpecification&& value) { SetInputSpecification(std::move(value)); return *this;}


    /**
     * The log level being written to CloudWatch Logs.
     */
    inline const LogLevel& GetLogLevel() const{ return m_logLevel; }

    /**
     * The log level being written to CloudWatch Logs.
     */
    inline void SetLogLevel(const LogLevel& value) { m_logLevel = value; }

    /**
     * The log level being written to CloudWatch Logs.
     */
    inline void SetLogLevel(LogLevel&& value) { m_logLevel = std::move(value); }

    /**
     * The log level being written to CloudWatch Logs.
     */
    inline DescribeChannelResult& WithLogLevel(const LogLevel& value) { SetLogLevel(value); return *this;}

    /**
     * The log level being written to CloudWatch Logs.
     */
    inline DescribeChannelResult& WithLogLevel(LogLevel&& value) { SetLogLevel(std::move(value)); return *this;}


    /**
     * The name of the channel. (user-mutable)
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * The name of the channel. (user-mutable)
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * The name of the channel. (user-mutable)
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * The name of the channel. (user-mutable)
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * The name of the channel. (user-mutable)
     */
    inline DescribeChannelResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * The name of the channel. (user-mutable)
     */
    inline DescribeChannelResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * The name of the channel. (user-mutable)
     */
    inline DescribeChannelResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * The number of currently healthy pipelines.
     */
    inline int GetPipelinesRunningCount() const{ return m_pipelinesRunningCount; }

    /**
     * The number of currently healthy pipelines.
     */
    inline void SetPipelinesRunningCount(int value) { m_pipelinesRunningCount = value; }

    /**
     * The number of currently healthy pipelines.
     */
    inline DescribeChannelResult& WithPipelinesRunningCount(int value) { SetPipelinesRunningCount(value); return *this;}


    /**
     * The Amazon Resource Name (ARN) of the role assumed when running the Channel.
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * The Amazon Resource Name (ARN) of the role assumed when running the Channel.
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }

    /**
     * The Amazon Resource Name (ARN) of the role assumed when running the Channel.
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }

    /**
     * The Amazon Resource Name (ARN) of the role assumed when running the Channel.
     */
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }

    /**
     * The Amazon Resource Name (ARN) of the role assumed when running the Channel.
     */
    inline DescribeChannelResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * The Amazon Resource Name (ARN) of the role assumed when running the Channel.
     */
    inline DescribeChannelResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * The Amazon Resource Name (ARN) of the role assumed when running the Channel.
     */
    inline DescribeChannelResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    
    inline const ChannelState& GetState() const{ return m_state; }

    
    inline void SetState(const ChannelState& value) { m_state = value; }

    
    inline void SetState(ChannelState&& value) { m_state = std::move(value); }

    
    inline DescribeChannelResult& WithState(const ChannelState& value) { SetState(value); return *this;}

    
    inline DescribeChannelResult& WithState(ChannelState&& value) { SetState(std::move(value)); return *this;}


    /**
     * A collection of key-value pairs.
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * A collection of key-value pairs.
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * A collection of key-value pairs.
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * A collection of key-value pairs.
     */
    inline DescribeChannelResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * A collection of key-value pairs.
     */
    inline DescribeChannelResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * A collection of key-value pairs.
     */
    inline DescribeChannelResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * A collection of key-value pairs.
     */
    inline DescribeChannelResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * A collection of key-value pairs.
     */
    inline DescribeChannelResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * A collection of key-value pairs.
     */
    inline DescribeChannelResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * A collection of key-value pairs.
     */
    inline DescribeChannelResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * A collection of key-value pairs.
     */
    inline DescribeChannelResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * A collection of key-value pairs.
     */
    inline DescribeChannelResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_arn;

    ChannelClass m_channelClass;

    Aws::Vector<OutputDestination> m_destinations;

    Aws::Vector<ChannelEgressEndpoint> m_egressEndpoints;

    EncoderSettings m_encoderSettings;

    Aws::String m_id;

    Aws::Vector<InputAttachment> m_inputAttachments;

    InputSpecification m_inputSpecification;

    LogLevel m_logLevel;

    Aws::String m_name;

    int m_pipelinesRunningCount;

    Aws::String m_roleArn;

    ChannelState m_state;

    Aws::Map<Aws::String, Aws::String> m_tags;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
