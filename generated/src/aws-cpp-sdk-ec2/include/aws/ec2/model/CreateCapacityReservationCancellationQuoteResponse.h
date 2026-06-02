/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/CapacityReservationCancellationQuote.h>
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
class CreateCapacityReservationCancellationQuoteResponse {
 public:
  AWS_EC2_API CreateCapacityReservationCancellationQuoteResponse() = default;
  AWS_EC2_API CreateCapacityReservationCancellationQuoteResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_EC2_API CreateCapacityReservationCancellationQuoteResponse& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{
  /**
   * <p>Information about the Capacity Reservation cancellation quote.</p>
   */
  inline const CapacityReservationCancellationQuote& GetCapacityReservationCancellationQuote() const {
    return m_capacityReservationCancellationQuote;
  }
  template <typename CapacityReservationCancellationQuoteT = CapacityReservationCancellationQuote>
  void SetCapacityReservationCancellationQuote(CapacityReservationCancellationQuoteT&& value) {
    m_capacityReservationCancellationQuoteHasBeenSet = true;
    m_capacityReservationCancellationQuote = std::forward<CapacityReservationCancellationQuoteT>(value);
  }
  template <typename CapacityReservationCancellationQuoteT = CapacityReservationCancellationQuote>
  CreateCapacityReservationCancellationQuoteResponse& WithCapacityReservationCancellationQuote(
      CapacityReservationCancellationQuoteT&& value) {
    SetCapacityReservationCancellationQuote(std::forward<CapacityReservationCancellationQuoteT>(value));
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
  CreateCapacityReservationCancellationQuoteResponse& WithResponseMetadata(ResponseMetadataT&& value) {
    SetResponseMetadata(std::forward<ResponseMetadataT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  CapacityReservationCancellationQuote m_capacityReservationCancellationQuote;

  ResponseMetadata m_responseMetadata;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_capacityReservationCancellationQuoteHasBeenSet = false;
  bool m_responseMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
