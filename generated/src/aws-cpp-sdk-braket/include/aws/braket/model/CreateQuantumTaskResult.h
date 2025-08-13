/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/braket/Braket_EXPORTS.h>
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
namespace Braket
{
namespace Model
{
  class CreateQuantumTaskResult
  {
  public:
    AWS_BRAKET_API CreateQuantumTaskResult() = default;
    AWS_BRAKET_API CreateQuantumTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BRAKET_API CreateQuantumTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the quantum task created by the request.</p>
     */
    inline const Aws::String& GetQuantumTaskArn() const { return m_quantumTaskArn; }
    template<typename QuantumTaskArnT = Aws::String>
    void SetQuantumTaskArn(QuantumTaskArnT&& value) { m_quantumTaskArnHasBeenSet = true; m_quantumTaskArn = std::forward<QuantumTaskArnT>(value); }
    template<typename QuantumTaskArnT = Aws::String>
    CreateQuantumTaskResult& WithQuantumTaskArn(QuantumTaskArnT&& value) { SetQuantumTaskArn(std::forward<QuantumTaskArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateQuantumTaskResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_quantumTaskArn;
    bool m_quantumTaskArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Braket
} // namespace Aws
