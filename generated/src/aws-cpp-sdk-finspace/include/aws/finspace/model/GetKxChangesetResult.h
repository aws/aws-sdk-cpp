/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace/Finspace_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/finspace/model/ChangesetStatus.h>
#include <aws/finspace/model/ErrorInfo.h>
#include <aws/finspace/model/ChangeRequest.h>
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
namespace finspace
{
namespace Model
{
  class GetKxChangesetResult
  {
  public:
    AWS_FINSPACE_API GetKxChangesetResult() = default;
    AWS_FINSPACE_API GetKxChangesetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FINSPACE_API GetKxChangesetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A unique identifier for the changeset.</p>
     */
    inline const Aws::String& GetChangesetId() const { return m_changesetId; }
    template<typename ChangesetIdT = Aws::String>
    void SetChangesetId(ChangesetIdT&& value) { m_changesetIdHasBeenSet = true; m_changesetId = std::forward<ChangesetIdT>(value); }
    template<typename ChangesetIdT = Aws::String>
    GetKxChangesetResult& WithChangesetId(ChangesetIdT&& value) { SetChangesetId(std::forward<ChangesetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the kdb database.</p>
     */
    inline const Aws::String& GetDatabaseName() const { return m_databaseName; }
    template<typename DatabaseNameT = Aws::String>
    void SetDatabaseName(DatabaseNameT&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::forward<DatabaseNameT>(value); }
    template<typename DatabaseNameT = Aws::String>
    GetKxChangesetResult& WithDatabaseName(DatabaseNameT&& value) { SetDatabaseName(std::forward<DatabaseNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the kdb environment.</p>
     */
    inline const Aws::String& GetEnvironmentId() const { return m_environmentId; }
    template<typename EnvironmentIdT = Aws::String>
    void SetEnvironmentId(EnvironmentIdT&& value) { m_environmentIdHasBeenSet = true; m_environmentId = std::forward<EnvironmentIdT>(value); }
    template<typename EnvironmentIdT = Aws::String>
    GetKxChangesetResult& WithEnvironmentId(EnvironmentIdT&& value) { SetEnvironmentId(std::forward<EnvironmentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of change request objects that are run in order.</p>
     */
    inline const Aws::Vector<ChangeRequest>& GetChangeRequests() const { return m_changeRequests; }
    template<typename ChangeRequestsT = Aws::Vector<ChangeRequest>>
    void SetChangeRequests(ChangeRequestsT&& value) { m_changeRequestsHasBeenSet = true; m_changeRequests = std::forward<ChangeRequestsT>(value); }
    template<typename ChangeRequestsT = Aws::Vector<ChangeRequest>>
    GetKxChangesetResult& WithChangeRequests(ChangeRequestsT&& value) { SetChangeRequests(std::forward<ChangeRequestsT>(value)); return *this;}
    template<typename ChangeRequestsT = ChangeRequest>
    GetKxChangesetResult& AddChangeRequests(ChangeRequestsT&& value) { m_changeRequestsHasBeenSet = true; m_changeRequests.emplace_back(std::forward<ChangeRequestsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The timestamp at which the changeset was created in FinSpace. The value is
     * determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const { return m_createdTimestamp; }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    void SetCreatedTimestamp(CreatedTimestampT&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::forward<CreatedTimestampT>(value); }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    GetKxChangesetResult& WithCreatedTimestamp(CreatedTimestampT&& value) { SetCreatedTimestamp(std::forward<CreatedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Beginning time from which the changeset is active. The value is determined as
     * epoch time in milliseconds. For example, the value for Monday, November 1, 2021
     * 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline const Aws::Utils::DateTime& GetActiveFromTimestamp() const { return m_activeFromTimestamp; }
    template<typename ActiveFromTimestampT = Aws::Utils::DateTime>
    void SetActiveFromTimestamp(ActiveFromTimestampT&& value) { m_activeFromTimestampHasBeenSet = true; m_activeFromTimestamp = std::forward<ActiveFromTimestampT>(value); }
    template<typename ActiveFromTimestampT = Aws::Utils::DateTime>
    GetKxChangesetResult& WithActiveFromTimestamp(ActiveFromTimestampT&& value) { SetActiveFromTimestamp(std::forward<ActiveFromTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp at which the changeset was updated in FinSpace. The value is
     * determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTimestamp() const { return m_lastModifiedTimestamp; }
    template<typename LastModifiedTimestampT = Aws::Utils::DateTime>
    void SetLastModifiedTimestamp(LastModifiedTimestampT&& value) { m_lastModifiedTimestampHasBeenSet = true; m_lastModifiedTimestamp = std::forward<LastModifiedTimestampT>(value); }
    template<typename LastModifiedTimestampT = Aws::Utils::DateTime>
    GetKxChangesetResult& WithLastModifiedTimestamp(LastModifiedTimestampT&& value) { SetLastModifiedTimestamp(std::forward<LastModifiedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status of the changeset creation process.</p> <ul> <li> <p>Pending –
     * Changeset creation is pending.</p> </li> <li> <p>Processing – Changeset creation
     * is running.</p> </li> <li> <p>Failed – Changeset creation has failed.</p> </li>
     * <li> <p>Complete – Changeset creation has succeeded.</p> </li> </ul>
     */
    inline ChangesetStatus GetStatus() const { return m_status; }
    inline void SetStatus(ChangesetStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetKxChangesetResult& WithStatus(ChangesetStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides details in the event of a failed flow, including the error type and
     * the related error message.</p>
     */
    inline const ErrorInfo& GetErrorInfo() const { return m_errorInfo; }
    template<typename ErrorInfoT = ErrorInfo>
    void SetErrorInfo(ErrorInfoT&& value) { m_errorInfoHasBeenSet = true; m_errorInfo = std::forward<ErrorInfoT>(value); }
    template<typename ErrorInfoT = ErrorInfo>
    GetKxChangesetResult& WithErrorInfo(ErrorInfoT&& value) { SetErrorInfo(std::forward<ErrorInfoT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetKxChangesetResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_changesetId;
    bool m_changesetIdHasBeenSet = false;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    Aws::String m_environmentId;
    bool m_environmentIdHasBeenSet = false;

    Aws::Vector<ChangeRequest> m_changeRequests;
    bool m_changeRequestsHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimestamp{};
    bool m_createdTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_activeFromTimestamp{};
    bool m_activeFromTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTimestamp{};
    bool m_lastModifiedTimestampHasBeenSet = false;

    ChangesetStatus m_status{ChangesetStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    ErrorInfo m_errorInfo;
    bool m_errorInfoHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace finspace
} // namespace Aws
