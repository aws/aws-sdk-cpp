/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/iam/model/ResponseMetadata.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Xml {
class XmlDocument;
}  // namespace Xml
}  // namespace Utils
namespace IAM {
namespace Model {
class GetAccountPropertiesResult {
 public:
  AWS_IAM_API GetAccountPropertiesResult() = default;
  AWS_IAM_API GetAccountPropertiesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_IAM_API GetAccountPropertiesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{
  /**
   * <p>A map of account property key-value pairs. Keys are in the format
   * <code>Namespace/PropertyName</code>.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetProperties() const { return m_properties; }
  template <typename PropertiesT = Aws::Map<Aws::String, Aws::String>>
  void SetProperties(PropertiesT&& value) {
    m_propertiesHasBeenSet = true;
    m_properties = std::forward<PropertiesT>(value);
  }
  template <typename PropertiesT = Aws::Map<Aws::String, Aws::String>>
  GetAccountPropertiesResult& WithProperties(PropertiesT&& value) {
    SetProperties(std::forward<PropertiesT>(value));
    return *this;
  }
  template <typename PropertiesKeyT = Aws::String, typename PropertiesValueT = Aws::String>
  GetAccountPropertiesResult& AddProperties(PropertiesKeyT&& key, PropertiesValueT&& value) {
    m_propertiesHasBeenSet = true;
    m_properties.emplace(std::forward<PropertiesKeyT>(key), std::forward<PropertiesValueT>(value));
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
  GetAccountPropertiesResult& WithResponseMetadata(ResponseMetadataT&& value) {
    SetResponseMetadata(std::forward<ResponseMetadataT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Map<Aws::String, Aws::String> m_properties;

  ResponseMetadata m_responseMetadata;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_propertiesHasBeenSet = false;
  bool m_responseMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace IAM
}  // namespace Aws
