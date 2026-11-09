/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ivs/IVSRequest.h>
#include <aws/ivs/IVS_EXPORTS.h>

#include <utility>

namespace Aws {
namespace IVS {
namespace Model {

/**
 */
class InsertAdBreakRequest : public IVSRequest {
 public:
  AWS_IVS_API InsertAdBreakRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "InsertAdBreak"; }

  AWS_IVS_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>ARN of the channel into which the ad break is inserted.</p>
   */
  inline const Aws::String& GetChannelArn() const { return m_channelArn; }
  inline bool ChannelArnHasBeenSet() const { return m_channelArnHasBeenSet; }
  template <typename ChannelArnT = Aws::String>
  void SetChannelArn(ChannelArnT&& value) {
    m_channelArnHasBeenSet = true;
    m_channelArn = std::forward<ChannelArnT>(value);
  }
  template <typename ChannelArnT = Aws::String>
  InsertAdBreakRequest& WithChannelArn(ChannelArnT&& value) {
    SetChannelArn(std::forward<ChannelArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Duration of the ad break, in seconds.</p>
   */
  inline int GetDurationSeconds() const { return m_durationSeconds; }
  inline bool DurationSecondsHasBeenSet() const { return m_durationSecondsHasBeenSet; }
  inline void SetDurationSeconds(int value) {
    m_durationSecondsHasBeenSet = true;
    m_durationSeconds = value;
  }
  inline InsertAdBreakRequest& WithDurationSeconds(int value) {
    SetDurationSeconds(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Caller-specified unique identifier for the ad break to insert into the
   * playlist.</p>
   */
  inline const Aws::String& GetAdBreakId() const { return m_adBreakId; }
  inline bool AdBreakIdHasBeenSet() const { return m_adBreakIdHasBeenSet; }
  template <typename AdBreakIdT = Aws::String>
  void SetAdBreakId(AdBreakIdT&& value) {
    m_adBreakIdHasBeenSet = true;
    m_adBreakId = std::forward<AdBreakIdT>(value);
  }
  template <typename AdBreakIdT = Aws::String>
  InsertAdBreakRequest& WithAdBreakId(AdBreakIdT&& value) {
    SetAdBreakId(std::forward<AdBreakIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Target time at which the ad break starts.</p>
   */
  inline const Aws::Utils::DateTime& GetTargetStartAt() const { return m_targetStartAt; }
  inline bool TargetStartAtHasBeenSet() const { return m_targetStartAtHasBeenSet; }
  template <typename TargetStartAtT = Aws::Utils::DateTime>
  void SetTargetStartAt(TargetStartAtT&& value) {
    m_targetStartAtHasBeenSet = true;
    m_targetStartAt = std::forward<TargetStartAtT>(value);
  }
  template <typename TargetStartAtT = Aws::Utils::DateTime>
  InsertAdBreakRequest& WithTargetStartAt(TargetStartAtT&& value) {
    SetTargetStartAt(std::forward<TargetStartAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_channelArn;

  int m_durationSeconds{0};

  Aws::String m_adBreakId;

  Aws::Utils::DateTime m_targetStartAt{};
  bool m_channelArnHasBeenSet = false;
  bool m_durationSecondsHasBeenSet = false;
  bool m_adBreakIdHasBeenSet = false;
  bool m_targetStartAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace IVS
}  // namespace Aws
