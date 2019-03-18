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
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint/model/EventsBatch.h>
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
namespace Pinpoint
{
namespace Model
{

  /**
   * A set of events to process.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/EventsRequest">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINT_API EventsRequest
  {
  public:
    EventsRequest();
    EventsRequest(Aws::Utils::Json::JsonView jsonValue);
    EventsRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * A batch of events to process. Each BatchItem consists of an endpoint ID as the
     * key, and an EventsBatch object as the value.
     */
    inline const Aws::Map<Aws::String, EventsBatch>& GetBatchItem() const{ return m_batchItem; }

    /**
     * A batch of events to process. Each BatchItem consists of an endpoint ID as the
     * key, and an EventsBatch object as the value.
     */
    inline bool BatchItemHasBeenSet() const { return m_batchItemHasBeenSet; }

    /**
     * A batch of events to process. Each BatchItem consists of an endpoint ID as the
     * key, and an EventsBatch object as the value.
     */
    inline void SetBatchItem(const Aws::Map<Aws::String, EventsBatch>& value) { m_batchItemHasBeenSet = true; m_batchItem = value; }

    /**
     * A batch of events to process. Each BatchItem consists of an endpoint ID as the
     * key, and an EventsBatch object as the value.
     */
    inline void SetBatchItem(Aws::Map<Aws::String, EventsBatch>&& value) { m_batchItemHasBeenSet = true; m_batchItem = std::move(value); }

    /**
     * A batch of events to process. Each BatchItem consists of an endpoint ID as the
     * key, and an EventsBatch object as the value.
     */
    inline EventsRequest& WithBatchItem(const Aws::Map<Aws::String, EventsBatch>& value) { SetBatchItem(value); return *this;}

    /**
     * A batch of events to process. Each BatchItem consists of an endpoint ID as the
     * key, and an EventsBatch object as the value.
     */
    inline EventsRequest& WithBatchItem(Aws::Map<Aws::String, EventsBatch>&& value) { SetBatchItem(std::move(value)); return *this;}

    /**
     * A batch of events to process. Each BatchItem consists of an endpoint ID as the
     * key, and an EventsBatch object as the value.
     */
    inline EventsRequest& AddBatchItem(const Aws::String& key, const EventsBatch& value) { m_batchItemHasBeenSet = true; m_batchItem.emplace(key, value); return *this; }

    /**
     * A batch of events to process. Each BatchItem consists of an endpoint ID as the
     * key, and an EventsBatch object as the value.
     */
    inline EventsRequest& AddBatchItem(Aws::String&& key, const EventsBatch& value) { m_batchItemHasBeenSet = true; m_batchItem.emplace(std::move(key), value); return *this; }

    /**
     * A batch of events to process. Each BatchItem consists of an endpoint ID as the
     * key, and an EventsBatch object as the value.
     */
    inline EventsRequest& AddBatchItem(const Aws::String& key, EventsBatch&& value) { m_batchItemHasBeenSet = true; m_batchItem.emplace(key, std::move(value)); return *this; }

    /**
     * A batch of events to process. Each BatchItem consists of an endpoint ID as the
     * key, and an EventsBatch object as the value.
     */
    inline EventsRequest& AddBatchItem(Aws::String&& key, EventsBatch&& value) { m_batchItemHasBeenSet = true; m_batchItem.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * A batch of events to process. Each BatchItem consists of an endpoint ID as the
     * key, and an EventsBatch object as the value.
     */
    inline EventsRequest& AddBatchItem(const char* key, EventsBatch&& value) { m_batchItemHasBeenSet = true; m_batchItem.emplace(key, std::move(value)); return *this; }

    /**
     * A batch of events to process. Each BatchItem consists of an endpoint ID as the
     * key, and an EventsBatch object as the value.
     */
    inline EventsRequest& AddBatchItem(const char* key, const EventsBatch& value) { m_batchItemHasBeenSet = true; m_batchItem.emplace(key, value); return *this; }

  private:

    Aws::Map<Aws::String, EventsBatch> m_batchItem;
    bool m_batchItemHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
