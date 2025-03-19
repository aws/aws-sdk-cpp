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
  class CreateEnvironmentMembershipResult
  {
  public:
    AWS_CLOUD9_API CreateEnvironmentMembershipResult() = default;
    AWS_CLOUD9_API CreateEnvironmentMembershipResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUD9_API CreateEnvironmentMembershipResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the environment member that was added.</p>
     */
    inline const EnvironmentMember& GetMembership() const { return m_membership; }
    template<typename MembershipT = EnvironmentMember>
    void SetMembership(MembershipT&& value) { m_membershipHasBeenSet = true; m_membership = std::forward<MembershipT>(value); }
    template<typename MembershipT = EnvironmentMember>
    CreateEnvironmentMembershipResult& WithMembership(MembershipT&& value) { SetMembership(std::forward<MembershipT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateEnvironmentMembershipResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    EnvironmentMember m_membership;
    bool m_membershipHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Cloud9
} // namespace Aws
