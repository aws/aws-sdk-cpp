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
#include <aws/medialive/model/InputState.h>
#include <aws/medialive/model/InputType.h>
#include <aws/medialive/model/InputDestination.h>
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
     * Unique ARN of input (generated, immutable)
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * Unique ARN of input (generated, immutable)
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * Unique ARN of input (generated, immutable)
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * Unique ARN of input (generated, immutable)
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * Unique ARN of input (generated, immutable)
     */
    inline DescribeInputResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * Unique ARN of input (generated, immutable)
     */
    inline DescribeInputResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * Unique ARN of input (generated, immutable)
     */
    inline DescribeInputResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * List of channel IDs that that input is attached to (currently an input can only
     * be attached to one channel)
     */
    inline const Aws::Vector<Aws::String>& GetAttachedChannels() const{ return m_attachedChannels; }

    /**
     * List of channel IDs that that input is attached to (currently an input can only
     * be attached to one channel)
     */
    inline void SetAttachedChannels(const Aws::Vector<Aws::String>& value) { m_attachedChannels = value; }

    /**
     * List of channel IDs that that input is attached to (currently an input can only
     * be attached to one channel)
     */
    inline void SetAttachedChannels(Aws::Vector<Aws::String>&& value) { m_attachedChannels = std::move(value); }

    /**
     * List of channel IDs that that input is attached to (currently an input can only
     * be attached to one channel)
     */
    inline DescribeInputResult& WithAttachedChannels(const Aws::Vector<Aws::String>& value) { SetAttachedChannels(value); return *this;}

    /**
     * List of channel IDs that that input is attached to (currently an input can only
     * be attached to one channel)
     */
    inline DescribeInputResult& WithAttachedChannels(Aws::Vector<Aws::String>&& value) { SetAttachedChannels(std::move(value)); return *this;}

    /**
     * List of channel IDs that that input is attached to (currently an input can only
     * be attached to one channel)
     */
    inline DescribeInputResult& AddAttachedChannels(const Aws::String& value) { m_attachedChannels.push_back(value); return *this; }

    /**
     * List of channel IDs that that input is attached to (currently an input can only
     * be attached to one channel)
     */
    inline DescribeInputResult& AddAttachedChannels(Aws::String&& value) { m_attachedChannels.push_back(std::move(value)); return *this; }

    /**
     * List of channel IDs that that input is attached to (currently an input can only
     * be attached to one channel)
     */
    inline DescribeInputResult& AddAttachedChannels(const char* value) { m_attachedChannels.push_back(value); return *this; }


    /**
     * List of destinations of input (PULL-type)
     */
    inline const Aws::Vector<InputDestination>& GetDestinations() const{ return m_destinations; }

    /**
     * List of destinations of input (PULL-type)
     */
    inline void SetDestinations(const Aws::Vector<InputDestination>& value) { m_destinations = value; }

    /**
     * List of destinations of input (PULL-type)
     */
    inline void SetDestinations(Aws::Vector<InputDestination>&& value) { m_destinations = std::move(value); }

    /**
     * List of destinations of input (PULL-type)
     */
    inline DescribeInputResult& WithDestinations(const Aws::Vector<InputDestination>& value) { SetDestinations(value); return *this;}

    /**
     * List of destinations of input (PULL-type)
     */
    inline DescribeInputResult& WithDestinations(Aws::Vector<InputDestination>&& value) { SetDestinations(std::move(value)); return *this;}

    /**
     * List of destinations of input (PULL-type)
     */
    inline DescribeInputResult& AddDestinations(const InputDestination& value) { m_destinations.push_back(value); return *this; }

    /**
     * List of destinations of input (PULL-type)
     */
    inline DescribeInputResult& AddDestinations(InputDestination&& value) { m_destinations.push_back(std::move(value)); return *this; }


    /**
     * generated ID of input (unique for user account, immutable)
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * generated ID of input (unique for user account, immutable)
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * generated ID of input (unique for user account, immutable)
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * generated ID of input (unique for user account, immutable)
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * generated ID of input (unique for user account, immutable)
     */
    inline DescribeInputResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * generated ID of input (unique for user account, immutable)
     */
    inline DescribeInputResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * generated ID of input (unique for user account, immutable)
     */
    inline DescribeInputResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * user-assigned name (mutable)
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * user-assigned name (mutable)
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * user-assigned name (mutable)
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * user-assigned name (mutable)
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * user-assigned name (mutable)
     */
    inline DescribeInputResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * user-assigned name (mutable)
     */
    inline DescribeInputResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * user-assigned name (mutable)
     */
    inline DescribeInputResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * List of IDs for all the security groups attached to the input.
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroups() const{ return m_securityGroups; }

    /**
     * List of IDs for all the security groups attached to the input.
     */
    inline void SetSecurityGroups(const Aws::Vector<Aws::String>& value) { m_securityGroups = value; }

    /**
     * List of IDs for all the security groups attached to the input.
     */
    inline void SetSecurityGroups(Aws::Vector<Aws::String>&& value) { m_securityGroups = std::move(value); }

    /**
     * List of IDs for all the security groups attached to the input.
     */
    inline DescribeInputResult& WithSecurityGroups(const Aws::Vector<Aws::String>& value) { SetSecurityGroups(value); return *this;}

    /**
     * List of IDs for all the security groups attached to the input.
     */
    inline DescribeInputResult& WithSecurityGroups(Aws::Vector<Aws::String>&& value) { SetSecurityGroups(std::move(value)); return *this;}

    /**
     * List of IDs for all the security groups attached to the input.
     */
    inline DescribeInputResult& AddSecurityGroups(const Aws::String& value) { m_securityGroups.push_back(value); return *this; }

    /**
     * List of IDs for all the security groups attached to the input.
     */
    inline DescribeInputResult& AddSecurityGroups(Aws::String&& value) { m_securityGroups.push_back(std::move(value)); return *this; }

    /**
     * List of IDs for all the security groups attached to the input.
     */
    inline DescribeInputResult& AddSecurityGroups(const char* value) { m_securityGroups.push_back(value); return *this; }


    /**
     * List of sources of input (PULL-type)
     */
    inline const Aws::Vector<InputSource>& GetSources() const{ return m_sources; }

    /**
     * List of sources of input (PULL-type)
     */
    inline void SetSources(const Aws::Vector<InputSource>& value) { m_sources = value; }

    /**
     * List of sources of input (PULL-type)
     */
    inline void SetSources(Aws::Vector<InputSource>&& value) { m_sources = std::move(value); }

    /**
     * List of sources of input (PULL-type)
     */
    inline DescribeInputResult& WithSources(const Aws::Vector<InputSource>& value) { SetSources(value); return *this;}

    /**
     * List of sources of input (PULL-type)
     */
    inline DescribeInputResult& WithSources(Aws::Vector<InputSource>&& value) { SetSources(std::move(value)); return *this;}

    /**
     * List of sources of input (PULL-type)
     */
    inline DescribeInputResult& AddSources(const InputSource& value) { m_sources.push_back(value); return *this; }

    /**
     * List of sources of input (PULL-type)
     */
    inline DescribeInputResult& AddSources(InputSource&& value) { m_sources.push_back(std::move(value)); return *this; }


    
    inline const InputState& GetState() const{ return m_state; }

    
    inline void SetState(const InputState& value) { m_state = value; }

    
    inline void SetState(InputState&& value) { m_state = std::move(value); }

    
    inline DescribeInputResult& WithState(const InputState& value) { SetState(value); return *this;}

    
    inline DescribeInputResult& WithState(InputState&& value) { SetState(std::move(value)); return *this;}


    
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

    Aws::String m_name;

    Aws::Vector<Aws::String> m_securityGroups;

    Aws::Vector<InputSource> m_sources;

    InputState m_state;

    InputType m_type;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
