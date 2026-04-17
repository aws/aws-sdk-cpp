/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/customer-profiles/CustomerProfilesRequest.h>
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/customer-profiles/model/RecommenderSchemaField.h>

#include <utility>

namespace Aws {
namespace CustomerProfiles {
namespace Model {

/**
 */
class CreateRecommenderSchemaRequest : public CustomerProfilesRequest {
 public:
  AWS_CUSTOMERPROFILES_API CreateRecommenderSchemaRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateRecommenderSchema"; }

  AWS_CUSTOMERPROFILES_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The unique name of the domain.</p>
   */
  inline const Aws::String& GetDomainName() const { return m_domainName; }
  inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
  template <typename DomainNameT = Aws::String>
  void SetDomainName(DomainNameT&& value) {
    m_domainNameHasBeenSet = true;
    m_domainName = std::forward<DomainNameT>(value);
  }
  template <typename DomainNameT = Aws::String>
  CreateRecommenderSchemaRequest& WithDomainName(DomainNameT&& value) {
    SetDomainName(std::forward<DomainNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the recommender schema. The name must be unique within the
   * domain.</p>
   */
  inline const Aws::String& GetRecommenderSchemaName() const { return m_recommenderSchemaName; }
  inline bool RecommenderSchemaNameHasBeenSet() const { return m_recommenderSchemaNameHasBeenSet; }
  template <typename RecommenderSchemaNameT = Aws::String>
  void SetRecommenderSchemaName(RecommenderSchemaNameT&& value) {
    m_recommenderSchemaNameHasBeenSet = true;
    m_recommenderSchemaName = std::forward<RecommenderSchemaNameT>(value);
  }
  template <typename RecommenderSchemaNameT = Aws::String>
  CreateRecommenderSchemaRequest& WithRecommenderSchemaName(RecommenderSchemaNameT&& value) {
    SetRecommenderSchemaName(std::forward<RecommenderSchemaNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A map of dataset type to column definitions that specifies which data columns
   * to include in the schema. Currently only the <code>_webAnalytics</code> key is
   * supported.</p>
   */
  inline const Aws::Map<Aws::String, Aws::Vector<RecommenderSchemaField>>& GetFields() const { return m_fields; }
  inline bool FieldsHasBeenSet() const { return m_fieldsHasBeenSet; }
  template <typename FieldsT = Aws::Map<Aws::String, Aws::Vector<RecommenderSchemaField>>>
  void SetFields(FieldsT&& value) {
    m_fieldsHasBeenSet = true;
    m_fields = std::forward<FieldsT>(value);
  }
  template <typename FieldsT = Aws::Map<Aws::String, Aws::Vector<RecommenderSchemaField>>>
  CreateRecommenderSchemaRequest& WithFields(FieldsT&& value) {
    SetFields(std::forward<FieldsT>(value));
    return *this;
  }
  template <typename FieldsKeyT = Aws::String, typename FieldsValueT = Aws::Vector<RecommenderSchemaField>>
  CreateRecommenderSchemaRequest& AddFields(FieldsKeyT&& key, FieldsValueT&& value) {
    m_fieldsHasBeenSet = true;
    m_fields.emplace(std::forward<FieldsKeyT>(key), std::forward<FieldsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags used to organize, track, or control access for this resource.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  CreateRecommenderSchemaRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  CreateRecommenderSchemaRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_domainName;

  Aws::String m_recommenderSchemaName;

  Aws::Map<Aws::String, Aws::Vector<RecommenderSchemaField>> m_fields;

  Aws::Map<Aws::String, Aws::String> m_tags;
  bool m_domainNameHasBeenSet = false;
  bool m_recommenderSchemaNameHasBeenSet = false;
  bool m_fieldsHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
