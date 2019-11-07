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
#include <aws/sso/SSO_EXPORTS.h>
#include <aws/sso/model/RoleCredentials.h>
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
namespace SSO
{
namespace Model
{
  class AWS_SSO_API GetRoleCredentialsResult
  {
  public:
    GetRoleCredentialsResult();
    GetRoleCredentialsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetRoleCredentialsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The credentials for the role that is assigned to the user.</p>
     */
    inline const RoleCredentials& GetRoleCredentials() const{ return m_roleCredentials; }

    /**
     * <p>The credentials for the role that is assigned to the user.</p>
     */
    inline void SetRoleCredentials(const RoleCredentials& value) { m_roleCredentials = value; }

    /**
     * <p>The credentials for the role that is assigned to the user.</p>
     */
    inline void SetRoleCredentials(RoleCredentials&& value) { m_roleCredentials = std::move(value); }

    /**
     * <p>The credentials for the role that is assigned to the user.</p>
     */
    inline GetRoleCredentialsResult& WithRoleCredentials(const RoleCredentials& value) { SetRoleCredentials(value); return *this;}

    /**
     * <p>The credentials for the role that is assigned to the user.</p>
     */
    inline GetRoleCredentialsResult& WithRoleCredentials(RoleCredentials&& value) { SetRoleCredentials(std::move(value)); return *this;}

  private:

    RoleCredentials m_roleCredentials;
  };

} // namespace Model
} // namespace SSO
} // namespace Aws
