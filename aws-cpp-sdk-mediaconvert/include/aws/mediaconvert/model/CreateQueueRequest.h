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
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/MediaConvertRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconvert/model/PricingPlan.h>
#include <aws/mediaconvert/model/ReservationPlanSettings.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace MediaConvert
{
namespace Model
{

  /**
   */
  class AWS_MEDIACONVERT_API CreateQueueRequest : public MediaConvertRequest
  {
  public:
    CreateQueueRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateQueue"; }

    Aws::String SerializePayload() const override;


    /**
     * Optional. A description of the queue that you are creating.
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * Optional. A description of the queue that you are creating.
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * Optional. A description of the queue that you are creating.
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * Optional. A description of the queue that you are creating.
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * Optional. A description of the queue that you are creating.
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * Optional. A description of the queue that you are creating.
     */
    inline CreateQueueRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * Optional. A description of the queue that you are creating.
     */
    inline CreateQueueRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * Optional. A description of the queue that you are creating.
     */
    inline CreateQueueRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * The name of the queue that you are creating.
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * The name of the queue that you are creating.
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * The name of the queue that you are creating.
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * The name of the queue that you are creating.
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * The name of the queue that you are creating.
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * The name of the queue that you are creating.
     */
    inline CreateQueueRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * The name of the queue that you are creating.
     */
    inline CreateQueueRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * The name of the queue that you are creating.
     */
    inline CreateQueueRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * Specifies whether the pricing plan for the queue is on-demand or reserved. For
     * on-demand, you pay per minute, billed in increments of .01 minute. For reserved,
     * you pay for the transcoding capacity of the entire queue, regardless of how much
     * or how little you use it. Reserved pricing requires a 12-month commitment. When
     * you use the API to create a queue, the default is on-demand.
     */
    inline const PricingPlan& GetPricingPlan() const{ return m_pricingPlan; }

    /**
     * Specifies whether the pricing plan for the queue is on-demand or reserved. For
     * on-demand, you pay per minute, billed in increments of .01 minute. For reserved,
     * you pay for the transcoding capacity of the entire queue, regardless of how much
     * or how little you use it. Reserved pricing requires a 12-month commitment. When
     * you use the API to create a queue, the default is on-demand.
     */
    inline bool PricingPlanHasBeenSet() const { return m_pricingPlanHasBeenSet; }

    /**
     * Specifies whether the pricing plan for the queue is on-demand or reserved. For
     * on-demand, you pay per minute, billed in increments of .01 minute. For reserved,
     * you pay for the transcoding capacity of the entire queue, regardless of how much
     * or how little you use it. Reserved pricing requires a 12-month commitment. When
     * you use the API to create a queue, the default is on-demand.
     */
    inline void SetPricingPlan(const PricingPlan& value) { m_pricingPlanHasBeenSet = true; m_pricingPlan = value; }

    /**
     * Specifies whether the pricing plan for the queue is on-demand or reserved. For
     * on-demand, you pay per minute, billed in increments of .01 minute. For reserved,
     * you pay for the transcoding capacity of the entire queue, regardless of how much
     * or how little you use it. Reserved pricing requires a 12-month commitment. When
     * you use the API to create a queue, the default is on-demand.
     */
    inline void SetPricingPlan(PricingPlan&& value) { m_pricingPlanHasBeenSet = true; m_pricingPlan = std::move(value); }

    /**
     * Specifies whether the pricing plan for the queue is on-demand or reserved. For
     * on-demand, you pay per minute, billed in increments of .01 minute. For reserved,
     * you pay for the transcoding capacity of the entire queue, regardless of how much
     * or how little you use it. Reserved pricing requires a 12-month commitment. When
     * you use the API to create a queue, the default is on-demand.
     */
    inline CreateQueueRequest& WithPricingPlan(const PricingPlan& value) { SetPricingPlan(value); return *this;}

    /**
     * Specifies whether the pricing plan for the queue is on-demand or reserved. For
     * on-demand, you pay per minute, billed in increments of .01 minute. For reserved,
     * you pay for the transcoding capacity of the entire queue, regardless of how much
     * or how little you use it. Reserved pricing requires a 12-month commitment. When
     * you use the API to create a queue, the default is on-demand.
     */
    inline CreateQueueRequest& WithPricingPlan(PricingPlan&& value) { SetPricingPlan(std::move(value)); return *this;}


    /**
     * Details about the pricing plan for your reserved queue. Required for reserved
     * queues and not applicable to on-demand queues.
     */
    inline const ReservationPlanSettings& GetReservationPlanSettings() const{ return m_reservationPlanSettings; }

    /**
     * Details about the pricing plan for your reserved queue. Required for reserved
     * queues and not applicable to on-demand queues.
     */
    inline bool ReservationPlanSettingsHasBeenSet() const { return m_reservationPlanSettingsHasBeenSet; }

    /**
     * Details about the pricing plan for your reserved queue. Required for reserved
     * queues and not applicable to on-demand queues.
     */
    inline void SetReservationPlanSettings(const ReservationPlanSettings& value) { m_reservationPlanSettingsHasBeenSet = true; m_reservationPlanSettings = value; }

    /**
     * Details about the pricing plan for your reserved queue. Required for reserved
     * queues and not applicable to on-demand queues.
     */
    inline void SetReservationPlanSettings(ReservationPlanSettings&& value) { m_reservationPlanSettingsHasBeenSet = true; m_reservationPlanSettings = std::move(value); }

    /**
     * Details about the pricing plan for your reserved queue. Required for reserved
     * queues and not applicable to on-demand queues.
     */
    inline CreateQueueRequest& WithReservationPlanSettings(const ReservationPlanSettings& value) { SetReservationPlanSettings(value); return *this;}

    /**
     * Details about the pricing plan for your reserved queue. Required for reserved
     * queues and not applicable to on-demand queues.
     */
    inline CreateQueueRequest& WithReservationPlanSettings(ReservationPlanSettings&& value) { SetReservationPlanSettings(std::move(value)); return *this;}


    /**
     * The tags that you want to add to the resource. You can tag resources with a
     * key-value pair or with only a key.
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * The tags that you want to add to the resource. You can tag resources with a
     * key-value pair or with only a key.
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * The tags that you want to add to the resource. You can tag resources with a
     * key-value pair or with only a key.
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * The tags that you want to add to the resource. You can tag resources with a
     * key-value pair or with only a key.
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * The tags that you want to add to the resource. You can tag resources with a
     * key-value pair or with only a key.
     */
    inline CreateQueueRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * The tags that you want to add to the resource. You can tag resources with a
     * key-value pair or with only a key.
     */
    inline CreateQueueRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * The tags that you want to add to the resource. You can tag resources with a
     * key-value pair or with only a key.
     */
    inline CreateQueueRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * The tags that you want to add to the resource. You can tag resources with a
     * key-value pair or with only a key.
     */
    inline CreateQueueRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * The tags that you want to add to the resource. You can tag resources with a
     * key-value pair or with only a key.
     */
    inline CreateQueueRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * The tags that you want to add to the resource. You can tag resources with a
     * key-value pair or with only a key.
     */
    inline CreateQueueRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * The tags that you want to add to the resource. You can tag resources with a
     * key-value pair or with only a key.
     */
    inline CreateQueueRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * The tags that you want to add to the resource. You can tag resources with a
     * key-value pair or with only a key.
     */
    inline CreateQueueRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * The tags that you want to add to the resource. You can tag resources with a
     * key-value pair or with only a key.
     */
    inline CreateQueueRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    PricingPlan m_pricingPlan;
    bool m_pricingPlanHasBeenSet;

    ReservationPlanSettings m_reservationPlanSettings;
    bool m_reservationPlanSettingsHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
