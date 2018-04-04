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
  class AWS_SECRETSMANAGER_API GetRandomPasswordResult
  {
  public:
    GetRandomPasswordResult();
    GetRandomPasswordResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetRandomPasswordResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A string with the generated password.</p>
     */
    inline const Aws::String& GetRandomPassword() const{ return m_randomPassword; }

    /**
     * <p>A string with the generated password.</p>
     */
    inline void SetRandomPassword(const Aws::String& value) { m_randomPassword = value; }

    /**
     * <p>A string with the generated password.</p>
     */
    inline void SetRandomPassword(Aws::String&& value) { m_randomPassword = std::move(value); }

    /**
     * <p>A string with the generated password.</p>
     */
    inline void SetRandomPassword(const char* value) { m_randomPassword.assign(value); }

    /**
     * <p>A string with the generated password.</p>
     */
    inline GetRandomPasswordResult& WithRandomPassword(const Aws::String& value) { SetRandomPassword(value); return *this;}

    /**
     * <p>A string with the generated password.</p>
     */
    inline GetRandomPasswordResult& WithRandomPassword(Aws::String&& value) { SetRandomPassword(std::move(value)); return *this;}

    /**
     * <p>A string with the generated password.</p>
     */
    inline GetRandomPasswordResult& WithRandomPassword(const char* value) { SetRandomPassword(value); return *this;}

  private:

    Aws::String m_randomPassword;
  };

} // namespace Model
} // namespace SecretsManager
} // namespace Aws
