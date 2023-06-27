/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appfabric/AppFabric_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appfabric/model/UserAccessTaskItem.h>
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
  class StartUserAccessTasksResult
  {
  public:
    AWS_APPFABRIC_API StartUserAccessTasksResult();
    AWS_APPFABRIC_API StartUserAccessTasksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPFABRIC_API StartUserAccessTasksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Contains a list of user access task information.</p>
     */
    inline const Aws::Vector<UserAccessTaskItem>& GetUserAccessTasksList() const{ return m_userAccessTasksList; }

    /**
     * <p>Contains a list of user access task information.</p>
     */
    inline void SetUserAccessTasksList(const Aws::Vector<UserAccessTaskItem>& value) { m_userAccessTasksList = value; }

    /**
     * <p>Contains a list of user access task information.</p>
     */
    inline void SetUserAccessTasksList(Aws::Vector<UserAccessTaskItem>&& value) { m_userAccessTasksList = std::move(value); }

    /**
     * <p>Contains a list of user access task information.</p>
     */
    inline StartUserAccessTasksResult& WithUserAccessTasksList(const Aws::Vector<UserAccessTaskItem>& value) { SetUserAccessTasksList(value); return *this;}

    /**
     * <p>Contains a list of user access task information.</p>
     */
    inline StartUserAccessTasksResult& WithUserAccessTasksList(Aws::Vector<UserAccessTaskItem>&& value) { SetUserAccessTasksList(std::move(value)); return *this;}

    /**
     * <p>Contains a list of user access task information.</p>
     */
    inline StartUserAccessTasksResult& AddUserAccessTasksList(const UserAccessTaskItem& value) { m_userAccessTasksList.push_back(value); return *this; }

    /**
     * <p>Contains a list of user access task information.</p>
     */
    inline StartUserAccessTasksResult& AddUserAccessTasksList(UserAccessTaskItem&& value) { m_userAccessTasksList.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline StartUserAccessTasksResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline StartUserAccessTasksResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline StartUserAccessTasksResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<UserAccessTaskItem> m_userAccessTasksList;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AppFabric
} // namespace Aws
