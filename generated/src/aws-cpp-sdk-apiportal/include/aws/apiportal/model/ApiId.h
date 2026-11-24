/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apiportal/APIPortal_EXPORTS.h>
#include <aws/apiportal/model/IdentifierParts.h>

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
 * <p>Identifies the API an API page documents.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/apiportal-2026-04-30/ApiId">AWS API
 * Reference</a></p>
 */
class ApiId {
 public:
  AWS_APIPORTAL_API ApiId() = default;
  AWS_APIPORTAL_API ApiId(Aws::Utils::Json::JsonView jsonValue);
  AWS_APIPORTAL_API ApiId& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_APIPORTAL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The resource, method, and path that identify the API.</p>
   */
  inline const IdentifierParts& GetIdentifierParts() const { return m_identifierParts; }
  inline bool IdentifierPartsHasBeenSet() const { return m_identifierPartsHasBeenSet; }
  template <typename IdentifierPartsT = IdentifierParts>
  void SetIdentifierParts(IdentifierPartsT&& value) {
    m_identifierPartsHasBeenSet = true;
    m_identifierParts = std::forward<IdentifierPartsT>(value);
  }
  template <typename IdentifierPartsT = IdentifierParts>
  ApiId& WithIdentifierParts(IdentifierPartsT&& value) {
    SetIdentifierParts(std::forward<IdentifierPartsT>(value));
    return *this;
  }
  ///@}
 private:
  IdentifierParts m_identifierParts;
  bool m_identifierPartsHasBeenSet = false;
};

}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
