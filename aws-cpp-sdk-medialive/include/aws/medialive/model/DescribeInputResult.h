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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/medialive/model/InputClass.h>
#include <aws/medialive/model/InputState.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/medialive/model/InputType.h>
#include <aws/medialive/model/InputDestination.h>
#include <aws/medialive/model/MediaConnectFlow.h>
#include <aws/medialive/model/InputSource.h>
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
   * Placeholder documentation for DescribeInputResponse<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DescribeInputResponse">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API DescribeInputResult
  {
  public:
    DescribeInputResult();
    DescribeInputResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeInputResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * The Unique ARN of the input (generated, immutable).
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * The Unique ARN of the input (generated, immutable).
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * The Unique ARN of the input (generated, immutable).
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * The Unique ARN of the input (generated, immutable).
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * The Unique ARN of the input (generated, immutable).
     */
    inline DescribeInputResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * The Unique ARN of the input (generated, immutable).
     */
    inline DescribeInputResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * The Unique ARN of the input (generated, immutable).
     */
    inline DescribeInputResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * A list of channel IDs that that input is attached to (currently an input can
     * only be attached to one channel).
     */
    inline const Aws::Vector<Aws::String>& GetAttachedChannels() const{ return m_attachedChannels; }

    /**
     * A list of channel IDs that that input is attached to (currently an input can
     * only be attached to one channel).
     */
    inline void SetAttachedChannels(const Aws::Vector<Aws::String>& value) { m_attachedChannels = value; }

    /**
     * A list of channel IDs that that input is attached to (currently an input can
     * only be attached to one channel).
     */
    inline void SetAttachedChannels(Aws::Vector<Aws::String>&& value) { m_attachedChannels = std::move(value); }

    /**
     * A list of channel IDs that that input is attached to (currently an input can
     * only be attached to one channel).
     */
    inline DescribeInputResult& WithAttachedChannels(const Aws::Vector<Aws::String>& value) { SetAttachedChannels(value); return *this;}

    /**
     * A list of channel IDs that that input is attached to (currently an input can
     * only be attached to one channel).
     */
    inline DescribeInputResult& WithAttachedChannels(Aws::Vector<Aws::String>&& value) { SetAttachedChannels(std::move(value)); return *this;}

    /**
     * A list of channel IDs that that input is attached to (currently an input can
     * only be attached to one channel).
     */
    inline DescribeInputResult& AddAttachedChannels(const Aws::String& value) { m_attachedChannels.push_back(value); return *this; }

    /**
     * A list of channel IDs that that input is attached to (currently an input can
     * only be attached to one channel).
     */
    inline DescribeInputResult& AddAttachedChannels(Aws::String&& value) { m_attachedChannels.push_back(std::move(value)); return *this; }

    /**
     * A list of channel IDs that that input is attached to (currently an input can
     * only be attached to one channel).
     */
    inline DescribeInputResult& AddAttachedChannels(const char* value) { m_attachedChannels.push_back(value); return *this; }


    /**
     * A list of the destinations of the input (PUSH-type).
     */
    inline const Aws::Vector<InputDestination>& GetDestinations() const{ return m_destinations; }

    /**
     * A list of the destinations of the input (PUSH-type).
     */
    inline void SetDestinations(const Aws::Vector<InputDestination>& value) { m_destinations = value; }

    /**
     * A list of the destinations of the input (PUSH-type).
     */
    inline void SetDestinations(Aws::Vector<InputDestination>&& value) { m_destinations = std::move(value); }

    /**
     * A list of the destinations of the input (PUSH-type).
     */
    inline DescribeInputResult& WithDestinations(const Aws::Vector<InputDestination>& value) { SetDestinations(value); return *this;}

    /**
     * A list of the destinations of the input (PUSH-type).
     */
    inline DescribeInputResult& WithDestinations(Aws::Vector<InputDestination>&& value) { SetDestinations(std::move(value)); return *this;}

    /**
     * A list of the destinations of the input (PUSH-type).
     */
    inline DescribeInputResult& AddDestinations(const InputDestination& value) { m_destinations.push_back(value); return *this; }

    /**
     * A list of the destinations of the input (PUSH-type).
     */
    inline DescribeInputResult& AddDestinations(InputDestination&& value) { m_destinations.push_back(std::move(value)); return *this; }


    /**
     * The generated ID of the input (unique for user account, immutable).
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * The generated ID of the input (unique for user account, immutable).
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * The generated ID of the input (unique for user account, immutable).
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * The generated ID of the input (unique for user account, immutable).
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * The generated ID of the input (unique for user account, immutable).
     */
    inline DescribeInputResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * The generated ID of the input (unique for user account, immutable).
     */
    inline DescribeInputResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * The generated ID of the input (unique for user account, immutable).
     */
    inline DescribeInputResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * STANDARD - MediaLive expects two sources to be connected to this input. If the
     * channel is also STANDARD, both sources will be ingested. If the channel is
     * SINGLE_PIPELINE, only the first source will be ingested; the second source will
     * always be ignored, even if the first source fails.
SINGLE_PIPELINE - You can
     * connect only one source to this input. If the ChannelClass is also 
     * SINGLE_PIPELINE, this value is valid. If the ChannelClass is STANDARD, this
     * value is not valid because the channel requires two sources in the input.

     */
    inline const InputClass& GetInputClass() const{ return m_inputClass; }

    /**
     * STANDARD - MediaLive expects two sources to be connected to this input. If the
     * channel is also STANDARD, both sources will be ingested. If the channel is
     * SINGLE_PIPELINE, only the first source will be ingested; the second source will
     * always be ignored, even if the first source fails.
SINGLE_PIPELINE - You can
     * connect only one source to this input. If the ChannelClass is also 
     * SINGLE_PIPELINE, this value is valid. If the ChannelClass is STANDARD, this
     * value is not valid because the channel requires two sources in the input.

     */
    inline void SetInputClass(const InputClass& value) { m_inputClass = value; }

    /**
     * STANDARD - MediaLive expects two sources to be connected to this input. If the
     * channel is also STANDARD, both sources will be ingested. If the channel is
     * SINGLE_PIPELINE, only the first source will be ingested; the second source will
     * always be ignored, even if the first source fails.
SINGLE_PIPELINE - You can
     * connect only one source to this input. If the ChannelClass is also 
     * SINGLE_PIPELINE, this value is valid. If the ChannelClass is STANDARD, this
     * value is not valid because the channel requires two sources in the input.

     */
    inline void SetInputClass(InputClass&& value) { m_inputClass = std::move(value); }

    /**
     * STANDARD - MediaLive expects two sources to be connected to this input. If the
     * channel is also STANDARD, both sources will be ingested. If the channel is
     * SINGLE_PIPELINE, only the first source will be ingested; the second source will
     * always be ignored, even if the first source fails.
SINGLE_PIPELINE - You can
     * connect only one source to this input. If the ChannelClass is also 
     * SINGLE_PIPELINE, this value is valid. If the ChannelClass is STANDARD, this
     * value is not valid because the channel requires two sources in the input.

     */
    inline DescribeInputResult& WithInputClass(const InputClass& value) { SetInputClass(value); return *this;}

    /**
     * STANDARD - MediaLive expects two sources to be connected to this input. If the
     * channel is also STANDARD, both sources will be ingested. If the channel is
     * SINGLE_PIPELINE, only the first source will be ingested; the second source will
     * always be ignored, even if the first source fails.
SINGLE_PIPELINE - You can
     * connect only one source to this input. If the ChannelClass is also 
     * SINGLE_PIPELINE, this value is valid. If the ChannelClass is STANDARD, this
     * value is not valid because the channel requires two sources in the input.

     */
    inline DescribeInputResult& WithInputClass(InputClass&& value) { SetInputClass(std::move(value)); return *this;}


    /**
     * A list of MediaConnect Flows for this input.
     */
    inline const Aws::Vector<MediaConnectFlow>& GetMediaConnectFlows() const{ return m_mediaConnectFlows; }

    /**
     * A list of MediaConnect Flows for this input.
     */
    inline void SetMediaConnectFlows(const Aws::Vector<MediaConnectFlow>& value) { m_mediaConnectFlows = value; }

    /**
     * A list of MediaConnect Flows for this input.
     */
    inline void SetMediaConnectFlows(Aws::Vector<MediaConnectFlow>&& value) { m_mediaConnectFlows = std::move(value); }

    /**
     * A list of MediaConnect Flows for this input.
     */
    inline DescribeInputResult& WithMediaConnectFlows(const Aws::Vector<MediaConnectFlow>& value) { SetMediaConnectFlows(value); return *this;}

    /**
     * A list of MediaConnect Flows for this input.
     */
    inline DescribeInputResult& WithMediaConnectFlows(Aws::Vector<MediaConnectFlow>&& value) { SetMediaConnectFlows(std::move(value)); return *this;}

    /**
     * A list of MediaConnect Flows for this input.
     */
    inline DescribeInputResult& AddMediaConnectFlows(const MediaConnectFlow& value) { m_mediaConnectFlows.push_back(value); return *this; }

    /**
     * A list of MediaConnect Flows for this input.
     */
    inline DescribeInputResult& AddMediaConnectFlows(MediaConnectFlow&& value) { m_mediaConnectFlows.push_back(std::move(value)); return *this; }


    /**
     * The user-assigned name (This is a mutable value).
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * The user-assigned name (This is a mutable value).
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * The user-assigned name (This is a mutable value).
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * The user-assigned name (This is a mutable value).
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * The user-assigned name (This is a mutable value).
     */
    inline DescribeInputResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * The user-assigned name (This is a mutable value).
     */
    inline DescribeInputResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * The user-assigned name (This is a mutable value).
     */
    inline DescribeInputResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * The Amazon Resource Name (ARN) of the role this input assumes during and after
     * creation.
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * The Amazon Resource Name (ARN) of the role this input assumes during and after
     * creation.
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }

    /**
     * The Amazon Resource Name (ARN) of the role this input assumes during and after
     * creation.
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }

    /**
     * The Amazon Resource Name (ARN) of the role this input assumes during and after
     * creation.
     */
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }

    /**
     * The Amazon Resource Name (ARN) of the role this input assumes during and after
     * creation.
     */
    inline DescribeInputResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * The Amazon Resource Name (ARN) of the role this input assumes during and after
     * creation.
     */
    inline DescribeInputResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * The Amazon Resource Name (ARN) of the role this input assumes during and after
     * creation.
     */
    inline DescribeInputResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * A list of IDs for all the Input Security Groups attached to the input.
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroups() const{ return m_securityGroups; }

    /**
     * A list of IDs for all the Input Security Groups attached to the input.
     */
    inline void SetSecurityGroups(const Aws::Vector<Aws::String>& value) { m_securityGroups = value; }

    /**
     * A list of IDs for all the Input Security Groups attached to the input.
     */
    inline void SetSecurityGroups(Aws::Vector<Aws::String>&& value) { m_securityGroups = std::move(value); }

    /**
     * A list of IDs for all the Input Security Groups attached to the input.
     */
    inline DescribeInputResult& WithSecurityGroups(const Aws::Vector<Aws::String>& value) { SetSecurityGroups(value); return *this;}

    /**
     * A list of IDs for all the Input Security Groups attached to the input.
     */
    inline DescribeInputResult& WithSecurityGroups(Aws::Vector<Aws::String>&& value) { SetSecurityGroups(std::move(value)); return *this;}

    /**
     * A list of IDs for all the Input Security Groups attached to the input.
     */
    inline DescribeInputResult& AddSecurityGroups(const Aws::String& value) { m_securityGroups.push_back(value); return *this; }

    /**
     * A list of IDs for all the Input Security Groups attached to the input.
     */
    inline DescribeInputResult& AddSecurityGroups(Aws::String&& value) { m_securityGroups.push_back(std::move(value)); return *this; }

    /**
     * A list of IDs for all the Input Security Groups attached to the input.
     */
    inline DescribeInputResult& AddSecurityGroups(const char* value) { m_securityGroups.push_back(value); return *this; }


    /**
     * A list of the sources of the input (PULL-type).
     */
    inline const Aws::Vector<InputSource>& GetSources() const{ return m_sources; }

    /**
     * A list of the sources of the input (PULL-type).
     */
    inline void SetSources(const Aws::Vector<InputSource>& value) { m_sources = value; }

    /**
     * A list of the sources of the input (PULL-type).
     */
    inline void SetSources(Aws::Vector<InputSource>&& value) { m_sources = std::move(value); }

    /**
     * A list of the sources of the input (PULL-type).
     */
    inline DescribeInputResult& WithSources(const Aws::Vector<InputSource>& value) { SetSources(value); return *this;}

    /**
     * A list of the sources of the input (PULL-type).
     */
    inline DescribeInputResult& WithSources(Aws::Vector<InputSource>&& value) { SetSources(std::move(value)); return *this;}

    /**
     * A list of the sources of the input (PULL-type).
     */
    inline DescribeInputResult& AddSources(const InputSource& value) { m_sources.push_back(value); return *this; }

    /**
     * A list of the sources of the input (PULL-type).
     */
    inline DescribeInputResult& AddSources(InputSource&& value) { m_sources.push_back(std::move(value)); return *this; }


    
    inline const InputState& GetState() const{ return m_state; }

    
    inline void SetState(const InputState& value) { m_state = value; }

    
    inline void SetState(InputState&& value) { m_state = std::move(value); }

    
    inline DescribeInputResult& WithState(const InputState& value) { SetState(value); return *this;}

    
    inline DescribeInputResult& WithState(InputState&& value) { SetState(std::move(value)); return *this;}


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
    inline DescribeInputResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * A collection of key-value pairs.
     */
    inline DescribeInputResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * A collection of key-value pairs.
     */
    inline DescribeInputResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * A collection of key-value pairs.
     */
    inline DescribeInputResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * A collection of key-value pairs.
     */
    inline DescribeInputResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * A collection of key-value pairs.
     */
    inline DescribeInputResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * A collection of key-value pairs.
     */
    inline DescribeInputResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * A collection of key-value pairs.
     */
    inline DescribeInputResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * A collection of key-value pairs.
     */
    inline DescribeInputResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }


    
    inline const InputType& GetType() const{ return m_type; }

    
    inline void SetType(const InputType& value) { m_type = value; }

    
    inline void SetType(InputType&& value) { m_type = std::move(value); }

    
    inline DescribeInputResult& WithType(const InputType& value) { SetType(value); return *this;}

    
    inline DescribeInputResult& WithType(InputType&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_arn;

    Aws::Vector<Aws::String> m_attachedChannels;

    Aws::Vector<InputDestination> m_destinations;

    Aws::String m_id;

    InputClass m_inputClass;

    Aws::Vector<MediaConnectFlow> m_mediaConnectFlows;

    Aws::String m_name;

    Aws::String m_roleArn;

    Aws::Vector<Aws::String> m_securityGroups;

    Aws::Vector<InputSource> m_sources;

    InputState m_state;

    Aws::Map<Aws::String, Aws::String> m_tags;

    InputType m_type;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
