/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/DataZone_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace DataZone {
namespace Model {

/**
 * <p>The configuration of a connection.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/Configuration">AWS
 * API Reference</a></p>
 */
class Configuration {
 public:
  AWS_DATAZONE_API Configuration() = default;
  AWS_DATAZONE_API Configuration(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATAZONE_API Configuration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The classification of the connection configuration.</p>
   */
  inline const Aws::String& GetClassification() const { return m_classification; }
  inline bool ClassificationHasBeenSet() const { return m_classificationHasBeenSet; }
  template <typename ClassificationT = Aws::String>
  void SetClassification(ClassificationT&& value) {
    m_classificationHasBeenSet = true;
    m_classification = std::forward<ClassificationT>(value);
  }
  template <typename ClassificationT = Aws::String>
  Configuration& WithClassification(ClassificationT&& value) {
    SetClassification(std::forward<ClassificationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The properties of the connection configuration.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetProperties() const { return m_properties; }
  inline bool PropertiesHasBeenSet() const { return m_propertiesHasBeenSet; }
  template <typename PropertiesT = Aws::Map<Aws::String, Aws::String>>
  void SetProperties(PropertiesT&& value) {
    m_propertiesHasBeenSet = true;
    m_properties = std::forward<PropertiesT>(value);
  }
  template <typename PropertiesT = Aws::Map<Aws::String, Aws::String>>
  Configuration& WithProperties(PropertiesT&& value) {
    SetProperties(std::forward<PropertiesT>(value));
    return *this;
  }
  template <typename PropertiesKeyT = Aws::String, typename PropertiesValueT = Aws::String>
  Configuration& AddProperties(PropertiesKeyT&& key, PropertiesValueT&& value) {
    m_propertiesHasBeenSet = true;
    m_properties.emplace(std::forward<PropertiesKeyT>(key), std::forward<PropertiesValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_classification;

  Aws::Map<Aws::String, Aws::String> m_properties;
  bool m_classificationHasBeenSet = false;
  bool m_propertiesHasBeenSet = false;
};

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
