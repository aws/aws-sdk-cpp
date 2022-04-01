﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
     * <p>Secrets Manager includes this value if there's more output available than
     * what is included in the current response. This can occur even when the response
     * includes no values at all, such as when you ask for a filtered view of a long
     * list. To get the next results, call <code>ListSecrets</code> again with this
     * value.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Secrets Manager includes this value if there's more output available than
     * what is included in the current response. This can occur even when the response
     * includes no values at all, such as when you ask for a filtered view of a long
     * list. To get the next results, call <code>ListSecrets</code> again with this
     * value.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Secrets Manager includes this value if there's more output available than
     * what is included in the current response. This can occur even when the response
     * includes no values at all, such as when you ask for a filtered view of a long
     * list. To get the next results, call <code>ListSecrets</code> again with this
     * value.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Secrets Manager includes this value if there's more output available than
     * what is included in the current response. This can occur even when the response
     * includes no values at all, such as when you ask for a filtered view of a long
     * list. To get the next results, call <code>ListSecrets</code> again with this
     * value.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Secrets Manager includes this value if there's more output available than
     * what is included in the current response. This can occur even when the response
     * includes no values at all, such as when you ask for a filtered view of a long
     * list. To get the next results, call <code>ListSecrets</code> again with this
     * value.</p>
     */
    inline ListSecretsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Secrets Manager includes this value if there's more output available than
     * what is included in the current response. This can occur even when the response
     * includes no values at all, such as when you ask for a filtered view of a long
     * list. To get the next results, call <code>ListSecrets</code> again with this
     * value.</p>
     */
    inline ListSecretsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Secrets Manager includes this value if there's more output available than
     * what is included in the current response. This can occur even when the response
     * includes no values at all, such as when you ask for a filtered view of a long
     * list. To get the next results, call <code>ListSecrets</code> again with this
     * value.</p>
     */
    inline ListSecretsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<SecretListEntry> m_secretList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SecretsManager
} // namespace Aws
