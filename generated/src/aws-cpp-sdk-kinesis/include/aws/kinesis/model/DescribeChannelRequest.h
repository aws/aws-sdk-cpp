/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesis/KinesisRequest.h>
#include <aws/kinesis/Kinesis_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Kinesis {
namespace Model {

/**
 */
class DescribeChannelRequest : public KinesisRequest {
 public:
  AWS_KINESIS_API DescribeChannelRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DescribeChannel"; }

  AWS_KINESIS_API Aws::String SerializePayload() const override;

  AWS_KINESIS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  /**
   * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
   */
  AWS_KINESIS_API EndpointParameters GetEndpointContextParams() const override;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the channel to describe.</p>
   */
  inline const Aws::String& GetChannelARN() const { return m_channelARN; }
  inline bool ChannelARNHasBeenSet() const { return m_channelARNHasBeenSet; }
  template <typename ChannelARNT = Aws::String>
  void SetChannelARN(ChannelARNT&& value) {
    m_channelARNHasBeenSet = true;
    m_channelARN = std::forward<ChannelARNT>(value);
  }
  template <typename ChannelARNT = Aws::String>
  DescribeChannelRequest& WithChannelARN(ChannelARNT&& value) {
    SetChannelARN(std::forward<ChannelARNT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_channelARN;
  bool m_channelARNHasBeenSet = false;
};

}  // namespace Model
}  // namespace Kinesis
}  // namespace Aws
