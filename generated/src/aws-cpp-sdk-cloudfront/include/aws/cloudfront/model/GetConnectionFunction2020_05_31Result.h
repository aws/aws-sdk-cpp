/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/stream/ResponseStream.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace CloudFront {
namespace Model {
class GetConnectionFunction2020_05_31Result {
 public:
  AWS_CLOUDFRONT_API GetConnectionFunction2020_05_31Result() = default;
  AWS_CLOUDFRONT_API GetConnectionFunction2020_05_31Result(GetConnectionFunction2020_05_31Result&&) = default;
  AWS_CLOUDFRONT_API GetConnectionFunction2020_05_31Result& operator=(GetConnectionFunction2020_05_31Result&&) = default;
  // we delete these because Microsoft doesn't handle move generation correctly
  // and we therefore don't trust them to get it right here either.
  GetConnectionFunction2020_05_31Result(const GetConnectionFunction2020_05_31Result&) = delete;
  GetConnectionFunction2020_05_31Result& operator=(const GetConnectionFunction2020_05_31Result&) = delete;

  AWS_CLOUDFRONT_API GetConnectionFunction2020_05_31Result(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);
  AWS_CLOUDFRONT_API GetConnectionFunction2020_05_31Result& operator=(
      Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);

  ///@{
  /**
   * <p>The connection function's code.</p>
   */
  inline Aws::IOStream& GetConnectionFunctionCode() const { return m_connectionFunctionCode.GetUnderlyingStream(); }
  inline void ReplaceBody(Aws::IOStream* body) { m_connectionFunctionCode = Aws::Utils::Stream::ResponseStream(body); }

  ///@}

  ///@{
  /**
   * <p>The version identifier for the current version of the connection
   * function.</p>
   */
  inline const Aws::String& GetETag() const { return m_eTag; }
  template <typename ETagT = Aws::String>
  void SetETag(ETagT&& value) {
    m_eTagHasBeenSet = true;
    m_eTag = std::forward<ETagT>(value);
  }
  template <typename ETagT = Aws::String>
  GetConnectionFunction2020_05_31Result& WithETag(ETagT&& value) {
    SetETag(std::forward<ETagT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The connection function's content type.</p>
   */
  inline const Aws::String& GetContentType() const { return m_contentType; }
  template <typename ContentTypeT = Aws::String>
  void SetContentType(ContentTypeT&& value) {
    m_contentTypeHasBeenSet = true;
    m_contentType = std::forward<ContentTypeT>(value);
  }
  template <typename ContentTypeT = Aws::String>
  GetConnectionFunction2020_05_31Result& WithContentType(ContentTypeT&& value) {
    SetContentType(std::forward<ContentTypeT>(value));
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
  GetConnectionFunction2020_05_31Result& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Utils::Stream::ResponseStream m_connectionFunctionCode{};
  bool m_connectionFunctionCodeHasBeenSet = false;

  Aws::String m_eTag;
  bool m_eTagHasBeenSet = false;

  Aws::String m_contentType;
  bool m_contentTypeHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudFront
}  // namespace Aws
