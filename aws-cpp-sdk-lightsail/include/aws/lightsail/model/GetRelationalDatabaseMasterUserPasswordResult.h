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
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Lightsail
{
namespace Model
{
  class AWS_LIGHTSAIL_API GetRelationalDatabaseMasterUserPasswordResult
  {
  public:
    GetRelationalDatabaseMasterUserPasswordResult();
    GetRelationalDatabaseMasterUserPasswordResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetRelationalDatabaseMasterUserPasswordResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The master user password for the <code>password version</code> specified.</p>
     */
    inline const Aws::String& GetMasterUserPassword() const{ return m_masterUserPassword; }

    /**
     * <p>The master user password for the <code>password version</code> specified.</p>
     */
    inline void SetMasterUserPassword(const Aws::String& value) { m_masterUserPassword = value; }

    /**
     * <p>The master user password for the <code>password version</code> specified.</p>
     */
    inline void SetMasterUserPassword(Aws::String&& value) { m_masterUserPassword = std::move(value); }

    /**
     * <p>The master user password for the <code>password version</code> specified.</p>
     */
    inline void SetMasterUserPassword(const char* value) { m_masterUserPassword.assign(value); }

    /**
     * <p>The master user password for the <code>password version</code> specified.</p>
     */
    inline GetRelationalDatabaseMasterUserPasswordResult& WithMasterUserPassword(const Aws::String& value) { SetMasterUserPassword(value); return *this;}

    /**
     * <p>The master user password for the <code>password version</code> specified.</p>
     */
    inline GetRelationalDatabaseMasterUserPasswordResult& WithMasterUserPassword(Aws::String&& value) { SetMasterUserPassword(std::move(value)); return *this;}

    /**
     * <p>The master user password for the <code>password version</code> specified.</p>
     */
    inline GetRelationalDatabaseMasterUserPasswordResult& WithMasterUserPassword(const char* value) { SetMasterUserPassword(value); return *this;}


    /**
     * <p>The timestamp when the specified version of the master user password was
     * created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The timestamp when the specified version of the master user password was
     * created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }

    /**
     * <p>The timestamp when the specified version of the master user password was
     * created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }

    /**
     * <p>The timestamp when the specified version of the master user password was
     * created.</p>
     */
    inline GetRelationalDatabaseMasterUserPasswordResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The timestamp when the specified version of the master user password was
     * created.</p>
     */
    inline GetRelationalDatabaseMasterUserPasswordResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}

  private:

    Aws::String m_masterUserPassword;

    Aws::Utils::DateTime m_createdAt;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
