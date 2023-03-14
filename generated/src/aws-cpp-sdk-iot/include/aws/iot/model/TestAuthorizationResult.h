/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/AuthResult.h>
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
  class TestAuthorizationResult
  {
  public:
    AWS_IOT_API TestAuthorizationResult();
    AWS_IOT_API TestAuthorizationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API TestAuthorizationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The authentication results.</p>
     */
    inline const Aws::Vector<AuthResult>& GetAuthResults() const{ return m_authResults; }

    /**
     * <p>The authentication results.</p>
     */
    inline void SetAuthResults(const Aws::Vector<AuthResult>& value) { m_authResults = value; }

    /**
     * <p>The authentication results.</p>
     */
    inline void SetAuthResults(Aws::Vector<AuthResult>&& value) { m_authResults = std::move(value); }

    /**
     * <p>The authentication results.</p>
     */
    inline TestAuthorizationResult& WithAuthResults(const Aws::Vector<AuthResult>& value) { SetAuthResults(value); return *this;}

    /**
     * <p>The authentication results.</p>
     */
    inline TestAuthorizationResult& WithAuthResults(Aws::Vector<AuthResult>&& value) { SetAuthResults(std::move(value)); return *this;}

    /**
     * <p>The authentication results.</p>
     */
    inline TestAuthorizationResult& AddAuthResults(const AuthResult& value) { m_authResults.push_back(value); return *this; }

    /**
     * <p>The authentication results.</p>
     */
    inline TestAuthorizationResult& AddAuthResults(AuthResult&& value) { m_authResults.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline TestAuthorizationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline TestAuthorizationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline TestAuthorizationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<AuthResult> m_authResults;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
