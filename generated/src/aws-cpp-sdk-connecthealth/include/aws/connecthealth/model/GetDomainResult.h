/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connecthealth/ConnectHealth_EXPORTS.h>
#include <aws/connecthealth/model/DomainStatus.h>
#include <aws/connecthealth/model/EncryptionContext.h>
#include <aws/connecthealth/model/WebAppConfiguration.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace ConnectHealth {
namespace Model {
class GetDomainResult {
 public:
  AWS_CONNECTHEALTH_API GetDomainResult() = default;
  AWS_CONNECTHEALTH_API GetDomainResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CONNECTHEALTH_API GetDomainResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p/>
   */
  inline const Aws::String& GetDomainId() const { return m_domainId; }
  template <typename DomainIdT = Aws::String>
  void SetDomainId(DomainIdT&& value) {
    m_domainIdHasBeenSet = true;
    m_domainId = std::forward<DomainIdT>(value);
  }
  template <typename DomainIdT = Aws::String>
  GetDomainResult& WithDomainId(DomainIdT&& value) {
    SetDomainId(std::forward<DomainIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p/>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  GetDomainResult& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p/>
   */
  inline const Aws::String& GetName() const { return m_name; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  GetDomainResult& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p/>
   */
  inline const Aws::String& GetKmsKeyArn() const { return m_kmsKeyArn; }
  template <typename KmsKeyArnT = Aws::String>
  void SetKmsKeyArn(KmsKeyArnT&& value) {
    m_kmsKeyArnHasBeenSet = true;
    m_kmsKeyArn = std::forward<KmsKeyArnT>(value);
  }
  template <typename KmsKeyArnT = Aws::String>
  GetDomainResult& WithKmsKeyArn(KmsKeyArnT&& value) {
    SetKmsKeyArn(std::forward<KmsKeyArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p/>
   */
  inline const EncryptionContext& GetEncryptionContext() const { return m_encryptionContext; }
  template <typename EncryptionContextT = EncryptionContext>
  void SetEncryptionContext(EncryptionContextT&& value) {
    m_encryptionContextHasBeenSet = true;
    m_encryptionContext = std::forward<EncryptionContextT>(value);
  }
  template <typename EncryptionContextT = EncryptionContext>
  GetDomainResult& WithEncryptionContext(EncryptionContextT&& value) {
    SetEncryptionContext(std::forward<EncryptionContextT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p/>
   */
  inline DomainStatus GetStatus() const { return m_status; }
  inline void SetStatus(DomainStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline GetDomainResult& WithStatus(DomainStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p/>
   */
  inline const Aws::String& GetWebAppUrl() const { return m_webAppUrl; }
  template <typename WebAppUrlT = Aws::String>
  void SetWebAppUrl(WebAppUrlT&& value) {
    m_webAppUrlHasBeenSet = true;
    m_webAppUrl = std::forward<WebAppUrlT>(value);
  }
  template <typename WebAppUrlT = Aws::String>
  GetDomainResult& WithWebAppUrl(WebAppUrlT&& value) {
    SetWebAppUrl(std::forward<WebAppUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p/>
   */
  inline const WebAppConfiguration& GetWebAppConfiguration() const { return m_webAppConfiguration; }
  template <typename WebAppConfigurationT = WebAppConfiguration>
  void SetWebAppConfiguration(WebAppConfigurationT&& value) {
    m_webAppConfigurationHasBeenSet = true;
    m_webAppConfiguration = std::forward<WebAppConfigurationT>(value);
  }
  template <typename WebAppConfigurationT = WebAppConfiguration>
  GetDomainResult& WithWebAppConfiguration(WebAppConfigurationT&& value) {
    SetWebAppConfiguration(std::forward<WebAppConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p/>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  GetDomainResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Tags associated with the Domain</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  GetDomainResult& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  GetDomainResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
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
  GetDomainResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_domainId;

  Aws::String m_arn;

  Aws::String m_name;

  Aws::String m_kmsKeyArn;

  EncryptionContext m_encryptionContext;

  DomainStatus m_status{DomainStatus::NOT_SET};

  Aws::String m_webAppUrl;

  WebAppConfiguration m_webAppConfiguration;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Map<Aws::String, Aws::String> m_tags;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_domainIdHasBeenSet = false;
  bool m_arnHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_kmsKeyArnHasBeenSet = false;
  bool m_encryptionContextHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_webAppUrlHasBeenSet = false;
  bool m_webAppConfigurationHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
