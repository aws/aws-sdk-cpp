/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/connectcases/model/RelatedItemContent.h>
#include <aws/connectcases/model/RelatedItemType.h>
#include <aws/connectcases/model/UserUnion.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/Optional.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace ConnectCases {
namespace Model {
class UpdateRelatedItemResult {
 public:
  AWS_CONNECTCASES_API UpdateRelatedItemResult() = default;
  AWS_CONNECTCASES_API UpdateRelatedItemResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CONNECTCASES_API UpdateRelatedItemResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The unique identifier of the updated related item.</p>
   */
  inline const Aws::String& GetRelatedItemId() const { return m_relatedItemId; }
  template <typename RelatedItemIdT = Aws::String>
  void SetRelatedItemId(RelatedItemIdT&& value) {
    m_relatedItemIdHasBeenSet = true;
    m_relatedItemId = std::forward<RelatedItemIdT>(value);
  }
  template <typename RelatedItemIdT = Aws::String>
  UpdateRelatedItemResult& WithRelatedItemId(RelatedItemIdT&& value) {
    SetRelatedItemId(std::forward<RelatedItemIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the updated related item.</p>
   */
  inline const Aws::String& GetRelatedItemArn() const { return m_relatedItemArn; }
  template <typename RelatedItemArnT = Aws::String>
  void SetRelatedItemArn(RelatedItemArnT&& value) {
    m_relatedItemArnHasBeenSet = true;
    m_relatedItemArn = std::forward<RelatedItemArnT>(value);
  }
  template <typename RelatedItemArnT = Aws::String>
  UpdateRelatedItemResult& WithRelatedItemArn(RelatedItemArnT&& value) {
    SetRelatedItemArn(std::forward<RelatedItemArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Type of the updated related item.</p>
   */
  inline RelatedItemType GetType() const { return m_type; }
  inline void SetType(RelatedItemType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline UpdateRelatedItemResult& WithType(RelatedItemType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Represents the content of the updated related item.</p>
   */
  inline const RelatedItemContent& GetContent() const { return m_content; }
  template <typename ContentT = RelatedItemContent>
  void SetContent(ContentT&& value) {
    m_contentHasBeenSet = true;
    m_content = std::forward<ContentT>(value);
  }
  template <typename ContentT = RelatedItemContent>
  UpdateRelatedItemResult& WithContent(ContentT&& value) {
    SetContent(std::forward<ContentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Time at which the related item was associated with the case.</p>
   */
  inline const Aws::Utils::DateTime& GetAssociationTime() const { return m_associationTime; }
  template <typename AssociationTimeT = Aws::Utils::DateTime>
  void SetAssociationTime(AssociationTimeT&& value) {
    m_associationTimeHasBeenSet = true;
    m_associationTime = std::forward<AssociationTimeT>(value);
  }
  template <typename AssociationTimeT = Aws::Utils::DateTime>
  UpdateRelatedItemResult& WithAssociationTime(AssociationTimeT&& value) {
    SetAssociationTime(std::forward<AssociationTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A map of of key-value pairs that represent tags on a resource. Tags are used
   * to organize, track, or control access for this resource.</p>
   */
  inline const Aws::Map<Aws::String, Aws::Crt::Optional<Aws::String>>& GetTags() const { return m_tags; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::Crt::Optional<Aws::String>>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::Crt::Optional<Aws::String>>>
  UpdateRelatedItemResult& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::Crt::Optional<Aws::String>>
  UpdateRelatedItemResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  inline UpdateRelatedItemResult& AddTags(Aws::String key, Aws::Crt::Optional<Aws::String> value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(key, value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Represents the last user that updated the related item.</p>
   */
  inline const UserUnion& GetLastUpdatedUser() const { return m_lastUpdatedUser; }
  template <typename LastUpdatedUserT = UserUnion>
  void SetLastUpdatedUser(LastUpdatedUserT&& value) {
    m_lastUpdatedUserHasBeenSet = true;
    m_lastUpdatedUser = std::forward<LastUpdatedUserT>(value);
  }
  template <typename LastUpdatedUserT = UserUnion>
  UpdateRelatedItemResult& WithLastUpdatedUser(LastUpdatedUserT&& value) {
    SetLastUpdatedUser(std::forward<LastUpdatedUserT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Represents the creator of the related item.</p>
   */
  inline const UserUnion& GetCreatedBy() const { return m_createdBy; }
  template <typename CreatedByT = UserUnion>
  void SetCreatedBy(CreatedByT&& value) {
    m_createdByHasBeenSet = true;
    m_createdBy = std::forward<CreatedByT>(value);
  }
  template <typename CreatedByT = UserUnion>
  UpdateRelatedItemResult& WithCreatedBy(CreatedByT&& value) {
    SetCreatedBy(std::forward<CreatedByT>(value));
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
  UpdateRelatedItemResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_relatedItemId;

  Aws::String m_relatedItemArn;

  RelatedItemType m_type{RelatedItemType::NOT_SET};

  RelatedItemContent m_content;

  Aws::Utils::DateTime m_associationTime{};

  Aws::Map<Aws::String, Aws::Crt::Optional<Aws::String>> m_tags;

  UserUnion m_lastUpdatedUser;

  UserUnion m_createdBy;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_relatedItemIdHasBeenSet = false;
  bool m_relatedItemArnHasBeenSet = false;
  bool m_typeHasBeenSet = false;
  bool m_contentHasBeenSet = false;
  bool m_associationTimeHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_lastUpdatedUserHasBeenSet = false;
  bool m_createdByHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConnectCases
}  // namespace Aws
