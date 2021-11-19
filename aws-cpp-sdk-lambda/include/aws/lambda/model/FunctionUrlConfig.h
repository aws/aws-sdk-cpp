/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda/model/Cors.h>
#include <aws/lambda/model/AuthorizationType.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Lambda
{
namespace Model
{

  class AWS_LAMBDA_API FunctionUrlConfig
  {
  public:
    FunctionUrlConfig();
    FunctionUrlConfig(Aws::Utils::Json::JsonView jsonValue);
    FunctionUrlConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetFunctionUrl() const{ return m_functionUrl; }

    
    inline bool FunctionUrlHasBeenSet() const { return m_functionUrlHasBeenSet; }

    
    inline void SetFunctionUrl(const Aws::String& value) { m_functionUrlHasBeenSet = true; m_functionUrl = value; }

    
    inline void SetFunctionUrl(Aws::String&& value) { m_functionUrlHasBeenSet = true; m_functionUrl = std::move(value); }

    
    inline void SetFunctionUrl(const char* value) { m_functionUrlHasBeenSet = true; m_functionUrl.assign(value); }

    
    inline FunctionUrlConfig& WithFunctionUrl(const Aws::String& value) { SetFunctionUrl(value); return *this;}

    
    inline FunctionUrlConfig& WithFunctionUrl(Aws::String&& value) { SetFunctionUrl(std::move(value)); return *this;}

    
    inline FunctionUrlConfig& WithFunctionUrl(const char* value) { SetFunctionUrl(value); return *this;}


    
    inline const Aws::String& GetFunctionArn() const{ return m_functionArn; }

    
    inline bool FunctionArnHasBeenSet() const { return m_functionArnHasBeenSet; }

    
    inline void SetFunctionArn(const Aws::String& value) { m_functionArnHasBeenSet = true; m_functionArn = value; }

    
    inline void SetFunctionArn(Aws::String&& value) { m_functionArnHasBeenSet = true; m_functionArn = std::move(value); }

    
    inline void SetFunctionArn(const char* value) { m_functionArnHasBeenSet = true; m_functionArn.assign(value); }

    
    inline FunctionUrlConfig& WithFunctionArn(const Aws::String& value) { SetFunctionArn(value); return *this;}

    
    inline FunctionUrlConfig& WithFunctionArn(Aws::String&& value) { SetFunctionArn(std::move(value)); return *this;}

    
    inline FunctionUrlConfig& WithFunctionArn(const char* value) { SetFunctionArn(value); return *this;}


    
    inline const Aws::String& GetCreationTime() const{ return m_creationTime; }

    
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    
    inline void SetCreationTime(const Aws::String& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    
    inline void SetCreationTime(Aws::String&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    
    inline void SetCreationTime(const char* value) { m_creationTimeHasBeenSet = true; m_creationTime.assign(value); }

    
    inline FunctionUrlConfig& WithCreationTime(const Aws::String& value) { SetCreationTime(value); return *this;}

    
    inline FunctionUrlConfig& WithCreationTime(Aws::String&& value) { SetCreationTime(std::move(value)); return *this;}

    
    inline FunctionUrlConfig& WithCreationTime(const char* value) { SetCreationTime(value); return *this;}


    
    inline const Aws::String& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }

    
    inline void SetLastModifiedTime(const Aws::String& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }

    
    inline void SetLastModifiedTime(Aws::String&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }

    
    inline void SetLastModifiedTime(const char* value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime.assign(value); }

    
    inline FunctionUrlConfig& WithLastModifiedTime(const Aws::String& value) { SetLastModifiedTime(value); return *this;}

    
    inline FunctionUrlConfig& WithLastModifiedTime(Aws::String&& value) { SetLastModifiedTime(std::move(value)); return *this;}

    
    inline FunctionUrlConfig& WithLastModifiedTime(const char* value) { SetLastModifiedTime(value); return *this;}


    
    inline const Cors& GetCors() const{ return m_cors; }

    
    inline bool CorsHasBeenSet() const { return m_corsHasBeenSet; }

    
    inline void SetCors(const Cors& value) { m_corsHasBeenSet = true; m_cors = value; }

    
    inline void SetCors(Cors&& value) { m_corsHasBeenSet = true; m_cors = std::move(value); }

    
    inline FunctionUrlConfig& WithCors(const Cors& value) { SetCors(value); return *this;}

    
    inline FunctionUrlConfig& WithCors(Cors&& value) { SetCors(std::move(value)); return *this;}


    
    inline const AuthorizationType& GetAuthorizationType() const{ return m_authorizationType; }

    
    inline bool AuthorizationTypeHasBeenSet() const { return m_authorizationTypeHasBeenSet; }

    
    inline void SetAuthorizationType(const AuthorizationType& value) { m_authorizationTypeHasBeenSet = true; m_authorizationType = value; }

    
    inline void SetAuthorizationType(AuthorizationType&& value) { m_authorizationTypeHasBeenSet = true; m_authorizationType = std::move(value); }

    
    inline FunctionUrlConfig& WithAuthorizationType(const AuthorizationType& value) { SetAuthorizationType(value); return *this;}

    
    inline FunctionUrlConfig& WithAuthorizationType(AuthorizationType&& value) { SetAuthorizationType(std::move(value)); return *this;}

  private:

    Aws::String m_functionUrl;
    bool m_functionUrlHasBeenSet;

    Aws::String m_functionArn;
    bool m_functionArnHasBeenSet;

    Aws::String m_creationTime;
    bool m_creationTimeHasBeenSet;

    Aws::String m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet;

    Cors m_cors;
    bool m_corsHasBeenSet;

    AuthorizationType m_authorizationType;
    bool m_authorizationTypeHasBeenSet;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
