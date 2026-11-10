/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lakeformation/LakeFormationRequest.h>
#include <aws/lakeformation/LakeFormation_EXPORTS.h>

#include <utility>

namespace Aws {
namespace LakeFormation {
namespace Model {

/**
 */
class GetGlueFunctionSessionContextRequest : public LakeFormationRequest {
 public:
  AWS_LAKEFORMATION_API GetGlueFunctionSessionContextRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetGlueFunctionSessionContext"; }

  AWS_LAKEFORMATION_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The ARNs of one or more user-defined functions to include in the session
   * context, each in the format
   * <code>arn:aws:glue:<i>region</i>:<i>account-id</i>:userDefinedFunction/<i>database-name</i>/<i>function-name</i>
   * </code>.</p>
   */
  inline const Aws::Vector<Aws::String>& GetUserDefinedFunctionArns() const { return m_userDefinedFunctionArns; }
  inline bool UserDefinedFunctionArnsHasBeenSet() const { return m_userDefinedFunctionArnsHasBeenSet; }
  template <typename UserDefinedFunctionArnsT = Aws::Vector<Aws::String>>
  void SetUserDefinedFunctionArns(UserDefinedFunctionArnsT&& value) {
    m_userDefinedFunctionArnsHasBeenSet = true;
    m_userDefinedFunctionArns = std::forward<UserDefinedFunctionArnsT>(value);
  }
  template <typename UserDefinedFunctionArnsT = Aws::Vector<Aws::String>>
  GetGlueFunctionSessionContextRequest& WithUserDefinedFunctionArns(UserDefinedFunctionArnsT&& value) {
    SetUserDefinedFunctionArns(std::forward<UserDefinedFunctionArnsT>(value));
    return *this;
  }
  template <typename UserDefinedFunctionArnsT = Aws::String>
  GetGlueFunctionSessionContextRequest& AddUserDefinedFunctionArns(UserDefinedFunctionArnsT&& value) {
    m_userDefinedFunctionArnsHasBeenSet = true;
    m_userDefinedFunctionArns.emplace_back(std::forward<UserDefinedFunctionArnsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of seconds the session context is valid. The default is 86,400 (24
   * hours).</p>
   */
  inline int GetDurationSeconds() const { return m_durationSeconds; }
  inline bool DurationSecondsHasBeenSet() const { return m_durationSecondsHasBeenSet; }
  inline void SetDurationSeconds(int value) {
    m_durationSecondsHasBeenSet = true;
    m_durationSeconds = value;
  }
  inline GetGlueFunctionSessionContextRequest& WithDurationSeconds(int value) {
    SetDurationSeconds(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_userDefinedFunctionArns;

  int m_durationSeconds{0};
  bool m_userDefinedFunctionArnsHasBeenSet = false;
  bool m_durationSecondsHasBeenSet = false;
};

}  // namespace Model
}  // namespace LakeFormation
}  // namespace Aws
