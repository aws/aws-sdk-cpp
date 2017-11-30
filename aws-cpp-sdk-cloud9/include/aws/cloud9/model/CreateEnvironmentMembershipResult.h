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
#include <aws/cloud9/Cloud9_EXPORTS.h>
#include <aws/cloud9/model/EnvironmentMember.h>
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
namespace Cloud9
{
namespace Model
{
  class AWS_CLOUD9_API CreateEnvironmentMembershipResult
  {
  public:
    CreateEnvironmentMembershipResult();
    CreateEnvironmentMembershipResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateEnvironmentMembershipResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the environment member that was added.</p>
     */
    inline const EnvironmentMember& GetMembership() const{ return m_membership; }

    /**
     * <p>Information about the environment member that was added.</p>
     */
    inline void SetMembership(const EnvironmentMember& value) { m_membership = value; }

    /**
     * <p>Information about the environment member that was added.</p>
     */
    inline void SetMembership(EnvironmentMember&& value) { m_membership = std::move(value); }

    /**
     * <p>Information about the environment member that was added.</p>
     */
    inline CreateEnvironmentMembershipResult& WithMembership(const EnvironmentMember& value) { SetMembership(value); return *this;}

    /**
     * <p>Information about the environment member that was added.</p>
     */
    inline CreateEnvironmentMembershipResult& WithMembership(EnvironmentMember&& value) { SetMembership(std::move(value)); return *this;}

  private:

    EnvironmentMember m_membership;
  };

} // namespace Model
} // namespace Cloud9
} // namespace Aws
