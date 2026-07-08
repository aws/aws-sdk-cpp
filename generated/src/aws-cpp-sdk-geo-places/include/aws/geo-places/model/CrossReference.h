/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/geo-places/GeoPlaces_EXPORTS.h>
#include <aws/geo-places/model/Category.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace GeoPlaces {
namespace Model {

/**
 * <p>A reference to a third-party supplier's identifier for a place, enabling
 * correlation of places across external systems.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/geo-places-2020-11-19/CrossReference">AWS
 * API Reference</a></p>
 */
class CrossReference {
 public:
  AWS_GEOPLACES_API CrossReference() = default;
  AWS_GEOPLACES_API CrossReference(Aws::Utils::Json::JsonView jsonValue);
  AWS_GEOPLACES_API CrossReference& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GEOPLACES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the third-party data supplier (for example, <code>Yelp</code> or
   * <code>TripAdvisor</code>).</p>
   */
  inline const Aws::String& GetSource() const { return m_source; }
  inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
  template <typename SourceT = Aws::String>
  void SetSource(SourceT&& value) {
    m_sourceHasBeenSet = true;
    m_source = std::forward<SourceT>(value);
  }
  template <typename SourceT = Aws::String>
  CrossReference& WithSource(SourceT&& value) {
    SetSource(std::forward<SourceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The place identifier assigned by the third-party supplier.</p>
   */
  inline const Aws::String& GetSourcePlaceId() const { return m_sourcePlaceId; }
  inline bool SourcePlaceIdHasBeenSet() const { return m_sourcePlaceIdHasBeenSet; }
  template <typename SourcePlaceIdT = Aws::String>
  void SetSourcePlaceId(SourcePlaceIdT&& value) {
    m_sourcePlaceIdHasBeenSet = true;
    m_sourcePlaceId = std::forward<SourcePlaceIdT>(value);
  }
  template <typename SourcePlaceIdT = Aws::String>
  CrossReference& WithSourcePlaceId(SourcePlaceIdT&& value) {
    SetSourcePlaceId(std::forward<SourcePlaceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of place category identifiers this supplier reference relates
   * to.</p>
   */
  inline const Aws::Vector<Category>& GetSourceCategories() const { return m_sourceCategories; }
  inline bool SourceCategoriesHasBeenSet() const { return m_sourceCategoriesHasBeenSet; }
  template <typename SourceCategoriesT = Aws::Vector<Category>>
  void SetSourceCategories(SourceCategoriesT&& value) {
    m_sourceCategoriesHasBeenSet = true;
    m_sourceCategories = std::forward<SourceCategoriesT>(value);
  }
  template <typename SourceCategoriesT = Aws::Vector<Category>>
  CrossReference& WithSourceCategories(SourceCategoriesT&& value) {
    SetSourceCategories(std::forward<SourceCategoriesT>(value));
    return *this;
  }
  template <typename SourceCategoriesT = Category>
  CrossReference& AddSourceCategories(SourceCategoriesT&& value) {
    m_sourceCategoriesHasBeenSet = true;
    m_sourceCategories.emplace_back(std::forward<SourceCategoriesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_source;

  Aws::String m_sourcePlaceId;

  Aws::Vector<Category> m_sourceCategories;
  bool m_sourceHasBeenSet = false;
  bool m_sourcePlaceIdHasBeenSet = false;
  bool m_sourceCategoriesHasBeenSet = false;
};

}  // namespace Model
}  // namespace GeoPlaces
}  // namespace Aws
