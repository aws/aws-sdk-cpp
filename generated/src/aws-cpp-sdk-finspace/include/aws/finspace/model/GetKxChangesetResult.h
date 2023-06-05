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
    AWS_FINSPACE_API GetKxChangesetResult();
    AWS_FINSPACE_API GetKxChangesetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FINSPACE_API GetKxChangesetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A unique identifier for the changeset.</p>
     */
    inline const Aws::String& GetChangesetId() const{ return m_changesetId; }

    /**
     * <p>A unique identifier for the changeset.</p>
     */
    inline void SetChangesetId(const Aws::String& value) { m_changesetId = value; }

    /**
     * <p>A unique identifier for the changeset.</p>
     */
    inline void SetChangesetId(Aws::String&& value) { m_changesetId = std::move(value); }

    /**
     * <p>A unique identifier for the changeset.</p>
     */
    inline void SetChangesetId(const char* value) { m_changesetId.assign(value); }

    /**
     * <p>A unique identifier for the changeset.</p>
     */
    inline GetKxChangesetResult& WithChangesetId(const Aws::String& value) { SetChangesetId(value); return *this;}

    /**
     * <p>A unique identifier for the changeset.</p>
     */
    inline GetKxChangesetResult& WithChangesetId(Aws::String&& value) { SetChangesetId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the changeset.</p>
     */
    inline GetKxChangesetResult& WithChangesetId(const char* value) { SetChangesetId(value); return *this;}


    /**
     * <p>The name of the kdb database.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }

    /**
     * <p>The name of the kdb database.</p>
     */
    inline void SetDatabaseName(const Aws::String& value) { m_databaseName = value; }

    /**
     * <p>The name of the kdb database.</p>
     */
    inline void SetDatabaseName(Aws::String&& value) { m_databaseName = std::move(value); }

    /**
     * <p>The name of the kdb database.</p>
     */
    inline void SetDatabaseName(const char* value) { m_databaseName.assign(value); }

    /**
     * <p>The name of the kdb database.</p>
     */
    inline GetKxChangesetResult& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}

    /**
     * <p>The name of the kdb database.</p>
     */
    inline GetKxChangesetResult& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}

    /**
     * <p>The name of the kdb database.</p>
     */
    inline GetKxChangesetResult& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}


    /**
     * <p>A unique identifier for the kdb environment.</p>
     */
    inline const Aws::String& GetEnvironmentId() const{ return m_environmentId; }

    /**
     * <p>A unique identifier for the kdb environment.</p>
     */
    inline void SetEnvironmentId(const Aws::String& value) { m_environmentId = value; }

    /**
     * <p>A unique identifier for the kdb environment.</p>
     */
    inline void SetEnvironmentId(Aws::String&& value) { m_environmentId = std::move(value); }

    /**
     * <p>A unique identifier for the kdb environment.</p>
     */
    inline void SetEnvironmentId(const char* value) { m_environmentId.assign(value); }

    /**
     * <p>A unique identifier for the kdb environment.</p>
     */
    inline GetKxChangesetResult& WithEnvironmentId(const Aws::String& value) { SetEnvironmentId(value); return *this;}

    /**
     * <p>A unique identifier for the kdb environment.</p>
     */
    inline GetKxChangesetResult& WithEnvironmentId(Aws::String&& value) { SetEnvironmentId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the kdb environment.</p>
     */
    inline GetKxChangesetResult& WithEnvironmentId(const char* value) { SetEnvironmentId(value); return *this;}


    /**
     * <p>A list of change request objects that are run in order.</p>
     */
    inline const Aws::Vector<ChangeRequest>& GetChangeRequests() const{ return m_changeRequests; }

    /**
     * <p>A list of change request objects that are run in order.</p>
     */
    inline void SetChangeRequests(const Aws::Vector<ChangeRequest>& value) { m_changeRequests = value; }

    /**
     * <p>A list of change request objects that are run in order.</p>
     */
    inline void SetChangeRequests(Aws::Vector<ChangeRequest>&& value) { m_changeRequests = std::move(value); }

    /**
     * <p>A list of change request objects that are run in order.</p>
     */
    inline GetKxChangesetResult& WithChangeRequests(const Aws::Vector<ChangeRequest>& value) { SetChangeRequests(value); return *this;}

    /**
     * <p>A list of change request objects that are run in order.</p>
     */
    inline GetKxChangesetResult& WithChangeRequests(Aws::Vector<ChangeRequest>&& value) { SetChangeRequests(std::move(value)); return *this;}

    /**
     * <p>A list of change request objects that are run in order.</p>
     */
    inline GetKxChangesetResult& AddChangeRequests(const ChangeRequest& value) { m_changeRequests.push_back(value); return *this; }

    /**
     * <p>A list of change request objects that are run in order.</p>
     */
    inline GetKxChangesetResult& AddChangeRequests(ChangeRequest&& value) { m_changeRequests.push_back(std::move(value)); return *this; }


    /**
     * <p>The timestamp at which the changeset was created in FinSpace. The value is
     * determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }

    /**
     * <p>The timestamp at which the changeset was created in FinSpace. The value is
     * determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestamp = value; }

    /**
     * <p>The timestamp at which the changeset was created in FinSpace. The value is
     * determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestamp = std::move(value); }

    /**
     * <p>The timestamp at which the changeset was created in FinSpace. The value is
     * determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline GetKxChangesetResult& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}

    /**
     * <p>The timestamp at which the changeset was created in FinSpace. The value is
     * determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline GetKxChangesetResult& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}


    /**
     * <p>Beginning time from which the changeset is active. The value is determined as
     * epoch time in milliseconds. For example, the value for Monday, November 1, 2021
     * 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline const Aws::Utils::DateTime& GetActiveFromTimestamp() const{ return m_activeFromTimestamp; }

    /**
     * <p>Beginning time from which the changeset is active. The value is determined as
     * epoch time in milliseconds. For example, the value for Monday, November 1, 2021
     * 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline void SetActiveFromTimestamp(const Aws::Utils::DateTime& value) { m_activeFromTimestamp = value; }

    /**
     * <p>Beginning time from which the changeset is active. The value is determined as
     * epoch time in milliseconds. For example, the value for Monday, November 1, 2021
     * 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline void SetActiveFromTimestamp(Aws::Utils::DateTime&& value) { m_activeFromTimestamp = std::move(value); }

    /**
     * <p>Beginning time from which the changeset is active. The value is determined as
     * epoch time in milliseconds. For example, the value for Monday, November 1, 2021
     * 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline GetKxChangesetResult& WithActiveFromTimestamp(const Aws::Utils::DateTime& value) { SetActiveFromTimestamp(value); return *this;}

    /**
     * <p>Beginning time from which the changeset is active. The value is determined as
     * epoch time in milliseconds. For example, the value for Monday, November 1, 2021
     * 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline GetKxChangesetResult& WithActiveFromTimestamp(Aws::Utils::DateTime&& value) { SetActiveFromTimestamp(std::move(value)); return *this;}


    /**
     * <p>The timestamp at which the changeset was updated in FinSpace. The value is
     * determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTimestamp() const{ return m_lastModifiedTimestamp; }

    /**
     * <p>The timestamp at which the changeset was updated in FinSpace. The value is
     * determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline void SetLastModifiedTimestamp(const Aws::Utils::DateTime& value) { m_lastModifiedTimestamp = value; }

    /**
     * <p>The timestamp at which the changeset was updated in FinSpace. The value is
     * determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline void SetLastModifiedTimestamp(Aws::Utils::DateTime&& value) { m_lastModifiedTimestamp = std::move(value); }

    /**
     * <p>The timestamp at which the changeset was updated in FinSpace. The value is
     * determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline GetKxChangesetResult& WithLastModifiedTimestamp(const Aws::Utils::DateTime& value) { SetLastModifiedTimestamp(value); return *this;}

    /**
     * <p>The timestamp at which the changeset was updated in FinSpace. The value is
     * determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline GetKxChangesetResult& WithLastModifiedTimestamp(Aws::Utils::DateTime&& value) { SetLastModifiedTimestamp(std::move(value)); return *this;}


    /**
     * <p>Status of the changeset creation process.</p> <ul> <li> <p>Pending –
     * Changeset creation is pending.</p> </li> <li> <p>Processing – Changeset creation
     * is running.</p> </li> <li> <p>Failed – Changeset creation has failed.</p> </li>
     * <li> <p>Complete – Changeset creation has succeeded.</p> </li> </ul>
     */
    inline const ChangesetStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Status of the changeset creation process.</p> <ul> <li> <p>Pending –
     * Changeset creation is pending.</p> </li> <li> <p>Processing – Changeset creation
     * is running.</p> </li> <li> <p>Failed – Changeset creation has failed.</p> </li>
     * <li> <p>Complete – Changeset creation has succeeded.</p> </li> </ul>
     */
    inline void SetStatus(const ChangesetStatus& value) { m_status = value; }

    /**
     * <p>Status of the changeset creation process.</p> <ul> <li> <p>Pending –
     * Changeset creation is pending.</p> </li> <li> <p>Processing – Changeset creation
     * is running.</p> </li> <li> <p>Failed – Changeset creation has failed.</p> </li>
     * <li> <p>Complete – Changeset creation has succeeded.</p> </li> </ul>
     */
    inline void SetStatus(ChangesetStatus&& value) { m_status = std::move(value); }

    /**
     * <p>Status of the changeset creation process.</p> <ul> <li> <p>Pending –
     * Changeset creation is pending.</p> </li> <li> <p>Processing – Changeset creation
     * is running.</p> </li> <li> <p>Failed – Changeset creation has failed.</p> </li>
     * <li> <p>Complete – Changeset creation has succeeded.</p> </li> </ul>
     */
    inline GetKxChangesetResult& WithStatus(const ChangesetStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Status of the changeset creation process.</p> <ul> <li> <p>Pending –
     * Changeset creation is pending.</p> </li> <li> <p>Processing – Changeset creation
     * is running.</p> </li> <li> <p>Failed – Changeset creation has failed.</p> </li>
     * <li> <p>Complete – Changeset creation has succeeded.</p> </li> </ul>
     */
    inline GetKxChangesetResult& WithStatus(ChangesetStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Provides details in the event of a failed flow, including the error type and
     * the related error message.</p>
     */
    inline const ErrorInfo& GetErrorInfo() const{ return m_errorInfo; }

    /**
     * <p>Provides details in the event of a failed flow, including the error type and
     * the related error message.</p>
     */
    inline void SetErrorInfo(const ErrorInfo& value) { m_errorInfo = value; }

    /**
     * <p>Provides details in the event of a failed flow, including the error type and
     * the related error message.</p>
     */
    inline void SetErrorInfo(ErrorInfo&& value) { m_errorInfo = std::move(value); }

    /**
     * <p>Provides details in the event of a failed flow, including the error type and
     * the related error message.</p>
     */
    inline GetKxChangesetResult& WithErrorInfo(const ErrorInfo& value) { SetErrorInfo(value); return *this;}

    /**
     * <p>Provides details in the event of a failed flow, including the error type and
     * the related error message.</p>
     */
    inline GetKxChangesetResult& WithErrorInfo(ErrorInfo&& value) { SetErrorInfo(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetKxChangesetResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetKxChangesetResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetKxChangesetResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_changesetId;

    Aws::String m_databaseName;

    Aws::String m_environmentId;

    Aws::Vector<ChangeRequest> m_changeRequests;

    Aws::Utils::DateTime m_createdTimestamp;

    Aws::Utils::DateTime m_activeFromTimestamp;

    Aws::Utils::DateTime m_lastModifiedTimestamp;

    ChangesetStatus m_status;

    ErrorInfo m_errorInfo;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace finspace
} // namespace Aws
