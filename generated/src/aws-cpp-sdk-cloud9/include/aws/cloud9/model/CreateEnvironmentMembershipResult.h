/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class CreateEnvironmentMembershipResult
  {
  public:
    AWS_CLOUD9_API CreateEnvironmentMembershipResult();
    AWS_CLOUD9_API CreateEnvironmentMembershipResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUD9_API CreateEnvironmentMembershipResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
