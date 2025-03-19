/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Athena
{
namespace Model
{
  class GetCalculationExecutionCodeResult
  {
  public:
    AWS_ATHENA_API GetCalculationExecutionCodeResult() = default;
    AWS_ATHENA_API GetCalculationExecutionCodeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ATHENA_API GetCalculationExecutionCodeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unencrypted code that was executed for the calculation.</p>
     */
    inline const Aws::String& GetCodeBlock() const { return m_codeBlock; }
    template<typename CodeBlockT = Aws::String>
    void SetCodeBlock(CodeBlockT&& value) { m_codeBlockHasBeenSet = true; m_codeBlock = std::forward<CodeBlockT>(value); }
    template<typename CodeBlockT = Aws::String>
    GetCalculationExecutionCodeResult& WithCodeBlock(CodeBlockT&& value) { SetCodeBlock(std::forward<CodeBlockT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetCalculationExecutionCodeResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_codeBlock;
    bool m_codeBlockHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
