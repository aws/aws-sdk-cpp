/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/connectcases/model/RelatedItemContent.h>
#include <aws/connectcases/model/RelatedItemType.h>
#include <aws/connectcases/model/UserUnion.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ConnectCases {
namespace Model {

/**
 * <p>A list of items that represent RelatedItems. This data type is similar to <a
 * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_connect-cases_SearchRelatedItemsResponseItem.html">SearchRelatedItemsResponseItem</a>
 * except Search<b>All</b>RelatedItemsResponseItem has a caseId
 * field.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/SearchAllRelatedItemsResponseItem">AWS
 * API Reference</a></p>
 */
class SearchAllRelatedItemsResponseItem {
 public:
  AWS_CONNECTCASES_API SearchAllRelatedItemsResponseItem() = default;
  AWS_CONNECTCASES_API SearchAllRelatedItemsResponseItem(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTCASES_API SearchAllRelatedItemsResponseItem& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTCASES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Unique identifier of a related item.</p>
   */
  inline const Aws::String& GetRelatedItemId() const { return m_relatedItemId; }
  inline bool RelatedItemIdHasBeenSet() const { return m_relatedItemIdHasBeenSet; }
  template <typename RelatedItemIdT = Aws::String>
  void SetRelatedItemId(RelatedItemIdT&& value) {
    m_relatedItemIdHasBeenSet = true;
    m_relatedItemId = std::forward<RelatedItemIdT>(value);
  }
  template <typename RelatedItemIdT = Aws::String>
  SearchAllRelatedItemsResponseItem& WithRelatedItemId(RelatedItemIdT&& value) {
    SetRelatedItemId(std::forward<RelatedItemIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique identifier of the case.</p>
   */
  inline const Aws::String& GetCaseId() const { return m_caseId; }
  inline bool CaseIdHasBeenSet() const { return m_caseIdHasBeenSet; }
  template <typename CaseIdT = Aws::String>
  void SetCaseId(CaseIdT&& value) {
    m_caseIdHasBeenSet = true;
    m_caseId = std::forward<CaseIdT>(value);
  }
  template <typename CaseIdT = Aws::String>
  SearchAllRelatedItemsResponseItem& WithCaseId(CaseIdT&& value) {
    SetCaseId(std::forward<CaseIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Type of a related item.</p>
   */
  inline RelatedItemType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(RelatedItemType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline SearchAllRelatedItemsResponseItem& WithType(RelatedItemType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Time at which a related item was associated with a case.</p>
   */
  inline const Aws::Utils::DateTime& GetAssociationTime() const { return m_associationTime; }
  inline bool AssociationTimeHasBeenSet() const { return m_associationTimeHasBeenSet; }
  template <typename AssociationTimeT = Aws::Utils::DateTime>
  void SetAssociationTime(AssociationTimeT&& value) {
    m_associationTimeHasBeenSet = true;
    m_associationTime = std::forward<AssociationTimeT>(value);
  }
  template <typename AssociationTimeT = Aws::Utils::DateTime>
  SearchAllRelatedItemsResponseItem& WithAssociationTime(AssociationTimeT&& value) {
    SetAssociationTime(std::forward<AssociationTimeT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const RelatedItemContent& GetContent() const { return m_content; }
  inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
  template <typename ContentT = RelatedItemContent>
  void SetContent(ContentT&& value) {
    m_contentHasBeenSet = true;
    m_content = std::forward<ContentT>(value);
  }
  template <typename ContentT = RelatedItemContent>
  SearchAllRelatedItemsResponseItem& WithContent(ContentT&& value) {
    SetContent(std::forward<ContentT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const UserUnion& GetPerformedBy() const { return m_performedBy; }
  inline bool PerformedByHasBeenSet() const { return m_performedByHasBeenSet; }
  template <typename PerformedByT = UserUnion>
  void SetPerformedBy(PerformedByT&& value) {
    m_performedByHasBeenSet = true;
    m_performedBy = std::forward<PerformedByT>(value);
  }
  template <typename PerformedByT = UserUnion>
  SearchAllRelatedItemsResponseItem& WithPerformedBy(PerformedByT&& value) {
    SetPerformedBy(std::forward<PerformedByT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A map of of key-value pairs that represent tags on a resource. Tags are used
   * to organize, track, or control access for this resource.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  SearchAllRelatedItemsResponseItem& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  SearchAllRelatedItemsResponseItem& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_relatedItemId;
  bool m_relatedItemIdHasBeenSet = false;

  Aws::String m_caseId;
  bool m_caseIdHasBeenSet = false;

  RelatedItemType m_type{RelatedItemType::NOT_SET};
  bool m_typeHasBeenSet = false;

  Aws::Utils::DateTime m_associationTime{};
  bool m_associationTimeHasBeenSet = false;

  RelatedItemContent m_content;
  bool m_contentHasBeenSet = false;

  UserUnion m_performedBy;
  bool m_performedByHasBeenSet = false;

  Aws::Map<Aws::String, Aws::String> m_tags;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConnectCases
}  // namespace Aws
