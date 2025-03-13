/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/appsync/AppSyncRequest.h>
#include <aws/appsync/model/AppSyncRuntime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace AppSync
{
namespace Model
{

  /**
   */
  class EvaluateCodeRequest : public AppSyncRequest
  {
  public:
    AWS_APPSYNC_API EvaluateCodeRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "EvaluateCode"; }

    AWS_APPSYNC_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The runtime to be used when evaluating the code. Currently, only the
     * <code>APPSYNC_JS</code> runtime is supported.</p>
     */
    inline const AppSyncRuntime& GetRuntime() const { return m_runtime; }
    inline bool RuntimeHasBeenSet() const { return m_runtimeHasBeenSet; }
    template<typename RuntimeT = AppSyncRuntime>
    void SetRuntime(RuntimeT&& value) { m_runtimeHasBeenSet = true; m_runtime = std::forward<RuntimeT>(value); }
    template<typename RuntimeT = AppSyncRuntime>
    EvaluateCodeRequest& WithRuntime(RuntimeT&& value) { SetRuntime(std::forward<RuntimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The code definition to be evaluated. Note that <code>code</code> and
     * <code>runtime</code> are both required for this action. The <code>runtime</code>
     * value must be <code>APPSYNC_JS</code>.</p>
     */
    inline const Aws::String& GetCode() const { return m_code; }
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
    template<typename CodeT = Aws::String>
    void SetCode(CodeT&& value) { m_codeHasBeenSet = true; m_code = std::forward<CodeT>(value); }
    template<typename CodeT = Aws::String>
    EvaluateCodeRequest& WithCode(CodeT&& value) { SetCode(std::forward<CodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The map that holds all of the contextual information for your resolver
     * invocation. A <code>context</code> is required for this action.</p>
     */
    inline const Aws::String& GetContext() const { return m_context; }
    inline bool ContextHasBeenSet() const { return m_contextHasBeenSet; }
    template<typename ContextT = Aws::String>
    void SetContext(ContextT&& value) { m_contextHasBeenSet = true; m_context = std::forward<ContextT>(value); }
    template<typename ContextT = Aws::String>
    EvaluateCodeRequest& WithContext(ContextT&& value) { SetContext(std::forward<ContextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The function within the code to be evaluated. If provided, the valid values
     * are <code>request</code> and <code>response</code>.</p>
     */
    inline const Aws::String& GetFunction() const { return m_function; }
    inline bool FunctionHasBeenSet() const { return m_functionHasBeenSet; }
    template<typename FunctionT = Aws::String>
    void SetFunction(FunctionT&& value) { m_functionHasBeenSet = true; m_function = std::forward<FunctionT>(value); }
    template<typename FunctionT = Aws::String>
    EvaluateCodeRequest& WithFunction(FunctionT&& value) { SetFunction(std::forward<FunctionT>(value)); return *this;}
    ///@}
  private:

    AppSyncRuntime m_runtime;
    bool m_runtimeHasBeenSet = false;

    Aws::String m_code;
    bool m_codeHasBeenSet = false;

    Aws::String m_context;
    bool m_contextHasBeenSet = false;

    Aws::String m_function;
    bool m_functionHasBeenSet = false;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
