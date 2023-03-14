/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/identitystore/IdentityStore_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/identitystore/model/GroupMembershipExistenceResult.h>
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
namespace IdentityStore
{
namespace Model
{
  class IsMemberInGroupsResult
  {
  public:
    AWS_IDENTITYSTORE_API IsMemberInGroupsResult();
    AWS_IDENTITYSTORE_API IsMemberInGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IDENTITYSTORE_API IsMemberInGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list containing the results of membership existence checks.</p>
     */
    inline const Aws::Vector<GroupMembershipExistenceResult>& GetResults() const{ return m_results; }

    /**
     * <p>A list containing the results of membership existence checks.</p>
     */
    inline void SetResults(const Aws::Vector<GroupMembershipExistenceResult>& value) { m_results = value; }

    /**
     * <p>A list containing the results of membership existence checks.</p>
     */
    inline void SetResults(Aws::Vector<GroupMembershipExistenceResult>&& value) { m_results = std::move(value); }

    /**
     * <p>A list containing the results of membership existence checks.</p>
     */
    inline IsMemberInGroupsResult& WithResults(const Aws::Vector<GroupMembershipExistenceResult>& value) { SetResults(value); return *this;}

    /**
     * <p>A list containing the results of membership existence checks.</p>
     */
    inline IsMemberInGroupsResult& WithResults(Aws::Vector<GroupMembershipExistenceResult>&& value) { SetResults(std::move(value)); return *this;}

    /**
     * <p>A list containing the results of membership existence checks.</p>
     */
    inline IsMemberInGroupsResult& AddResults(const GroupMembershipExistenceResult& value) { m_results.push_back(value); return *this; }

    /**
     * <p>A list containing the results of membership existence checks.</p>
     */
    inline IsMemberInGroupsResult& AddResults(GroupMembershipExistenceResult&& value) { m_results.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline IsMemberInGroupsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline IsMemberInGroupsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline IsMemberInGroupsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<GroupMembershipExistenceResult> m_results;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IdentityStore
} // namespace Aws
