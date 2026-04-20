/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/groundstation/model/AntennaListItem.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace GroundStation {
namespace Model {
class ListAntennasResult {
 public:
  AWS_GROUNDSTATION_API ListAntennasResult() = default;
  AWS_GROUNDSTATION_API ListAntennasResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_GROUNDSTATION_API ListAntennasResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>List of antennas.</p>
   */
  inline const Aws::Vector<AntennaListItem>& GetAntennaList() const { return m_antennaList; }
  template <typename AntennaListT = Aws::Vector<AntennaListItem>>
  void SetAntennaList(AntennaListT&& value) {
    m_antennaListHasBeenSet = true;
    m_antennaList = std::forward<AntennaListT>(value);
  }
  template <typename AntennaListT = Aws::Vector<AntennaListItem>>
  ListAntennasResult& WithAntennaList(AntennaListT&& value) {
    SetAntennaList(std::forward<AntennaListT>(value));
    return *this;
  }
  template <typename AntennaListT = AntennaListItem>
  ListAntennasResult& AddAntennaList(AntennaListT&& value) {
    m_antennaListHasBeenSet = true;
    m_antennaList.emplace_back(std::forward<AntennaListT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Next token to be used in a subsequent <code>ListAntennas</code> call to
   * retrieve the next page of results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListAntennasResult& WithNextToken(NextTokenT&& value) {
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
  ListAntennasResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<AntennaListItem> m_antennaList;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_antennaListHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace GroundStation
}  // namespace Aws
