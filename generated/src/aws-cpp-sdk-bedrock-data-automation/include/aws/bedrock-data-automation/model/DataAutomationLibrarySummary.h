/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation/BedrockDataAutomation_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
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
 * <p>Summary of a DataAutomationLibrary</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-2023-07-26/DataAutomationLibrarySummary">AWS
 * API Reference</a></p>
 */
class DataAutomationLibrarySummary {
 public:
  AWS_BEDROCKDATAAUTOMATION_API DataAutomationLibrarySummary() = default;
  AWS_BEDROCKDATAAUTOMATION_API DataAutomationLibrarySummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKDATAAUTOMATION_API DataAutomationLibrarySummary& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  DataAutomationLibrarySummary& WithLibraryArn(LibraryArnT&& value) {
    SetLibraryArn(std::forward<LibraryArnT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetLibraryName() const { return m_libraryName; }
  inline bool LibraryNameHasBeenSet() const { return m_libraryNameHasBeenSet; }
  template <typename LibraryNameT = Aws::String>
  void SetLibraryName(LibraryNameT&& value) {
    m_libraryNameHasBeenSet = true;
    m_libraryName = std::forward<LibraryNameT>(value);
  }
  template <typename LibraryNameT = Aws::String>
  DataAutomationLibrarySummary& WithLibraryName(LibraryNameT&& value) {
    SetLibraryName(std::forward<LibraryNameT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
  inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  void SetCreationTime(CreationTimeT&& value) {
    m_creationTimeHasBeenSet = true;
    m_creationTime = std::forward<CreationTimeT>(value);
  }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  DataAutomationLibrarySummary& WithCreationTime(CreationTimeT&& value) {
    SetCreationTime(std::forward<CreationTimeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_libraryArn;

  Aws::String m_libraryName;

  Aws::Utils::DateTime m_creationTime{};
  bool m_libraryArnHasBeenSet = false;
  bool m_libraryNameHasBeenSet = false;
  bool m_creationTimeHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockDataAutomation
}  // namespace Aws
