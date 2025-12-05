/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigatewayv2/ApiGatewayV2_EXPORTS.h>
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
namespace ApiGatewayV2 {
namespace Model {

/**
 * <p>Contains the section name and list of product REST endpoints for a
 * product.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/Section">AWS
 * API Reference</a></p>
 */
class Section {
 public:
  AWS_APIGATEWAYV2_API Section() = default;
  AWS_APIGATEWAYV2_API Section(Aws::Utils::Json::JsonView jsonValue);
  AWS_APIGATEWAYV2_API Section& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_APIGATEWAYV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ARNs of the product REST endpoint pages in a portal product.</p>
   */
  inline const Aws::Vector<Aws::String>& GetProductRestEndpointPageArns() const { return m_productRestEndpointPageArns; }
  inline bool ProductRestEndpointPageArnsHasBeenSet() const { return m_productRestEndpointPageArnsHasBeenSet; }
  template <typename ProductRestEndpointPageArnsT = Aws::Vector<Aws::String>>
  void SetProductRestEndpointPageArns(ProductRestEndpointPageArnsT&& value) {
    m_productRestEndpointPageArnsHasBeenSet = true;
    m_productRestEndpointPageArns = std::forward<ProductRestEndpointPageArnsT>(value);
  }
  template <typename ProductRestEndpointPageArnsT = Aws::Vector<Aws::String>>
  Section& WithProductRestEndpointPageArns(ProductRestEndpointPageArnsT&& value) {
    SetProductRestEndpointPageArns(std::forward<ProductRestEndpointPageArnsT>(value));
    return *this;
  }
  template <typename ProductRestEndpointPageArnsT = Aws::String>
  Section& AddProductRestEndpointPageArns(ProductRestEndpointPageArnsT&& value) {
    m_productRestEndpointPageArnsHasBeenSet = true;
    m_productRestEndpointPageArns.emplace_back(std::forward<ProductRestEndpointPageArnsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The section name.</p>
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
 private:
  Aws::Vector<Aws::String> m_productRestEndpointPageArns;

  Aws::String m_sectionName;
  bool m_productRestEndpointPageArnsHasBeenSet = false;
  bool m_sectionNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace ApiGatewayV2
}  // namespace Aws
