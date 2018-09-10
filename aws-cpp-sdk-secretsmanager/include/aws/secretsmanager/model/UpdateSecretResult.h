﻿/*
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
namespace SecretsManager
{
namespace Model
{
  class AWS_SECRETSMANAGER_API UpdateSecretResult
  {
  public:
    UpdateSecretResult();
    UpdateSecretResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateSecretResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the secret that was updated.</p> <note> <p>Secrets Manager
     * automatically adds several random characters to the name at the end of the ARN
     * when you initially create a secret. This affects only the ARN and not the actual
     * friendly name. This ensures that if you create a new secret with the same name
     * as an old secret that you previously deleted, then users with access to the old
     * secret <i>don't</i> automatically get access to the new secret because the ARNs
     * are different.</p> </note>
     */
    inline const Aws::String& GetARN() const{ return m_aRN; }

    /**
     * <p>The ARN of the secret that was updated.</p> <note> <p>Secrets Manager
     * automatically adds several random characters to the name at the end of the ARN
     * when you initially create a secret. This affects only the ARN and not the actual
     * friendly name. This ensures that if you create a new secret with the same name
     * as an old secret that you previously deleted, then users with access to the old
     * secret <i>don't</i> automatically get access to the new secret because the ARNs
     * are different.</p> </note>
     */
    inline void SetARN(const Aws::String& value) { m_aRN = value; }

    /**
     * <p>The ARN of the secret that was updated.</p> <note> <p>Secrets Manager
     * automatically adds several random characters to the name at the end of the ARN
     * when you initially create a secret. This affects only the ARN and not the actual
     * friendly name. This ensures that if you create a new secret with the same name
     * as an old secret that you previously deleted, then users with access to the old
     * secret <i>don't</i> automatically get access to the new secret because the ARNs
     * are different.</p> </note>
     */
    inline void SetARN(Aws::String&& value) { m_aRN = std::move(value); }

    /**
     * <p>The ARN of the secret that was updated.</p> <note> <p>Secrets Manager
     * automatically adds several random characters to the name at the end of the ARN
     * when you initially create a secret. This affects only the ARN and not the actual
     * friendly name. This ensures that if you create a new secret with the same name
     * as an old secret that you previously deleted, then users with access to the old
     * secret <i>don't</i> automatically get access to the new secret because the ARNs
     * are different.</p> </note>
     */
    inline void SetARN(const char* value) { m_aRN.assign(value); }

    /**
     * <p>The ARN of the secret that was updated.</p> <note> <p>Secrets Manager
     * automatically adds several random characters to the name at the end of the ARN
     * when you initially create a secret. This affects only the ARN and not the actual
     * friendly name. This ensures that if you create a new secret with the same name
     * as an old secret that you previously deleted, then users with access to the old
     * secret <i>don't</i> automatically get access to the new secret because the ARNs
     * are different.</p> </note>
     */
    inline UpdateSecretResult& WithARN(const Aws::String& value) { SetARN(value); return *this;}

    /**
     * <p>The ARN of the secret that was updated.</p> <note> <p>Secrets Manager
     * automatically adds several random characters to the name at the end of the ARN
     * when you initially create a secret. This affects only the ARN and not the actual
     * friendly name. This ensures that if you create a new secret with the same name
     * as an old secret that you previously deleted, then users with access to the old
     * secret <i>don't</i> automatically get access to the new secret because the ARNs
     * are different.</p> </note>
     */
    inline UpdateSecretResult& WithARN(Aws::String&& value) { SetARN(std::move(value)); return *this;}

    /**
     * <p>The ARN of the secret that was updated.</p> <note> <p>Secrets Manager
     * automatically adds several random characters to the name at the end of the ARN
     * when you initially create a secret. This affects only the ARN and not the actual
     * friendly name. This ensures that if you create a new secret with the same name
     * as an old secret that you previously deleted, then users with access to the old
     * secret <i>don't</i> automatically get access to the new secret because the ARNs
     * are different.</p> </note>
     */
    inline UpdateSecretResult& WithARN(const char* value) { SetARN(value); return *this;}


    /**
     * <p>The friendly name of the secret that was updated.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The friendly name of the secret that was updated.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The friendly name of the secret that was updated.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The friendly name of the secret that was updated.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The friendly name of the secret that was updated.</p>
     */
    inline UpdateSecretResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The friendly name of the secret that was updated.</p>
     */
    inline UpdateSecretResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The friendly name of the secret that was updated.</p>
     */
    inline UpdateSecretResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>If a new version of the secret was created by this operation, then
     * <code>VersionId</code> contains the unique identifier of the new version.</p>
     */
    inline const Aws::String& GetVersionId() const{ return m_versionId; }

    /**
     * <p>If a new version of the secret was created by this operation, then
     * <code>VersionId</code> contains the unique identifier of the new version.</p>
     */
    inline void SetVersionId(const Aws::String& value) { m_versionId = value; }

    /**
     * <p>If a new version of the secret was created by this operation, then
     * <code>VersionId</code> contains the unique identifier of the new version.</p>
     */
    inline void SetVersionId(Aws::String&& value) { m_versionId = std::move(value); }

    /**
     * <p>If a new version of the secret was created by this operation, then
     * <code>VersionId</code> contains the unique identifier of the new version.</p>
     */
    inline void SetVersionId(const char* value) { m_versionId.assign(value); }

    /**
     * <p>If a new version of the secret was created by this operation, then
     * <code>VersionId</code> contains the unique identifier of the new version.</p>
     */
    inline UpdateSecretResult& WithVersionId(const Aws::String& value) { SetVersionId(value); return *this;}

    /**
     * <p>If a new version of the secret was created by this operation, then
     * <code>VersionId</code> contains the unique identifier of the new version.</p>
     */
    inline UpdateSecretResult& WithVersionId(Aws::String&& value) { SetVersionId(std::move(value)); return *this;}

    /**
     * <p>If a new version of the secret was created by this operation, then
     * <code>VersionId</code> contains the unique identifier of the new version.</p>
     */
    inline UpdateSecretResult& WithVersionId(const char* value) { SetVersionId(value); return *this;}

  private:

    Aws::String m_aRN;

    Aws::String m_name;

    Aws::String m_versionId;
  };

} // namespace Model
} // namespace SecretsManager
} // namespace Aws
