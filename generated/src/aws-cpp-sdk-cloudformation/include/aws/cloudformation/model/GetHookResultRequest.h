/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormationRequest.h>
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace CloudFormation {
namespace Model {

/**
 */
class GetHookResultRequest : public CloudFormationRequest {
 public:
  AWS_CLOUDFORMATION_API GetHookResultRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetHookResult"; }

  AWS_CLOUDFORMATION_API Aws::String SerializePayload() const override;

 protected:
  AWS_CLOUDFORMATION_API void DumpBodyToUrl(Aws::Http::URI& uri) const override;

 public:
  ///@{
  /**
   * <p>The unique identifier (ID) of the Hook invocation result that you want
   * details about. You can get the ID from the <a
   * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_ListHookResults.html">ListHookResults</a>
   * operation.</p>
   */
  inline const Aws::String& GetHookResultId() const { return m_hookResultId; }
  inline bool HookResultIdHasBeenSet() const { return m_hookResultIdHasBeenSet; }
  template <typename HookResultIdT = Aws::String>
  void SetHookResultId(HookResultIdT&& value) {
    m_hookResultIdHasBeenSet = true;
    m_hookResultId = std::forward<HookResultIdT>(value);
  }
  template <typename HookResultIdT = Aws::String>
  GetHookResultRequest& WithHookResultId(HookResultIdT&& value) {
    SetHookResultId(std::forward<HookResultIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_hookResultId;
  bool m_hookResultIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudFormation
}  // namespace Aws
