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
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/dms/model/EventSubscription.h>
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
  class AWS_DATABASEMIGRATIONSERVICE_API DeleteEventSubscriptionResult
  {
  public:
    DeleteEventSubscriptionResult();
    DeleteEventSubscriptionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DeleteEventSubscriptionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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

  private:

    EventSubscription m_eventSubscription;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
