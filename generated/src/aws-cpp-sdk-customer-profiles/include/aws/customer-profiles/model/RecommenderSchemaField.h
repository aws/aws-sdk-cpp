/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/customer-profiles/model/ContentType.h>
#include <aws/customer-profiles/model/FeatureType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace CustomerProfiles {
namespace Model {

/**
 * <p>Defines a column in a recommender schema, including the target field name and
 * optional feature and content type settings for training.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/RecommenderSchemaField">AWS
 * API Reference</a></p>
 */
class RecommenderSchemaField {
 public:
  AWS_CUSTOMERPROFILES_API RecommenderSchemaField() = default;
  AWS_CUSTOMERPROFILES_API RecommenderSchemaField(Aws::Utils::Json::JsonView jsonValue);
  AWS_CUSTOMERPROFILES_API RecommenderSchemaField& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the target field in the dataset, such as
   * <code>Location.City</code> or <code>Attributes.MealTime</code>.</p>
   */
  inline const Aws::String& GetTargetFieldName() const { return m_targetFieldName; }
  inline bool TargetFieldNameHasBeenSet() const { return m_targetFieldNameHasBeenSet; }
  template <typename TargetFieldNameT = Aws::String>
  void SetTargetFieldName(TargetFieldNameT&& value) {
    m_targetFieldNameHasBeenSet = true;
    m_targetFieldName = std::forward<TargetFieldNameT>(value);
  }
  template <typename TargetFieldNameT = Aws::String>
  RecommenderSchemaField& WithTargetFieldName(TargetFieldNameT&& value) {
    SetTargetFieldName(std::forward<TargetFieldNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The data type of the column value. Valid values are <code>String</code> and
   * <code>Number</code>. The default value is <code>String</code>.</p>
   */
  inline ContentType GetContentType() const { return m_contentType; }
  inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }
  inline void SetContentType(ContentType value) {
    m_contentTypeHasBeenSet = true;
    m_contentType = value;
  }
  inline RecommenderSchemaField& WithContentType(ContentType value) {
    SetContentType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>How the column is treated for model training. Valid values are
   * <code>CATEGORICAL</code> and <code>TEXTUAL</code>.</p>
   */
  inline FeatureType GetFeatureType() const { return m_featureType; }
  inline bool FeatureTypeHasBeenSet() const { return m_featureTypeHasBeenSet; }
  inline void SetFeatureType(FeatureType value) {
    m_featureTypeHasBeenSet = true;
    m_featureType = value;
  }
  inline RecommenderSchemaField& WithFeatureType(FeatureType value) {
    SetFeatureType(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_targetFieldName;

  ContentType m_contentType{ContentType::NOT_SET};

  FeatureType m_featureType{FeatureType::NOT_SET};
  bool m_targetFieldNameHasBeenSet = false;
  bool m_contentTypeHasBeenSet = false;
  bool m_featureTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
