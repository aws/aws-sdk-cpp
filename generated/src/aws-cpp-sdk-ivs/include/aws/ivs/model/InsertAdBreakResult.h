/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ivs/IVS_EXPORTS.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace IVS {
namespace Model {
class InsertAdBreakResult {
 public:
  AWS_IVS_API InsertAdBreakResult() = default;
  AWS_IVS_API InsertAdBreakResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_IVS_API InsertAdBreakResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>Unique identifier for the ad break that was inserted into the playlist.</p>
   */
  inline const Aws::String& GetAdBreakId() const { return m_adBreakId; }
  template <typename AdBreakIdT = Aws::String>
  void SetAdBreakId(AdBreakIdT&& value) {
    m_adBreakIdHasBeenSet = true;
    m_adBreakId = std::forward<AdBreakIdT>(value);
  }
  template <typename AdBreakIdT = Aws::String>
  InsertAdBreakResult& WithAdBreakId(AdBreakIdT&& value) {
    SetAdBreakId(std::forward<AdBreakIdT>(value));
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
  InsertAdBreakResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_adBreakId;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_adBreakIdHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace IVS
}  // namespace Aws
