/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
#include <aws/application-signals/model/CodeLocation.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ApplicationSignals {
namespace Model {

/**
 * <p>Union type for identifying an instrumentation configuration by code location
 * or locationHash. Used in Get/Delete/GetStatus operations to allow flexible
 * identification.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/application-signals-2024-04-15/LocationIdentifier">AWS
 * API Reference</a></p>
 */
class LocationIdentifier {
 public:
  AWS_APPLICATIONSIGNALS_API LocationIdentifier() = default;
  AWS_APPLICATIONSIGNALS_API LocationIdentifier(Aws::Utils::Json::JsonView jsonValue);
  AWS_APPLICATIONSIGNALS_API LocationIdentifier& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_APPLICATIONSIGNALS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The full code location specification (will be hashed internally)</p>
   */
  inline const CodeLocation& GetCodeLocation() const { return m_codeLocation; }
  inline bool CodeLocationHasBeenSet() const { return m_codeLocationHasBeenSet; }
  template <typename CodeLocationT = CodeLocation>
  void SetCodeLocation(CodeLocationT&& value) {
    m_codeLocationHasBeenSet = true;
    m_codeLocation = std::forward<CodeLocationT>(value);
  }
  template <typename CodeLocationT = CodeLocation>
  LocationIdentifier& WithCodeLocation(CodeLocationT&& value) {
    SetCodeLocation(std::forward<CodeLocationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The pre-computed location hash (16-character hex string)</p>
   */
  inline const Aws::String& GetLocationHash() const { return m_locationHash; }
  inline bool LocationHashHasBeenSet() const { return m_locationHashHasBeenSet; }
  template <typename LocationHashT = Aws::String>
  void SetLocationHash(LocationHashT&& value) {
    m_locationHashHasBeenSet = true;
    m_locationHash = std::forward<LocationHashT>(value);
  }
  template <typename LocationHashT = Aws::String>
  LocationIdentifier& WithLocationHash(LocationHashT&& value) {
    SetLocationHash(std::forward<LocationHashT>(value));
    return *this;
  }
  ///@}
 private:
  CodeLocation m_codeLocation;

  Aws::String m_locationHash;
  bool m_codeLocationHasBeenSet = false;
  bool m_locationHashHasBeenSet = false;
};

}  // namespace Model
}  // namespace ApplicationSignals
}  // namespace Aws
