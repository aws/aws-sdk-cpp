/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
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
 * <p>The results of the BatchPutAttribute action.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/BatchPutAttributeOutput">AWS
 * API Reference</a></p>
 */
class BatchPutAttributeOutput {
 public:
  AWS_DATAZONE_API BatchPutAttributeOutput() = default;
  AWS_DATAZONE_API BatchPutAttributeOutput(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATAZONE_API BatchPutAttributeOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The attribute ID.</p>
   */
  inline const Aws::String& GetAttributeIdentifier() const { return m_attributeIdentifier; }
  inline bool AttributeIdentifierHasBeenSet() const { return m_attributeIdentifierHasBeenSet; }
  template <typename AttributeIdentifierT = Aws::String>
  void SetAttributeIdentifier(AttributeIdentifierT&& value) {
    m_attributeIdentifierHasBeenSet = true;
    m_attributeIdentifier = std::forward<AttributeIdentifierT>(value);
  }
  template <typename AttributeIdentifierT = Aws::String>
  BatchPutAttributeOutput& WithAttributeIdentifier(AttributeIdentifierT&& value) {
    SetAttributeIdentifier(std::forward<AttributeIdentifierT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_attributeIdentifier;
  bool m_attributeIdentifierHasBeenSet = false;
};

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
