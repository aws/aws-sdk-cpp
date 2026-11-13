/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda-core/LambdaCoreRequest.h>
#include <aws/lambda-core/LambdaCore_EXPORTS.h>

#include <utility>

namespace Aws {
namespace LambdaCore {
namespace Model {

/**
 */
class GetRuntimeAliasRequest : public LambdaCoreRequest {
 public:
  AWS_LAMBDACORE_API GetRuntimeAliasRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetRuntimeAlias"; }

  AWS_LAMBDACORE_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The name or ARN of the runtime.</p>
   */
  inline const Aws::String& GetRuntimeName() const { return m_runtimeName; }
  inline bool RuntimeNameHasBeenSet() const { return m_runtimeNameHasBeenSet; }
  template <typename RuntimeNameT = Aws::String>
  void SetRuntimeName(RuntimeNameT&& value) {
    m_runtimeNameHasBeenSet = true;
    m_runtimeName = std::forward<RuntimeNameT>(value);
  }
  template <typename RuntimeNameT = Aws::String>
  GetRuntimeAliasRequest& WithRuntimeName(RuntimeNameT&& value) {
    SetRuntimeName(std::forward<RuntimeNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the runtime alias to retrieve.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  GetRuntimeAliasRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_runtimeName;

  Aws::String m_name;
  bool m_runtimeNameHasBeenSet = false;
  bool m_nameHasBeenSet = false;
};

}  // namespace Model
}  // namespace LambdaCore
}  // namespace Aws
