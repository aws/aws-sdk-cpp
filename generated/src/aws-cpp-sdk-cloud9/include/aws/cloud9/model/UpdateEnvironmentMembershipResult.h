/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloud9/Cloud9_EXPORTS.h>
#include <aws/cloud9/model/EnvironmentMember.h>
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
namespace Cloud9
{
namespace Model
{
  class UpdateEnvironmentMembershipResult
  {
  public:
    AWS_CLOUD9_API UpdateEnvironmentMembershipResult();
    AWS_CLOUD9_API UpdateEnvironmentMembershipResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUD9_API UpdateEnvironmentMembershipResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the environment member whose settings were changed.</p>
     */
    inline const EnvironmentMember& GetMembership() const{ return m_membership; }

    /**
     * <p>Information about the environment member whose settings were changed.</p>
     */
    inline void SetMembership(const EnvironmentMember& value) { m_membership = value; }

    /**
     * <p>Information about the environment member whose settings were changed.</p>
     */
    inline void SetMembership(EnvironmentMember&& value) { m_membership = std::move(value); }

    /**
     * <p>Information about the environment member whose settings were changed.</p>
     */
    inline UpdateEnvironmentMembershipResult& WithMembership(const EnvironmentMember& value) { SetMembership(value); return *this;}

    /**
     * <p>Information about the environment member whose settings were changed.</p>
     */
    inline UpdateEnvironmentMembershipResult& WithMembership(EnvironmentMember&& value) { SetMembership(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateEnvironmentMembershipResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateEnvironmentMembershipResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateEnvironmentMembershipResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    EnvironmentMember m_membership;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Cloud9
} // namespace Aws
