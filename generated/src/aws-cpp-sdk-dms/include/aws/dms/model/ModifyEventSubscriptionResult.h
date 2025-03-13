/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/dms/model/EventSubscription.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace DatabaseMigrationService
{
namespace Model
{
  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/ModifyEventSubscriptionResponse">AWS
   * API Reference</a></p>
   */
  class ModifyEventSubscriptionResult
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API ModifyEventSubscriptionResult() = default;
    AWS_DATABASEMIGRATIONSERVICE_API ModifyEventSubscriptionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATABASEMIGRATIONSERVICE_API ModifyEventSubscriptionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The modified event subscription.</p>
     */
    inline const EventSubscription& GetEventSubscription() const { return m_eventSubscription; }
    template<typename EventSubscriptionT = EventSubscription>
    void SetEventSubscription(EventSubscriptionT&& value) { m_eventSubscriptionHasBeenSet = true; m_eventSubscription = std::forward<EventSubscriptionT>(value); }
    template<typename EventSubscriptionT = EventSubscription>
    ModifyEventSubscriptionResult& WithEventSubscription(EventSubscriptionT&& value) { SetEventSubscription(std::forward<EventSubscriptionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ModifyEventSubscriptionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    EventSubscription m_eventSubscription;
    bool m_eventSubscriptionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
