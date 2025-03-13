/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/firehose/Firehose_EXPORTS.h>
#include <aws/firehose/FirehoseRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Firehose
{
namespace Model
{

  /**
   */
  class ListTagsForDeliveryStreamRequest : public FirehoseRequest
  {
  public:
    AWS_FIREHOSE_API ListTagsForDeliveryStreamRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListTagsForDeliveryStream"; }

    AWS_FIREHOSE_API Aws::String SerializePayload() const override;

    AWS_FIREHOSE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the Firehose stream whose tags you want to list.</p>
     */
    inline const Aws::String& GetDeliveryStreamName() const { return m_deliveryStreamName; }
    inline bool DeliveryStreamNameHasBeenSet() const { return m_deliveryStreamNameHasBeenSet; }
    template<typename DeliveryStreamNameT = Aws::String>
    void SetDeliveryStreamName(DeliveryStreamNameT&& value) { m_deliveryStreamNameHasBeenSet = true; m_deliveryStreamName = std::forward<DeliveryStreamNameT>(value); }
    template<typename DeliveryStreamNameT = Aws::String>
    ListTagsForDeliveryStreamRequest& WithDeliveryStreamName(DeliveryStreamNameT&& value) { SetDeliveryStreamName(std::forward<DeliveryStreamNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key to use as the starting point for the list of tags. If you set this
     * parameter, <code>ListTagsForDeliveryStream</code> gets all tags that occur after
     * <code>ExclusiveStartTagKey</code>.</p>
     */
    inline const Aws::String& GetExclusiveStartTagKey() const { return m_exclusiveStartTagKey; }
    inline bool ExclusiveStartTagKeyHasBeenSet() const { return m_exclusiveStartTagKeyHasBeenSet; }
    template<typename ExclusiveStartTagKeyT = Aws::String>
    void SetExclusiveStartTagKey(ExclusiveStartTagKeyT&& value) { m_exclusiveStartTagKeyHasBeenSet = true; m_exclusiveStartTagKey = std::forward<ExclusiveStartTagKeyT>(value); }
    template<typename ExclusiveStartTagKeyT = Aws::String>
    ListTagsForDeliveryStreamRequest& WithExclusiveStartTagKey(ExclusiveStartTagKeyT&& value) { SetExclusiveStartTagKey(std::forward<ExclusiveStartTagKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of tags to return. If this number is less than the total number of
     * tags associated with the Firehose stream, <code>HasMoreTags</code> is set to
     * <code>true</code> in the response. To list additional tags, set
     * <code>ExclusiveStartTagKey</code> to the last key in the response. </p>
     */
    inline int GetLimit() const { return m_limit; }
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }
    inline ListTagsForDeliveryStreamRequest& WithLimit(int value) { SetLimit(value); return *this;}
    ///@}
  private:

    Aws::String m_deliveryStreamName;
    bool m_deliveryStreamNameHasBeenSet = false;

    Aws::String m_exclusiveStartTagKey;
    bool m_exclusiveStartTagKeyHasBeenSet = false;

    int m_limit{0};
    bool m_limitHasBeenSet = false;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
