/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation/BedrockDataAutomationRequest.h>
#include <aws/bedrock-data-automation/BedrockDataAutomation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace BedrockDataAutomation {
namespace Model {

/**
 * <p>Get DataAutomationLibrary Request</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-2023-07-26/GetDataAutomationLibraryRequest">AWS
 * API Reference</a></p>
 */
class GetDataAutomationLibraryRequest : public BedrockDataAutomationRequest {
 public:
  AWS_BEDROCKDATAAUTOMATION_API GetDataAutomationLibraryRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetDataAutomationLibrary"; }

  AWS_BEDROCKDATAAUTOMATION_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>ARN generated at the server side when a DataAutomationLibrary is created</p>
   */
  inline const Aws::String& GetLibraryArn() const { return m_libraryArn; }
  inline bool LibraryArnHasBeenSet() const { return m_libraryArnHasBeenSet; }
  template <typename LibraryArnT = Aws::String>
  void SetLibraryArn(LibraryArnT&& value) {
    m_libraryArnHasBeenSet = true;
    m_libraryArn = std::forward<LibraryArnT>(value);
  }
  template <typename LibraryArnT = Aws::String>
  GetDataAutomationLibraryRequest& WithLibraryArn(LibraryArnT&& value) {
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
