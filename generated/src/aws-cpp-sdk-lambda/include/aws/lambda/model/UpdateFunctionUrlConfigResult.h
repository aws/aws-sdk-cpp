/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda/model/FunctionUrlAuthType.h>
#include <aws/lambda/model/Cors.h>
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
  class UpdateFunctionUrlConfigResult
  {
  public:
    AWS_LAMBDA_API UpdateFunctionUrlConfigResult();
    AWS_LAMBDA_API UpdateFunctionUrlConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LAMBDA_API UpdateFunctionUrlConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The HTTP URL endpoint for your function.</p>
     */
    inline const Aws::String& GetFunctionUrl() const{ return m_functionUrl; }

    /**
     * <p>The HTTP URL endpoint for your function.</p>
     */
    inline void SetFunctionUrl(const Aws::String& value) { m_functionUrl = value; }

    /**
     * <p>The HTTP URL endpoint for your function.</p>
     */
    inline void SetFunctionUrl(Aws::String&& value) { m_functionUrl = std::move(value); }

    /**
     * <p>The HTTP URL endpoint for your function.</p>
     */
    inline void SetFunctionUrl(const char* value) { m_functionUrl.assign(value); }

    /**
     * <p>The HTTP URL endpoint for your function.</p>
     */
    inline UpdateFunctionUrlConfigResult& WithFunctionUrl(const Aws::String& value) { SetFunctionUrl(value); return *this;}

    /**
     * <p>The HTTP URL endpoint for your function.</p>
     */
    inline UpdateFunctionUrlConfigResult& WithFunctionUrl(Aws::String&& value) { SetFunctionUrl(std::move(value)); return *this;}

    /**
     * <p>The HTTP URL endpoint for your function.</p>
     */
    inline UpdateFunctionUrlConfigResult& WithFunctionUrl(const char* value) { SetFunctionUrl(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of your function.</p>
     */
    inline const Aws::String& GetFunctionArn() const{ return m_functionArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of your function.</p>
     */
    inline void SetFunctionArn(const Aws::String& value) { m_functionArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of your function.</p>
     */
    inline void SetFunctionArn(Aws::String&& value) { m_functionArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of your function.</p>
     */
    inline void SetFunctionArn(const char* value) { m_functionArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of your function.</p>
     */
    inline UpdateFunctionUrlConfigResult& WithFunctionArn(const Aws::String& value) { SetFunctionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of your function.</p>
     */
    inline UpdateFunctionUrlConfigResult& WithFunctionArn(Aws::String&& value) { SetFunctionArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of your function.</p>
     */
    inline UpdateFunctionUrlConfigResult& WithFunctionArn(const char* value) { SetFunctionArn(value); return *this;}


    /**
     * <p>The type of authentication that your function URL uses. Set to
     * <code>AWS_IAM</code> if you want to restrict access to authenticated IAM users
     * only. Set to <code>NONE</code> if you want to bypass IAM authentication to
     * create a public endpoint. For more information, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/urls-auth.html">Security and
     * auth model for Lambda function URLs</a>.</p>
     */
    inline const FunctionUrlAuthType& GetAuthType() const{ return m_authType; }

    /**
     * <p>The type of authentication that your function URL uses. Set to
     * <code>AWS_IAM</code> if you want to restrict access to authenticated IAM users
     * only. Set to <code>NONE</code> if you want to bypass IAM authentication to
     * create a public endpoint. For more information, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/urls-auth.html">Security and
     * auth model for Lambda function URLs</a>.</p>
     */
    inline void SetAuthType(const FunctionUrlAuthType& value) { m_authType = value; }

    /**
     * <p>The type of authentication that your function URL uses. Set to
     * <code>AWS_IAM</code> if you want to restrict access to authenticated IAM users
     * only. Set to <code>NONE</code> if you want to bypass IAM authentication to
     * create a public endpoint. For more information, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/urls-auth.html">Security and
     * auth model for Lambda function URLs</a>.</p>
     */
    inline void SetAuthType(FunctionUrlAuthType&& value) { m_authType = std::move(value); }

    /**
     * <p>The type of authentication that your function URL uses. Set to
     * <code>AWS_IAM</code> if you want to restrict access to authenticated IAM users
     * only. Set to <code>NONE</code> if you want to bypass IAM authentication to
     * create a public endpoint. For more information, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/urls-auth.html">Security and
     * auth model for Lambda function URLs</a>.</p>
     */
    inline UpdateFunctionUrlConfigResult& WithAuthType(const FunctionUrlAuthType& value) { SetAuthType(value); return *this;}

    /**
     * <p>The type of authentication that your function URL uses. Set to
     * <code>AWS_IAM</code> if you want to restrict access to authenticated IAM users
     * only. Set to <code>NONE</code> if you want to bypass IAM authentication to
     * create a public endpoint. For more information, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/urls-auth.html">Security and
     * auth model for Lambda function URLs</a>.</p>
     */
    inline UpdateFunctionUrlConfigResult& WithAuthType(FunctionUrlAuthType&& value) { SetAuthType(std::move(value)); return *this;}


    /**
     * <p>The <a
     * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/CORS">cross-origin
     * resource sharing (CORS)</a> settings for your function URL.</p>
     */
    inline const Cors& GetCors() const{ return m_cors; }

    /**
     * <p>The <a
     * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/CORS">cross-origin
     * resource sharing (CORS)</a> settings for your function URL.</p>
     */
    inline void SetCors(const Cors& value) { m_cors = value; }

    /**
     * <p>The <a
     * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/CORS">cross-origin
     * resource sharing (CORS)</a> settings for your function URL.</p>
     */
    inline void SetCors(Cors&& value) { m_cors = std::move(value); }

    /**
     * <p>The <a
     * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/CORS">cross-origin
     * resource sharing (CORS)</a> settings for your function URL.</p>
     */
    inline UpdateFunctionUrlConfigResult& WithCors(const Cors& value) { SetCors(value); return *this;}

    /**
     * <p>The <a
     * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/CORS">cross-origin
     * resource sharing (CORS)</a> settings for your function URL.</p>
     */
    inline UpdateFunctionUrlConfigResult& WithCors(Cors&& value) { SetCors(std::move(value)); return *this;}


    /**
     * <p>When the function URL was created, in <a
     * href="https://www.w3.org/TR/NOTE-datetime">ISO-8601 format</a>
     * (YYYY-MM-DDThh:mm:ss.sTZD).</p>
     */
    inline const Aws::String& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>When the function URL was created, in <a
     * href="https://www.w3.org/TR/NOTE-datetime">ISO-8601 format</a>
     * (YYYY-MM-DDThh:mm:ss.sTZD).</p>
     */
    inline void SetCreationTime(const Aws::String& value) { m_creationTime = value; }

    /**
     * <p>When the function URL was created, in <a
     * href="https://www.w3.org/TR/NOTE-datetime">ISO-8601 format</a>
     * (YYYY-MM-DDThh:mm:ss.sTZD).</p>
     */
    inline void SetCreationTime(Aws::String&& value) { m_creationTime = std::move(value); }

    /**
     * <p>When the function URL was created, in <a
     * href="https://www.w3.org/TR/NOTE-datetime">ISO-8601 format</a>
     * (YYYY-MM-DDThh:mm:ss.sTZD).</p>
     */
    inline void SetCreationTime(const char* value) { m_creationTime.assign(value); }

    /**
     * <p>When the function URL was created, in <a
     * href="https://www.w3.org/TR/NOTE-datetime">ISO-8601 format</a>
     * (YYYY-MM-DDThh:mm:ss.sTZD).</p>
     */
    inline UpdateFunctionUrlConfigResult& WithCreationTime(const Aws::String& value) { SetCreationTime(value); return *this;}

    /**
     * <p>When the function URL was created, in <a
     * href="https://www.w3.org/TR/NOTE-datetime">ISO-8601 format</a>
     * (YYYY-MM-DDThh:mm:ss.sTZD).</p>
     */
    inline UpdateFunctionUrlConfigResult& WithCreationTime(Aws::String&& value) { SetCreationTime(std::move(value)); return *this;}

    /**
     * <p>When the function URL was created, in <a
     * href="https://www.w3.org/TR/NOTE-datetime">ISO-8601 format</a>
     * (YYYY-MM-DDThh:mm:ss.sTZD).</p>
     */
    inline UpdateFunctionUrlConfigResult& WithCreationTime(const char* value) { SetCreationTime(value); return *this;}


    /**
     * <p>When the function URL configuration was last updated, in <a
     * href="https://www.w3.org/TR/NOTE-datetime">ISO-8601 format</a>
     * (YYYY-MM-DDThh:mm:ss.sTZD).</p>
     */
    inline const Aws::String& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>When the function URL configuration was last updated, in <a
     * href="https://www.w3.org/TR/NOTE-datetime">ISO-8601 format</a>
     * (YYYY-MM-DDThh:mm:ss.sTZD).</p>
     */
    inline void SetLastModifiedTime(const Aws::String& value) { m_lastModifiedTime = value; }

    /**
     * <p>When the function URL configuration was last updated, in <a
     * href="https://www.w3.org/TR/NOTE-datetime">ISO-8601 format</a>
     * (YYYY-MM-DDThh:mm:ss.sTZD).</p>
     */
    inline void SetLastModifiedTime(Aws::String&& value) { m_lastModifiedTime = std::move(value); }

    /**
     * <p>When the function URL configuration was last updated, in <a
     * href="https://www.w3.org/TR/NOTE-datetime">ISO-8601 format</a>
     * (YYYY-MM-DDThh:mm:ss.sTZD).</p>
     */
    inline void SetLastModifiedTime(const char* value) { m_lastModifiedTime.assign(value); }

    /**
     * <p>When the function URL configuration was last updated, in <a
     * href="https://www.w3.org/TR/NOTE-datetime">ISO-8601 format</a>
     * (YYYY-MM-DDThh:mm:ss.sTZD).</p>
     */
    inline UpdateFunctionUrlConfigResult& WithLastModifiedTime(const Aws::String& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>When the function URL configuration was last updated, in <a
     * href="https://www.w3.org/TR/NOTE-datetime">ISO-8601 format</a>
     * (YYYY-MM-DDThh:mm:ss.sTZD).</p>
     */
    inline UpdateFunctionUrlConfigResult& WithLastModifiedTime(Aws::String&& value) { SetLastModifiedTime(std::move(value)); return *this;}

    /**
     * <p>When the function URL configuration was last updated, in <a
     * href="https://www.w3.org/TR/NOTE-datetime">ISO-8601 format</a>
     * (YYYY-MM-DDThh:mm:ss.sTZD).</p>
     */
    inline UpdateFunctionUrlConfigResult& WithLastModifiedTime(const char* value) { SetLastModifiedTime(value); return *this;}

  private:

    Aws::String m_functionUrl;

    Aws::String m_functionArn;

    FunctionUrlAuthType m_authType;

    Cors m_cors;

    Aws::String m_creationTime;

    Aws::String m_lastModifiedTime;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
