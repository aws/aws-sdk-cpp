﻿/**
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DeleteEventSubscriptionResponse">AWS
   * API Reference</a></p>
   */
  class DeleteEventSubscriptionResult
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API DeleteEventSubscriptionResult();
    AWS_DATABASEMIGRATIONSERVICE_API DeleteEventSubscriptionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATABASEMIGRATIONSERVICE_API DeleteEventSubscriptionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The event subscription that was deleted.</p>
     */
    inline const EventSubscription& GetEventSubscription() const{ return m_eventSubscription; }

    /**
     * <p>The event subscription that was deleted.</p>
     */
    inline void SetEventSubscription(const EventSubscription& value) { m_eventSubscription = value; }

    /**
     * <p>The event subscription that was deleted.</p>
     */
    inline void SetEventSubscription(EventSubscription&& value) { m_eventSubscription = std::move(value); }

    /**
     * <p>The event subscription that was deleted.</p>
     */
    inline DeleteEventSubscriptionResult& WithEventSubscription(const EventSubscription& value) { SetEventSubscription(value); return *this;}

    /**
     * <p>The event subscription that was deleted.</p>
     */
    inline DeleteEventSubscriptionResult& WithEventSubscription(EventSubscription&& value) { SetEventSubscription(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DeleteEventSubscriptionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DeleteEventSubscriptionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DeleteEventSubscriptionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    EventSubscription m_eventSubscription;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
