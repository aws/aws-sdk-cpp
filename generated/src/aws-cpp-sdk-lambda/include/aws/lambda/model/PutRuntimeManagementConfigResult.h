/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/lambda/model/UpdateRuntimeOn.h>
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
namespace Lambda
{
namespace Model
{
  class PutRuntimeManagementConfigResult
  {
  public:
    AWS_LAMBDA_API PutRuntimeManagementConfigResult() = default;
    AWS_LAMBDA_API PutRuntimeManagementConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LAMBDA_API PutRuntimeManagementConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The runtime update mode.</p>
     */
    inline UpdateRuntimeOn GetUpdateRuntimeOn() const { return m_updateRuntimeOn; }
    inline void SetUpdateRuntimeOn(UpdateRuntimeOn value) { m_updateRuntimeOnHasBeenSet = true; m_updateRuntimeOn = value; }
    inline PutRuntimeManagementConfigResult& WithUpdateRuntimeOn(UpdateRuntimeOn value) { SetUpdateRuntimeOn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the function</p>
     */
    inline const Aws::String& GetFunctionArn() const { return m_functionArn; }
    template<typename FunctionArnT = Aws::String>
    void SetFunctionArn(FunctionArnT&& value) { m_functionArnHasBeenSet = true; m_functionArn = std::forward<FunctionArnT>(value); }
    template<typename FunctionArnT = Aws::String>
    PutRuntimeManagementConfigResult& WithFunctionArn(FunctionArnT&& value) { SetFunctionArn(std::forward<FunctionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the runtime the function is configured to use. If the runtime
     * update mode is <b>manual</b>, the ARN is returned, otherwise <code>null</code>
     * is returned.</p>
     */
    inline const Aws::String& GetRuntimeVersionArn() const { return m_runtimeVersionArn; }
    template<typename RuntimeVersionArnT = Aws::String>
    void SetRuntimeVersionArn(RuntimeVersionArnT&& value) { m_runtimeVersionArnHasBeenSet = true; m_runtimeVersionArn = std::forward<RuntimeVersionArnT>(value); }
    template<typename RuntimeVersionArnT = Aws::String>
    PutRuntimeManagementConfigResult& WithRuntimeVersionArn(RuntimeVersionArnT&& value) { SetRuntimeVersionArn(std::forward<RuntimeVersionArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    PutRuntimeManagementConfigResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    UpdateRuntimeOn m_updateRuntimeOn{UpdateRuntimeOn::NOT_SET};
    bool m_updateRuntimeOnHasBeenSet = false;

    Aws::String m_functionArn;
    bool m_functionArnHasBeenSet = false;

    Aws::String m_runtimeVersionArn;
    bool m_runtimeVersionArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
