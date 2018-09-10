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
#include <aws/medialive/model/InputState.h>
#include <aws/medialive/model/InputType.h>
#include <aws/medialive/model/InputDestination.h>
#include <aws/medialive/model/InputSource.h>
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
   * Placeholder documentation for Input<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/Input">AWS API
   * Reference</a></p>
   */
  class AWS_MEDIALIVE_API Input
  {
  public:
    Input();
    Input(Aws::Utils::Json::JsonView jsonValue);
    Input& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The Unique ARN of the input (generated, immutable).
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * The Unique ARN of the input (generated, immutable).
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * The Unique ARN of the input (generated, immutable).
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * The Unique ARN of the input (generated, immutable).
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * The Unique ARN of the input (generated, immutable).
     */
    inline Input& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * The Unique ARN of the input (generated, immutable).
     */
    inline Input& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * The Unique ARN of the input (generated, immutable).
     */
    inline Input& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * A list of channel IDs that that input is attached to (currently an input can
     * only be attached to one channel).
     */
    inline const Aws::Vector<Aws::String>& GetAttachedChannels() const{ return m_attachedChannels; }

    /**
     * A list of channel IDs that that input is attached to (currently an input can
     * only be attached to one channel).
     */
    inline void SetAttachedChannels(const Aws::Vector<Aws::String>& value) { m_attachedChannelsHasBeenSet = true; m_attachedChannels = value; }

    /**
     * A list of channel IDs that that input is attached to (currently an input can
     * only be attached to one channel).
     */
    inline void SetAttachedChannels(Aws::Vector<Aws::String>&& value) { m_attachedChannelsHasBeenSet = true; m_attachedChannels = std::move(value); }

    /**
     * A list of channel IDs that that input is attached to (currently an input can
     * only be attached to one channel).
     */
    inline Input& WithAttachedChannels(const Aws::Vector<Aws::String>& value) { SetAttachedChannels(value); return *this;}

    /**
     * A list of channel IDs that that input is attached to (currently an input can
     * only be attached to one channel).
     */
    inline Input& WithAttachedChannels(Aws::Vector<Aws::String>&& value) { SetAttachedChannels(std::move(value)); return *this;}

    /**
     * A list of channel IDs that that input is attached to (currently an input can
     * only be attached to one channel).
     */
    inline Input& AddAttachedChannels(const Aws::String& value) { m_attachedChannelsHasBeenSet = true; m_attachedChannels.push_back(value); return *this; }

    /**
     * A list of channel IDs that that input is attached to (currently an input can
     * only be attached to one channel).
     */
    inline Input& AddAttachedChannels(Aws::String&& value) { m_attachedChannelsHasBeenSet = true; m_attachedChannels.push_back(std::move(value)); return *this; }

    /**
     * A list of channel IDs that that input is attached to (currently an input can
     * only be attached to one channel).
     */
    inline Input& AddAttachedChannels(const char* value) { m_attachedChannelsHasBeenSet = true; m_attachedChannels.push_back(value); return *this; }


    /**
     * A list of the destinations of the input (PUSH-type).
     */
    inline const Aws::Vector<InputDestination>& GetDestinations() const{ return m_destinations; }

    /**
     * A list of the destinations of the input (PUSH-type).
     */
    inline void SetDestinations(const Aws::Vector<InputDestination>& value) { m_destinationsHasBeenSet = true; m_destinations = value; }

    /**
     * A list of the destinations of the input (PUSH-type).
     */
    inline void SetDestinations(Aws::Vector<InputDestination>&& value) { m_destinationsHasBeenSet = true; m_destinations = std::move(value); }

    /**
     * A list of the destinations of the input (PUSH-type).
     */
    inline Input& WithDestinations(const Aws::Vector<InputDestination>& value) { SetDestinations(value); return *this;}

    /**
     * A list of the destinations of the input (PUSH-type).
     */
    inline Input& WithDestinations(Aws::Vector<InputDestination>&& value) { SetDestinations(std::move(value)); return *this;}

    /**
     * A list of the destinations of the input (PUSH-type).
     */
    inline Input& AddDestinations(const InputDestination& value) { m_destinationsHasBeenSet = true; m_destinations.push_back(value); return *this; }

    /**
     * A list of the destinations of the input (PUSH-type).
     */
    inline Input& AddDestinations(InputDestination&& value) { m_destinationsHasBeenSet = true; m_destinations.push_back(std::move(value)); return *this; }


    /**
     * The generated ID of the input (unique for user account, immutable).
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * The generated ID of the input (unique for user account, immutable).
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * The generated ID of the input (unique for user account, immutable).
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * The generated ID of the input (unique for user account, immutable).
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * The generated ID of the input (unique for user account, immutable).
     */
    inline Input& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * The generated ID of the input (unique for user account, immutable).
     */
    inline Input& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * The generated ID of the input (unique for user account, immutable).
     */
    inline Input& WithId(const char* value) { SetId(value); return *this;}


    /**
     * The user-assigned name (This is a mutable value).
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * The user-assigned name (This is a mutable value).
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * The user-assigned name (This is a mutable value).
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * The user-assigned name (This is a mutable value).
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * The user-assigned name (This is a mutable value).
     */
    inline Input& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * The user-assigned name (This is a mutable value).
     */
    inline Input& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * The user-assigned name (This is a mutable value).
     */
    inline Input& WithName(const char* value) { SetName(value); return *this;}


    /**
     * A list of IDs for all the security groups attached to the input.
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroups() const{ return m_securityGroups; }

    /**
     * A list of IDs for all the security groups attached to the input.
     */
    inline void SetSecurityGroups(const Aws::Vector<Aws::String>& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = value; }

    /**
     * A list of IDs for all the security groups attached to the input.
     */
    inline void SetSecurityGroups(Aws::Vector<Aws::String>&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = std::move(value); }

    /**
     * A list of IDs for all the security groups attached to the input.
     */
    inline Input& WithSecurityGroups(const Aws::Vector<Aws::String>& value) { SetSecurityGroups(value); return *this;}

    /**
     * A list of IDs for all the security groups attached to the input.
     */
    inline Input& WithSecurityGroups(Aws::Vector<Aws::String>&& value) { SetSecurityGroups(std::move(value)); return *this;}

    /**
     * A list of IDs for all the security groups attached to the input.
     */
    inline Input& AddSecurityGroups(const Aws::String& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }

    /**
     * A list of IDs for all the security groups attached to the input.
     */
    inline Input& AddSecurityGroups(Aws::String&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(std::move(value)); return *this; }

    /**
     * A list of IDs for all the security groups attached to the input.
     */
    inline Input& AddSecurityGroups(const char* value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }


    /**
     * A list of the sources of the input (PULL-type).
     */
    inline const Aws::Vector<InputSource>& GetSources() const{ return m_sources; }

    /**
     * A list of the sources of the input (PULL-type).
     */
    inline void SetSources(const Aws::Vector<InputSource>& value) { m_sourcesHasBeenSet = true; m_sources = value; }

    /**
     * A list of the sources of the input (PULL-type).
     */
    inline void SetSources(Aws::Vector<InputSource>&& value) { m_sourcesHasBeenSet = true; m_sources = std::move(value); }

    /**
     * A list of the sources of the input (PULL-type).
     */
    inline Input& WithSources(const Aws::Vector<InputSource>& value) { SetSources(value); return *this;}

    /**
     * A list of the sources of the input (PULL-type).
     */
    inline Input& WithSources(Aws::Vector<InputSource>&& value) { SetSources(std::move(value)); return *this;}

    /**
     * A list of the sources of the input (PULL-type).
     */
    inline Input& AddSources(const InputSource& value) { m_sourcesHasBeenSet = true; m_sources.push_back(value); return *this; }

    /**
     * A list of the sources of the input (PULL-type).
     */
    inline Input& AddSources(InputSource&& value) { m_sourcesHasBeenSet = true; m_sources.push_back(std::move(value)); return *this; }


    
    inline const InputState& GetState() const{ return m_state; }

    
    inline void SetState(const InputState& value) { m_stateHasBeenSet = true; m_state = value; }

    
    inline void SetState(InputState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    
    inline Input& WithState(const InputState& value) { SetState(value); return *this;}

    
    inline Input& WithState(InputState&& value) { SetState(std::move(value)); return *this;}


    
    inline const InputType& GetType() const{ return m_type; }

    
    inline void SetType(const InputType& value) { m_typeHasBeenSet = true; m_type = value; }

    
    inline void SetType(InputType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    
    inline Input& WithType(const InputType& value) { SetType(value); return *this;}

    
    inline Input& WithType(InputType&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    Aws::Vector<Aws::String> m_attachedChannels;
    bool m_attachedChannelsHasBeenSet;

    Aws::Vector<InputDestination> m_destinations;
    bool m_destinationsHasBeenSet;

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::Vector<Aws::String> m_securityGroups;
    bool m_securityGroupsHasBeenSet;

    Aws::Vector<InputSource> m_sources;
    bool m_sourcesHasBeenSet;

    InputState m_state;
    bool m_stateHasBeenSet;

    InputType m_type;
    bool m_typeHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
