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
  class CreateKxChangesetResult
  {
  public:
    AWS_FINSPACE_API CreateKxChangesetResult();
    AWS_FINSPACE_API CreateKxChangesetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FINSPACE_API CreateKxChangesetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline CreateKxChangesetResult& WithChangesetId(const Aws::String& value) { SetChangesetId(value); return *this;}

    /**
     * <p>A unique identifier for the changeset.</p>
     */
    inline CreateKxChangesetResult& WithChangesetId(Aws::String&& value) { SetChangesetId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the changeset.</p>
     */
    inline CreateKxChangesetResult& WithChangesetId(const char* value) { SetChangesetId(value); return *this;}


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
    inline CreateKxChangesetResult& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}

    /**
     * <p>The name of the kdb database.</p>
     */
    inline CreateKxChangesetResult& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}

    /**
     * <p>The name of the kdb database.</p>
     */
    inline CreateKxChangesetResult& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}


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
    inline CreateKxChangesetResult& WithEnvironmentId(const Aws::String& value) { SetEnvironmentId(value); return *this;}

    /**
     * <p>A unique identifier for the kdb environment.</p>
     */
    inline CreateKxChangesetResult& WithEnvironmentId(Aws::String&& value) { SetEnvironmentId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the kdb environment.</p>
     */
    inline CreateKxChangesetResult& WithEnvironmentId(const char* value) { SetEnvironmentId(value); return *this;}


    /**
     * <p>A list of change requests.</p>
     */
    inline const Aws::Vector<ChangeRequest>& GetChangeRequests() const{ return m_changeRequests; }

    /**
     * <p>A list of change requests.</p>
     */
    inline void SetChangeRequests(const Aws::Vector<ChangeRequest>& value) { m_changeRequests = value; }

    /**
     * <p>A list of change requests.</p>
     */
    inline void SetChangeRequests(Aws::Vector<ChangeRequest>&& value) { m_changeRequests = std::move(value); }

    /**
     * <p>A list of change requests.</p>
     */
    inline CreateKxChangesetResult& WithChangeRequests(const Aws::Vector<ChangeRequest>& value) { SetChangeRequests(value); return *this;}

    /**
     * <p>A list of change requests.</p>
     */
    inline CreateKxChangesetResult& WithChangeRequests(Aws::Vector<ChangeRequest>&& value) { SetChangeRequests(std::move(value)); return *this;}

    /**
     * <p>A list of change requests.</p>
     */
    inline CreateKxChangesetResult& AddChangeRequests(const ChangeRequest& value) { m_changeRequests.push_back(value); return *this; }

    /**
     * <p>A list of change requests.</p>
     */
    inline CreateKxChangesetResult& AddChangeRequests(ChangeRequest&& value) { m_changeRequests.push_back(std::move(value)); return *this; }


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
    inline CreateKxChangesetResult& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}

    /**
     * <p>The timestamp at which the changeset was created in FinSpace. The value is
     * determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline CreateKxChangesetResult& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}


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
    inline CreateKxChangesetResult& WithLastModifiedTimestamp(const Aws::Utils::DateTime& value) { SetLastModifiedTimestamp(value); return *this;}

    /**
     * <p>The timestamp at which the changeset was updated in FinSpace. The value is
     * determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline CreateKxChangesetResult& WithLastModifiedTimestamp(Aws::Utils::DateTime&& value) { SetLastModifiedTimestamp(std::move(value)); return *this;}


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
    inline CreateKxChangesetResult& WithStatus(const ChangesetStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Status of the changeset creation process.</p> <ul> <li> <p>Pending –
     * Changeset creation is pending.</p> </li> <li> <p>Processing – Changeset creation
     * is running.</p> </li> <li> <p>Failed – Changeset creation has failed.</p> </li>
     * <li> <p>Complete – Changeset creation has succeeded.</p> </li> </ul>
     */
    inline CreateKxChangesetResult& WithStatus(ChangesetStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The details of the error that you receive when creating a changeset. It
     * consists of the type of error and the error message.</p>
     */
    inline const ErrorInfo& GetErrorInfo() const{ return m_errorInfo; }

    /**
     * <p>The details of the error that you receive when creating a changeset. It
     * consists of the type of error and the error message.</p>
     */
    inline void SetErrorInfo(const ErrorInfo& value) { m_errorInfo = value; }

    /**
     * <p>The details of the error that you receive when creating a changeset. It
     * consists of the type of error and the error message.</p>
     */
    inline void SetErrorInfo(ErrorInfo&& value) { m_errorInfo = std::move(value); }

    /**
     * <p>The details of the error that you receive when creating a changeset. It
     * consists of the type of error and the error message.</p>
     */
    inline CreateKxChangesetResult& WithErrorInfo(const ErrorInfo& value) { SetErrorInfo(value); return *this;}

    /**
     * <p>The details of the error that you receive when creating a changeset. It
     * consists of the type of error and the error message.</p>
     */
    inline CreateKxChangesetResult& WithErrorInfo(ErrorInfo&& value) { SetErrorInfo(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateKxChangesetResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateKxChangesetResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateKxChangesetResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_changesetId;

    Aws::String m_databaseName;

    Aws::String m_environmentId;

    Aws::Vector<ChangeRequest> m_changeRequests;

    Aws::Utils::DateTime m_createdTimestamp;

    Aws::Utils::DateTime m_lastModifiedTimestamp;

    ChangesetStatus m_status;

    ErrorInfo m_errorInfo;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace finspace
} // namespace Aws
