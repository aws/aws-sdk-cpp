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
  class AWS_LAMBDA_API CreateFunctionUrlConfigResult
  {
  public:
    CreateFunctionUrlConfigResult();
    CreateFunctionUrlConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateFunctionUrlConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::String& GetFunctionUrl() const{ return m_functionUrl; }

    
    inline void SetFunctionUrl(const Aws::String& value) { m_functionUrl = value; }

    
    inline void SetFunctionUrl(Aws::String&& value) { m_functionUrl = std::move(value); }

    
    inline void SetFunctionUrl(const char* value) { m_functionUrl.assign(value); }

    
    inline CreateFunctionUrlConfigResult& WithFunctionUrl(const Aws::String& value) { SetFunctionUrl(value); return *this;}

    
    inline CreateFunctionUrlConfigResult& WithFunctionUrl(Aws::String&& value) { SetFunctionUrl(std::move(value)); return *this;}

    
    inline CreateFunctionUrlConfigResult& WithFunctionUrl(const char* value) { SetFunctionUrl(value); return *this;}


    
    inline const Aws::String& GetFunctionArn() const{ return m_functionArn; }

    
    inline void SetFunctionArn(const Aws::String& value) { m_functionArn = value; }

    
    inline void SetFunctionArn(Aws::String&& value) { m_functionArn = std::move(value); }

    
    inline void SetFunctionArn(const char* value) { m_functionArn.assign(value); }

    
    inline CreateFunctionUrlConfigResult& WithFunctionArn(const Aws::String& value) { SetFunctionArn(value); return *this;}

    
    inline CreateFunctionUrlConfigResult& WithFunctionArn(Aws::String&& value) { SetFunctionArn(std::move(value)); return *this;}

    
    inline CreateFunctionUrlConfigResult& WithFunctionArn(const char* value) { SetFunctionArn(value); return *this;}


    
    inline const AuthorizationType& GetAuthorizationType() const{ return m_authorizationType; }

    
    inline void SetAuthorizationType(const AuthorizationType& value) { m_authorizationType = value; }

    
    inline void SetAuthorizationType(AuthorizationType&& value) { m_authorizationType = std::move(value); }

    
    inline CreateFunctionUrlConfigResult& WithAuthorizationType(const AuthorizationType& value) { SetAuthorizationType(value); return *this;}

    
    inline CreateFunctionUrlConfigResult& WithAuthorizationType(AuthorizationType&& value) { SetAuthorizationType(std::move(value)); return *this;}


    
    inline const Cors& GetCors() const{ return m_cors; }

    
    inline void SetCors(const Cors& value) { m_cors = value; }

    
    inline void SetCors(Cors&& value) { m_cors = std::move(value); }

    
    inline CreateFunctionUrlConfigResult& WithCors(const Cors& value) { SetCors(value); return *this;}

    
    inline CreateFunctionUrlConfigResult& WithCors(Cors&& value) { SetCors(std::move(value)); return *this;}


    
    inline const Aws::String& GetCreationTime() const{ return m_creationTime; }

    
    inline void SetCreationTime(const Aws::String& value) { m_creationTime = value; }

    
    inline void SetCreationTime(Aws::String&& value) { m_creationTime = std::move(value); }

    
    inline void SetCreationTime(const char* value) { m_creationTime.assign(value); }

    
    inline CreateFunctionUrlConfigResult& WithCreationTime(const Aws::String& value) { SetCreationTime(value); return *this;}

    
    inline CreateFunctionUrlConfigResult& WithCreationTime(Aws::String&& value) { SetCreationTime(std::move(value)); return *this;}

    
    inline CreateFunctionUrlConfigResult& WithCreationTime(const char* value) { SetCreationTime(value); return *this;}

  private:

    Aws::String m_functionUrl;

    Aws::String m_functionArn;

    AuthorizationType m_authorizationType;

    Cors m_cors;

    Aws::String m_creationTime;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
