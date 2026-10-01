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
 * <p>The request to retrieve a web function revision.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-web-2025-03-07/GetWebFunctionRevisionRequest">AWS
 * API Reference</a></p>
 */
class GetWebFunctionRevisionRequest : public LambdaWebRequest {
 public:
  AWS_LAMBDAWEB_API GetWebFunctionRevisionRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetWebFunctionRevision"; }

  AWS_LAMBDAWEB_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The name of the web function. You can specify the function name or the
   * function ARN. The length constraint applies only to the full ARN. If you specify
   * only the function name, it is limited to 64 characters in length.</p>
   */
  inline const Aws::String& GetFunctionName() const { return m_functionName; }
  inline bool FunctionNameHasBeenSet() const { return m_functionNameHasBeenSet; }
  template <typename FunctionNameT = Aws::String>
  void SetFunctionName(FunctionNameT&& value) {
    m_functionNameHasBeenSet = true;
    m_functionName = std::forward<FunctionNameT>(value);
  }
  template <typename FunctionNameT = Aws::String>
  GetWebFunctionRevisionRequest& WithFunctionName(FunctionNameT&& value) {
    SetFunctionName(std::forward<FunctionNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the revision to retrieve. You can specify the revision
   * identifier or the revision ARN. The length constraint applies only to the full
   * ARN.</p>
   */
  inline const Aws::String& GetRevisionId() const { return m_revisionId; }
  inline bool RevisionIdHasBeenSet() const { return m_revisionIdHasBeenSet; }
  template <typename RevisionIdT = Aws::String>
  void SetRevisionId(RevisionIdT&& value) {
    m_revisionIdHasBeenSet = true;
    m_revisionId = std::forward<RevisionIdT>(value);
  }
  template <typename RevisionIdT = Aws::String>
  GetWebFunctionRevisionRequest& WithRevisionId(RevisionIdT&& value) {
    SetRevisionId(std::forward<RevisionIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_functionName;

  Aws::String m_revisionId;
  bool m_functionNameHasBeenSet = false;
  bool m_revisionIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace LambdaWeb
}  // namespace Aws
