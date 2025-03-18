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
  class GetRuntimeManagementConfigResult
  {
  public:
    AWS_LAMBDA_API GetRuntimeManagementConfigResult() = default;
    AWS_LAMBDA_API GetRuntimeManagementConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LAMBDA_API GetRuntimeManagementConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The current runtime update mode of the function.</p>
     */
    inline UpdateRuntimeOn GetUpdateRuntimeOn() const { return m_updateRuntimeOn; }
    inline void SetUpdateRuntimeOn(UpdateRuntimeOn value) { m_updateRuntimeOnHasBeenSet = true; m_updateRuntimeOn = value; }
    inline GetRuntimeManagementConfigResult& WithUpdateRuntimeOn(UpdateRuntimeOn value) { SetUpdateRuntimeOn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the runtime the function is configured to use. If the runtime
     * update mode is <b>Manual</b>, the ARN is returned, otherwise <code>null</code>
     * is returned.</p>
     */
    inline const Aws::String& GetRuntimeVersionArn() const { return m_runtimeVersionArn; }
    template<typename RuntimeVersionArnT = Aws::String>
    void SetRuntimeVersionArn(RuntimeVersionArnT&& value) { m_runtimeVersionArnHasBeenSet = true; m_runtimeVersionArn = std::forward<RuntimeVersionArnT>(value); }
    template<typename RuntimeVersionArnT = Aws::String>
    GetRuntimeManagementConfigResult& WithRuntimeVersionArn(RuntimeVersionArnT&& value) { SetRuntimeVersionArn(std::forward<RuntimeVersionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of your function.</p>
     */
    inline const Aws::String& GetFunctionArn() const { return m_functionArn; }
    template<typename FunctionArnT = Aws::String>
    void SetFunctionArn(FunctionArnT&& value) { m_functionArnHasBeenSet = true; m_functionArn = std::forward<FunctionArnT>(value); }
    template<typename FunctionArnT = Aws::String>
    GetRuntimeManagementConfigResult& WithFunctionArn(FunctionArnT&& value) { SetFunctionArn(std::forward<FunctionArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetRuntimeManagementConfigResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    UpdateRuntimeOn m_updateRuntimeOn{UpdateRuntimeOn::NOT_SET};
    bool m_updateRuntimeOnHasBeenSet = false;

    Aws::String m_runtimeVersionArn;
    bool m_runtimeVersionArnHasBeenSet = false;

    Aws::String m_functionArn;
    bool m_functionArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
