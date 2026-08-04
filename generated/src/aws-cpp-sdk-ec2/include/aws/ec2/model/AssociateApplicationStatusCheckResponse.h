/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/SuccessfulAssociationResponseObject.h>
#include <aws/ec2/model/UnsuccessfulAssociationResponseObject.h>

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
class AssociateApplicationStatusCheckResponse {
 public:
  AWS_EC2_API AssociateApplicationStatusCheckResponse() = default;
  AWS_EC2_API AssociateApplicationStatusCheckResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_EC2_API AssociateApplicationStatusCheckResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{
  /**
   * <p>The associations that were successfully created.</p>
   */
  inline const Aws::Vector<SuccessfulAssociationResponseObject>& GetSuccessfulResults() const { return m_successfulResults; }
  template <typename SuccessfulResultsT = Aws::Vector<SuccessfulAssociationResponseObject>>
  void SetSuccessfulResults(SuccessfulResultsT&& value) {
    m_successfulResultsHasBeenSet = true;
    m_successfulResults = std::forward<SuccessfulResultsT>(value);
  }
  template <typename SuccessfulResultsT = Aws::Vector<SuccessfulAssociationResponseObject>>
  AssociateApplicationStatusCheckResponse& WithSuccessfulResults(SuccessfulResultsT&& value) {
    SetSuccessfulResults(std::forward<SuccessfulResultsT>(value));
    return *this;
  }
  template <typename SuccessfulResultsT = SuccessfulAssociationResponseObject>
  AssociateApplicationStatusCheckResponse& AddSuccessfulResults(SuccessfulResultsT&& value) {
    m_successfulResultsHasBeenSet = true;
    m_successfulResults.emplace_back(std::forward<SuccessfulResultsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The associations that failed to be created.</p>
   */
  inline const Aws::Vector<UnsuccessfulAssociationResponseObject>& GetUnsuccessfulResults() const { return m_unsuccessfulResults; }
  template <typename UnsuccessfulResultsT = Aws::Vector<UnsuccessfulAssociationResponseObject>>
  void SetUnsuccessfulResults(UnsuccessfulResultsT&& value) {
    m_unsuccessfulResultsHasBeenSet = true;
    m_unsuccessfulResults = std::forward<UnsuccessfulResultsT>(value);
  }
  template <typename UnsuccessfulResultsT = Aws::Vector<UnsuccessfulAssociationResponseObject>>
  AssociateApplicationStatusCheckResponse& WithUnsuccessfulResults(UnsuccessfulResultsT&& value) {
    SetUnsuccessfulResults(std::forward<UnsuccessfulResultsT>(value));
    return *this;
  }
  template <typename UnsuccessfulResultsT = UnsuccessfulAssociationResponseObject>
  AssociateApplicationStatusCheckResponse& AddUnsuccessfulResults(UnsuccessfulResultsT&& value) {
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
  AssociateApplicationStatusCheckResponse& WithResponseMetadata(ResponseMetadataT&& value) {
    SetResponseMetadata(std::forward<ResponseMetadataT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<SuccessfulAssociationResponseObject> m_successfulResults;

  Aws::Vector<UnsuccessfulAssociationResponseObject> m_unsuccessfulResults;

  ResponseMetadata m_responseMetadata;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_successfulResultsHasBeenSet = false;
  bool m_unsuccessfulResultsHasBeenSet = false;
  bool m_responseMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
