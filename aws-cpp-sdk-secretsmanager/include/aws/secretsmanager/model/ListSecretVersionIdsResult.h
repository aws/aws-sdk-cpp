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
     * <p>The list of the currently available versions of the specified secret.</p>
     */
    inline const Aws::Vector<SecretVersionsListEntry>& GetVersions() const{ return m_versions; }

    /**
     * <p>The list of the currently available versions of the specified secret.</p>
     */
    inline void SetVersions(const Aws::Vector<SecretVersionsListEntry>& value) { m_versions = value; }

    /**
     * <p>The list of the currently available versions of the specified secret.</p>
     */
    inline void SetVersions(Aws::Vector<SecretVersionsListEntry>&& value) { m_versions = std::move(value); }

    /**
     * <p>The list of the currently available versions of the specified secret.</p>
     */
    inline ListSecretVersionIdsResult& WithVersions(const Aws::Vector<SecretVersionsListEntry>& value) { SetVersions(value); return *this;}

    /**
     * <p>The list of the currently available versions of the specified secret.</p>
     */
    inline ListSecretVersionIdsResult& WithVersions(Aws::Vector<SecretVersionsListEntry>&& value) { SetVersions(std::move(value)); return *this;}

    /**
     * <p>The list of the currently available versions of the specified secret.</p>
     */
    inline ListSecretVersionIdsResult& AddVersions(const SecretVersionsListEntry& value) { m_versions.push_back(value); return *this; }

    /**
     * <p>The list of the currently available versions of the specified secret.</p>
     */
    inline ListSecretVersionIdsResult& AddVersions(SecretVersionsListEntry&& value) { m_versions.push_back(std::move(value)); return *this; }


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
    inline ListSecretVersionIdsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

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
    inline ListSecretVersionIdsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

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
    inline ListSecretVersionIdsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) for the secret.</p> <note> <p>Secrets Manager
     * automatically adds several random characters to the name at the end of the ARN
     * when you initially create a secret. This affects only the ARN and not the actual
     * friendly name. This ensures that if you create a new secret with the same name
     * as an old secret that you previously deleted, then users with access to the old
     * secret <i>don't</i> automatically get access to the new secret because the ARNs
     * are different.</p> </note>
     */
    inline const Aws::String& GetARN() const{ return m_aRN; }

    /**
     * <p>The Amazon Resource Name (ARN) for the secret.</p> <note> <p>Secrets Manager
     * automatically adds several random characters to the name at the end of the ARN
     * when you initially create a secret. This affects only the ARN and not the actual
     * friendly name. This ensures that if you create a new secret with the same name
     * as an old secret that you previously deleted, then users with access to the old
     * secret <i>don't</i> automatically get access to the new secret because the ARNs
     * are different.</p> </note>
     */
    inline void SetARN(const Aws::String& value) { m_aRN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the secret.</p> <note> <p>Secrets Manager
     * automatically adds several random characters to the name at the end of the ARN
     * when you initially create a secret. This affects only the ARN and not the actual
     * friendly name. This ensures that if you create a new secret with the same name
     * as an old secret that you previously deleted, then users with access to the old
     * secret <i>don't</i> automatically get access to the new secret because the ARNs
     * are different.</p> </note>
     */
    inline void SetARN(Aws::String&& value) { m_aRN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the secret.</p> <note> <p>Secrets Manager
     * automatically adds several random characters to the name at the end of the ARN
     * when you initially create a secret. This affects only the ARN and not the actual
     * friendly name. This ensures that if you create a new secret with the same name
     * as an old secret that you previously deleted, then users with access to the old
     * secret <i>don't</i> automatically get access to the new secret because the ARNs
     * are different.</p> </note>
     */
    inline void SetARN(const char* value) { m_aRN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the secret.</p> <note> <p>Secrets Manager
     * automatically adds several random characters to the name at the end of the ARN
     * when you initially create a secret. This affects only the ARN and not the actual
     * friendly name. This ensures that if you create a new secret with the same name
     * as an old secret that you previously deleted, then users with access to the old
     * secret <i>don't</i> automatically get access to the new secret because the ARNs
     * are different.</p> </note>
     */
    inline ListSecretVersionIdsResult& WithARN(const Aws::String& value) { SetARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the secret.</p> <note> <p>Secrets Manager
     * automatically adds several random characters to the name at the end of the ARN
     * when you initially create a secret. This affects only the ARN and not the actual
     * friendly name. This ensures that if you create a new secret with the same name
     * as an old secret that you previously deleted, then users with access to the old
     * secret <i>don't</i> automatically get access to the new secret because the ARNs
     * are different.</p> </note>
     */
    inline ListSecretVersionIdsResult& WithARN(Aws::String&& value) { SetARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the secret.</p> <note> <p>Secrets Manager
     * automatically adds several random characters to the name at the end of the ARN
     * when you initially create a secret. This affects only the ARN and not the actual
     * friendly name. This ensures that if you create a new secret with the same name
     * as an old secret that you previously deleted, then users with access to the old
     * secret <i>don't</i> automatically get access to the new secret because the ARNs
     * are different.</p> </note>
     */
    inline ListSecretVersionIdsResult& WithARN(const char* value) { SetARN(value); return *this;}


    /**
     * <p>The friendly name of the secret.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The friendly name of the secret.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The friendly name of the secret.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The friendly name of the secret.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The friendly name of the secret.</p>
     */
    inline ListSecretVersionIdsResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The friendly name of the secret.</p>
     */
    inline ListSecretVersionIdsResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The friendly name of the secret.</p>
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
