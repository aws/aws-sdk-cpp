/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda/model/AuthorizationType.h>
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
  class AWS_LAMBDA_API GetFunctionUrlConfigResult
  {
  public:
    GetFunctionUrlConfigResult();
    GetFunctionUrlConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetFunctionUrlConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::String& GetFunctionUrl() const{ return m_functionUrl; }

    
    inline void SetFunctionUrl(const Aws::String& value) { m_functionUrl = value; }

    
    inline void SetFunctionUrl(Aws::String&& value) { m_functionUrl = std::move(value); }

    
    inline void SetFunctionUrl(const char* value) { m_functionUrl.assign(value); }

    
    inline GetFunctionUrlConfigResult& WithFunctionUrl(const Aws::String& value) { SetFunctionUrl(value); return *this;}

    
    inline GetFunctionUrlConfigResult& WithFunctionUrl(Aws::String&& value) { SetFunctionUrl(std::move(value)); return *this;}

    
    inline GetFunctionUrlConfigResult& WithFunctionUrl(const char* value) { SetFunctionUrl(value); return *this;}


    
    inline const Aws::String& GetFunctionArn() const{ return m_functionArn; }

    
    inline void SetFunctionArn(const Aws::String& value) { m_functionArn = value; }

    
    inline void SetFunctionArn(Aws::String&& value) { m_functionArn = std::move(value); }

    
    inline void SetFunctionArn(const char* value) { m_functionArn.assign(value); }

    
    inline GetFunctionUrlConfigResult& WithFunctionArn(const Aws::String& value) { SetFunctionArn(value); return *this;}

    
    inline GetFunctionUrlConfigResult& WithFunctionArn(Aws::String&& value) { SetFunctionArn(std::move(value)); return *this;}

    
    inline GetFunctionUrlConfigResult& WithFunctionArn(const char* value) { SetFunctionArn(value); return *this;}


    
    inline const AuthorizationType& GetAuthorizationType() const{ return m_authorizationType; }

    
    inline void SetAuthorizationType(const AuthorizationType& value) { m_authorizationType = value; }

    
    inline void SetAuthorizationType(AuthorizationType&& value) { m_authorizationType = std::move(value); }

    
    inline GetFunctionUrlConfigResult& WithAuthorizationType(const AuthorizationType& value) { SetAuthorizationType(value); return *this;}

    
    inline GetFunctionUrlConfigResult& WithAuthorizationType(AuthorizationType&& value) { SetAuthorizationType(std::move(value)); return *this;}


    
    inline const Cors& GetCors() const{ return m_cors; }

    
    inline void SetCors(const Cors& value) { m_cors = value; }

    
    inline void SetCors(Cors&& value) { m_cors = std::move(value); }

    
    inline GetFunctionUrlConfigResult& WithCors(const Cors& value) { SetCors(value); return *this;}

    
    inline GetFunctionUrlConfigResult& WithCors(Cors&& value) { SetCors(std::move(value)); return *this;}


    
    inline const Aws::String& GetCreationTime() const{ return m_creationTime; }

    
    inline void SetCreationTime(const Aws::String& value) { m_creationTime = value; }

    
    inline void SetCreationTime(Aws::String&& value) { m_creationTime = std::move(value); }

    
    inline void SetCreationTime(const char* value) { m_creationTime.assign(value); }

    
    inline GetFunctionUrlConfigResult& WithCreationTime(const Aws::String& value) { SetCreationTime(value); return *this;}

    
    inline GetFunctionUrlConfigResult& WithCreationTime(Aws::String&& value) { SetCreationTime(std::move(value)); return *this;}

    
    inline GetFunctionUrlConfigResult& WithCreationTime(const char* value) { SetCreationTime(value); return *this;}


    
    inline const Aws::String& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    
    inline void SetLastModifiedTime(const Aws::String& value) { m_lastModifiedTime = value; }

    
    inline void SetLastModifiedTime(Aws::String&& value) { m_lastModifiedTime = std::move(value); }

    
    inline void SetLastModifiedTime(const char* value) { m_lastModifiedTime.assign(value); }

    
    inline GetFunctionUrlConfigResult& WithLastModifiedTime(const Aws::String& value) { SetLastModifiedTime(value); return *this;}

    
    inline GetFunctionUrlConfigResult& WithLastModifiedTime(Aws::String&& value) { SetLastModifiedTime(std::move(value)); return *this;}

    
    inline GetFunctionUrlConfigResult& WithLastModifiedTime(const char* value) { SetLastModifiedTime(value); return *this;}

  private:

    Aws::String m_functionUrl;

    Aws::String m_functionArn;

    AuthorizationType m_authorizationType;

    Cors m_cors;

    Aws::String m_creationTime;

    Aws::String m_lastModifiedTime;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
