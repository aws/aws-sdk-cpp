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
#include <aws/secretsmanager/SecretsManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/secretsmanager/model/SecretListEntry.h>
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
namespace SecretsManager
{
namespace Model
{
  class AWS_SECRETSMANAGER_API ListSecretsResult
  {
  public:
    ListSecretsResult();
    ListSecretsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListSecretsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of the secrets in the account.</p>
     */
    inline const Aws::Vector<SecretListEntry>& GetSecretList() const{ return m_secretList; }

    /**
     * <p>A list of the secrets in the account.</p>
     */
    inline void SetSecretList(const Aws::Vector<SecretListEntry>& value) { m_secretList = value; }

    /**
     * <p>A list of the secrets in the account.</p>
     */
    inline void SetSecretList(Aws::Vector<SecretListEntry>&& value) { m_secretList = std::move(value); }

    /**
     * <p>A list of the secrets in the account.</p>
     */
    inline ListSecretsResult& WithSecretList(const Aws::Vector<SecretListEntry>& value) { SetSecretList(value); return *this;}

    /**
     * <p>A list of the secrets in the account.</p>
     */
    inline ListSecretsResult& WithSecretList(Aws::Vector<SecretListEntry>&& value) { SetSecretList(std::move(value)); return *this;}

    /**
     * <p>A list of the secrets in the account.</p>
     */
    inline ListSecretsResult& AddSecretList(const SecretListEntry& value) { m_secretList.push_back(value); return *this; }

    /**
     * <p>A list of the secrets in the account.</p>
     */
    inline ListSecretsResult& AddSecretList(SecretListEntry&& value) { m_secretList.push_back(std::move(value)); return *this; }


    /**
     * <p>If present in the response, this value indicates that there's more output
     * available than what's included in the current response. This can occur even when
     * the response includes no values at all, such as when you ask for a filtered view
     * of a very long list. Use this value in the <code>NextToken</code> request
     * parameter in a subsequent call to the operation to continue processing and get
     * the next part of the output. You should repeat this until the
     * <code>NextToken</code> response element comes back empty (as
     * <code>null</code>).</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If present in the response, this value indicates that there's more output
     * available than what's included in the current response. This can occur even when
     * the response includes no values at all, such as when you ask for a filtered view
     * of a very long list. Use this value in the <code>NextToken</code> request
     * parameter in a subsequent call to the operation to continue processing and get
     * the next part of the output. You should repeat this until the
     * <code>NextToken</code> response element comes back empty (as
     * <code>null</code>).</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If present in the response, this value indicates that there's more output
     * available than what's included in the current response. This can occur even when
     * the response includes no values at all, such as when you ask for a filtered view
     * of a very long list. Use this value in the <code>NextToken</code> request
     * parameter in a subsequent call to the operation to continue processing and get
     * the next part of the output. You should repeat this until the
     * <code>NextToken</code> response element comes back empty (as
     * <code>null</code>).</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If present in the response, this value indicates that there's more output
     * available than what's included in the current response. This can occur even when
     * the response includes no values at all, such as when you ask for a filtered view
     * of a very long list. Use this value in the <code>NextToken</code> request
     * parameter in a subsequent call to the operation to continue processing and get
     * the next part of the output. You should repeat this until the
     * <code>NextToken</code> response element comes back empty (as
     * <code>null</code>).</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If present in the response, this value indicates that there's more output
     * available than what's included in the current response. This can occur even when
     * the response includes no values at all, such as when you ask for a filtered view
     * of a very long list. Use this value in the <code>NextToken</code> request
     * parameter in a subsequent call to the operation to continue processing and get
     * the next part of the output. You should repeat this until the
     * <code>NextToken</code> response element comes back empty (as
     * <code>null</code>).</p>
     */
    inline ListSecretsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If present in the response, this value indicates that there's more output
     * available than what's included in the current response. This can occur even when
     * the response includes no values at all, such as when you ask for a filtered view
     * of a very long list. Use this value in the <code>NextToken</code> request
     * parameter in a subsequent call to the operation to continue processing and get
     * the next part of the output. You should repeat this until the
     * <code>NextToken</code> response element comes back empty (as
     * <code>null</code>).</p>
     */
    inline ListSecretsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If present in the response, this value indicates that there's more output
     * available than what's included in the current response. This can occur even when
     * the response includes no values at all, such as when you ask for a filtered view
     * of a very long list. Use this value in the <code>NextToken</code> request
     * parameter in a subsequent call to the operation to continue processing and get
     * the next part of the output. You should repeat this until the
     * <code>NextToken</code> response element comes back empty (as
     * <code>null</code>).</p>
     */
    inline ListSecretsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<SecretListEntry> m_secretList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SecretsManager
} // namespace Aws
