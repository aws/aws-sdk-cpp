/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation/BedrockDataAutomation_EXPORTS.h>
#include <aws/bedrock-data-automation/model/DataAutomationLibraryItem.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockDataAutomation {
namespace Model {

/**
 * <p>DataAutomation Library configuration</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-2023-07-26/DataAutomationLibraryConfiguration">AWS
 * API Reference</a></p>
 */
class DataAutomationLibraryConfiguration {
 public:
  AWS_BEDROCKDATAAUTOMATION_API DataAutomationLibraryConfiguration() = default;
  AWS_BEDROCKDATAAUTOMATION_API DataAutomationLibraryConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKDATAAUTOMATION_API DataAutomationLibraryConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKDATAAUTOMATION_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const Aws::Vector<DataAutomationLibraryItem>& GetLibraries() const { return m_libraries; }
  inline bool LibrariesHasBeenSet() const { return m_librariesHasBeenSet; }
  template <typename LibrariesT = Aws::Vector<DataAutomationLibraryItem>>
  void SetLibraries(LibrariesT&& value) {
    m_librariesHasBeenSet = true;
    m_libraries = std::forward<LibrariesT>(value);
  }
  template <typename LibrariesT = Aws::Vector<DataAutomationLibraryItem>>
  DataAutomationLibraryConfiguration& WithLibraries(LibrariesT&& value) {
    SetLibraries(std::forward<LibrariesT>(value));
    return *this;
  }
  template <typename LibrariesT = DataAutomationLibraryItem>
  DataAutomationLibraryConfiguration& AddLibraries(LibrariesT&& value) {
    m_librariesHasBeenSet = true;
    m_libraries.emplace_back(std::forward<LibrariesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<DataAutomationLibraryItem> m_libraries;
  bool m_librariesHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockDataAutomation
}  // namespace Aws
