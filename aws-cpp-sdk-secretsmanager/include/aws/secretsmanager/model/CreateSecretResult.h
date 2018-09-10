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
  class AWS_SECRETSMANAGER_API CreateSecretResult
  {
  public:
    CreateSecretResult();
    CreateSecretResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateSecretResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the secret that you just created.</p>
     * <note> <p>Secrets Manager automatically adds several random characters to the
     * name at the end of the ARN when you initially create a secret. This affects only
     * the ARN and not the actual friendly name. This ensures that if you create a new
     * secret with the same name as an old secret that you previously deleted, then
     * users with access to the old secret <i>don't</i> automatically get access to the
     * new secret because the ARNs are different.</p> </note>
     */
    inline const Aws::String& GetARN() const{ return m_aRN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the secret that you just created.</p>
     * <note> <p>Secrets Manager automatically adds several random characters to the
     * name at the end of the ARN when you initially create a secret. This affects only
     * the ARN and not the actual friendly name. This ensures that if you create a new
     * secret with the same name as an old secret that you previously deleted, then
     * users with access to the old secret <i>don't</i> automatically get access to the
     * new secret because the ARNs are different.</p> </note>
     */
    inline void SetARN(const Aws::String& value) { m_aRN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the secret that you just created.</p>
     * <note> <p>Secrets Manager automatically adds several random characters to the
     * name at the end of the ARN when you initially create a secret. This affects only
     * the ARN and not the actual friendly name. This ensures that if you create a new
     * secret with the same name as an old secret that you previously deleted, then
     * users with access to the old secret <i>don't</i> automatically get access to the
     * new secret because the ARNs are different.</p> </note>
     */
    inline void SetARN(Aws::String&& value) { m_aRN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the secret that you just created.</p>
     * <note> <p>Secrets Manager automatically adds several random characters to the
     * name at the end of the ARN when you initially create a secret. This affects only
     * the ARN and not the actual friendly name. This ensures that if you create a new
     * secret with the same name as an old secret that you previously deleted, then
     * users with access to the old secret <i>don't</i> automatically get access to the
     * new secret because the ARNs are different.</p> </note>
     */
    inline void SetARN(const char* value) { m_aRN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the secret that you just created.</p>
     * <note> <p>Secrets Manager automatically adds several random characters to the
     * name at the end of the ARN when you initially create a secret. This affects only
     * the ARN and not the actual friendly name. This ensures that if you create a new
     * secret with the same name as an old secret that you previously deleted, then
     * users with access to the old secret <i>don't</i> automatically get access to the
     * new secret because the ARNs are different.</p> </note>
     */
    inline CreateSecretResult& WithARN(const Aws::String& value) { SetARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the secret that you just created.</p>
     * <note> <p>Secrets Manager automatically adds several random characters to the
     * name at the end of the ARN when you initially create a secret. This affects only
     * the ARN and not the actual friendly name. This ensures that if you create a new
     * secret with the same name as an old secret that you previously deleted, then
     * users with access to the old secret <i>don't</i> automatically get access to the
     * new secret because the ARNs are different.</p> </note>
     */
    inline CreateSecretResult& WithARN(Aws::String&& value) { SetARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the secret that you just created.</p>
     * <note> <p>Secrets Manager automatically adds several random characters to the
     * name at the end of the ARN when you initially create a secret. This affects only
     * the ARN and not the actual friendly name. This ensures that if you create a new
     * secret with the same name as an old secret that you previously deleted, then
     * users with access to the old secret <i>don't</i> automatically get access to the
     * new secret because the ARNs are different.</p> </note>
     */
    inline CreateSecretResult& WithARN(const char* value) { SetARN(value); return *this;}


    /**
     * <p>The friendly name of the secret that you just created.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The friendly name of the secret that you just created.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The friendly name of the secret that you just created.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The friendly name of the secret that you just created.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The friendly name of the secret that you just created.</p>
     */
    inline CreateSecretResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The friendly name of the secret that you just created.</p>
     */
    inline CreateSecretResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The friendly name of the secret that you just created.</p>
     */
    inline CreateSecretResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The unique identifier that's associated with the version of the secret you
     * just created.</p>
     */
    inline const Aws::String& GetVersionId() const{ return m_versionId; }

    /**
     * <p>The unique identifier that's associated with the version of the secret you
     * just created.</p>
     */
    inline void SetVersionId(const Aws::String& value) { m_versionId = value; }

    /**
     * <p>The unique identifier that's associated with the version of the secret you
     * just created.</p>
     */
    inline void SetVersionId(Aws::String&& value) { m_versionId = std::move(value); }

    /**
     * <p>The unique identifier that's associated with the version of the secret you
     * just created.</p>
     */
    inline void SetVersionId(const char* value) { m_versionId.assign(value); }

    /**
     * <p>The unique identifier that's associated with the version of the secret you
     * just created.</p>
     */
    inline CreateSecretResult& WithVersionId(const Aws::String& value) { SetVersionId(value); return *this;}

    /**
     * <p>The unique identifier that's associated with the version of the secret you
     * just created.</p>
     */
    inline CreateSecretResult& WithVersionId(Aws::String&& value) { SetVersionId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier that's associated with the version of the secret you
     * just created.</p>
     */
    inline CreateSecretResult& WithVersionId(const char* value) { SetVersionId(value); return *this;}

  private:

    Aws::String m_aRN;

    Aws::String m_name;

    Aws::String m_versionId;
  };

} // namespace Model
} // namespace SecretsManager
} // namespace Aws
