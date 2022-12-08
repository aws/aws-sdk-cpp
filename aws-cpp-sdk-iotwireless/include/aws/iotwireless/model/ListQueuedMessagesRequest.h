/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/IoTWirelessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotwireless/model/WirelessDeviceType.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace IoTWireless
{
namespace Model
{

  /**
   */
  class ListQueuedMessagesRequest : public IoTWirelessRequest
  {
  public:
    AWS_IOTWIRELESS_API ListQueuedMessagesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListQueuedMessages"; }

    AWS_IOTWIRELESS_API Aws::String SerializePayload() const override;

    AWS_IOTWIRELESS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The ID of a given wireless device which the downlink message packets are
     * being sent.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of a given wireless device which the downlink message packets are
     * being sent.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of a given wireless device which the downlink message packets are
     * being sent.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of a given wireless device which the downlink message packets are
     * being sent.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of a given wireless device which the downlink message packets are
     * being sent.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of a given wireless device which the downlink message packets are
     * being sent.</p>
     */
    inline ListQueuedMessagesRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of a given wireless device which the downlink message packets are
     * being sent.</p>
     */
    inline ListQueuedMessagesRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of a given wireless device which the downlink message packets are
     * being sent.</p>
     */
    inline ListQueuedMessagesRequest& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>To retrieve the next set of results, the <code>nextToken</code> value from a
     * previous response; otherwise <b>null</b> to receive the first set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>To retrieve the next set of results, the <code>nextToken</code> value from a
     * previous response; otherwise <b>null</b> to receive the first set of
     * results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>To retrieve the next set of results, the <code>nextToken</code> value from a
     * previous response; otherwise <b>null</b> to receive the first set of
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>To retrieve the next set of results, the <code>nextToken</code> value from a
     * previous response; otherwise <b>null</b> to receive the first set of
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>To retrieve the next set of results, the <code>nextToken</code> value from a
     * previous response; otherwise <b>null</b> to receive the first set of
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>To retrieve the next set of results, the <code>nextToken</code> value from a
     * previous response; otherwise <b>null</b> to receive the first set of
     * results.</p>
     */
    inline ListQueuedMessagesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>To retrieve the next set of results, the <code>nextToken</code> value from a
     * previous response; otherwise <b>null</b> to receive the first set of
     * results.</p>
     */
    inline ListQueuedMessagesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>To retrieve the next set of results, the <code>nextToken</code> value from a
     * previous response; otherwise <b>null</b> to receive the first set of
     * results.</p>
     */
    inline ListQueuedMessagesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of results to return in this operation.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return in this operation.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return in this operation.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return in this operation.</p>
     */
    inline ListQueuedMessagesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The wireless device type, whic can be either Sidewalk or LoRaWAN.</p>
     */
    inline const WirelessDeviceType& GetWirelessDeviceType() const{ return m_wirelessDeviceType; }

    /**
     * <p>The wireless device type, whic can be either Sidewalk or LoRaWAN.</p>
     */
    inline bool WirelessDeviceTypeHasBeenSet() const { return m_wirelessDeviceTypeHasBeenSet; }

    /**
     * <p>The wireless device type, whic can be either Sidewalk or LoRaWAN.</p>
     */
    inline void SetWirelessDeviceType(const WirelessDeviceType& value) { m_wirelessDeviceTypeHasBeenSet = true; m_wirelessDeviceType = value; }

    /**
     * <p>The wireless device type, whic can be either Sidewalk or LoRaWAN.</p>
     */
    inline void SetWirelessDeviceType(WirelessDeviceType&& value) { m_wirelessDeviceTypeHasBeenSet = true; m_wirelessDeviceType = std::move(value); }

    /**
     * <p>The wireless device type, whic can be either Sidewalk or LoRaWAN.</p>
     */
    inline ListQueuedMessagesRequest& WithWirelessDeviceType(const WirelessDeviceType& value) { SetWirelessDeviceType(value); return *this;}

    /**
     * <p>The wireless device type, whic can be either Sidewalk or LoRaWAN.</p>
     */
    inline ListQueuedMessagesRequest& WithWirelessDeviceType(WirelessDeviceType&& value) { SetWirelessDeviceType(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    WirelessDeviceType m_wirelessDeviceType;
    bool m_wirelessDeviceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
