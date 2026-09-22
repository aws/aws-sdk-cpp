/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/EC2Request.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/TagSpecification.h>

#include <utility>

namespace Aws {
namespace EC2 {
namespace Model {

/**
 */
class CreateCapacityReservationDateChangeQuoteRequest : public EC2Request {
 public:
  AWS_EC2_API CreateCapacityReservationDateChangeQuoteRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateCapacityReservationDateChangeQuote"; }

  AWS_EC2_API Aws::String SerializePayload() const override;

 protected:
  AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri) const override;

 public:
  ///@{
  /**
   * <p>The ID of the Capacity Reservation.</p>
   */
  inline const Aws::String& GetCapacityReservationId() const { return m_capacityReservationId; }
  inline bool CapacityReservationIdHasBeenSet() const { return m_capacityReservationIdHasBeenSet; }
  template <typename CapacityReservationIdT = Aws::String>
  void SetCapacityReservationId(CapacityReservationIdT&& value) {
    m_capacityReservationIdHasBeenSet = true;
    m_capacityReservationId = std::forward<CapacityReservationIdT>(value);
  }
  template <typename CapacityReservationIdT = Aws::String>
  CreateCapacityReservationDateChangeQuoteRequest& WithCapacityReservationId(CapacityReservationIdT&& value) {
    SetCapacityReservationId(std::forward<CapacityReservationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The requested new start date for the Capacity Reservation, in the ISO8601
   * format in the UTC time zone (<code>YYYY-MM-DDThh:mm:ss.sssZ</code>). The new
   * start date must be later than the current start date and within the cumulative
   * 30-day pushout limit.</p>
   */
  inline const Aws::Utils::DateTime& GetNewStartDate() const { return m_newStartDate; }
  inline bool NewStartDateHasBeenSet() const { return m_newStartDateHasBeenSet; }
  template <typename NewStartDateT = Aws::Utils::DateTime>
  void SetNewStartDate(NewStartDateT&& value) {
    m_newStartDateHasBeenSet = true;
    m_newStartDate = std::forward<NewStartDateT>(value);
  }
  template <typename NewStartDateT = Aws::Utils::DateTime>
  CreateCapacityReservationDateChangeQuoteRequest& WithNewStartDate(NewStartDateT&& value) {
    SetNewStartDate(std::forward<NewStartDateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
   * of the request. For more information, see <a
   * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensure
   * Idempotency</a>.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CreateCapacityReservationDateChangeQuoteRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags to apply to the date change quote.</p>
   */
  inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const { return m_tagSpecifications; }
  inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }
  template <typename TagSpecificationsT = Aws::Vector<TagSpecification>>
  void SetTagSpecifications(TagSpecificationsT&& value) {
    m_tagSpecificationsHasBeenSet = true;
    m_tagSpecifications = std::forward<TagSpecificationsT>(value);
  }
  template <typename TagSpecificationsT = Aws::Vector<TagSpecification>>
  CreateCapacityReservationDateChangeQuoteRequest& WithTagSpecifications(TagSpecificationsT&& value) {
    SetTagSpecifications(std::forward<TagSpecificationsT>(value));
    return *this;
  }
  template <typename TagSpecificationsT = TagSpecification>
  CreateCapacityReservationDateChangeQuoteRequest& AddTagSpecifications(TagSpecificationsT&& value) {
    m_tagSpecificationsHasBeenSet = true;
    m_tagSpecifications.emplace_back(std::forward<TagSpecificationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Checks whether you have the required permissions for the action, without
   * actually making the request, and provides an error response. If you have the
   * required permissions, the error response is <code>DryRunOperation</code>.
   * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
   */
  inline bool GetDryRun() const { return m_dryRun; }
  inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
  inline void SetDryRun(bool value) {
    m_dryRunHasBeenSet = true;
    m_dryRun = value;
  }
  inline CreateCapacityReservationDateChangeQuoteRequest& WithDryRun(bool value) {
    SetDryRun(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_capacityReservationId;

  Aws::Utils::DateTime m_newStartDate{};

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};

  Aws::Vector<TagSpecification> m_tagSpecifications;

  bool m_dryRun{false};
  bool m_capacityReservationIdHasBeenSet = false;
  bool m_newStartDateHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
  bool m_tagSpecificationsHasBeenSet = false;
  bool m_dryRunHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
