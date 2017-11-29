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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class AWS_IOT_API TestInvokeAuthorizerResult
  {
  public:
    TestInvokeAuthorizerResult();
    TestInvokeAuthorizerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    TestInvokeAuthorizerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>True if the token is authenticated, otherwise false.</p>
     */
    inline bool GetIsAuthenticated() const{ return m_isAuthenticated; }

    /**
     * <p>True if the token is authenticated, otherwise false.</p>
     */
    inline void SetIsAuthenticated(bool value) { m_isAuthenticated = value; }

    /**
     * <p>True if the token is authenticated, otherwise false.</p>
     */
    inline TestInvokeAuthorizerResult& WithIsAuthenticated(bool value) { SetIsAuthenticated(value); return *this;}


    /**
     * <p>The principal ID.</p>
     */
    inline const Aws::String& GetPrincipalId() const{ return m_principalId; }

    /**
     * <p>The principal ID.</p>
     */
    inline void SetPrincipalId(const Aws::String& value) { m_principalId = value; }

    /**
     * <p>The principal ID.</p>
     */
    inline void SetPrincipalId(Aws::String&& value) { m_principalId = std::move(value); }

    /**
     * <p>The principal ID.</p>
     */
    inline void SetPrincipalId(const char* value) { m_principalId.assign(value); }

    /**
     * <p>The principal ID.</p>
     */
    inline TestInvokeAuthorizerResult& WithPrincipalId(const Aws::String& value) { SetPrincipalId(value); return *this;}

    /**
     * <p>The principal ID.</p>
     */
    inline TestInvokeAuthorizerResult& WithPrincipalId(Aws::String&& value) { SetPrincipalId(std::move(value)); return *this;}

    /**
     * <p>The principal ID.</p>
     */
    inline TestInvokeAuthorizerResult& WithPrincipalId(const char* value) { SetPrincipalId(value); return *this;}


    /**
     * <p>IAM policy documents.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPolicyDocuments() const{ return m_policyDocuments; }

    /**
     * <p>IAM policy documents.</p>
     */
    inline void SetPolicyDocuments(const Aws::Vector<Aws::String>& value) { m_policyDocuments = value; }

    /**
     * <p>IAM policy documents.</p>
     */
    inline void SetPolicyDocuments(Aws::Vector<Aws::String>&& value) { m_policyDocuments = std::move(value); }

    /**
     * <p>IAM policy documents.</p>
     */
    inline TestInvokeAuthorizerResult& WithPolicyDocuments(const Aws::Vector<Aws::String>& value) { SetPolicyDocuments(value); return *this;}

    /**
     * <p>IAM policy documents.</p>
     */
    inline TestInvokeAuthorizerResult& WithPolicyDocuments(Aws::Vector<Aws::String>&& value) { SetPolicyDocuments(std::move(value)); return *this;}

    /**
     * <p>IAM policy documents.</p>
     */
    inline TestInvokeAuthorizerResult& AddPolicyDocuments(const Aws::String& value) { m_policyDocuments.push_back(value); return *this; }

    /**
     * <p>IAM policy documents.</p>
     */
    inline TestInvokeAuthorizerResult& AddPolicyDocuments(Aws::String&& value) { m_policyDocuments.push_back(std::move(value)); return *this; }

    /**
     * <p>IAM policy documents.</p>
     */
    inline TestInvokeAuthorizerResult& AddPolicyDocuments(const char* value) { m_policyDocuments.push_back(value); return *this; }


    /**
     * <p>The number of seconds after which the temporary credentials are
     * refreshed.</p>
     */
    inline int GetRefreshAfterInSeconds() const{ return m_refreshAfterInSeconds; }

    /**
     * <p>The number of seconds after which the temporary credentials are
     * refreshed.</p>
     */
    inline void SetRefreshAfterInSeconds(int value) { m_refreshAfterInSeconds = value; }

    /**
     * <p>The number of seconds after which the temporary credentials are
     * refreshed.</p>
     */
    inline TestInvokeAuthorizerResult& WithRefreshAfterInSeconds(int value) { SetRefreshAfterInSeconds(value); return *this;}


    /**
     * <p>The number of seconds after which the connection is terminated.</p>
     */
    inline int GetDisconnectAfterInSeconds() const{ return m_disconnectAfterInSeconds; }

    /**
     * <p>The number of seconds after which the connection is terminated.</p>
     */
    inline void SetDisconnectAfterInSeconds(int value) { m_disconnectAfterInSeconds = value; }

    /**
     * <p>The number of seconds after which the connection is terminated.</p>
     */
    inline TestInvokeAuthorizerResult& WithDisconnectAfterInSeconds(int value) { SetDisconnectAfterInSeconds(value); return *this;}

  private:

    bool m_isAuthenticated;

    Aws::String m_principalId;

    Aws::Vector<Aws::String> m_policyDocuments;

    int m_refreshAfterInSeconds;

    int m_disconnectAfterInSeconds;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
