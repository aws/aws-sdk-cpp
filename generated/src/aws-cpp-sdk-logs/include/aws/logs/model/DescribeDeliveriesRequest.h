/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/logs/CloudWatchLogsRequest.h>
#include <aws/logs/CloudWatchLogs_EXPORTS.h>

#include <utility>

namespace Aws {
namespace CloudWatchLogs {
namespace Model {

/**
 */
class DescribeDeliveriesRequest : public CloudWatchLogsRequest {
 public:
  AWS_CLOUDWATCHLOGS_API DescribeDeliveriesRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DescribeDeliveries"; }

  AWS_CLOUDWATCHLOGS_API Aws::String SerializePayload() const override;

  AWS_CLOUDWATCHLOGS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{

  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  DescribeDeliveriesRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optionally specify the maximum number of deliveries to return in the
   * response.</p>
   */
  inline int GetLimit() const { return m_limit; }
  inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
  inline void SetLimit(int value) {
    m_limitHasBeenSet = true;
    m_limit = value;
  }
  inline DescribeDeliveriesRequest& WithLimit(int value) {
    SetLimit(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An array of delivery source names that filters the results to deliveries
   * associated with any specified delivery source.</p>
   */
  inline const Aws::Vector<Aws::String>& GetDeliverySourceNames() const { return m_deliverySourceNames; }
  inline bool DeliverySourceNamesHasBeenSet() const { return m_deliverySourceNamesHasBeenSet; }
  template <typename DeliverySourceNamesT = Aws::Vector<Aws::String>>
  void SetDeliverySourceNames(DeliverySourceNamesT&& value) {
    m_deliverySourceNamesHasBeenSet = true;
    m_deliverySourceNames = std::forward<DeliverySourceNamesT>(value);
  }
  template <typename DeliverySourceNamesT = Aws::Vector<Aws::String>>
  DescribeDeliveriesRequest& WithDeliverySourceNames(DeliverySourceNamesT&& value) {
    SetDeliverySourceNames(std::forward<DeliverySourceNamesT>(value));
    return *this;
  }
  template <typename DeliverySourceNamesT = Aws::String>
  DescribeDeliveriesRequest& AddDeliverySourceNames(DeliverySourceNamesT&& value) {
    m_deliverySourceNamesHasBeenSet = true;
    m_deliverySourceNames.emplace_back(std::forward<DeliverySourceNamesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_nextToken;

  int m_limit{0};

  Aws::Vector<Aws::String> m_deliverySourceNames;
  bool m_nextTokenHasBeenSet = false;
  bool m_limitHasBeenSet = false;
  bool m_deliverySourceNamesHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchLogs
}  // namespace Aws
