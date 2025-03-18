/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
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
namespace Connect
{
namespace Model
{
  class CreateUseCaseResult
  {
  public:
    AWS_CONNECT_API CreateUseCaseResult() = default;
    AWS_CONNECT_API CreateUseCaseResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API CreateUseCaseResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier of the use case.</p>
     */
    inline const Aws::String& GetUseCaseId() const { return m_useCaseId; }
    template<typename UseCaseIdT = Aws::String>
    void SetUseCaseId(UseCaseIdT&& value) { m_useCaseIdHasBeenSet = true; m_useCaseId = std::forward<UseCaseIdT>(value); }
    template<typename UseCaseIdT = Aws::String>
    CreateUseCaseResult& WithUseCaseId(UseCaseIdT&& value) { SetUseCaseId(std::forward<UseCaseIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the use case.</p>
     */
    inline const Aws::String& GetUseCaseArn() const { return m_useCaseArn; }
    template<typename UseCaseArnT = Aws::String>
    void SetUseCaseArn(UseCaseArnT&& value) { m_useCaseArnHasBeenSet = true; m_useCaseArn = std::forward<UseCaseArnT>(value); }
    template<typename UseCaseArnT = Aws::String>
    CreateUseCaseResult& WithUseCaseArn(UseCaseArnT&& value) { SetUseCaseArn(std::forward<UseCaseArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateUseCaseResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_useCaseId;
    bool m_useCaseIdHasBeenSet = false;

    Aws::String m_useCaseArn;
    bool m_useCaseArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
