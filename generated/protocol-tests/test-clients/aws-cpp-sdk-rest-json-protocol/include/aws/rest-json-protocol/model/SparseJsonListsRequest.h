/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/Optional.h>
#include <aws/rest-json-protocol/RestJsonProtocolRequest.h>
#include <aws/rest-json-protocol/RestJsonProtocol_EXPORTS.h>

#include <utility>

namespace Aws {
namespace RestJsonProtocol {
namespace Model {

/**
 */
class SparseJsonListsRequest : public RestJsonProtocolRequest {
 public:
  AWS_RESTJSONPROTOCOL_API SparseJsonListsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "SparseJsonLists"; }

  AWS_RESTJSONPROTOCOL_API Aws::String SerializePayload() const override;

  AWS_RESTJSONPROTOCOL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{

  inline const Aws::Vector<Aws::Crt::Optional<Aws::String>>& GetSparseStringList() const { return m_sparseStringList; }
  inline bool SparseStringListHasBeenSet() const { return m_sparseStringListHasBeenSet; }
  template <typename SparseStringListT = Aws::Vector<Aws::Crt::Optional<Aws::String>>>
  void SetSparseStringList(SparseStringListT&& value) {
    m_sparseStringListHasBeenSet = true;
    m_sparseStringList = std::forward<SparseStringListT>(value);
  }
  template <typename SparseStringListT = Aws::Vector<Aws::Crt::Optional<Aws::String>>>
  SparseJsonListsRequest& WithSparseStringList(SparseStringListT&& value) {
    SetSparseStringList(std::forward<SparseStringListT>(value));
    return *this;
  }
  template <typename SparseStringListT = Aws::String>
  SparseJsonListsRequest& AddSparseStringList(SparseStringListT&& value) {
    m_sparseStringListHasBeenSet = true;
    m_sparseStringList.emplace_back(std::forward<SparseStringListT>(value));
    return *this;
  }
  inline SparseJsonListsRequest& AddSparseStringList(Aws::Crt::Optional<Aws::String> value) {
    m_sparseStringListHasBeenSet = true;
    m_sparseStringList.push_back(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Vector<Aws::Crt::Optional<int>>& GetSparseShortList() const { return m_sparseShortList; }
  inline bool SparseShortListHasBeenSet() const { return m_sparseShortListHasBeenSet; }
  template <typename SparseShortListT = Aws::Vector<Aws::Crt::Optional<int>>>
  void SetSparseShortList(SparseShortListT&& value) {
    m_sparseShortListHasBeenSet = true;
    m_sparseShortList = std::forward<SparseShortListT>(value);
  }
  template <typename SparseShortListT = Aws::Vector<Aws::Crt::Optional<int>>>
  SparseJsonListsRequest& WithSparseShortList(SparseShortListT&& value) {
    SetSparseShortList(std::forward<SparseShortListT>(value));
    return *this;
  }
  inline SparseJsonListsRequest& AddSparseShortList(int value) {
    m_sparseShortListHasBeenSet = true;
    m_sparseShortList.push_back(value);
    return *this;
  }
  inline SparseJsonListsRequest& AddSparseShortList(Aws::Crt::Optional<int> value) {
    m_sparseShortListHasBeenSet = true;
    m_sparseShortList.push_back(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  SparseJsonListsRequest& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::Crt::Optional<Aws::String>> m_sparseStringList;

  Aws::Vector<Aws::Crt::Optional<int>> m_sparseShortList;

  Aws::String m_requestId;
  bool m_sparseStringListHasBeenSet = false;
  bool m_sparseShortListHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace RestJsonProtocol
}  // namespace Aws
