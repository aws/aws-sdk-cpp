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
    AWS_APPSYNC_API EvaluateCodeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "EvaluateCode"; }

    AWS_APPSYNC_API Aws::String SerializePayload() const override;


    /**
     * <p>The runtime to be used when evaluating the code. Currently, only the
     * <code>APPSYNC_JS</code> runtime is supported.</p>
     */
    inline const AppSyncRuntime& GetRuntime() const{ return m_runtime; }

    /**
     * <p>The runtime to be used when evaluating the code. Currently, only the
     * <code>APPSYNC_JS</code> runtime is supported.</p>
     */
    inline bool RuntimeHasBeenSet() const { return m_runtimeHasBeenSet; }

    /**
     * <p>The runtime to be used when evaluating the code. Currently, only the
     * <code>APPSYNC_JS</code> runtime is supported.</p>
     */
    inline void SetRuntime(const AppSyncRuntime& value) { m_runtimeHasBeenSet = true; m_runtime = value; }

    /**
     * <p>The runtime to be used when evaluating the code. Currently, only the
     * <code>APPSYNC_JS</code> runtime is supported.</p>
     */
    inline void SetRuntime(AppSyncRuntime&& value) { m_runtimeHasBeenSet = true; m_runtime = std::move(value); }

    /**
     * <p>The runtime to be used when evaluating the code. Currently, only the
     * <code>APPSYNC_JS</code> runtime is supported.</p>
     */
    inline EvaluateCodeRequest& WithRuntime(const AppSyncRuntime& value) { SetRuntime(value); return *this;}

    /**
     * <p>The runtime to be used when evaluating the code. Currently, only the
     * <code>APPSYNC_JS</code> runtime is supported.</p>
     */
    inline EvaluateCodeRequest& WithRuntime(AppSyncRuntime&& value) { SetRuntime(std::move(value)); return *this;}


    /**
     * <p>The code definition to be evaluated. Note that <code>code</code> and
     * <code>runtime</code> are both required for this action. The <code>runtime</code>
     * value must be <code>APPSYNC_JS</code>.</p>
     */
    inline const Aws::String& GetCode() const{ return m_code; }

    /**
     * <p>The code definition to be evaluated. Note that <code>code</code> and
     * <code>runtime</code> are both required for this action. The <code>runtime</code>
     * value must be <code>APPSYNC_JS</code>.</p>
     */
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    /**
     * <p>The code definition to be evaluated. Note that <code>code</code> and
     * <code>runtime</code> are both required for this action. The <code>runtime</code>
     * value must be <code>APPSYNC_JS</code>.</p>
     */
    inline void SetCode(const Aws::String& value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p>The code definition to be evaluated. Note that <code>code</code> and
     * <code>runtime</code> are both required for this action. The <code>runtime</code>
     * value must be <code>APPSYNC_JS</code>.</p>
     */
    inline void SetCode(Aws::String&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    /**
     * <p>The code definition to be evaluated. Note that <code>code</code> and
     * <code>runtime</code> are both required for this action. The <code>runtime</code>
     * value must be <code>APPSYNC_JS</code>.</p>
     */
    inline void SetCode(const char* value) { m_codeHasBeenSet = true; m_code.assign(value); }

    /**
     * <p>The code definition to be evaluated. Note that <code>code</code> and
     * <code>runtime</code> are both required for this action. The <code>runtime</code>
     * value must be <code>APPSYNC_JS</code>.</p>
     */
    inline EvaluateCodeRequest& WithCode(const Aws::String& value) { SetCode(value); return *this;}

    /**
     * <p>The code definition to be evaluated. Note that <code>code</code> and
     * <code>runtime</code> are both required for this action. The <code>runtime</code>
     * value must be <code>APPSYNC_JS</code>.</p>
     */
    inline EvaluateCodeRequest& WithCode(Aws::String&& value) { SetCode(std::move(value)); return *this;}

    /**
     * <p>The code definition to be evaluated. Note that <code>code</code> and
     * <code>runtime</code> are both required for this action. The <code>runtime</code>
     * value must be <code>APPSYNC_JS</code>.</p>
     */
    inline EvaluateCodeRequest& WithCode(const char* value) { SetCode(value); return *this;}


    /**
     * <p>The map that holds all of the contextual information for your resolver
     * invocation. A <code>context</code> is required for this action.</p>
     */
    inline const Aws::String& GetContext() const{ return m_context; }

    /**
     * <p>The map that holds all of the contextual information for your resolver
     * invocation. A <code>context</code> is required for this action.</p>
     */
    inline bool ContextHasBeenSet() const { return m_contextHasBeenSet; }

    /**
     * <p>The map that holds all of the contextual information for your resolver
     * invocation. A <code>context</code> is required for this action.</p>
     */
    inline void SetContext(const Aws::String& value) { m_contextHasBeenSet = true; m_context = value; }

    /**
     * <p>The map that holds all of the contextual information for your resolver
     * invocation. A <code>context</code> is required for this action.</p>
     */
    inline void SetContext(Aws::String&& value) { m_contextHasBeenSet = true; m_context = std::move(value); }

    /**
     * <p>The map that holds all of the contextual information for your resolver
     * invocation. A <code>context</code> is required for this action.</p>
     */
    inline void SetContext(const char* value) { m_contextHasBeenSet = true; m_context.assign(value); }

    /**
     * <p>The map that holds all of the contextual information for your resolver
     * invocation. A <code>context</code> is required for this action.</p>
     */
    inline EvaluateCodeRequest& WithContext(const Aws::String& value) { SetContext(value); return *this;}

    /**
     * <p>The map that holds all of the contextual information for your resolver
     * invocation. A <code>context</code> is required for this action.</p>
     */
    inline EvaluateCodeRequest& WithContext(Aws::String&& value) { SetContext(std::move(value)); return *this;}

    /**
     * <p>The map that holds all of the contextual information for your resolver
     * invocation. A <code>context</code> is required for this action.</p>
     */
    inline EvaluateCodeRequest& WithContext(const char* value) { SetContext(value); return *this;}


    /**
     * <p>The function within the code to be evaluated. If provided, the valid values
     * are <code>request</code> and <code>response</code>.</p>
     */
    inline const Aws::String& GetFunction() const{ return m_function; }

    /**
     * <p>The function within the code to be evaluated. If provided, the valid values
     * are <code>request</code> and <code>response</code>.</p>
     */
    inline bool FunctionHasBeenSet() const { return m_functionHasBeenSet; }

    /**
     * <p>The function within the code to be evaluated. If provided, the valid values
     * are <code>request</code> and <code>response</code>.</p>
     */
    inline void SetFunction(const Aws::String& value) { m_functionHasBeenSet = true; m_function = value; }

    /**
     * <p>The function within the code to be evaluated. If provided, the valid values
     * are <code>request</code> and <code>response</code>.</p>
     */
    inline void SetFunction(Aws::String&& value) { m_functionHasBeenSet = true; m_function = std::move(value); }

    /**
     * <p>The function within the code to be evaluated. If provided, the valid values
     * are <code>request</code> and <code>response</code>.</p>
     */
    inline void SetFunction(const char* value) { m_functionHasBeenSet = true; m_function.assign(value); }

    /**
     * <p>The function within the code to be evaluated. If provided, the valid values
     * are <code>request</code> and <code>response</code>.</p>
     */
    inline EvaluateCodeRequest& WithFunction(const Aws::String& value) { SetFunction(value); return *this;}

    /**
     * <p>The function within the code to be evaluated. If provided, the valid values
     * are <code>request</code> and <code>response</code>.</p>
     */
    inline EvaluateCodeRequest& WithFunction(Aws::String&& value) { SetFunction(std::move(value)); return *this;}

    /**
     * <p>The function within the code to be evaluated. If provided, the valid values
     * are <code>request</code> and <code>response</code>.</p>
     */
    inline EvaluateCodeRequest& WithFunction(const char* value) { SetFunction(value); return *this;}

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
