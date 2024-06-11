/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/logs/model/DeliveryDestinationType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace CloudWatchLogs
{
namespace Model
{

  /**
   * <p>This structure contains information about one <i>delivery</i> in your
   * account. </p> <p>A delivery is a connection between a logical <i>delivery
   * source</i> and a logical <i>delivery destination</i>.</p> <p>For more
   * information, see <a
   * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_CreateDelivery.html">CreateDelivery</a>.</p>
   * <p>You can't update an existing delivery. You can only create and delete
   * deliveries.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/Delivery">AWS API
   * Reference</a></p>
   */
  class Delivery
  {
  public:
    AWS_CLOUDWATCHLOGS_API Delivery();
    AWS_CLOUDWATCHLOGS_API Delivery(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API Delivery& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique ID that identifies this delivery in your account.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline Delivery& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline Delivery& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline Delivery& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that uniquely identifies this delivery.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline Delivery& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline Delivery& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline Delivery& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the delivery source that is associated with this delivery.</p>
     */
    inline const Aws::String& GetDeliverySourceName() const{ return m_deliverySourceName; }
    inline bool DeliverySourceNameHasBeenSet() const { return m_deliverySourceNameHasBeenSet; }
    inline void SetDeliverySourceName(const Aws::String& value) { m_deliverySourceNameHasBeenSet = true; m_deliverySourceName = value; }
    inline void SetDeliverySourceName(Aws::String&& value) { m_deliverySourceNameHasBeenSet = true; m_deliverySourceName = std::move(value); }
    inline void SetDeliverySourceName(const char* value) { m_deliverySourceNameHasBeenSet = true; m_deliverySourceName.assign(value); }
    inline Delivery& WithDeliverySourceName(const Aws::String& value) { SetDeliverySourceName(value); return *this;}
    inline Delivery& WithDeliverySourceName(Aws::String&& value) { SetDeliverySourceName(std::move(value)); return *this;}
    inline Delivery& WithDeliverySourceName(const char* value) { SetDeliverySourceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the delivery destination that is associated with this
     * delivery.</p>
     */
    inline const Aws::String& GetDeliveryDestinationArn() const{ return m_deliveryDestinationArn; }
    inline bool DeliveryDestinationArnHasBeenSet() const { return m_deliveryDestinationArnHasBeenSet; }
    inline void SetDeliveryDestinationArn(const Aws::String& value) { m_deliveryDestinationArnHasBeenSet = true; m_deliveryDestinationArn = value; }
    inline void SetDeliveryDestinationArn(Aws::String&& value) { m_deliveryDestinationArnHasBeenSet = true; m_deliveryDestinationArn = std::move(value); }
    inline void SetDeliveryDestinationArn(const char* value) { m_deliveryDestinationArnHasBeenSet = true; m_deliveryDestinationArn.assign(value); }
    inline Delivery& WithDeliveryDestinationArn(const Aws::String& value) { SetDeliveryDestinationArn(value); return *this;}
    inline Delivery& WithDeliveryDestinationArn(Aws::String&& value) { SetDeliveryDestinationArn(std::move(value)); return *this;}
    inline Delivery& WithDeliveryDestinationArn(const char* value) { SetDeliveryDestinationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Displays whether the delivery destination associated with this delivery is
     * CloudWatch Logs, Amazon S3, or Firehose.</p>
     */
    inline const DeliveryDestinationType& GetDeliveryDestinationType() const{ return m_deliveryDestinationType; }
    inline bool DeliveryDestinationTypeHasBeenSet() const { return m_deliveryDestinationTypeHasBeenSet; }
    inline void SetDeliveryDestinationType(const DeliveryDestinationType& value) { m_deliveryDestinationTypeHasBeenSet = true; m_deliveryDestinationType = value; }
    inline void SetDeliveryDestinationType(DeliveryDestinationType&& value) { m_deliveryDestinationTypeHasBeenSet = true; m_deliveryDestinationType = std::move(value); }
    inline Delivery& WithDeliveryDestinationType(const DeliveryDestinationType& value) { SetDeliveryDestinationType(value); return *this;}
    inline Delivery& WithDeliveryDestinationType(DeliveryDestinationType&& value) { SetDeliveryDestinationType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags that have been assigned to this delivery.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline Delivery& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline Delivery& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline Delivery& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline Delivery& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline Delivery& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline Delivery& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline Delivery& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline Delivery& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline Delivery& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_deliverySourceName;
    bool m_deliverySourceNameHasBeenSet = false;

    Aws::String m_deliveryDestinationArn;
    bool m_deliveryDestinationArnHasBeenSet = false;

    DeliveryDestinationType m_deliveryDestinationType;
    bool m_deliveryDestinationTypeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
