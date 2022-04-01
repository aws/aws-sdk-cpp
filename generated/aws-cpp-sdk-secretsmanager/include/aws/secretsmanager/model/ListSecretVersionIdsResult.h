﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/secretsmanager/SecretsManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/secretsmanager/model/SecretVersionsListEntry.h>
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
  class AWS_SECRETSMANAGER_API ListSecretVersionIdsResult
  {
  public:
    ListSecretVersionIdsResult();
    ListSecretVersionIdsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListSecretVersionIdsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of the versions of the secret.</p>
     */
    inline const Aws::Vector<SecretVersionsListEntry>& GetVersions() const{ return m_versions; }

    /**
     * <p>A list of the versions of the secret.</p>
     */
    inline void SetVersions(const Aws::Vector<SecretVersionsListEntry>& value) { m_versions = value; }

    /**
     * <p>A list of the versions of the secret.</p>
     */
    inline void SetVersions(Aws::Vector<SecretVersionsListEntry>&& value) { m_versions = std::move(value); }

    /**
     * <p>A list of the versions of the secret.</p>
     */
    inline ListSecretVersionIdsResult& WithVersions(const Aws::Vector<SecretVersionsListEntry>& value) { SetVersions(value); return *this;}

    /**
     * <p>A list of the versions of the secret.</p>
     */
    inline ListSecretVersionIdsResult& WithVersions(Aws::Vector<SecretVersionsListEntry>&& value) { SetVersions(std::move(value)); return *this;}

    /**
     * <p>A list of the versions of the secret.</p>
     */
    inline ListSecretVersionIdsResult& AddVersions(const SecretVersionsListEntry& value) { m_versions.push_back(value); return *this; }

    /**
     * <p>A list of the versions of the secret.</p>
     */
    inline ListSecretVersionIdsResult& AddVersions(SecretVersionsListEntry&& value) { m_versions.push_back(std::move(value)); return *this; }


    /**
     * <p>Secrets Manager includes this value if there's more output available than
     * what is included in the current response. This can occur even when the response
     * includes no values at all, such as when you ask for a filtered view of a long
     * list. To get the next results, call <code>ListSecretVersionIds</code> again with
     * this value. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Secrets Manager includes this value if there's more output available than
     * what is included in the current response. This can occur even when the response
     * includes no values at all, such as when you ask for a filtered view of a long
     * list. To get the next results, call <code>ListSecretVersionIds</code> again with
     * this value. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Secrets Manager includes this value if there's more output available than
     * what is included in the current response. This can occur even when the response
     * includes no values at all, such as when you ask for a filtered view of a long
     * list. To get the next results, call <code>ListSecretVersionIds</code> again with
     * this value. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Secrets Manager includes this value if there's more output available than
     * what is included in the current response. This can occur even when the response
     * includes no values at all, such as when you ask for a filtered view of a long
     * list. To get the next results, call <code>ListSecretVersionIds</code> again with
     * this value. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Secrets Manager includes this value if there's more output available than
     * what is included in the current response. This can occur even when the response
     * includes no values at all, such as when you ask for a filtered view of a long
     * list. To get the next results, call <code>ListSecretVersionIds</code> again with
     * this value. </p>
     */
    inline ListSecretVersionIdsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Secrets Manager includes this value if there's more output available than
     * what is included in the current response. This can occur even when the response
     * includes no values at all, such as when you ask for a filtered view of a long
     * list. To get the next results, call <code>ListSecretVersionIds</code> again with
     * this value. </p>
     */
    inline ListSecretVersionIdsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Secrets Manager includes this value if there's more output available than
     * what is included in the current response. This can occur even when the response
     * includes no values at all, such as when you ask for a filtered view of a long
     * list. To get the next results, call <code>ListSecretVersionIds</code> again with
     * this value. </p>
     */
    inline ListSecretVersionIdsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The ARN of the secret.</p>
     */
    inline const Aws::String& GetARN() const{ return m_aRN; }

    /**
     * <p>The ARN of the secret.</p>
     */
    inline void SetARN(const Aws::String& value) { m_aRN = value; }

    /**
     * <p>The ARN of the secret.</p>
     */
    inline void SetARN(Aws::String&& value) { m_aRN = std::move(value); }

    /**
     * <p>The ARN of the secret.</p>
     */
    inline void SetARN(const char* value) { m_aRN.assign(value); }

    /**
     * <p>The ARN of the secret.</p>
     */
    inline ListSecretVersionIdsResult& WithARN(const Aws::String& value) { SetARN(value); return *this;}

    /**
     * <p>The ARN of the secret.</p>
     */
    inline ListSecretVersionIdsResult& WithARN(Aws::String&& value) { SetARN(std::move(value)); return *this;}

    /**
     * <p>The ARN of the secret.</p>
     */
    inline ListSecretVersionIdsResult& WithARN(const char* value) { SetARN(value); return *this;}


    /**
     * <p>The name of the secret.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the secret.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the secret.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the secret.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the secret.</p>
     */
    inline ListSecretVersionIdsResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the secret.</p>
     */
    inline ListSecretVersionIdsResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the secret.</p>
     */
    inline ListSecretVersionIdsResult& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::Vector<SecretVersionsListEntry> m_versions;

    Aws::String m_nextToken;

    Aws::String m_aRN;

    Aws::String m_name;
  };

} // namespace Model
} // namespace SecretsManager
} // namespace Aws
