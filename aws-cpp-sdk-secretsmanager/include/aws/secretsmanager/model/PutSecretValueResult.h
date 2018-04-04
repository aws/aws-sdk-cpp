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
namespace SecretsManager
{
namespace Model
{
  class AWS_SECRETSMANAGER_API PutSecretValueResult
  {
  public:
    PutSecretValueResult();
    PutSecretValueResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    PutSecretValueResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) for the secret for which you just created a
     * version.</p>
     */
    inline const Aws::String& GetARN() const{ return m_aRN; }

    /**
     * <p>The Amazon Resource Name (ARN) for the secret for which you just created a
     * version.</p>
     */
    inline void SetARN(const Aws::String& value) { m_aRN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the secret for which you just created a
     * version.</p>
     */
    inline void SetARN(Aws::String&& value) { m_aRN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the secret for which you just created a
     * version.</p>
     */
    inline void SetARN(const char* value) { m_aRN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the secret for which you just created a
     * version.</p>
     */
    inline PutSecretValueResult& WithARN(const Aws::String& value) { SetARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the secret for which you just created a
     * version.</p>
     */
    inline PutSecretValueResult& WithARN(Aws::String&& value) { SetARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the secret for which you just created a
     * version.</p>
     */
    inline PutSecretValueResult& WithARN(const char* value) { SetARN(value); return *this;}


    /**
     * <p>The friendly name of the secret for which you just created or updated a
     * version.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The friendly name of the secret for which you just created or updated a
     * version.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The friendly name of the secret for which you just created or updated a
     * version.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The friendly name of the secret for which you just created or updated a
     * version.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The friendly name of the secret for which you just created or updated a
     * version.</p>
     */
    inline PutSecretValueResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The friendly name of the secret for which you just created or updated a
     * version.</p>
     */
    inline PutSecretValueResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The friendly name of the secret for which you just created or updated a
     * version.</p>
     */
    inline PutSecretValueResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The unique identifier of the version of the secret you just created or
     * updated.</p>
     */
    inline const Aws::String& GetVersionId() const{ return m_versionId; }

    /**
     * <p>The unique identifier of the version of the secret you just created or
     * updated.</p>
     */
    inline void SetVersionId(const Aws::String& value) { m_versionId = value; }

    /**
     * <p>The unique identifier of the version of the secret you just created or
     * updated.</p>
     */
    inline void SetVersionId(Aws::String&& value) { m_versionId = std::move(value); }

    /**
     * <p>The unique identifier of the version of the secret you just created or
     * updated.</p>
     */
    inline void SetVersionId(const char* value) { m_versionId.assign(value); }

    /**
     * <p>The unique identifier of the version of the secret you just created or
     * updated.</p>
     */
    inline PutSecretValueResult& WithVersionId(const Aws::String& value) { SetVersionId(value); return *this;}

    /**
     * <p>The unique identifier of the version of the secret you just created or
     * updated.</p>
     */
    inline PutSecretValueResult& WithVersionId(Aws::String&& value) { SetVersionId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the version of the secret you just created or
     * updated.</p>
     */
    inline PutSecretValueResult& WithVersionId(const char* value) { SetVersionId(value); return *this;}


    /**
     * <p>The list of staging labels that are currently attached to this version of the
     * secret. Staging labels are used to track a version as it progresses through the
     * secret rotation process.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVersionStages() const{ return m_versionStages; }

    /**
     * <p>The list of staging labels that are currently attached to this version of the
     * secret. Staging labels are used to track a version as it progresses through the
     * secret rotation process.</p>
     */
    inline void SetVersionStages(const Aws::Vector<Aws::String>& value) { m_versionStages = value; }

    /**
     * <p>The list of staging labels that are currently attached to this version of the
     * secret. Staging labels are used to track a version as it progresses through the
     * secret rotation process.</p>
     */
    inline void SetVersionStages(Aws::Vector<Aws::String>&& value) { m_versionStages = std::move(value); }

    /**
     * <p>The list of staging labels that are currently attached to this version of the
     * secret. Staging labels are used to track a version as it progresses through the
     * secret rotation process.</p>
     */
    inline PutSecretValueResult& WithVersionStages(const Aws::Vector<Aws::String>& value) { SetVersionStages(value); return *this;}

    /**
     * <p>The list of staging labels that are currently attached to this version of the
     * secret. Staging labels are used to track a version as it progresses through the
     * secret rotation process.</p>
     */
    inline PutSecretValueResult& WithVersionStages(Aws::Vector<Aws::String>&& value) { SetVersionStages(std::move(value)); return *this;}

    /**
     * <p>The list of staging labels that are currently attached to this version of the
     * secret. Staging labels are used to track a version as it progresses through the
     * secret rotation process.</p>
     */
    inline PutSecretValueResult& AddVersionStages(const Aws::String& value) { m_versionStages.push_back(value); return *this; }

    /**
     * <p>The list of staging labels that are currently attached to this version of the
     * secret. Staging labels are used to track a version as it progresses through the
     * secret rotation process.</p>
     */
    inline PutSecretValueResult& AddVersionStages(Aws::String&& value) { m_versionStages.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of staging labels that are currently attached to this version of the
     * secret. Staging labels are used to track a version as it progresses through the
     * secret rotation process.</p>
     */
    inline PutSecretValueResult& AddVersionStages(const char* value) { m_versionStages.push_back(value); return *this; }

  private:

    Aws::String m_aRN;

    Aws::String m_name;

    Aws::String m_versionId;

    Aws::Vector<Aws::String> m_versionStages;
  };

} // namespace Model
} // namespace SecretsManager
} // namespace Aws
