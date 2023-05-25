/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudtrail/model/Destination.h>
#include <aws/cloudtrail/model/Tag.h>
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
namespace CloudTrail
{
namespace Model
{
  class CreateChannelResult
  {
  public:
    AWS_CLOUDTRAIL_API CreateChannelResult();
    AWS_CLOUDTRAIL_API CreateChannelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDTRAIL_API CreateChannelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the new channel.</p>
     */
    inline const Aws::String& GetChannelArn() const{ return m_channelArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the new channel.</p>
     */
    inline void SetChannelArn(const Aws::String& value) { m_channelArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the new channel.</p>
     */
    inline void SetChannelArn(Aws::String&& value) { m_channelArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the new channel.</p>
     */
    inline void SetChannelArn(const char* value) { m_channelArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the new channel.</p>
     */
    inline CreateChannelResult& WithChannelArn(const Aws::String& value) { SetChannelArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the new channel.</p>
     */
    inline CreateChannelResult& WithChannelArn(Aws::String&& value) { SetChannelArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the new channel.</p>
     */
    inline CreateChannelResult& WithChannelArn(const char* value) { SetChannelArn(value); return *this;}


    /**
     * <p>The name of the new channel.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the new channel.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the new channel.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the new channel.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the new channel.</p>
     */
    inline CreateChannelResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the new channel.</p>
     */
    inline CreateChannelResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the new channel.</p>
     */
    inline CreateChannelResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The partner or external event source name.</p>
     */
    inline const Aws::String& GetSource() const{ return m_source; }

    /**
     * <p>The partner or external event source name.</p>
     */
    inline void SetSource(const Aws::String& value) { m_source = value; }

    /**
     * <p>The partner or external event source name.</p>
     */
    inline void SetSource(Aws::String&& value) { m_source = std::move(value); }

    /**
     * <p>The partner or external event source name.</p>
     */
    inline void SetSource(const char* value) { m_source.assign(value); }

    /**
     * <p>The partner or external event source name.</p>
     */
    inline CreateChannelResult& WithSource(const Aws::String& value) { SetSource(value); return *this;}

    /**
     * <p>The partner or external event source name.</p>
     */
    inline CreateChannelResult& WithSource(Aws::String&& value) { SetSource(std::move(value)); return *this;}

    /**
     * <p>The partner or external event source name.</p>
     */
    inline CreateChannelResult& WithSource(const char* value) { SetSource(value); return *this;}


    /**
     * <p>The event data stores that log the events arriving through the channel.</p>
     */
    inline const Aws::Vector<Destination>& GetDestinations() const{ return m_destinations; }

    /**
     * <p>The event data stores that log the events arriving through the channel.</p>
     */
    inline void SetDestinations(const Aws::Vector<Destination>& value) { m_destinations = value; }

    /**
     * <p>The event data stores that log the events arriving through the channel.</p>
     */
    inline void SetDestinations(Aws::Vector<Destination>&& value) { m_destinations = std::move(value); }

    /**
     * <p>The event data stores that log the events arriving through the channel.</p>
     */
    inline CreateChannelResult& WithDestinations(const Aws::Vector<Destination>& value) { SetDestinations(value); return *this;}

    /**
     * <p>The event data stores that log the events arriving through the channel.</p>
     */
    inline CreateChannelResult& WithDestinations(Aws::Vector<Destination>&& value) { SetDestinations(std::move(value)); return *this;}

    /**
     * <p>The event data stores that log the events arriving through the channel.</p>
     */
    inline CreateChannelResult& AddDestinations(const Destination& value) { m_destinations.push_back(value); return *this; }

    /**
     * <p>The event data stores that log the events arriving through the channel.</p>
     */
    inline CreateChannelResult& AddDestinations(Destination&& value) { m_destinations.push_back(std::move(value)); return *this; }


    
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tags = value; }

    
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tags = std::move(value); }

    
    inline CreateChannelResult& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    
    inline CreateChannelResult& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    
    inline CreateChannelResult& AddTags(const Tag& value) { m_tags.push_back(value); return *this; }

    
    inline CreateChannelResult& AddTags(Tag&& value) { m_tags.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateChannelResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateChannelResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateChannelResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_channelArn;

    Aws::String m_name;

    Aws::String m_source;

    Aws::Vector<Destination> m_destinations;

    Aws::Vector<Tag> m_tags;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
