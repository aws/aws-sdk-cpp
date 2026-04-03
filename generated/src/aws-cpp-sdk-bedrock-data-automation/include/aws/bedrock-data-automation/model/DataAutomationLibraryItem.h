/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation/BedrockDataAutomation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
 * <p>DataAutomationLibrary Item</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-2023-07-26/DataAutomationLibraryItem">AWS
 * API Reference</a></p>
 */
class DataAutomationLibraryItem {
 public:
  AWS_BEDROCKDATAAUTOMATION_API DataAutomationLibraryItem() = default;
  AWS_BEDROCKDATAAUTOMATION_API DataAutomationLibraryItem(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKDATAAUTOMATION_API DataAutomationLibraryItem& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKDATAAUTOMATION_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const Aws::String& GetLibraryArn() const { return m_libraryArn; }
  inline bool LibraryArnHasBeenSet() const { return m_libraryArnHasBeenSet; }
  template <typename LibraryArnT = Aws::String>
  void SetLibraryArn(LibraryArnT&& value) {
    m_libraryArnHasBeenSet = true;
    m_libraryArn = std::forward<LibraryArnT>(value);
  }
  template <typename LibraryArnT = Aws::String>
  DataAutomationLibraryItem& WithLibraryArn(LibraryArnT&& value) {
    SetLibraryArn(std::forward<LibraryArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_libraryArn;
  bool m_libraryArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockDataAutomation
}  // namespace Aws
