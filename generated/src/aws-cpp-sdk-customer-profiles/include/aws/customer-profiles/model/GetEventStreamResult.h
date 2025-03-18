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
    AWS_CUSTOMERPROFILES_API GetEventStreamResult() = default;
    AWS_CUSTOMERPROFILES_API GetEventStreamResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CUSTOMERPROFILES_API GetEventStreamResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique name of the domain.</p>
     */
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    GetEventStreamResult& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the event stream.</p>
     */
    inline const Aws::String& GetEventStreamArn() const { return m_eventStreamArn; }
    template<typename EventStreamArnT = Aws::String>
    void SetEventStreamArn(EventStreamArnT&& value) { m_eventStreamArnHasBeenSet = true; m_eventStreamArn = std::forward<EventStreamArnT>(value); }
    template<typename EventStreamArnT = Aws::String>
    GetEventStreamResult& WithEventStreamArn(EventStreamArnT&& value) { SetEventStreamArn(std::forward<EventStreamArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the export was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    GetEventStreamResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operational state of destination stream for export.</p>
     */
    inline EventStreamState GetState() const { return m_state; }
    inline void SetState(EventStreamState value) { m_stateHasBeenSet = true; m_state = value; }
    inline GetEventStreamResult& WithState(EventStreamState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the <code>State</code> changed to
     * <code>STOPPED</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetStoppedSince() const { return m_stoppedSince; }
    template<typename StoppedSinceT = Aws::Utils::DateTime>
    void SetStoppedSince(StoppedSinceT&& value) { m_stoppedSinceHasBeenSet = true; m_stoppedSince = std::forward<StoppedSinceT>(value); }
    template<typename StoppedSinceT = Aws::Utils::DateTime>
    GetEventStreamResult& WithStoppedSince(StoppedSinceT&& value) { SetStoppedSince(std::forward<StoppedSinceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details regarding the Kinesis stream.</p>
     */
    inline const EventStreamDestinationDetails& GetDestinationDetails() const { return m_destinationDetails; }
    template<typename DestinationDetailsT = EventStreamDestinationDetails>
    void SetDestinationDetails(DestinationDetailsT&& value) { m_destinationDetailsHasBeenSet = true; m_destinationDetails = std::forward<DestinationDetailsT>(value); }
    template<typename DestinationDetailsT = EventStreamDestinationDetails>
    GetEventStreamResult& WithDestinationDetails(DestinationDetailsT&& value) { SetDestinationDetails(std::forward<DestinationDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    GetEventStreamResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    GetEventStreamResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetEventStreamResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::String m_eventStreamArn;
    bool m_eventStreamArnHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    EventStreamState m_state{EventStreamState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::Utils::DateTime m_stoppedSince{};
    bool m_stoppedSinceHasBeenSet = false;

    EventStreamDestinationDetails m_destinationDetails;
    bool m_destinationDetailsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
