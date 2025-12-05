/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/customer-profiles/model/SegmentGroup.h>
#include <aws/customer-profiles/model/SegmentType.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace CustomerProfiles {
namespace Model {
class GetSegmentDefinitionResult {
 public:
  AWS_CUSTOMERPROFILES_API GetSegmentDefinitionResult() = default;
  AWS_CUSTOMERPROFILES_API GetSegmentDefinitionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CUSTOMERPROFILES_API GetSegmentDefinitionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The name of the segment definition.</p>
   */
  inline const Aws::String& GetSegmentDefinitionName() const { return m_segmentDefinitionName; }
  template <typename SegmentDefinitionNameT = Aws::String>
  void SetSegmentDefinitionName(SegmentDefinitionNameT&& value) {
    m_segmentDefinitionNameHasBeenSet = true;
    m_segmentDefinitionName = std::forward<SegmentDefinitionNameT>(value);
  }
  template <typename SegmentDefinitionNameT = Aws::String>
  GetSegmentDefinitionResult& WithSegmentDefinitionName(SegmentDefinitionNameT&& value) {
    SetSegmentDefinitionName(std::forward<SegmentDefinitionNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The display name of the segment definition.</p>
   */
  inline const Aws::String& GetDisplayName() const { return m_displayName; }
  template <typename DisplayNameT = Aws::String>
  void SetDisplayName(DisplayNameT&& value) {
    m_displayNameHasBeenSet = true;
    m_displayName = std::forward<DisplayNameT>(value);
  }
  template <typename DisplayNameT = Aws::String>
  GetSegmentDefinitionResult& WithDisplayName(DisplayNameT&& value) {
    SetDisplayName(std::forward<DisplayNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the segment definition.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  GetSegmentDefinitionResult& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The segment criteria associated with this definition.</p>
   */
  inline const SegmentGroup& GetSegmentGroups() const { return m_segmentGroups; }
  template <typename SegmentGroupsT = SegmentGroup>
  void SetSegmentGroups(SegmentGroupsT&& value) {
    m_segmentGroupsHasBeenSet = true;
    m_segmentGroups = std::forward<SegmentGroupsT>(value);
  }
  template <typename SegmentGroupsT = SegmentGroup>
  GetSegmentDefinitionResult& WithSegmentGroups(SegmentGroupsT&& value) {
    SetSegmentGroups(std::forward<SegmentGroupsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The arn of the segment definition.</p>
   */
  inline const Aws::String& GetSegmentDefinitionArn() const { return m_segmentDefinitionArn; }
  template <typename SegmentDefinitionArnT = Aws::String>
  void SetSegmentDefinitionArn(SegmentDefinitionArnT&& value) {
    m_segmentDefinitionArnHasBeenSet = true;
    m_segmentDefinitionArn = std::forward<SegmentDefinitionArnT>(value);
  }
  template <typename SegmentDefinitionArnT = Aws::String>
  GetSegmentDefinitionResult& WithSegmentDefinitionArn(SegmentDefinitionArnT&& value) {
    SetSegmentDefinitionArn(std::forward<SegmentDefinitionArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp of when the segment definition was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  GetSegmentDefinitionResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags used to organize, track, or control access for this resource.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  GetSegmentDefinitionResult& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  GetSegmentDefinitionResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The segment SQL query.</p>
   */
  inline const Aws::String& GetSegmentSqlQuery() const { return m_segmentSqlQuery; }
  template <typename SegmentSqlQueryT = Aws::String>
  void SetSegmentSqlQuery(SegmentSqlQueryT&& value) {
    m_segmentSqlQueryHasBeenSet = true;
    m_segmentSqlQuery = std::forward<SegmentSqlQueryT>(value);
  }
  template <typename SegmentSqlQueryT = Aws::String>
  GetSegmentDefinitionResult& WithSegmentSqlQuery(SegmentSqlQueryT&& value) {
    SetSegmentSqlQuery(std::forward<SegmentSqlQueryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The segment type.</p> <p> Classic : Segments created using traditional
   * SegmentGroup structure</p> <p> Enhanced : Segments created using SQL queries
   * </p>
   */
  inline SegmentType GetSegmentType() const { return m_segmentType; }
  inline void SetSegmentType(SegmentType value) {
    m_segmentTypeHasBeenSet = true;
    m_segmentType = value;
  }
  inline GetSegmentDefinitionResult& WithSegmentType(SegmentType value) {
    SetSegmentType(value);
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
  GetSegmentDefinitionResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_segmentDefinitionName;

  Aws::String m_displayName;

  Aws::String m_description;

  SegmentGroup m_segmentGroups;

  Aws::String m_segmentDefinitionArn;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Map<Aws::String, Aws::String> m_tags;

  Aws::String m_segmentSqlQuery;

  SegmentType m_segmentType{SegmentType::NOT_SET};

  Aws::String m_requestId;
  bool m_segmentDefinitionNameHasBeenSet = false;
  bool m_displayNameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_segmentGroupsHasBeenSet = false;
  bool m_segmentDefinitionArnHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_segmentSqlQueryHasBeenSet = false;
  bool m_segmentTypeHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
