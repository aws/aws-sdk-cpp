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
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
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
  class AWS_SECRETSMANAGER_API GetSecretValueResult
  {
  public:
    GetSecretValueResult();
    GetSecretValueResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetSecretValueResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline GetSecretValueResult& WithARN(const Aws::String& value) { SetARN(value); return *this;}

    /**
     * <p>The ARN of the secret.</p>
     */
    inline GetSecretValueResult& WithARN(Aws::String&& value) { SetARN(std::move(value)); return *this;}

    /**
     * <p>The ARN of the secret.</p>
     */
    inline GetSecretValueResult& WithARN(const char* value) { SetARN(value); return *this;}


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
    inline GetSecretValueResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The friendly name of the secret.</p>
     */
    inline GetSecretValueResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The friendly name of the secret.</p>
     */
    inline GetSecretValueResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The unique identifier of this version of the secret.</p>
     */
    inline const Aws::String& GetVersionId() const{ return m_versionId; }

    /**
     * <p>The unique identifier of this version of the secret.</p>
     */
    inline void SetVersionId(const Aws::String& value) { m_versionId = value; }

    /**
     * <p>The unique identifier of this version of the secret.</p>
     */
    inline void SetVersionId(Aws::String&& value) { m_versionId = std::move(value); }

    /**
     * <p>The unique identifier of this version of the secret.</p>
     */
    inline void SetVersionId(const char* value) { m_versionId.assign(value); }

    /**
     * <p>The unique identifier of this version of the secret.</p>
     */
    inline GetSecretValueResult& WithVersionId(const Aws::String& value) { SetVersionId(value); return *this;}

    /**
     * <p>The unique identifier of this version of the secret.</p>
     */
    inline GetSecretValueResult& WithVersionId(Aws::String&& value) { SetVersionId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of this version of the secret.</p>
     */
    inline GetSecretValueResult& WithVersionId(const char* value) { SetVersionId(value); return *this;}


    /**
     * <p>The decrypted part of the protected secret information that was originally
     * provided as binary data in the form of a byte array. The response parameter
     * represents the binary data as a <a
     * href="https://tools.ietf.org/html/rfc4648#section-4">base64-encoded</a>
     * string.</p> <p>This parameter is not used if the secret is created by the
     * Secrets Manager console.</p> <p>If you store custom information in this field of
     * the secret, then you must code your Lambda rotation function to parse and
     * interpret whatever you store in the <code>SecretString</code> or
     * <code>SecretBinary</code> fields.</p>
     */
    inline const Aws::Utils::CryptoBuffer& GetSecretBinary() const{ return m_secretBinary; }

    /**
     * <p>The decrypted part of the protected secret information that was originally
     * provided as binary data in the form of a byte array. The response parameter
     * represents the binary data as a <a
     * href="https://tools.ietf.org/html/rfc4648#section-4">base64-encoded</a>
     * string.</p> <p>This parameter is not used if the secret is created by the
     * Secrets Manager console.</p> <p>If you store custom information in this field of
     * the secret, then you must code your Lambda rotation function to parse and
     * interpret whatever you store in the <code>SecretString</code> or
     * <code>SecretBinary</code> fields.</p>
     */
    inline void SetSecretBinary(const Aws::Utils::CryptoBuffer& value) { m_secretBinary = value; }

    /**
     * <p>The decrypted part of the protected secret information that was originally
     * provided as binary data in the form of a byte array. The response parameter
     * represents the binary data as a <a
     * href="https://tools.ietf.org/html/rfc4648#section-4">base64-encoded</a>
     * string.</p> <p>This parameter is not used if the secret is created by the
     * Secrets Manager console.</p> <p>If you store custom information in this field of
     * the secret, then you must code your Lambda rotation function to parse and
     * interpret whatever you store in the <code>SecretString</code> or
     * <code>SecretBinary</code> fields.</p>
     */
    inline void SetSecretBinary(Aws::Utils::CryptoBuffer&& value) { m_secretBinary = std::move(value); }

    /**
     * <p>The decrypted part of the protected secret information that was originally
     * provided as binary data in the form of a byte array. The response parameter
     * represents the binary data as a <a
     * href="https://tools.ietf.org/html/rfc4648#section-4">base64-encoded</a>
     * string.</p> <p>This parameter is not used if the secret is created by the
     * Secrets Manager console.</p> <p>If you store custom information in this field of
     * the secret, then you must code your Lambda rotation function to parse and
     * interpret whatever you store in the <code>SecretString</code> or
     * <code>SecretBinary</code> fields.</p>
     */
    inline GetSecretValueResult& WithSecretBinary(const Aws::Utils::CryptoBuffer& value) { SetSecretBinary(value); return *this;}

    /**
     * <p>The decrypted part of the protected secret information that was originally
     * provided as binary data in the form of a byte array. The response parameter
     * represents the binary data as a <a
     * href="https://tools.ietf.org/html/rfc4648#section-4">base64-encoded</a>
     * string.</p> <p>This parameter is not used if the secret is created by the
     * Secrets Manager console.</p> <p>If you store custom information in this field of
     * the secret, then you must code your Lambda rotation function to parse and
     * interpret whatever you store in the <code>SecretString</code> or
     * <code>SecretBinary</code> fields.</p>
     */
    inline GetSecretValueResult& WithSecretBinary(Aws::Utils::CryptoBuffer&& value) { SetSecretBinary(std::move(value)); return *this;}


    /**
     * <p>The decrypted part of the protected secret information that was originally
     * provided as a string.</p> <p>If you create this secret by using the Secrets
     * Manager console then only the <code>SecretString</code> parameter contains data.
     * Secrets Manager stores the information as a JSON structure of key/value pairs
     * that the Lambda rotation function knows how to parse.</p> <p>If you store custom
     * information in the secret by using the <a>CreateSecret</a>, <a>UpdateSecret</a>,
     * or <a>PutSecretValue</a> API operations instead of the Secrets Manager console,
     * or by using the <b>Other secret type</b> in the console, then you must code your
     * Lambda rotation function to parse and interpret those values.</p>
     */
    inline const Aws::String& GetSecretString() const{ return m_secretString; }

    /**
     * <p>The decrypted part of the protected secret information that was originally
     * provided as a string.</p> <p>If you create this secret by using the Secrets
     * Manager console then only the <code>SecretString</code> parameter contains data.
     * Secrets Manager stores the information as a JSON structure of key/value pairs
     * that the Lambda rotation function knows how to parse.</p> <p>If you store custom
     * information in the secret by using the <a>CreateSecret</a>, <a>UpdateSecret</a>,
     * or <a>PutSecretValue</a> API operations instead of the Secrets Manager console,
     * or by using the <b>Other secret type</b> in the console, then you must code your
     * Lambda rotation function to parse and interpret those values.</p>
     */
    inline void SetSecretString(const Aws::String& value) { m_secretString = value; }

    /**
     * <p>The decrypted part of the protected secret information that was originally
     * provided as a string.</p> <p>If you create this secret by using the Secrets
     * Manager console then only the <code>SecretString</code> parameter contains data.
     * Secrets Manager stores the information as a JSON structure of key/value pairs
     * that the Lambda rotation function knows how to parse.</p> <p>If you store custom
     * information in the secret by using the <a>CreateSecret</a>, <a>UpdateSecret</a>,
     * or <a>PutSecretValue</a> API operations instead of the Secrets Manager console,
     * or by using the <b>Other secret type</b> in the console, then you must code your
     * Lambda rotation function to parse and interpret those values.</p>
     */
    inline void SetSecretString(Aws::String&& value) { m_secretString = std::move(value); }

    /**
     * <p>The decrypted part of the protected secret information that was originally
     * provided as a string.</p> <p>If you create this secret by using the Secrets
     * Manager console then only the <code>SecretString</code> parameter contains data.
     * Secrets Manager stores the information as a JSON structure of key/value pairs
     * that the Lambda rotation function knows how to parse.</p> <p>If you store custom
     * information in the secret by using the <a>CreateSecret</a>, <a>UpdateSecret</a>,
     * or <a>PutSecretValue</a> API operations instead of the Secrets Manager console,
     * or by using the <b>Other secret type</b> in the console, then you must code your
     * Lambda rotation function to parse and interpret those values.</p>
     */
    inline void SetSecretString(const char* value) { m_secretString.assign(value); }

    /**
     * <p>The decrypted part of the protected secret information that was originally
     * provided as a string.</p> <p>If you create this secret by using the Secrets
     * Manager console then only the <code>SecretString</code> parameter contains data.
     * Secrets Manager stores the information as a JSON structure of key/value pairs
     * that the Lambda rotation function knows how to parse.</p> <p>If you store custom
     * information in the secret by using the <a>CreateSecret</a>, <a>UpdateSecret</a>,
     * or <a>PutSecretValue</a> API operations instead of the Secrets Manager console,
     * or by using the <b>Other secret type</b> in the console, then you must code your
     * Lambda rotation function to parse and interpret those values.</p>
     */
    inline GetSecretValueResult& WithSecretString(const Aws::String& value) { SetSecretString(value); return *this;}

    /**
     * <p>The decrypted part of the protected secret information that was originally
     * provided as a string.</p> <p>If you create this secret by using the Secrets
     * Manager console then only the <code>SecretString</code> parameter contains data.
     * Secrets Manager stores the information as a JSON structure of key/value pairs
     * that the Lambda rotation function knows how to parse.</p> <p>If you store custom
     * information in the secret by using the <a>CreateSecret</a>, <a>UpdateSecret</a>,
     * or <a>PutSecretValue</a> API operations instead of the Secrets Manager console,
     * or by using the <b>Other secret type</b> in the console, then you must code your
     * Lambda rotation function to parse and interpret those values.</p>
     */
    inline GetSecretValueResult& WithSecretString(Aws::String&& value) { SetSecretString(std::move(value)); return *this;}

    /**
     * <p>The decrypted part of the protected secret information that was originally
     * provided as a string.</p> <p>If you create this secret by using the Secrets
     * Manager console then only the <code>SecretString</code> parameter contains data.
     * Secrets Manager stores the information as a JSON structure of key/value pairs
     * that the Lambda rotation function knows how to parse.</p> <p>If you store custom
     * information in the secret by using the <a>CreateSecret</a>, <a>UpdateSecret</a>,
     * or <a>PutSecretValue</a> API operations instead of the Secrets Manager console,
     * or by using the <b>Other secret type</b> in the console, then you must code your
     * Lambda rotation function to parse and interpret those values.</p>
     */
    inline GetSecretValueResult& WithSecretString(const char* value) { SetSecretString(value); return *this;}


    /**
     * <p>A list of all of the staging labels currently attached to this version of the
     * secret.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVersionStages() const{ return m_versionStages; }

    /**
     * <p>A list of all of the staging labels currently attached to this version of the
     * secret.</p>
     */
    inline void SetVersionStages(const Aws::Vector<Aws::String>& value) { m_versionStages = value; }

    /**
     * <p>A list of all of the staging labels currently attached to this version of the
     * secret.</p>
     */
    inline void SetVersionStages(Aws::Vector<Aws::String>&& value) { m_versionStages = std::move(value); }

    /**
     * <p>A list of all of the staging labels currently attached to this version of the
     * secret.</p>
     */
    inline GetSecretValueResult& WithVersionStages(const Aws::Vector<Aws::String>& value) { SetVersionStages(value); return *this;}

    /**
     * <p>A list of all of the staging labels currently attached to this version of the
     * secret.</p>
     */
    inline GetSecretValueResult& WithVersionStages(Aws::Vector<Aws::String>&& value) { SetVersionStages(std::move(value)); return *this;}

    /**
     * <p>A list of all of the staging labels currently attached to this version of the
     * secret.</p>
     */
    inline GetSecretValueResult& AddVersionStages(const Aws::String& value) { m_versionStages.push_back(value); return *this; }

    /**
     * <p>A list of all of the staging labels currently attached to this version of the
     * secret.</p>
     */
    inline GetSecretValueResult& AddVersionStages(Aws::String&& value) { m_versionStages.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of all of the staging labels currently attached to this version of the
     * secret.</p>
     */
    inline GetSecretValueResult& AddVersionStages(const char* value) { m_versionStages.push_back(value); return *this; }


    /**
     * <p>The date and time that this version of the secret was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const{ return m_createdDate; }

    /**
     * <p>The date and time that this version of the secret was created.</p>
     */
    inline void SetCreatedDate(const Aws::Utils::DateTime& value) { m_createdDate = value; }

    /**
     * <p>The date and time that this version of the secret was created.</p>
     */
    inline void SetCreatedDate(Aws::Utils::DateTime&& value) { m_createdDate = std::move(value); }

    /**
     * <p>The date and time that this version of the secret was created.</p>
     */
    inline GetSecretValueResult& WithCreatedDate(const Aws::Utils::DateTime& value) { SetCreatedDate(value); return *this;}

    /**
     * <p>The date and time that this version of the secret was created.</p>
     */
    inline GetSecretValueResult& WithCreatedDate(Aws::Utils::DateTime&& value) { SetCreatedDate(std::move(value)); return *this;}

  private:

    Aws::String m_aRN;

    Aws::String m_name;

    Aws::String m_versionId;

    Aws::Utils::CryptoBuffer m_secretBinary;

    Aws::String m_secretString;

    Aws::Vector<Aws::String> m_versionStages;

    Aws::Utils::DateTime m_createdDate;
  };

} // namespace Model
} // namespace SecretsManager
} // namespace Aws
