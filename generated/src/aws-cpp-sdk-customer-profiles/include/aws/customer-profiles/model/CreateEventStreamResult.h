/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace CustomerProfiles
{
namespace Model
{
  class CreateEventStreamResult
  {
  public:
    AWS_CUSTOMERPROFILES_API CreateEventStreamResult();
    AWS_CUSTOMERPROFILES_API CreateEventStreamResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CUSTOMERPROFILES_API CreateEventStreamResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A unique identifier for the event stream.</p>
     */
    inline const Aws::String& GetEventStreamArn() const{ return m_eventStreamArn; }

    /**
     * <p>A unique identifier for the event stream.</p>
     */
    inline void SetEventStreamArn(const Aws::String& value) { m_eventStreamArn = value; }

    /**
     * <p>A unique identifier for the event stream.</p>
     */
    inline void SetEventStreamArn(Aws::String&& value) { m_eventStreamArn = std::move(value); }

    /**
     * <p>A unique identifier for the event stream.</p>
     */
    inline void SetEventStreamArn(const char* value) { m_eventStreamArn.assign(value); }

    /**
     * <p>A unique identifier for the event stream.</p>
     */
    inline CreateEventStreamResult& WithEventStreamArn(const Aws::String& value) { SetEventStreamArn(value); return *this;}

    /**
     * <p>A unique identifier for the event stream.</p>
     */
    inline CreateEventStreamResult& WithEventStreamArn(Aws::String&& value) { SetEventStreamArn(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the event stream.</p>
     */
    inline CreateEventStreamResult& WithEventStreamArn(const char* value) { SetEventStreamArn(value); return *this;}


    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline CreateEventStreamResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline CreateEventStreamResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline CreateEventStreamResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline CreateEventStreamResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline CreateEventStreamResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline CreateEventStreamResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline CreateEventStreamResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline CreateEventStreamResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline CreateEventStreamResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateEventStreamResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateEventStreamResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateEventStreamResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_eventStreamArn;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
