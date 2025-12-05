/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/appstream/model/SoftwareAssociations.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace AppStream {
namespace Model {
class DescribeSoftwareAssociationsResult {
 public:
  AWS_APPSTREAM_API DescribeSoftwareAssociationsResult() = default;
  AWS_APPSTREAM_API DescribeSoftwareAssociationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_APPSTREAM_API DescribeSoftwareAssociationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The ARN of the resource to describe software associations.</p>
   */
  inline const Aws::String& GetAssociatedResource() const { return m_associatedResource; }
  template <typename AssociatedResourceT = Aws::String>
  void SetAssociatedResource(AssociatedResourceT&& value) {
    m_associatedResourceHasBeenSet = true;
    m_associatedResource = std::forward<AssociatedResourceT>(value);
  }
  template <typename AssociatedResourceT = Aws::String>
  DescribeSoftwareAssociationsResult& WithAssociatedResource(AssociatedResourceT&& value) {
    SetAssociatedResource(std::forward<AssociatedResourceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Collection of license included applications association details
   * including:</p> <ul> <li> <p>License included application name and version
   * information</p> </li> <li> <p>Deployment status (SoftwareDeploymentStatus
   * enum)</p> </li> <li> <p>Error details for failed deployments</p> </li> <li>
   * <p>Association timestamps</p> </li> </ul>
   */
  inline const Aws::Vector<SoftwareAssociations>& GetSoftwareAssociations() const { return m_softwareAssociations; }
  template <typename SoftwareAssociationsT = Aws::Vector<SoftwareAssociations>>
  void SetSoftwareAssociations(SoftwareAssociationsT&& value) {
    m_softwareAssociationsHasBeenSet = true;
    m_softwareAssociations = std::forward<SoftwareAssociationsT>(value);
  }
  template <typename SoftwareAssociationsT = Aws::Vector<SoftwareAssociations>>
  DescribeSoftwareAssociationsResult& WithSoftwareAssociations(SoftwareAssociationsT&& value) {
    SetSoftwareAssociations(std::forward<SoftwareAssociationsT>(value));
    return *this;
  }
  template <typename SoftwareAssociationsT = SoftwareAssociations>
  DescribeSoftwareAssociationsResult& AddSoftwareAssociations(SoftwareAssociationsT&& value) {
    m_softwareAssociationsHasBeenSet = true;
    m_softwareAssociations.emplace_back(std::forward<SoftwareAssociationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The pagination token to use to retrieve the next page of results for this
   * operation.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  DescribeSoftwareAssociationsResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  DescribeSoftwareAssociationsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_associatedResource;

  Aws::Vector<SoftwareAssociations> m_softwareAssociations;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  bool m_associatedResourceHasBeenSet = false;
  bool m_softwareAssociationsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace AppStream
}  // namespace Aws
