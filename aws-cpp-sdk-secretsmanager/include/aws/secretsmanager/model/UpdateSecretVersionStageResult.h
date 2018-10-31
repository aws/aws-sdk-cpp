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
  class AWS_SECRETSMANAGER_API UpdateSecretVersionStageResult
  {
  public:
    UpdateSecretVersionStageResult();
    UpdateSecretVersionStageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateSecretVersionStageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the secret with the staging label that was modified.</p>
     */
    inline const Aws::String& GetARN() const{ return m_aRN; }

    /**
     * <p>The ARN of the secret with the staging label that was modified.</p>
     */
    inline void SetARN(const Aws::String& value) { m_aRN = value; }

    /**
     * <p>The ARN of the secret with the staging label that was modified.</p>
     */
    inline void SetARN(Aws::String&& value) { m_aRN = std::move(value); }

    /**
     * <p>The ARN of the secret with the staging label that was modified.</p>
     */
    inline void SetARN(const char* value) { m_aRN.assign(value); }

    /**
     * <p>The ARN of the secret with the staging label that was modified.</p>
     */
    inline UpdateSecretVersionStageResult& WithARN(const Aws::String& value) { SetARN(value); return *this;}

    /**
     * <p>The ARN of the secret with the staging label that was modified.</p>
     */
    inline UpdateSecretVersionStageResult& WithARN(Aws::String&& value) { SetARN(std::move(value)); return *this;}

    /**
     * <p>The ARN of the secret with the staging label that was modified.</p>
     */
    inline UpdateSecretVersionStageResult& WithARN(const char* value) { SetARN(value); return *this;}


    /**
     * <p>The friendly name of the secret with the staging label that was modified.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The friendly name of the secret with the staging label that was modified.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The friendly name of the secret with the staging label that was modified.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The friendly name of the secret with the staging label that was modified.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The friendly name of the secret with the staging label that was modified.</p>
     */
    inline UpdateSecretVersionStageResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The friendly name of the secret with the staging label that was modified.</p>
     */
    inline UpdateSecretVersionStageResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The friendly name of the secret with the staging label that was modified.</p>
     */
    inline UpdateSecretVersionStageResult& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_aRN;

    Aws::String m_name;
  };

} // namespace Model
} // namespace SecretsManager
} // namespace Aws
