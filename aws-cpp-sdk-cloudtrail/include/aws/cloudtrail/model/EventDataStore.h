/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace CloudTrail
{
namespace Model
{

  /**
   * <p>A storage lake of event data against which you can run complex SQL-based
   * queries. An event data store can include events that you have logged on your
   * account from the last 90 to 2557 days (about three months to up to seven years).
   * To select events for an event data store, use <a
   * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/logging-data-events-with-cloudtrail.html#creating-data-event-selectors-advanced">advanced
   * event selectors</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/EventDataStore">AWS
   * API Reference</a></p>
   */
  class EventDataStore
  {
  public:
    AWS_CLOUDTRAIL_API EventDataStore();
    AWS_CLOUDTRAIL_API EventDataStore(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDTRAIL_API EventDataStore& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDTRAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the event data store.</p>
     */
    inline const Aws::String& GetEventDataStoreArn() const{ return m_eventDataStoreArn; }

    /**
     * <p>The ARN of the event data store.</p>
     */
    inline bool EventDataStoreArnHasBeenSet() const { return m_eventDataStoreArnHasBeenSet; }

    /**
     * <p>The ARN of the event data store.</p>
     */
    inline void SetEventDataStoreArn(const Aws::String& value) { m_eventDataStoreArnHasBeenSet = true; m_eventDataStoreArn = value; }

    /**
     * <p>The ARN of the event data store.</p>
     */
    inline void SetEventDataStoreArn(Aws::String&& value) { m_eventDataStoreArnHasBeenSet = true; m_eventDataStoreArn = std::move(value); }

    /**
     * <p>The ARN of the event data store.</p>
     */
    inline void SetEventDataStoreArn(const char* value) { m_eventDataStoreArnHasBeenSet = true; m_eventDataStoreArn.assign(value); }

    /**
     * <p>The ARN of the event data store.</p>
     */
    inline EventDataStore& WithEventDataStoreArn(const Aws::String& value) { SetEventDataStoreArn(value); return *this;}

    /**
     * <p>The ARN of the event data store.</p>
     */
    inline EventDataStore& WithEventDataStoreArn(Aws::String&& value) { SetEventDataStoreArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the event data store.</p>
     */
    inline EventDataStore& WithEventDataStoreArn(const char* value) { SetEventDataStoreArn(value); return *this;}


    /**
     * <p>The name of the event data store.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the event data store.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the event data store.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the event data store.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the event data store.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the event data store.</p>
     */
    inline EventDataStore& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the event data store.</p>
     */
    inline EventDataStore& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the event data store.</p>
     */
    inline EventDataStore& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_eventDataStoreArn;
    bool m_eventDataStoreArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
