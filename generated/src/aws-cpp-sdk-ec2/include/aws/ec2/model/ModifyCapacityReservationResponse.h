/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/CapacityReservationAdjustmentDetails.h>
#include <aws/ec2/model/CapacityReservationAdjustmentStatus.h>
#include <aws/ec2/model/ResponseMetadata.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Xml {
class XmlDocument;
}  // namespace Xml
}  // namespace Utils
namespace EC2 {
namespace Model {
class ModifyCapacityReservationResponse {
 public:
  AWS_EC2_API ModifyCapacityReservationResponse() = default;
  AWS_EC2_API ModifyCapacityReservationResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_EC2_API ModifyCapacityReservationResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{
  /**
   * <p>Returns <code>true</code> if the request succeeds; otherwise, it returns an
   * error.</p>
   */
  inline bool GetReturn() const { return m_return; }
  inline void SetReturn(bool value) {
    m_returnHasBeenSet = true;
    m_return = value;
  }
  inline ModifyCapacityReservationResponse& WithReturn(bool value) {
    SetReturn(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the requested modification. For a description of each possible
   * value, see the <code>adjustmentStatus</code> field of the
   * <code>CapacityReservation</code> data type.</p>
   */
  inline CapacityReservationAdjustmentStatus GetAdjustmentStatus() const { return m_adjustmentStatus; }
  inline void SetAdjustmentStatus(CapacityReservationAdjustmentStatus value) {
    m_adjustmentStatusHasBeenSet = true;
    m_adjustmentStatus = value;
  }
  inline ModifyCapacityReservationResponse& WithAdjustmentStatus(CapacityReservationAdjustmentStatus value) {
    SetAdjustmentStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration that the Capacity Reservation will have after the
   * adjustment is applied.</p>
   */
  inline const CapacityReservationAdjustmentDetails& GetAdjustmentDetails() const { return m_adjustmentDetails; }
  template <typename AdjustmentDetailsT = CapacityReservationAdjustmentDetails>
  void SetAdjustmentDetails(AdjustmentDetailsT&& value) {
    m_adjustmentDetailsHasBeenSet = true;
    m_adjustmentDetails = std::forward<AdjustmentDetailsT>(value);
  }
  template <typename AdjustmentDetailsT = CapacityReservationAdjustmentDetails>
  ModifyCapacityReservationResponse& WithAdjustmentDetails(AdjustmentDetailsT&& value) {
    SetAdjustmentDetails(std::forward<AdjustmentDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
  template <typename ResponseMetadataT = ResponseMetadata>
  void SetResponseMetadata(ResponseMetadataT&& value) {
    m_responseMetadataHasBeenSet = true;
    m_responseMetadata = std::forward<ResponseMetadataT>(value);
  }
  template <typename ResponseMetadataT = ResponseMetadata>
  ModifyCapacityReservationResponse& WithResponseMetadata(ResponseMetadataT&& value) {
    SetResponseMetadata(std::forward<ResponseMetadataT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  bool m_return{false};

  CapacityReservationAdjustmentStatus m_adjustmentStatus{CapacityReservationAdjustmentStatus::NOT_SET};

  CapacityReservationAdjustmentDetails m_adjustmentDetails;

  ResponseMetadata m_responseMetadata;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_returnHasBeenSet = false;
  bool m_adjustmentStatusHasBeenSet = false;
  bool m_adjustmentDetailsHasBeenSet = false;
  bool m_responseMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
