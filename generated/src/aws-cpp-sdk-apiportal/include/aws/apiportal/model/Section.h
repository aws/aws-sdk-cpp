/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apiportal/APIPortal_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace APIPortal {
namespace Model {

/**
 * <p>A named group of API pages in the portal navigation.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/apiportal-2026-04-30/Section">AWS
 * API Reference</a></p>
 */
class Section {
 public:
  AWS_APIPORTAL_API Section() = default;
  AWS_APIPORTAL_API Section(Aws::Utils::Json::JsonView jsonValue);
  AWS_APIPORTAL_API Section& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_APIPORTAL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Shown in the portal navigation. Same bound as page titles and operation
   * names, and no control characters (the service rejects a blank name).</p>
   */
  inline const Aws::String& GetSectionName() const { return m_sectionName; }
  inline bool SectionNameHasBeenSet() const { return m_sectionNameHasBeenSet; }
  template <typename SectionNameT = Aws::String>
  void SetSectionName(SectionNameT&& value) {
    m_sectionNameHasBeenSet = true;
    m_sectionName = std::forward<SectionNameT>(value);
  }
  template <typename SectionNameT = Aws::String>
  Section& WithSectionName(SectionNameT&& value) {
    SetSectionName(std::forward<SectionNameT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Vector<Aws::String>& GetProductApiPageArns() const { return m_productApiPageArns; }
  inline bool ProductApiPageArnsHasBeenSet() const { return m_productApiPageArnsHasBeenSet; }
  template <typename ProductApiPageArnsT = Aws::Vector<Aws::String>>
  void SetProductApiPageArns(ProductApiPageArnsT&& value) {
    m_productApiPageArnsHasBeenSet = true;
    m_productApiPageArns = std::forward<ProductApiPageArnsT>(value);
  }
  template <typename ProductApiPageArnsT = Aws::Vector<Aws::String>>
  Section& WithProductApiPageArns(ProductApiPageArnsT&& value) {
    SetProductApiPageArns(std::forward<ProductApiPageArnsT>(value));
    return *this;
  }
  template <typename ProductApiPageArnsT = Aws::String>
  Section& AddProductApiPageArns(ProductApiPageArnsT&& value) {
    m_productApiPageArnsHasBeenSet = true;
    m_productApiPageArns.emplace_back(std::forward<ProductApiPageArnsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_sectionName;

  Aws::Vector<Aws::String> m_productApiPageArns;
  bool m_sectionNameHasBeenSet = false;
  bool m_productApiPageArnsHasBeenSet = false;
};

}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
