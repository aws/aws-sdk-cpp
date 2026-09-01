/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/model/PartnerStatus.h>
#include <aws/lightsail/model/TierName.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Lightsail {
namespace Model {

/**
 * <p>An object that contains information about the Lightsail partner program
 * membership of an Amazon Lightsail account.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/PartnerInfo">AWS
 * API Reference</a></p>
 */
class PartnerInfo {
 public:
  AWS_LIGHTSAIL_API PartnerInfo() = default;
  AWS_LIGHTSAIL_API PartnerInfo(Aws::Utils::Json::JsonView jsonValue);
  AWS_LIGHTSAIL_API PartnerInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The timestamp when the account was enrolled in the Lightsail partner
   * program.</p>
   */
  inline const Aws::Utils::DateTime& GetEnrolledAt() const { return m_enrolledAt; }
  inline bool EnrolledAtHasBeenSet() const { return m_enrolledAtHasBeenSet; }
  template <typename EnrolledAtT = Aws::Utils::DateTime>
  void SetEnrolledAt(EnrolledAtT&& value) {
    m_enrolledAtHasBeenSet = true;
    m_enrolledAt = std::forward<EnrolledAtT>(value);
  }
  template <typename EnrolledAtT = Aws::Utils::DateTime>
  PartnerInfo& WithEnrolledAt(EnrolledAtT&& value) {
    SetEnrolledAt(std::forward<EnrolledAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tier of the partner membership.</p>
   */
  inline TierName GetTierName() const { return m_tierName; }
  inline bool TierNameHasBeenSet() const { return m_tierNameHasBeenSet; }
  inline void SetTierName(TierName value) {
    m_tierNameHasBeenSet = true;
    m_tierName = value;
  }
  inline PartnerInfo& WithTierName(TierName value) {
    SetTierName(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the partner membership.</p> <p>The following statuses are
   * possible:</p> <ul> <li> <p> <code>Active</code> – The membership is active, and
   * the benefits of the current tier are available to the account.</p> </li> <li>
   * <p> <code>Suspended</code> – The membership is suspended, and the benefits of
   * the tier are not available to the account.</p> </li> </ul>
   */
  inline PartnerStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(PartnerStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline PartnerInfo& WithStatus(PartnerStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}
 private:
  Aws::Utils::DateTime m_enrolledAt{};

  TierName m_tierName{TierName::NOT_SET};

  PartnerStatus m_status{PartnerStatus::NOT_SET};
  bool m_enrolledAtHasBeenSet = false;
  bool m_tierNameHasBeenSet = false;
  bool m_statusHasBeenSet = false;
};

}  // namespace Model
}  // namespace Lightsail
}  // namespace Aws
