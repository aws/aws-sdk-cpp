/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/appstream/model/AppBlockBuilder.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>
namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace AppStream {
namespace Model {
class CreateAppBlockBuilderResult {
 public:
  AWS_APPSTREAM_API CreateAppBlockBuilderResult() = default;
  AWS_APPSTREAM_API CreateAppBlockBuilderResult(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);
  AWS_APPSTREAM_API CreateAppBlockBuilderResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);

  ///@{

  inline const AppBlockBuilder& GetAppBlockBuilder() const { return m_appBlockBuilder; }
  template <typename AppBlockBuilderT = AppBlockBuilder>
  void SetAppBlockBuilder(AppBlockBuilderT&& value) {
    m_appBlockBuilderHasBeenSet = true;
    m_appBlockBuilder = std::forward<AppBlockBuilderT>(value);
  }
  template <typename AppBlockBuilderT = AppBlockBuilder>
  CreateAppBlockBuilderResult& WithAppBlockBuilder(AppBlockBuilderT&& value) {
    SetAppBlockBuilder(std::forward<AppBlockBuilderT>(value));
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
  CreateAppBlockBuilderResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  AppBlockBuilder m_appBlockBuilder;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_appBlockBuilderHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace AppStream
}  // namespace Aws
