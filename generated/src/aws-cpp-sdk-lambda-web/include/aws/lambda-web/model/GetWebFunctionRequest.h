/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda-web/LambdaWebRequest.h>
#include <aws/lambda-web/LambdaWeb_EXPORTS.h>

#include <utility>

namespace Aws {
namespace LambdaWeb {
namespace Model {

/**
 * <p>The request to retrieve a web function.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-web-2025-03-07/GetWebFunctionRequest">AWS
 * API Reference</a></p>
 */
class GetWebFunctionRequest : public LambdaWebRequest {
 public:
  AWS_LAMBDAWEB_API GetWebFunctionRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetWebFunction"; }

  AWS_LAMBDAWEB_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The name of the web function to retrieve. You can specify the function name
   * or the function ARN. The length constraint applies only to the full ARN. If you
   * specify only the function name, it is limited to 64 characters in length.</p>
   */
  inline const Aws::String& GetFunctionName() const { return m_functionName; }
  inline bool FunctionNameHasBeenSet() const { return m_functionNameHasBeenSet; }
  template <typename FunctionNameT = Aws::String>
  void SetFunctionName(FunctionNameT&& value) {
    m_functionNameHasBeenSet = true;
    m_functionName = std::forward<FunctionNameT>(value);
  }
  template <typename FunctionNameT = Aws::String>
  GetWebFunctionRequest& WithFunctionName(FunctionNameT&& value) {
    SetFunctionName(std::forward<FunctionNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_functionName;
  bool m_functionNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace LambdaWeb
}  // namespace Aws
