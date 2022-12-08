/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/auditmanager/model/ChangeLog.h>
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
namespace AuditManager
{
namespace Model
{
  class GetChangeLogsResult
  {
  public:
    AWS_AUDITMANAGER_API GetChangeLogsResult();
    AWS_AUDITMANAGER_API GetChangeLogsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AUDITMANAGER_API GetChangeLogsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of user activity for the control. </p>
     */
    inline const Aws::Vector<ChangeLog>& GetChangeLogs() const{ return m_changeLogs; }

    /**
     * <p>The list of user activity for the control. </p>
     */
    inline void SetChangeLogs(const Aws::Vector<ChangeLog>& value) { m_changeLogs = value; }

    /**
     * <p>The list of user activity for the control. </p>
     */
    inline void SetChangeLogs(Aws::Vector<ChangeLog>&& value) { m_changeLogs = std::move(value); }

    /**
     * <p>The list of user activity for the control. </p>
     */
    inline GetChangeLogsResult& WithChangeLogs(const Aws::Vector<ChangeLog>& value) { SetChangeLogs(value); return *this;}

    /**
     * <p>The list of user activity for the control. </p>
     */
    inline GetChangeLogsResult& WithChangeLogs(Aws::Vector<ChangeLog>&& value) { SetChangeLogs(std::move(value)); return *this;}

    /**
     * <p>The list of user activity for the control. </p>
     */
    inline GetChangeLogsResult& AddChangeLogs(const ChangeLog& value) { m_changeLogs.push_back(value); return *this; }

    /**
     * <p>The list of user activity for the control. </p>
     */
    inline GetChangeLogsResult& AddChangeLogs(ChangeLog&& value) { m_changeLogs.push_back(std::move(value)); return *this; }


    /**
     * <p>The pagination token that's used to fetch the next set of results. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token that's used to fetch the next set of results. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination token that's used to fetch the next set of results. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination token that's used to fetch the next set of results. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination token that's used to fetch the next set of results. </p>
     */
    inline GetChangeLogsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token that's used to fetch the next set of results. </p>
     */
    inline GetChangeLogsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token that's used to fetch the next set of results. </p>
     */
    inline GetChangeLogsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ChangeLog> m_changeLogs;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
