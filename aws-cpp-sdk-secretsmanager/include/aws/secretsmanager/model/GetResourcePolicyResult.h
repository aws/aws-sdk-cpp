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
  class AWS_SECRETSMANAGER_API GetResourcePolicyResult
  {
  public:
    GetResourcePolicyResult();
    GetResourcePolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetResourcePolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the secret that the resource-based policy was retrieved for.</p>
     */
    inline const Aws::String& GetARN() const{ return m_aRN; }

    /**
     * <p>The ARN of the secret that the resource-based policy was retrieved for.</p>
     */
    inline void SetARN(const Aws::String& value) { m_aRN = value; }

    /**
     * <p>The ARN of the secret that the resource-based policy was retrieved for.</p>
     */
    inline void SetARN(Aws::String&& value) { m_aRN = std::move(value); }

    /**
     * <p>The ARN of the secret that the resource-based policy was retrieved for.</p>
     */
    inline void SetARN(const char* value) { m_aRN.assign(value); }

    /**
     * <p>The ARN of the secret that the resource-based policy was retrieved for.</p>
     */
    inline GetResourcePolicyResult& WithARN(const Aws::String& value) { SetARN(value); return *this;}

    /**
     * <p>The ARN of the secret that the resource-based policy was retrieved for.</p>
     */
    inline GetResourcePolicyResult& WithARN(Aws::String&& value) { SetARN(std::move(value)); return *this;}

    /**
     * <p>The ARN of the secret that the resource-based policy was retrieved for.</p>
     */
    inline GetResourcePolicyResult& WithARN(const char* value) { SetARN(value); return *this;}


    /**
     * <p>The friendly name of the secret that the resource-based policy was retrieved
     * for.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The friendly name of the secret that the resource-based policy was retrieved
     * for.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The friendly name of the secret that the resource-based policy was retrieved
     * for.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The friendly name of the secret that the resource-based policy was retrieved
     * for.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The friendly name of the secret that the resource-based policy was retrieved
     * for.</p>
     */
    inline GetResourcePolicyResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The friendly name of the secret that the resource-based policy was retrieved
     * for.</p>
     */
    inline GetResourcePolicyResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The friendly name of the secret that the resource-based policy was retrieved
     * for.</p>
     */
    inline GetResourcePolicyResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A JSON-formatted string that describes the permissions that are associated
     * with the attached secret. These permissions are combined with any permissions
     * that are associated with the user or role that attempts to access this secret.
     * The combined permissions specify who can access the secret and what actions they
     * can perform. For more information, see <a
     * href="http://docs.aws.amazon.com/secretsmanager/latest/userguide/auth-and-access.html">Authentication
     * and Access Control for AWS Secrets Manager</a> in the <i>AWS Secrets Manager
     * User Guide</i>.</p>
     */
    inline const Aws::String& GetResourcePolicy() const{ return m_resourcePolicy; }

    /**
     * <p>A JSON-formatted string that describes the permissions that are associated
     * with the attached secret. These permissions are combined with any permissions
     * that are associated with the user or role that attempts to access this secret.
     * The combined permissions specify who can access the secret and what actions they
     * can perform. For more information, see <a
     * href="http://docs.aws.amazon.com/secretsmanager/latest/userguide/auth-and-access.html">Authentication
     * and Access Control for AWS Secrets Manager</a> in the <i>AWS Secrets Manager
     * User Guide</i>.</p>
     */
    inline void SetResourcePolicy(const Aws::String& value) { m_resourcePolicy = value; }

    /**
     * <p>A JSON-formatted string that describes the permissions that are associated
     * with the attached secret. These permissions are combined with any permissions
     * that are associated with the user or role that attempts to access this secret.
     * The combined permissions specify who can access the secret and what actions they
     * can perform. For more information, see <a
     * href="http://docs.aws.amazon.com/secretsmanager/latest/userguide/auth-and-access.html">Authentication
     * and Access Control for AWS Secrets Manager</a> in the <i>AWS Secrets Manager
     * User Guide</i>.</p>
     */
    inline void SetResourcePolicy(Aws::String&& value) { m_resourcePolicy = std::move(value); }

    /**
     * <p>A JSON-formatted string that describes the permissions that are associated
     * with the attached secret. These permissions are combined with any permissions
     * that are associated with the user or role that attempts to access this secret.
     * The combined permissions specify who can access the secret and what actions they
     * can perform. For more information, see <a
     * href="http://docs.aws.amazon.com/secretsmanager/latest/userguide/auth-and-access.html">Authentication
     * and Access Control for AWS Secrets Manager</a> in the <i>AWS Secrets Manager
     * User Guide</i>.</p>
     */
    inline void SetResourcePolicy(const char* value) { m_resourcePolicy.assign(value); }

    /**
     * <p>A JSON-formatted string that describes the permissions that are associated
     * with the attached secret. These permissions are combined with any permissions
     * that are associated with the user or role that attempts to access this secret.
     * The combined permissions specify who can access the secret and what actions they
     * can perform. For more information, see <a
     * href="http://docs.aws.amazon.com/secretsmanager/latest/userguide/auth-and-access.html">Authentication
     * and Access Control for AWS Secrets Manager</a> in the <i>AWS Secrets Manager
     * User Guide</i>.</p>
     */
    inline GetResourcePolicyResult& WithResourcePolicy(const Aws::String& value) { SetResourcePolicy(value); return *this;}

    /**
     * <p>A JSON-formatted string that describes the permissions that are associated
     * with the attached secret. These permissions are combined with any permissions
     * that are associated with the user or role that attempts to access this secret.
     * The combined permissions specify who can access the secret and what actions they
     * can perform. For more information, see <a
     * href="http://docs.aws.amazon.com/secretsmanager/latest/userguide/auth-and-access.html">Authentication
     * and Access Control for AWS Secrets Manager</a> in the <i>AWS Secrets Manager
     * User Guide</i>.</p>
     */
    inline GetResourcePolicyResult& WithResourcePolicy(Aws::String&& value) { SetResourcePolicy(std::move(value)); return *this;}

    /**
     * <p>A JSON-formatted string that describes the permissions that are associated
     * with the attached secret. These permissions are combined with any permissions
     * that are associated with the user or role that attempts to access this secret.
     * The combined permissions specify who can access the secret and what actions they
     * can perform. For more information, see <a
     * href="http://docs.aws.amazon.com/secretsmanager/latest/userguide/auth-and-access.html">Authentication
     * and Access Control for AWS Secrets Manager</a> in the <i>AWS Secrets Manager
     * User Guide</i>.</p>
     */
    inline GetResourcePolicyResult& WithResourcePolicy(const char* value) { SetResourcePolicy(value); return *this;}

  private:

    Aws::String m_aRN;

    Aws::String m_name;

    Aws::String m_resourcePolicy;
  };

} // namespace Model
} // namespace SecretsManager
} // namespace Aws
