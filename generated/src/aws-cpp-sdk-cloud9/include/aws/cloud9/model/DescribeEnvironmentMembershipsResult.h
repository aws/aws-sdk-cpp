/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloud9/Cloud9_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class DescribeEnvironmentMembershipsResult
  {
  public:
    AWS_CLOUD9_API DescribeEnvironmentMembershipsResult() = default;
    AWS_CLOUD9_API DescribeEnvironmentMembershipsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUD9_API DescribeEnvironmentMembershipsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the environment members for the environment.</p>
     */
    inline const Aws::Vector<EnvironmentMember>& GetMemberships() const { return m_memberships; }
    template<typename MembershipsT = Aws::Vector<EnvironmentMember>>
    void SetMemberships(MembershipsT&& value) { m_membershipsHasBeenSet = true; m_memberships = std::forward<MembershipsT>(value); }
    template<typename MembershipsT = Aws::Vector<EnvironmentMember>>
    DescribeEnvironmentMembershipsResult& WithMemberships(MembershipsT&& value) { SetMemberships(std::forward<MembershipsT>(value)); return *this;}
    template<typename MembershipsT = EnvironmentMember>
    DescribeEnvironmentMembershipsResult& AddMemberships(MembershipsT&& value) { m_membershipsHasBeenSet = true; m_memberships.emplace_back(std::forward<MembershipsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If there are more than 25 items in the list, only the first 25 items are
     * returned, along with a unique string called a <i>next token</i>. To get the next
     * batch of items in the list, call this operation again, adding the next token to
     * the call.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeEnvironmentMembershipsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeEnvironmentMembershipsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<EnvironmentMember> m_memberships;
    bool m_membershipsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Cloud9
} // namespace Aws
