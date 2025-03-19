/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/appsync/model/CodeError.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace AppSync
{
namespace Model
{

  /**
   * <p>Provides further details for the reason behind the bad request. For reason
   * type <code>CODE_ERROR</code>, the detail will contain a list of code
   * errors.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/BadRequestDetail">AWS
   * API Reference</a></p>
   */
  class BadRequestDetail
  {
  public:
    AWS_APPSYNC_API BadRequestDetail() = default;
    AWS_APPSYNC_API BadRequestDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API BadRequestDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains the list of errors in the request.</p>
     */
    inline const Aws::Vector<CodeError>& GetCodeErrors() const { return m_codeErrors; }
    inline bool CodeErrorsHasBeenSet() const { return m_codeErrorsHasBeenSet; }
    template<typename CodeErrorsT = Aws::Vector<CodeError>>
    void SetCodeErrors(CodeErrorsT&& value) { m_codeErrorsHasBeenSet = true; m_codeErrors = std::forward<CodeErrorsT>(value); }
    template<typename CodeErrorsT = Aws::Vector<CodeError>>
    BadRequestDetail& WithCodeErrors(CodeErrorsT&& value) { SetCodeErrors(std::forward<CodeErrorsT>(value)); return *this;}
    template<typename CodeErrorsT = CodeError>
    BadRequestDetail& AddCodeErrors(CodeErrorsT&& value) { m_codeErrorsHasBeenSet = true; m_codeErrors.emplace_back(std::forward<CodeErrorsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<CodeError> m_codeErrors;
    bool m_codeErrorsHasBeenSet = false;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
