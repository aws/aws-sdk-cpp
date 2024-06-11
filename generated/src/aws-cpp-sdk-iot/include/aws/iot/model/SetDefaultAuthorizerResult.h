﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
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
namespace IoT
{
namespace Model
{
  class SetDefaultAuthorizerResult
  {
  public:
    AWS_IOT_API SetDefaultAuthorizerResult();
    AWS_IOT_API SetDefaultAuthorizerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API SetDefaultAuthorizerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The authorizer name.</p>
     */
    inline const Aws::String& GetAuthorizerName() const{ return m_authorizerName; }
    inline void SetAuthorizerName(const Aws::String& value) { m_authorizerName = value; }
    inline void SetAuthorizerName(Aws::String&& value) { m_authorizerName = std::move(value); }
    inline void SetAuthorizerName(const char* value) { m_authorizerName.assign(value); }
    inline SetDefaultAuthorizerResult& WithAuthorizerName(const Aws::String& value) { SetAuthorizerName(value); return *this;}
    inline SetDefaultAuthorizerResult& WithAuthorizerName(Aws::String&& value) { SetAuthorizerName(std::move(value)); return *this;}
    inline SetDefaultAuthorizerResult& WithAuthorizerName(const char* value) { SetAuthorizerName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authorizer ARN.</p>
     */
    inline const Aws::String& GetAuthorizerArn() const{ return m_authorizerArn; }
    inline void SetAuthorizerArn(const Aws::String& value) { m_authorizerArn = value; }
    inline void SetAuthorizerArn(Aws::String&& value) { m_authorizerArn = std::move(value); }
    inline void SetAuthorizerArn(const char* value) { m_authorizerArn.assign(value); }
    inline SetDefaultAuthorizerResult& WithAuthorizerArn(const Aws::String& value) { SetAuthorizerArn(value); return *this;}
    inline SetDefaultAuthorizerResult& WithAuthorizerArn(Aws::String&& value) { SetAuthorizerArn(std::move(value)); return *this;}
    inline SetDefaultAuthorizerResult& WithAuthorizerArn(const char* value) { SetAuthorizerArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline SetDefaultAuthorizerResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline SetDefaultAuthorizerResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline SetDefaultAuthorizerResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_authorizerName;

    Aws::String m_authorizerArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
