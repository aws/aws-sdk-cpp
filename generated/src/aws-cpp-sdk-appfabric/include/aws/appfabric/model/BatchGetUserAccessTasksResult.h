/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appfabric/AppFabric_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appfabric/model/UserAccessResultItem.h>
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
namespace AppFabric
{
namespace Model
{
  class BatchGetUserAccessTasksResult
  {
  public:
    AWS_APPFABRIC_API BatchGetUserAccessTasksResult();
    AWS_APPFABRIC_API BatchGetUserAccessTasksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPFABRIC_API BatchGetUserAccessTasksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Contains a list of user access results.</p>
     */
    inline const Aws::Vector<UserAccessResultItem>& GetUserAccessResultsList() const{ return m_userAccessResultsList; }

    /**
     * <p>Contains a list of user access results.</p>
     */
    inline void SetUserAccessResultsList(const Aws::Vector<UserAccessResultItem>& value) { m_userAccessResultsList = value; }

    /**
     * <p>Contains a list of user access results.</p>
     */
    inline void SetUserAccessResultsList(Aws::Vector<UserAccessResultItem>&& value) { m_userAccessResultsList = std::move(value); }

    /**
     * <p>Contains a list of user access results.</p>
     */
    inline BatchGetUserAccessTasksResult& WithUserAccessResultsList(const Aws::Vector<UserAccessResultItem>& value) { SetUserAccessResultsList(value); return *this;}

    /**
     * <p>Contains a list of user access results.</p>
     */
    inline BatchGetUserAccessTasksResult& WithUserAccessResultsList(Aws::Vector<UserAccessResultItem>&& value) { SetUserAccessResultsList(std::move(value)); return *this;}

    /**
     * <p>Contains a list of user access results.</p>
     */
    inline BatchGetUserAccessTasksResult& AddUserAccessResultsList(const UserAccessResultItem& value) { m_userAccessResultsList.push_back(value); return *this; }

    /**
     * <p>Contains a list of user access results.</p>
     */
    inline BatchGetUserAccessTasksResult& AddUserAccessResultsList(UserAccessResultItem&& value) { m_userAccessResultsList.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline BatchGetUserAccessTasksResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline BatchGetUserAccessTasksResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline BatchGetUserAccessTasksResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<UserAccessResultItem> m_userAccessResultsList;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AppFabric
} // namespace Aws
