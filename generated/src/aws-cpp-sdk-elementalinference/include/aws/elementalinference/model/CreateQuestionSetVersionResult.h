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
#include <aws/elementalinference/model/ChooseOneQuestion.h>
#include <aws/elementalinference/model/YesNoPerOptionQuestion.h>
#include <aws/elementalinference/model/YesNoQuestion.h>

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
class CreateQuestionSetVersionResult {
 public:
  AWS_ELEMENTALINFERENCE_API CreateQuestionSetVersionResult() = default;
  AWS_ELEMENTALINFERENCE_API CreateQuestionSetVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_ELEMENTALINFERENCE_API CreateQuestionSetVersionResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The yesNo questions in this version. Elemental Inference doesn't return this
   * property if the version has no yesNo questions. </p>
   */
  inline const Aws::Vector<YesNoQuestion>& GetYesNo() const { return m_yesNo; }
  template <typename YesNoT = Aws::Vector<YesNoQuestion>>
  void SetYesNo(YesNoT&& value) {
    m_yesNoHasBeenSet = true;
    m_yesNo = std::forward<YesNoT>(value);
  }
  template <typename YesNoT = Aws::Vector<YesNoQuestion>>
  CreateQuestionSetVersionResult& WithYesNo(YesNoT&& value) {
    SetYesNo(std::forward<YesNoT>(value));
    return *this;
  }
  template <typename YesNoT = YesNoQuestion>
  CreateQuestionSetVersionResult& AddYesNo(YesNoT&& value) {
    m_yesNoHasBeenSet = true;
    m_yesNo.emplace_back(std::forward<YesNoT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The yesNoPerOption questions in this version. Elemental Inference doesn't
   * return this property if the version has no yesNoPerOption questions. </p>
   */
  inline const Aws::Vector<YesNoPerOptionQuestion>& GetYesNoPerOption() const { return m_yesNoPerOption; }
  template <typename YesNoPerOptionT = Aws::Vector<YesNoPerOptionQuestion>>
  void SetYesNoPerOption(YesNoPerOptionT&& value) {
    m_yesNoPerOptionHasBeenSet = true;
    m_yesNoPerOption = std::forward<YesNoPerOptionT>(value);
  }
  template <typename YesNoPerOptionT = Aws::Vector<YesNoPerOptionQuestion>>
  CreateQuestionSetVersionResult& WithYesNoPerOption(YesNoPerOptionT&& value) {
    SetYesNoPerOption(std::forward<YesNoPerOptionT>(value));
    return *this;
  }
  template <typename YesNoPerOptionT = YesNoPerOptionQuestion>
  CreateQuestionSetVersionResult& AddYesNoPerOption(YesNoPerOptionT&& value) {
    m_yesNoPerOptionHasBeenSet = true;
    m_yesNoPerOption.emplace_back(std::forward<YesNoPerOptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The chooseOne questions in this version. Elemental Inference doesn't return
   * this property if the version has no chooseOne questions. </p>
   */
  inline const Aws::Vector<ChooseOneQuestion>& GetChooseOne() const { return m_chooseOne; }
  template <typename ChooseOneT = Aws::Vector<ChooseOneQuestion>>
  void SetChooseOne(ChooseOneT&& value) {
    m_chooseOneHasBeenSet = true;
    m_chooseOne = std::forward<ChooseOneT>(value);
  }
  template <typename ChooseOneT = Aws::Vector<ChooseOneQuestion>>
  CreateQuestionSetVersionResult& WithChooseOne(ChooseOneT&& value) {
    SetChooseOne(std::forward<ChooseOneT>(value));
    return *this;
  }
  template <typename ChooseOneT = ChooseOneQuestion>
  CreateQuestionSetVersionResult& AddChooseOne(ChooseOneT&& value) {
    m_chooseOneHasBeenSet = true;
    m_chooseOne.emplace_back(std::forward<ChooseOneT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the question set.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  CreateQuestionSetVersionResult& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the question set.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  CreateQuestionSetVersionResult& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the question set at this version.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  CreateQuestionSetVersionResult& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of the version that Elemental Inference published. If DRAFT hadn't
   * changed since the latest version, this is the number of that existing version.
   * </p>
   */
  inline const Aws::String& GetVersion() const { return m_version; }
  template <typename VersionT = Aws::String>
  void SetVersion(VersionT&& value) {
    m_versionHasBeenSet = true;
    m_version = std::forward<VersionT>(value);
  }
  template <typename VersionT = Aws::String>
  CreateQuestionSetVersionResult& WithVersion(VersionT&& value) {
    SetVersion(std::forward<VersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the version. For a new version, this is the description
   * that you specified in the request. If DRAFT hadn't changed since the latest
   * version, this is the description of that existing version. Elemental Inference
   * doesn't return this property if the version has no description. </p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  CreateQuestionSetVersionResult& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of the highest version that you have published for this question
   * set. It's the same as version. </p>
   */
  inline const Aws::String& GetLatestVersion() const { return m_latestVersion; }
  template <typename LatestVersionT = Aws::String>
  void SetLatestVersion(LatestVersionT&& value) {
    m_latestVersionHasBeenSet = true;
    m_latestVersion = std::forward<LatestVersionT>(value);
  }
  template <typename LatestVersionT = Aws::String>
  CreateQuestionSetVersionResult& WithLatestVersion(LatestVersionT&& value) {
    SetLatestVersion(std::forward<LatestVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The SHA-256 hash of the version, as 64 lowercase hexadecimal characters. It's
   * the same as the hash of the DRAFT version that Elemental Inference published.
   * </p>
   */
  inline const Aws::String& GetSha256() const { return m_sha256; }
  template <typename Sha256T = Aws::String>
  void SetSha256(Sha256T&& value) {
    m_sha256HasBeenSet = true;
    m_sha256 = std::forward<Sha256T>(value);
  }
  template <typename Sha256T = Aws::String>
  CreateQuestionSetVersionResult& WithSha256(Sha256T&& value) {
    SetSha256(std::forward<Sha256T>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of feed IDs that reference this version of the question set. For a new
   * version, the list is empty. </p>
   */
  inline const Aws::Vector<Aws::String>& GetReferences() const { return m_references; }
  template <typename ReferencesT = Aws::Vector<Aws::String>>
  void SetReferences(ReferencesT&& value) {
    m_referencesHasBeenSet = true;
    m_references = std::forward<ReferencesT>(value);
  }
  template <typename ReferencesT = Aws::Vector<Aws::String>>
  CreateQuestionSetVersionResult& WithReferences(ReferencesT&& value) {
    SetReferences(std::forward<ReferencesT>(value));
    return *this;
  }
  template <typename ReferencesT = Aws::String>
  CreateQuestionSetVersionResult& AddReferences(ReferencesT&& value) {
    m_referencesHasBeenSet = true;
    m_references.emplace_back(std::forward<ReferencesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Any tags associated with the question set.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  CreateQuestionSetVersionResult& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  CreateQuestionSetVersionResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
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
  CreateQuestionSetVersionResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<YesNoQuestion> m_yesNo;

  Aws::Vector<YesNoPerOptionQuestion> m_yesNoPerOption;

  Aws::Vector<ChooseOneQuestion> m_chooseOne;

  Aws::String m_arn;

  Aws::String m_id;

  Aws::String m_name;

  Aws::String m_version;

  Aws::String m_description;

  Aws::String m_latestVersion;

  Aws::String m_sha256;

  Aws::Vector<Aws::String> m_references;

  Aws::Map<Aws::String, Aws::String> m_tags;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_yesNoHasBeenSet = false;
  bool m_yesNoPerOptionHasBeenSet = false;
  bool m_chooseOneHasBeenSet = false;
  bool m_arnHasBeenSet = false;
  bool m_idHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_versionHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_latestVersionHasBeenSet = false;
  bool m_sha256HasBeenSet = false;
  bool m_referencesHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
