/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudtrail/model/MaxEventSize.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudtrail/model/ContextKeySelector.h>
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
  class GetEventConfigurationResult
  {
  public:
    AWS_CLOUDTRAIL_API GetEventConfigurationResult() = default;
    AWS_CLOUDTRAIL_API GetEventConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDTRAIL_API GetEventConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) or ID suffix of the ARN of the event data
     * store for which the event configuration settings are returned.</p>
     */
    inline const Aws::String& GetEventDataStoreArn() const { return m_eventDataStoreArn; }
    template<typename EventDataStoreArnT = Aws::String>
    void SetEventDataStoreArn(EventDataStoreArnT&& value) { m_eventDataStoreArnHasBeenSet = true; m_eventDataStoreArn = std::forward<EventDataStoreArnT>(value); }
    template<typename EventDataStoreArnT = Aws::String>
    GetEventConfigurationResult& WithEventDataStoreArn(EventDataStoreArnT&& value) { SetEventDataStoreArn(std::forward<EventDataStoreArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum allowed size for events stored in the specified event data
     * store.</p>
     */
    inline MaxEventSize GetMaxEventSize() const { return m_maxEventSize; }
    inline void SetMaxEventSize(MaxEventSize value) { m_maxEventSizeHasBeenSet = true; m_maxEventSize = value; }
    inline GetEventConfigurationResult& WithMaxEventSize(MaxEventSize value) { SetMaxEventSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of context key selectors that are configured for the event data
     * store.</p>
     */
    inline const Aws::Vector<ContextKeySelector>& GetContextKeySelectors() const { return m_contextKeySelectors; }
    template<typename ContextKeySelectorsT = Aws::Vector<ContextKeySelector>>
    void SetContextKeySelectors(ContextKeySelectorsT&& value) { m_contextKeySelectorsHasBeenSet = true; m_contextKeySelectors = std::forward<ContextKeySelectorsT>(value); }
    template<typename ContextKeySelectorsT = Aws::Vector<ContextKeySelector>>
    GetEventConfigurationResult& WithContextKeySelectors(ContextKeySelectorsT&& value) { SetContextKeySelectors(std::forward<ContextKeySelectorsT>(value)); return *this;}
    template<typename ContextKeySelectorsT = ContextKeySelector>
    GetEventConfigurationResult& AddContextKeySelectors(ContextKeySelectorsT&& value) { m_contextKeySelectorsHasBeenSet = true; m_contextKeySelectors.emplace_back(std::forward<ContextKeySelectorsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetEventConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_eventDataStoreArn;
    bool m_eventDataStoreArnHasBeenSet = false;

    MaxEventSize m_maxEventSize{MaxEventSize::NOT_SET};
    bool m_maxEventSizeHasBeenSet = false;

    Aws::Vector<ContextKeySelector> m_contextKeySelectors;
    bool m_contextKeySelectorsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
