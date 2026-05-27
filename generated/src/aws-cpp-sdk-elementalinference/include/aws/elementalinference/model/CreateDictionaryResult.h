/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elementalinference/ElementalInference_EXPORTS.h>
#include <aws/elementalinference/model/DictionaryLanguage.h>
#include <aws/elementalinference/model/DictionaryStatus.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace ElementalInference {
namespace Model {
class CreateDictionaryResult {
 public:
  AWS_ELEMENTALINFERENCE_API CreateDictionaryResult() = default;
  AWS_ELEMENTALINFERENCE_API CreateDictionaryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_ELEMENTALINFERENCE_API CreateDictionaryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The name that you specified in the request.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  CreateDictionaryResult& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the dictionary.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  CreateDictionaryResult& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique ID that Elemental Inference assigns to the dictionary.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  CreateDictionaryResult& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The language of the dictionary.</p>
   */
  inline DictionaryLanguage GetLanguage() const { return m_language; }
  inline void SetLanguage(DictionaryLanguage value) {
    m_languageHasBeenSet = true;
    m_language = value;
  }
  inline CreateDictionaryResult& WithLanguage(DictionaryLanguage value) {
    SetLanguage(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the dictionary. After creation succeeds, the status
   * will be AVAILABLE. </p>
   */
  inline DictionaryStatus GetStatus() const { return m_status; }
  inline void SetStatus(DictionaryStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline CreateDictionaryResult& WithStatus(DictionaryStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of feed IDs that reference this dictionary.</p>
   */
  inline const Aws::Vector<Aws::String>& GetReferences() const { return m_references; }
  template <typename ReferencesT = Aws::Vector<Aws::String>>
  void SetReferences(ReferencesT&& value) {
    m_referencesHasBeenSet = true;
    m_references = std::forward<ReferencesT>(value);
  }
  template <typename ReferencesT = Aws::Vector<Aws::String>>
  CreateDictionaryResult& WithReferences(ReferencesT&& value) {
    SetReferences(std::forward<ReferencesT>(value));
    return *this;
  }
  template <typename ReferencesT = Aws::String>
  CreateDictionaryResult& AddReferences(ReferencesT&& value) {
    m_referencesHasBeenSet = true;
    m_references.emplace_back(std::forward<ReferencesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Any tags that you included when you created the dictionary.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  CreateDictionaryResult& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  CreateDictionaryResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
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
  CreateDictionaryResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_name;

  Aws::String m_arn;

  Aws::String m_id;

  DictionaryLanguage m_language{DictionaryLanguage::NOT_SET};

  DictionaryStatus m_status{DictionaryStatus::NOT_SET};

  Aws::Vector<Aws::String> m_references;

  Aws::Map<Aws::String, Aws::String> m_tags;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_nameHasBeenSet = false;
  bool m_arnHasBeenSet = false;
  bool m_idHasBeenSet = false;
  bool m_languageHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_referencesHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
