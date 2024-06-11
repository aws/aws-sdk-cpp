/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/customer-profiles/model/EventStreamState.h>
#include <aws/customer-profiles/model/EventStreamDestinationDetails.h>
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
  class GetEventStreamResult
  {
  public:
    AWS_CUSTOMERPROFILES_API GetEventStreamResult();
    AWS_CUSTOMERPROFILES_API GetEventStreamResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CUSTOMERPROFILES_API GetEventStreamResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique name of the domain.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }
    inline void SetDomainName(const Aws::String& value) { m_domainName = value; }
    inline void SetDomainName(Aws::String&& value) { m_domainName = std::move(value); }
    inline void SetDomainName(const char* value) { m_domainName.assign(value); }
    inline GetEventStreamResult& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}
    inline GetEventStreamResult& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}
    inline GetEventStreamResult& WithDomainName(const char* value) { SetDomainName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the event stream.</p>
     */
    inline const Aws::String& GetEventStreamArn() const{ return m_eventStreamArn; }
    inline void SetEventStreamArn(const Aws::String& value) { m_eventStreamArn = value; }
    inline void SetEventStreamArn(Aws::String&& value) { m_eventStreamArn = std::move(value); }
    inline void SetEventStreamArn(const char* value) { m_eventStreamArn.assign(value); }
    inline GetEventStreamResult& WithEventStreamArn(const Aws::String& value) { SetEventStreamArn(value); return *this;}
    inline GetEventStreamResult& WithEventStreamArn(Aws::String&& value) { SetEventStreamArn(std::move(value)); return *this;}
    inline GetEventStreamResult& WithEventStreamArn(const char* value) { SetEventStreamArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the export was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline GetEventStreamResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline GetEventStreamResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operational state of destination stream for export.</p>
     */
    inline const EventStreamState& GetState() const{ return m_state; }
    inline void SetState(const EventStreamState& value) { m_state = value; }
    inline void SetState(EventStreamState&& value) { m_state = std::move(value); }
    inline GetEventStreamResult& WithState(const EventStreamState& value) { SetState(value); return *this;}
    inline GetEventStreamResult& WithState(EventStreamState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the <code>State</code> changed to
     * <code>STOPPED</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetStoppedSince() const{ return m_stoppedSince; }
    inline void SetStoppedSince(const Aws::Utils::DateTime& value) { m_stoppedSince = value; }
    inline void SetStoppedSince(Aws::Utils::DateTime&& value) { m_stoppedSince = std::move(value); }
    inline GetEventStreamResult& WithStoppedSince(const Aws::Utils::DateTime& value) { SetStoppedSince(value); return *this;}
    inline GetEventStreamResult& WithStoppedSince(Aws::Utils::DateTime&& value) { SetStoppedSince(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details regarding the Kinesis stream.</p>
     */
    inline const EventStreamDestinationDetails& GetDestinationDetails() const{ return m_destinationDetails; }
    inline void SetDestinationDetails(const EventStreamDestinationDetails& value) { m_destinationDetails = value; }
    inline void SetDestinationDetails(EventStreamDestinationDetails&& value) { m_destinationDetails = std::move(value); }
    inline GetEventStreamResult& WithDestinationDetails(const EventStreamDestinationDetails& value) { SetDestinationDetails(value); return *this;}
    inline GetEventStreamResult& WithDestinationDetails(EventStreamDestinationDetails&& value) { SetDestinationDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline GetEventStreamResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline GetEventStreamResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline GetEventStreamResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline GetEventStreamResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline GetEventStreamResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline GetEventStreamResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline GetEventStreamResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline GetEventStreamResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline GetEventStreamResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetEventStreamResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetEventStreamResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetEventStreamResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_domainName;

    Aws::String m_eventStreamArn;

    Aws::Utils::DateTime m_createdAt;

    EventStreamState m_state;

    Aws::Utils::DateTime m_stoppedSince;

    EventStreamDestinationDetails m_destinationDetails;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
