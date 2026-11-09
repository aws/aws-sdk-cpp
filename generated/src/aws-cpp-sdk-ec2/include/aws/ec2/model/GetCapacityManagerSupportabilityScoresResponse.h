/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/CapacityManagerSupportabilityScore.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/SupportabilityScore.h>

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
class GetCapacityManagerSupportabilityScoresResponse {
 public:
  AWS_EC2_API GetCapacityManagerSupportabilityScoresResponse() = default;
  AWS_EC2_API GetCapacityManagerSupportabilityScoresResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_EC2_API GetCapacityManagerSupportabilityScoresResponse& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{
  /**
   * <p> The score for all instance type and Availability Zone combinations in the
   * request together. A <code>high</code> aggregate score with lower individual
   * scores means that no single combination can support the full request, but the
   * combinations together can. </p>
   */
  inline SupportabilityScore GetAggregateScore() const { return m_aggregateScore; }
  inline void SetAggregateScore(SupportabilityScore value) {
    m_aggregateScoreHasBeenSet = true;
    m_aggregateScore = value;
  }
  inline GetCapacityManagerSupportabilityScoresResponse& WithAggregateScore(SupportabilityScore value) {
    SetAggregateScore(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The score for each instance type and Availability Zone combination in the
   * request. </p>
   */
  inline const Aws::Vector<CapacityManagerSupportabilityScore>& GetCapacityManagerSupportabilityScores() const {
    return m_capacityManagerSupportabilityScores;
  }
  template <typename CapacityManagerSupportabilityScoresT = Aws::Vector<CapacityManagerSupportabilityScore>>
  void SetCapacityManagerSupportabilityScores(CapacityManagerSupportabilityScoresT&& value) {
    m_capacityManagerSupportabilityScoresHasBeenSet = true;
    m_capacityManagerSupportabilityScores = std::forward<CapacityManagerSupportabilityScoresT>(value);
  }
  template <typename CapacityManagerSupportabilityScoresT = Aws::Vector<CapacityManagerSupportabilityScore>>
  GetCapacityManagerSupportabilityScoresResponse& WithCapacityManagerSupportabilityScores(CapacityManagerSupportabilityScoresT&& value) {
    SetCapacityManagerSupportabilityScores(std::forward<CapacityManagerSupportabilityScoresT>(value));
    return *this;
  }
  template <typename CapacityManagerSupportabilityScoresT = CapacityManagerSupportabilityScore>
  GetCapacityManagerSupportabilityScoresResponse& AddCapacityManagerSupportabilityScores(CapacityManagerSupportabilityScoresT&& value) {
    m_capacityManagerSupportabilityScoresHasBeenSet = true;
    m_capacityManagerSupportabilityScores.emplace_back(std::forward<CapacityManagerSupportabilityScoresT>(value));
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
  GetCapacityManagerSupportabilityScoresResponse& WithResponseMetadata(ResponseMetadataT&& value) {
    SetResponseMetadata(std::forward<ResponseMetadataT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  SupportabilityScore m_aggregateScore{SupportabilityScore::NOT_SET};

  Aws::Vector<CapacityManagerSupportabilityScore> m_capacityManagerSupportabilityScores;

  ResponseMetadata m_responseMetadata;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_aggregateScoreHasBeenSet = false;
  bool m_capacityManagerSupportabilityScoresHasBeenSet = false;
  bool m_responseMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
