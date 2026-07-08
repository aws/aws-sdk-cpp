/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/SourceCampaign.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Connect {
namespace Model {

/**
 * <p>The source of an outbound web notification. Identifies the campaign and
 * outbound request that triggered the notification.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/WebNotificationSource">AWS
 * API Reference</a></p>
 */
class WebNotificationSource {
 public:
  AWS_CONNECT_API WebNotificationSource() = default;
  AWS_CONNECT_API WebNotificationSource(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API WebNotificationSource& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Information about the campaign that triggered the web notification, including
   * the campaign identifier and outbound request identifier.</p>
   */
  inline const SourceCampaign& GetSourceCampaign() const { return m_sourceCampaign; }
  inline bool SourceCampaignHasBeenSet() const { return m_sourceCampaignHasBeenSet; }
  template <typename SourceCampaignT = SourceCampaign>
  void SetSourceCampaign(SourceCampaignT&& value) {
    m_sourceCampaignHasBeenSet = true;
    m_sourceCampaign = std::forward<SourceCampaignT>(value);
  }
  template <typename SourceCampaignT = SourceCampaign>
  WebNotificationSource& WithSourceCampaign(SourceCampaignT&& value) {
    SetSourceCampaign(std::forward<SourceCampaignT>(value));
    return *this;
  }
  ///@}
 private:
  SourceCampaign m_sourceCampaign;
  bool m_sourceCampaignHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
