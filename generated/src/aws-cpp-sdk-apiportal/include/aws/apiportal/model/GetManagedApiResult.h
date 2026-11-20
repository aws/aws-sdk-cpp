/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apiportal/APIPortal_EXPORTS.h>
#include <aws/apiportal/model/ApiSignature.h>
#include <aws/apiportal/model/ManagedApiFinding.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace APIPortal {
namespace Model {
class GetManagedApiResult {
 public:
  AWS_APIPORTAL_API GetManagedApiResult() = default;
  AWS_APIPORTAL_API GetManagedApiResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_APIPORTAL_API GetManagedApiResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The identifier of the Managed API.</p>
   */
  inline const Aws::String& GetManagedApiId() const { return m_managedApiId; }
  template <typename ManagedApiIdT = Aws::String>
  void SetManagedApiId(ManagedApiIdT&& value) {
    m_managedApiIdHasBeenSet = true;
    m_managedApiId = std::forward<ManagedApiIdT>(value);
  }
  template <typename ManagedApiIdT = Aws::String>
  GetManagedApiResult& WithManagedApiId(ManagedApiIdT&& value) {
    SetManagedApiId(std::forward<ManagedApiIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the Managed API.</p>
   */
  inline const Aws::String& GetManagedApiArn() const { return m_managedApiArn; }
  template <typename ManagedApiArnT = Aws::String>
  void SetManagedApiArn(ManagedApiArnT&& value) {
    m_managedApiArnHasBeenSet = true;
    m_managedApiArn = std::forward<ManagedApiArnT>(value);
  }
  template <typename ManagedApiArnT = Aws::String>
  GetManagedApiResult& WithManagedApiArn(ManagedApiArnT&& value) {
    SetManagedApiArn(std::forward<ManagedApiArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The attributes that identify the API.</p>
   */
  inline const ApiSignature& GetApiSignature() const { return m_apiSignature; }
  template <typename ApiSignatureT = ApiSignature>
  void SetApiSignature(ApiSignatureT&& value) {
    m_apiSignatureHasBeenSet = true;
    m_apiSignature = std::forward<ApiSignatureT>(value);
  }
  template <typename ApiSignatureT = ApiSignature>
  GetManagedApiResult& WithApiSignature(ApiSignatureT&& value) {
    SetApiSignature(std::forward<ApiSignatureT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>When the resource was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  GetManagedApiResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>When the resource was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  GetManagedApiResult& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The security posture findings for the API, up to 100.</p>
   */
  inline const Aws::Vector<ManagedApiFinding>& GetFindings() const { return m_findings; }
  template <typename FindingsT = Aws::Vector<ManagedApiFinding>>
  void SetFindings(FindingsT&& value) {
    m_findingsHasBeenSet = true;
    m_findings = std::forward<FindingsT>(value);
  }
  template <typename FindingsT = Aws::Vector<ManagedApiFinding>>
  GetManagedApiResult& WithFindings(FindingsT&& value) {
    SetFindings(std::forward<FindingsT>(value));
    return *this;
  }
  template <typename FindingsT = ManagedApiFinding>
  GetManagedApiResult& AddFindings(FindingsT&& value) {
    m_findingsHasBeenSet = true;
    m_findings.emplace_back(std::forward<FindingsT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  GetManagedApiResult& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  GetManagedApiResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
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
  GetManagedApiResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_managedApiId;

  Aws::String m_managedApiArn;

  ApiSignature m_apiSignature;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};

  Aws::Vector<ManagedApiFinding> m_findings;

  Aws::Map<Aws::String, Aws::String> m_tags;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_managedApiIdHasBeenSet = false;
  bool m_managedApiArnHasBeenSet = false;
  bool m_apiSignatureHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_findingsHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
