/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ConfigService {
namespace Model {

/**
 * <p>Provides the identifier of the managed conformance pack that Config deploys
 * in your account.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/ConformancePackSource">AWS
 * API Reference</a></p>
 */
class ConformancePackSource {
 public:
  AWS_CONFIGSERVICE_API ConformancePackSource() = default;
  AWS_CONFIGSERVICE_API ConformancePackSource(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONFIGSERVICE_API ConformancePackSource& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A predefined identifier for a managed conformance pack. The identifier
   * specifies which managed conformance pack Config deploys in your account.</p>
   */
  inline const Aws::String& GetSourceIdentifier() const { return m_sourceIdentifier; }
  inline bool SourceIdentifierHasBeenSet() const { return m_sourceIdentifierHasBeenSet; }
  template <typename SourceIdentifierT = Aws::String>
  void SetSourceIdentifier(SourceIdentifierT&& value) {
    m_sourceIdentifierHasBeenSet = true;
    m_sourceIdentifier = std::forward<SourceIdentifierT>(value);
  }
  template <typename SourceIdentifierT = Aws::String>
  ConformancePackSource& WithSourceIdentifier(SourceIdentifierT&& value) {
    SetSourceIdentifier(std::forward<SourceIdentifierT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_sourceIdentifier;
  bool m_sourceIdentifierHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConfigService
}  // namespace Aws
