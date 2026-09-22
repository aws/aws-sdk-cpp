/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/CapacityReservationModificationQuote.h>
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
class CreateCapacityReservationDateChangeQuoteResponse {
 public:
  AWS_EC2_API CreateCapacityReservationDateChangeQuoteResponse() = default;
  AWS_EC2_API CreateCapacityReservationDateChangeQuoteResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_EC2_API CreateCapacityReservationDateChangeQuoteResponse& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{
  /**
   * <p>Information about the Capacity Reservation date change quote.</p>
   */
  inline const CapacityReservationModificationQuote& GetCapacityReservationModificationQuote() const {
    return m_capacityReservationModificationQuote;
  }
  template <typename CapacityReservationModificationQuoteT = CapacityReservationModificationQuote>
  void SetCapacityReservationModificationQuote(CapacityReservationModificationQuoteT&& value) {
    m_capacityReservationModificationQuoteHasBeenSet = true;
    m_capacityReservationModificationQuote = std::forward<CapacityReservationModificationQuoteT>(value);
  }
  template <typename CapacityReservationModificationQuoteT = CapacityReservationModificationQuote>
  CreateCapacityReservationDateChangeQuoteResponse& WithCapacityReservationModificationQuote(
      CapacityReservationModificationQuoteT&& value) {
    SetCapacityReservationModificationQuote(std::forward<CapacityReservationModificationQuoteT>(value));
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
  CreateCapacityReservationDateChangeQuoteResponse& WithResponseMetadata(ResponseMetadataT&& value) {
    SetResponseMetadata(std::forward<ResponseMetadataT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  CapacityReservationModificationQuote m_capacityReservationModificationQuote;

  ResponseMetadata m_responseMetadata;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_capacityReservationModificationQuoteHasBeenSet = false;
  bool m_responseMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
