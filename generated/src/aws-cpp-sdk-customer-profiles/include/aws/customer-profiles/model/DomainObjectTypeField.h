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
 * <p>The standard domain object type.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/DomainObjectTypeField">AWS
 * API Reference</a></p>
 */
class DomainObjectTypeField {
 public:
  AWS_CUSTOMERPROFILES_API DomainObjectTypeField() = default;
  AWS_CUSTOMERPROFILES_API DomainObjectTypeField(Aws::Utils::Json::JsonView jsonValue);
  AWS_CUSTOMERPROFILES_API DomainObjectTypeField& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The expression that defines how to extract the field value from the source
   * object.&gt;</p>
   */
  inline const Aws::String& GetSource() const { return m_source; }
  inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
  template <typename SourceT = Aws::String>
  void SetSource(SourceT&& value) {
    m_sourceHasBeenSet = true;
    m_source = std::forward<SourceT>(value);
  }
  template <typename SourceT = Aws::String>
  DomainObjectTypeField& WithSource(SourceT&& value) {
    SetSource(std::forward<SourceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The expression that defines where the field value should be placed in the
   * standard domain object.</p>
   */
  inline const Aws::String& GetTarget() const { return m_target; }
  inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }
  template <typename TargetT = Aws::String>
  void SetTarget(TargetT&& value) {
    m_targetHasBeenSet = true;
    m_target = std::forward<TargetT>(value);
  }
  template <typename TargetT = Aws::String>
  DomainObjectTypeField& WithTarget(TargetT&& value) {
    SetTarget(std::forward<TargetT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The content type of the field.</p>
   */
  inline ContentType GetContentType() const { return m_contentType; }
  inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }
  inline void SetContentType(ContentType value) {
    m_contentTypeHasBeenSet = true;
    m_contentType = value;
  }
  inline DomainObjectTypeField& WithContentType(ContentType value) {
    SetContentType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The semantic meaning of the field.</p>
   */
  inline FeatureType GetFeatureType() const { return m_featureType; }
  inline bool FeatureTypeHasBeenSet() const { return m_featureTypeHasBeenSet; }
  inline void SetFeatureType(FeatureType value) {
    m_featureTypeHasBeenSet = true;
    m_featureType = value;
  }
  inline DomainObjectTypeField& WithFeatureType(FeatureType value) {
    SetFeatureType(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_source;
  bool m_sourceHasBeenSet = false;

  Aws::String m_target;
  bool m_targetHasBeenSet = false;

  ContentType m_contentType{ContentType::NOT_SET};
  bool m_contentTypeHasBeenSet = false;

  FeatureType m_featureType{FeatureType::NOT_SET};
  bool m_featureTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
