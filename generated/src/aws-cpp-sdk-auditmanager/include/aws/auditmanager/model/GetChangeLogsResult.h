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
    AWS_AUDITMANAGER_API GetChangeLogsResult() = default;
    AWS_AUDITMANAGER_API GetChangeLogsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AUDITMANAGER_API GetChangeLogsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of user activity for the control. </p>
     */
    inline const Aws::Vector<ChangeLog>& GetChangeLogs() const { return m_changeLogs; }
    template<typename ChangeLogsT = Aws::Vector<ChangeLog>>
    void SetChangeLogs(ChangeLogsT&& value) { m_changeLogsHasBeenSet = true; m_changeLogs = std::forward<ChangeLogsT>(value); }
    template<typename ChangeLogsT = Aws::Vector<ChangeLog>>
    GetChangeLogsResult& WithChangeLogs(ChangeLogsT&& value) { SetChangeLogs(std::forward<ChangeLogsT>(value)); return *this;}
    template<typename ChangeLogsT = ChangeLog>
    GetChangeLogsResult& AddChangeLogs(ChangeLogsT&& value) { m_changeLogsHasBeenSet = true; m_changeLogs.emplace_back(std::forward<ChangeLogsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token that's used to fetch the next set of results. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetChangeLogsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetChangeLogsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ChangeLog> m_changeLogs;
    bool m_changeLogsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
