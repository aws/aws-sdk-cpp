/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/SuccessfulSuppressionResponseObject.h>
#include <aws/ec2/model/UnsuccessfulSuppressionResponseObject.h>

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
class EnableApplicationStatusCheckSuppressionResponse {
 public:
  AWS_EC2_API EnableApplicationStatusCheckSuppressionResponse() = default;
  AWS_EC2_API EnableApplicationStatusCheckSuppressionResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_EC2_API EnableApplicationStatusCheckSuppressionResponse& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{
  /**
   * <p>The instances for which suppression was successfully enabled.</p>
   */
  inline const Aws::Vector<SuccessfulSuppressionResponseObject>& GetSuccessfulResults() const { return m_successfulResults; }
  template <typename SuccessfulResultsT = Aws::Vector<SuccessfulSuppressionResponseObject>>
  void SetSuccessfulResults(SuccessfulResultsT&& value) {
    m_successfulResultsHasBeenSet = true;
    m_successfulResults = std::forward<SuccessfulResultsT>(value);
  }
  template <typename SuccessfulResultsT = Aws::Vector<SuccessfulSuppressionResponseObject>>
  EnableApplicationStatusCheckSuppressionResponse& WithSuccessfulResults(SuccessfulResultsT&& value) {
    SetSuccessfulResults(std::forward<SuccessfulResultsT>(value));
    return *this;
  }
  template <typename SuccessfulResultsT = SuccessfulSuppressionResponseObject>
  EnableApplicationStatusCheckSuppressionResponse& AddSuccessfulResults(SuccessfulResultsT&& value) {
    m_successfulResultsHasBeenSet = true;
    m_successfulResults.emplace_back(std::forward<SuccessfulResultsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The instances for which suppression failed to be enabled.</p>
   */
  inline const Aws::Vector<UnsuccessfulSuppressionResponseObject>& GetUnsuccessfulResults() const { return m_unsuccessfulResults; }
  template <typename UnsuccessfulResultsT = Aws::Vector<UnsuccessfulSuppressionResponseObject>>
  void SetUnsuccessfulResults(UnsuccessfulResultsT&& value) {
    m_unsuccessfulResultsHasBeenSet = true;
    m_unsuccessfulResults = std::forward<UnsuccessfulResultsT>(value);
  }
  template <typename UnsuccessfulResultsT = Aws::Vector<UnsuccessfulSuppressionResponseObject>>
  EnableApplicationStatusCheckSuppressionResponse& WithUnsuccessfulResults(UnsuccessfulResultsT&& value) {
    SetUnsuccessfulResults(std::forward<UnsuccessfulResultsT>(value));
    return *this;
  }
  template <typename UnsuccessfulResultsT = UnsuccessfulSuppressionResponseObject>
  EnableApplicationStatusCheckSuppressionResponse& AddUnsuccessfulResults(UnsuccessfulResultsT&& value) {
    m_unsuccessfulResultsHasBeenSet = true;
    m_unsuccessfulResults.emplace_back(std::forward<UnsuccessfulResultsT>(value));
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
  EnableApplicationStatusCheckSuppressionResponse& WithResponseMetadata(ResponseMetadataT&& value) {
    SetResponseMetadata(std::forward<ResponseMetadataT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<SuccessfulSuppressionResponseObject> m_successfulResults;

  Aws::Vector<UnsuccessfulSuppressionResponseObject> m_unsuccessfulResults;

  ResponseMetadata m_responseMetadata;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_successfulResultsHasBeenSet = false;
  bool m_unsuccessfulResultsHasBeenSet = false;
  bool m_responseMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
