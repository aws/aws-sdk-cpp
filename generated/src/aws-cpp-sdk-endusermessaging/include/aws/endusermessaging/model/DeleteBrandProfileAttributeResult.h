/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/endusermessaging/EndUserMessaging_EXPORTS.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace EndUserMessaging {
namespace Model {
class DeleteBrandProfileAttributeResult {
 public:
  AWS_ENDUSERMESSAGING_API DeleteBrandProfileAttributeResult() = default;
  AWS_ENDUSERMESSAGING_API DeleteBrandProfileAttributeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_ENDUSERMESSAGING_API DeleteBrandProfileAttributeResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The unique identifier of the brand profile.</p>
   */
  inline const Aws::String& GetBrandProfileId() const { return m_brandProfileId; }
  template <typename BrandProfileIdT = Aws::String>
  void SetBrandProfileId(BrandProfileIdT&& value) {
    m_brandProfileIdHasBeenSet = true;
    m_brandProfileId = std::forward<BrandProfileIdT>(value);
  }
  template <typename BrandProfileIdT = Aws::String>
  DeleteBrandProfileAttributeResult& WithBrandProfileId(BrandProfileIdT&& value) {
    SetBrandProfileId(std::forward<BrandProfileIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the brand profile attribute. The name is unique within a brand
   * profile.</p>
   */
  inline const Aws::String& GetAttributeName() const { return m_attributeName; }
  template <typename AttributeNameT = Aws::String>
  void SetAttributeName(AttributeNameT&& value) {
    m_attributeNameHasBeenSet = true;
    m_attributeName = std::forward<AttributeNameT>(value);
  }
  template <typename AttributeNameT = Aws::String>
  DeleteBrandProfileAttributeResult& WithAttributeName(AttributeNameT&& value) {
    SetAttributeName(std::forward<AttributeNameT>(value));
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
  DeleteBrandProfileAttributeResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_brandProfileId;

  Aws::String m_attributeName;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_brandProfileIdHasBeenSet = false;
  bool m_attributeNameHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace EndUserMessaging
}  // namespace Aws
