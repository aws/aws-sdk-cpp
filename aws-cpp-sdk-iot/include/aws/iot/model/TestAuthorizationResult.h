/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class AWS_IOT_API TestAuthorizationResult
  {
  public:
    TestAuthorizationResult();
    TestAuthorizationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    TestAuthorizationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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

  private:

    Aws::Vector<AuthResult> m_authResults;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
