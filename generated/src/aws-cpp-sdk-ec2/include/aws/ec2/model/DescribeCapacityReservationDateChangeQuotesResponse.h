/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
class DescribeCapacityReservationDateChangeQuotesResponse {
 public:
  AWS_EC2_API DescribeCapacityReservationDateChangeQuotesResponse() = default;
  AWS_EC2_API DescribeCapacityReservationDateChangeQuotesResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_EC2_API DescribeCapacityReservationDateChangeQuotesResponse& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{
  /**
   * <p>Information about the Capacity Reservation date change quotes.</p>
   */
  inline const Aws::Vector<CapacityReservationModificationQuote>& GetCapacityReservationModificationQuotes() const {
    return m_capacityReservationModificationQuotes;
  }
  template <typename CapacityReservationModificationQuotesT = Aws::Vector<CapacityReservationModificationQuote>>
  void SetCapacityReservationModificationQuotes(CapacityReservationModificationQuotesT&& value) {
    m_capacityReservationModificationQuotesHasBeenSet = true;
    m_capacityReservationModificationQuotes = std::forward<CapacityReservationModificationQuotesT>(value);
  }
  template <typename CapacityReservationModificationQuotesT = Aws::Vector<CapacityReservationModificationQuote>>
  DescribeCapacityReservationDateChangeQuotesResponse& WithCapacityReservationModificationQuotes(
      CapacityReservationModificationQuotesT&& value) {
    SetCapacityReservationModificationQuotes(std::forward<CapacityReservationModificationQuotesT>(value));
    return *this;
  }
  template <typename CapacityReservationModificationQuotesT = CapacityReservationModificationQuote>
  DescribeCapacityReservationDateChangeQuotesResponse& AddCapacityReservationModificationQuotes(
      CapacityReservationModificationQuotesT&& value) {
    m_capacityReservationModificationQuotesHasBeenSet = true;
    m_capacityReservationModificationQuotes.emplace_back(std::forward<CapacityReservationModificationQuotesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token to use to retrieve the next page of results. This value is
   * <code>null</code> when there are no more results to return.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  DescribeCapacityReservationDateChangeQuotesResponse& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
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
  DescribeCapacityReservationDateChangeQuotesResponse& WithResponseMetadata(ResponseMetadataT&& value) {
    SetResponseMetadata(std::forward<ResponseMetadataT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<CapacityReservationModificationQuote> m_capacityReservationModificationQuotes;

  Aws::String m_nextToken;

  ResponseMetadata m_responseMetadata;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_capacityReservationModificationQuotesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_responseMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
