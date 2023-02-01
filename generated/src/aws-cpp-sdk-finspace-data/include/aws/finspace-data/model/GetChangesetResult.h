/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace-data/FinSpaceData_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/finspace-data/model/ChangeType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/finspace-data/model/IngestionStatus.h>
#include <aws/finspace-data/model/ChangesetErrorInfo.h>
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
namespace FinSpaceData
{
namespace Model
{
  /**
   * The response from a describe changeset operation<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2020-07-13/GetChangesetResponse">AWS
   * API Reference</a></p>
   */
  class GetChangesetResult
  {
  public:
    AWS_FINSPACEDATA_API GetChangesetResult();
    AWS_FINSPACEDATA_API GetChangesetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FINSPACEDATA_API GetChangesetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique identifier for a Changeset.</p>
     */
    inline const Aws::String& GetChangesetId() const{ return m_changesetId; }

    /**
     * <p>The unique identifier for a Changeset.</p>
     */
    inline void SetChangesetId(const Aws::String& value) { m_changesetId = value; }

    /**
     * <p>The unique identifier for a Changeset.</p>
     */
    inline void SetChangesetId(Aws::String&& value) { m_changesetId = std::move(value); }

    /**
     * <p>The unique identifier for a Changeset.</p>
     */
    inline void SetChangesetId(const char* value) { m_changesetId.assign(value); }

    /**
     * <p>The unique identifier for a Changeset.</p>
     */
    inline GetChangesetResult& WithChangesetId(const Aws::String& value) { SetChangesetId(value); return *this;}

    /**
     * <p>The unique identifier for a Changeset.</p>
     */
    inline GetChangesetResult& WithChangesetId(Aws::String&& value) { SetChangesetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for a Changeset.</p>
     */
    inline GetChangesetResult& WithChangesetId(const char* value) { SetChangesetId(value); return *this;}


    /**
     * <p>The ARN identifier of the Changeset.</p>
     */
    inline const Aws::String& GetChangesetArn() const{ return m_changesetArn; }

    /**
     * <p>The ARN identifier of the Changeset.</p>
     */
    inline void SetChangesetArn(const Aws::String& value) { m_changesetArn = value; }

    /**
     * <p>The ARN identifier of the Changeset.</p>
     */
    inline void SetChangesetArn(Aws::String&& value) { m_changesetArn = std::move(value); }

    /**
     * <p>The ARN identifier of the Changeset.</p>
     */
    inline void SetChangesetArn(const char* value) { m_changesetArn.assign(value); }

    /**
     * <p>The ARN identifier of the Changeset.</p>
     */
    inline GetChangesetResult& WithChangesetArn(const Aws::String& value) { SetChangesetArn(value); return *this;}

    /**
     * <p>The ARN identifier of the Changeset.</p>
     */
    inline GetChangesetResult& WithChangesetArn(Aws::String&& value) { SetChangesetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN identifier of the Changeset.</p>
     */
    inline GetChangesetResult& WithChangesetArn(const char* value) { SetChangesetArn(value); return *this;}


    /**
     * <p>The unique identifier for the FinSpace Dataset where the Changeset is
     * created.</p>
     */
    inline const Aws::String& GetDatasetId() const{ return m_datasetId; }

    /**
     * <p>The unique identifier for the FinSpace Dataset where the Changeset is
     * created.</p>
     */
    inline void SetDatasetId(const Aws::String& value) { m_datasetId = value; }

    /**
     * <p>The unique identifier for the FinSpace Dataset where the Changeset is
     * created.</p>
     */
    inline void SetDatasetId(Aws::String&& value) { m_datasetId = std::move(value); }

    /**
     * <p>The unique identifier for the FinSpace Dataset where the Changeset is
     * created.</p>
     */
    inline void SetDatasetId(const char* value) { m_datasetId.assign(value); }

    /**
     * <p>The unique identifier for the FinSpace Dataset where the Changeset is
     * created.</p>
     */
    inline GetChangesetResult& WithDatasetId(const Aws::String& value) { SetDatasetId(value); return *this;}

    /**
     * <p>The unique identifier for the FinSpace Dataset where the Changeset is
     * created.</p>
     */
    inline GetChangesetResult& WithDatasetId(Aws::String&& value) { SetDatasetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the FinSpace Dataset where the Changeset is
     * created.</p>
     */
    inline GetChangesetResult& WithDatasetId(const char* value) { SetDatasetId(value); return *this;}


    /**
     * <p>Type that indicates how a Changeset is applied to a Dataset.</p> <ul> <li>
     * <p> <code>REPLACE</code> – Changeset is considered as a replacement to all prior
     * loaded Changesets.</p> </li> <li> <p> <code>APPEND</code> – Changeset is
     * considered as an addition to the end of all prior loaded Changesets.</p> </li>
     * <li> <p> <code>MODIFY</code> – Changeset is considered as a replacement to a
     * specific prior ingested Changeset.</p> </li> </ul>
     */
    inline const ChangeType& GetChangeType() const{ return m_changeType; }

    /**
     * <p>Type that indicates how a Changeset is applied to a Dataset.</p> <ul> <li>
     * <p> <code>REPLACE</code> – Changeset is considered as a replacement to all prior
     * loaded Changesets.</p> </li> <li> <p> <code>APPEND</code> – Changeset is
     * considered as an addition to the end of all prior loaded Changesets.</p> </li>
     * <li> <p> <code>MODIFY</code> – Changeset is considered as a replacement to a
     * specific prior ingested Changeset.</p> </li> </ul>
     */
    inline void SetChangeType(const ChangeType& value) { m_changeType = value; }

    /**
     * <p>Type that indicates how a Changeset is applied to a Dataset.</p> <ul> <li>
     * <p> <code>REPLACE</code> – Changeset is considered as a replacement to all prior
     * loaded Changesets.</p> </li> <li> <p> <code>APPEND</code> – Changeset is
     * considered as an addition to the end of all prior loaded Changesets.</p> </li>
     * <li> <p> <code>MODIFY</code> – Changeset is considered as a replacement to a
     * specific prior ingested Changeset.</p> </li> </ul>
     */
    inline void SetChangeType(ChangeType&& value) { m_changeType = std::move(value); }

    /**
     * <p>Type that indicates how a Changeset is applied to a Dataset.</p> <ul> <li>
     * <p> <code>REPLACE</code> – Changeset is considered as a replacement to all prior
     * loaded Changesets.</p> </li> <li> <p> <code>APPEND</code> – Changeset is
     * considered as an addition to the end of all prior loaded Changesets.</p> </li>
     * <li> <p> <code>MODIFY</code> – Changeset is considered as a replacement to a
     * specific prior ingested Changeset.</p> </li> </ul>
     */
    inline GetChangesetResult& WithChangeType(const ChangeType& value) { SetChangeType(value); return *this;}

    /**
     * <p>Type that indicates how a Changeset is applied to a Dataset.</p> <ul> <li>
     * <p> <code>REPLACE</code> – Changeset is considered as a replacement to all prior
     * loaded Changesets.</p> </li> <li> <p> <code>APPEND</code> – Changeset is
     * considered as an addition to the end of all prior loaded Changesets.</p> </li>
     * <li> <p> <code>MODIFY</code> – Changeset is considered as a replacement to a
     * specific prior ingested Changeset.</p> </li> </ul>
     */
    inline GetChangesetResult& WithChangeType(ChangeType&& value) { SetChangeType(std::move(value)); return *this;}


    /**
     * <p>Options that define the location of the data being ingested.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetSourceParams() const{ return m_sourceParams; }

    /**
     * <p>Options that define the location of the data being ingested.</p>
     */
    inline void SetSourceParams(const Aws::Map<Aws::String, Aws::String>& value) { m_sourceParams = value; }

    /**
     * <p>Options that define the location of the data being ingested.</p>
     */
    inline void SetSourceParams(Aws::Map<Aws::String, Aws::String>&& value) { m_sourceParams = std::move(value); }

    /**
     * <p>Options that define the location of the data being ingested.</p>
     */
    inline GetChangesetResult& WithSourceParams(const Aws::Map<Aws::String, Aws::String>& value) { SetSourceParams(value); return *this;}

    /**
     * <p>Options that define the location of the data being ingested.</p>
     */
    inline GetChangesetResult& WithSourceParams(Aws::Map<Aws::String, Aws::String>&& value) { SetSourceParams(std::move(value)); return *this;}

    /**
     * <p>Options that define the location of the data being ingested.</p>
     */
    inline GetChangesetResult& AddSourceParams(const Aws::String& key, const Aws::String& value) { m_sourceParams.emplace(key, value); return *this; }

    /**
     * <p>Options that define the location of the data being ingested.</p>
     */
    inline GetChangesetResult& AddSourceParams(Aws::String&& key, const Aws::String& value) { m_sourceParams.emplace(std::move(key), value); return *this; }

    /**
     * <p>Options that define the location of the data being ingested.</p>
     */
    inline GetChangesetResult& AddSourceParams(const Aws::String& key, Aws::String&& value) { m_sourceParams.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Options that define the location of the data being ingested.</p>
     */
    inline GetChangesetResult& AddSourceParams(Aws::String&& key, Aws::String&& value) { m_sourceParams.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Options that define the location of the data being ingested.</p>
     */
    inline GetChangesetResult& AddSourceParams(const char* key, Aws::String&& value) { m_sourceParams.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Options that define the location of the data being ingested.</p>
     */
    inline GetChangesetResult& AddSourceParams(Aws::String&& key, const char* value) { m_sourceParams.emplace(std::move(key), value); return *this; }

    /**
     * <p>Options that define the location of the data being ingested.</p>
     */
    inline GetChangesetResult& AddSourceParams(const char* key, const char* value) { m_sourceParams.emplace(key, value); return *this; }


    /**
     * <p>Structure of the source file(s).</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetFormatParams() const{ return m_formatParams; }

    /**
     * <p>Structure of the source file(s).</p>
     */
    inline void SetFormatParams(const Aws::Map<Aws::String, Aws::String>& value) { m_formatParams = value; }

    /**
     * <p>Structure of the source file(s).</p>
     */
    inline void SetFormatParams(Aws::Map<Aws::String, Aws::String>&& value) { m_formatParams = std::move(value); }

    /**
     * <p>Structure of the source file(s).</p>
     */
    inline GetChangesetResult& WithFormatParams(const Aws::Map<Aws::String, Aws::String>& value) { SetFormatParams(value); return *this;}

    /**
     * <p>Structure of the source file(s).</p>
     */
    inline GetChangesetResult& WithFormatParams(Aws::Map<Aws::String, Aws::String>&& value) { SetFormatParams(std::move(value)); return *this;}

    /**
     * <p>Structure of the source file(s).</p>
     */
    inline GetChangesetResult& AddFormatParams(const Aws::String& key, const Aws::String& value) { m_formatParams.emplace(key, value); return *this; }

    /**
     * <p>Structure of the source file(s).</p>
     */
    inline GetChangesetResult& AddFormatParams(Aws::String&& key, const Aws::String& value) { m_formatParams.emplace(std::move(key), value); return *this; }

    /**
     * <p>Structure of the source file(s).</p>
     */
    inline GetChangesetResult& AddFormatParams(const Aws::String& key, Aws::String&& value) { m_formatParams.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Structure of the source file(s).</p>
     */
    inline GetChangesetResult& AddFormatParams(Aws::String&& key, Aws::String&& value) { m_formatParams.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Structure of the source file(s).</p>
     */
    inline GetChangesetResult& AddFormatParams(const char* key, Aws::String&& value) { m_formatParams.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Structure of the source file(s).</p>
     */
    inline GetChangesetResult& AddFormatParams(Aws::String&& key, const char* value) { m_formatParams.emplace(std::move(key), value); return *this; }

    /**
     * <p>Structure of the source file(s).</p>
     */
    inline GetChangesetResult& AddFormatParams(const char* key, const char* value) { m_formatParams.emplace(key, value); return *this; }


    /**
     * <p>The timestamp at which the Changeset was created in FinSpace. The value is
     * determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline long long GetCreateTime() const{ return m_createTime; }

    /**
     * <p>The timestamp at which the Changeset was created in FinSpace. The value is
     * determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline void SetCreateTime(long long value) { m_createTime = value; }

    /**
     * <p>The timestamp at which the Changeset was created in FinSpace. The value is
     * determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline GetChangesetResult& WithCreateTime(long long value) { SetCreateTime(value); return *this;}


    /**
     * <p>The status of Changeset creation operation.</p>
     */
    inline const IngestionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of Changeset creation operation.</p>
     */
    inline void SetStatus(const IngestionStatus& value) { m_status = value; }

    /**
     * <p>The status of Changeset creation operation.</p>
     */
    inline void SetStatus(IngestionStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of Changeset creation operation.</p>
     */
    inline GetChangesetResult& WithStatus(const IngestionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of Changeset creation operation.</p>
     */
    inline GetChangesetResult& WithStatus(IngestionStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The structure with error messages.</p>
     */
    inline const ChangesetErrorInfo& GetErrorInfo() const{ return m_errorInfo; }

    /**
     * <p>The structure with error messages.</p>
     */
    inline void SetErrorInfo(const ChangesetErrorInfo& value) { m_errorInfo = value; }

    /**
     * <p>The structure with error messages.</p>
     */
    inline void SetErrorInfo(ChangesetErrorInfo&& value) { m_errorInfo = std::move(value); }

    /**
     * <p>The structure with error messages.</p>
     */
    inline GetChangesetResult& WithErrorInfo(const ChangesetErrorInfo& value) { SetErrorInfo(value); return *this;}

    /**
     * <p>The structure with error messages.</p>
     */
    inline GetChangesetResult& WithErrorInfo(ChangesetErrorInfo&& value) { SetErrorInfo(std::move(value)); return *this;}


    /**
     * <p>Time until which the Changeset is active. The value is determined as epoch
     * time in milliseconds. For example, the value for Monday, November 1, 2021
     * 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline long long GetActiveUntilTimestamp() const{ return m_activeUntilTimestamp; }

    /**
     * <p>Time until which the Changeset is active. The value is determined as epoch
     * time in milliseconds. For example, the value for Monday, November 1, 2021
     * 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline void SetActiveUntilTimestamp(long long value) { m_activeUntilTimestamp = value; }

    /**
     * <p>Time until which the Changeset is active. The value is determined as epoch
     * time in milliseconds. For example, the value for Monday, November 1, 2021
     * 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline GetChangesetResult& WithActiveUntilTimestamp(long long value) { SetActiveUntilTimestamp(value); return *this;}


    /**
     * <p>Beginning time from which the Changeset is active. The value is determined as
     * epoch time in milliseconds. For example, the value for Monday, November 1, 2021
     * 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline long long GetActiveFromTimestamp() const{ return m_activeFromTimestamp; }

    /**
     * <p>Beginning time from which the Changeset is active. The value is determined as
     * epoch time in milliseconds. For example, the value for Monday, November 1, 2021
     * 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline void SetActiveFromTimestamp(long long value) { m_activeFromTimestamp = value; }

    /**
     * <p>Beginning time from which the Changeset is active. The value is determined as
     * epoch time in milliseconds. For example, the value for Monday, November 1, 2021
     * 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline GetChangesetResult& WithActiveFromTimestamp(long long value) { SetActiveFromTimestamp(value); return *this;}


    /**
     * <p>The unique identifier of the Changeset that is being updated.</p>
     */
    inline const Aws::String& GetUpdatesChangesetId() const{ return m_updatesChangesetId; }

    /**
     * <p>The unique identifier of the Changeset that is being updated.</p>
     */
    inline void SetUpdatesChangesetId(const Aws::String& value) { m_updatesChangesetId = value; }

    /**
     * <p>The unique identifier of the Changeset that is being updated.</p>
     */
    inline void SetUpdatesChangesetId(Aws::String&& value) { m_updatesChangesetId = std::move(value); }

    /**
     * <p>The unique identifier of the Changeset that is being updated.</p>
     */
    inline void SetUpdatesChangesetId(const char* value) { m_updatesChangesetId.assign(value); }

    /**
     * <p>The unique identifier of the Changeset that is being updated.</p>
     */
    inline GetChangesetResult& WithUpdatesChangesetId(const Aws::String& value) { SetUpdatesChangesetId(value); return *this;}

    /**
     * <p>The unique identifier of the Changeset that is being updated.</p>
     */
    inline GetChangesetResult& WithUpdatesChangesetId(Aws::String&& value) { SetUpdatesChangesetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the Changeset that is being updated.</p>
     */
    inline GetChangesetResult& WithUpdatesChangesetId(const char* value) { SetUpdatesChangesetId(value); return *this;}


    /**
     * <p>The unique identifier of the updated Changeset.</p>
     */
    inline const Aws::String& GetUpdatedByChangesetId() const{ return m_updatedByChangesetId; }

    /**
     * <p>The unique identifier of the updated Changeset.</p>
     */
    inline void SetUpdatedByChangesetId(const Aws::String& value) { m_updatedByChangesetId = value; }

    /**
     * <p>The unique identifier of the updated Changeset.</p>
     */
    inline void SetUpdatedByChangesetId(Aws::String&& value) { m_updatedByChangesetId = std::move(value); }

    /**
     * <p>The unique identifier of the updated Changeset.</p>
     */
    inline void SetUpdatedByChangesetId(const char* value) { m_updatedByChangesetId.assign(value); }

    /**
     * <p>The unique identifier of the updated Changeset.</p>
     */
    inline GetChangesetResult& WithUpdatedByChangesetId(const Aws::String& value) { SetUpdatedByChangesetId(value); return *this;}

    /**
     * <p>The unique identifier of the updated Changeset.</p>
     */
    inline GetChangesetResult& WithUpdatedByChangesetId(Aws::String&& value) { SetUpdatedByChangesetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the updated Changeset.</p>
     */
    inline GetChangesetResult& WithUpdatedByChangesetId(const char* value) { SetUpdatedByChangesetId(value); return *this;}

  private:

    Aws::String m_changesetId;

    Aws::String m_changesetArn;

    Aws::String m_datasetId;

    ChangeType m_changeType;

    Aws::Map<Aws::String, Aws::String> m_sourceParams;

    Aws::Map<Aws::String, Aws::String> m_formatParams;

    long long m_createTime;

    IngestionStatus m_status;

    ChangesetErrorInfo m_errorInfo;

    long long m_activeUntilTimestamp;

    long long m_activeFromTimestamp;

    Aws::String m_updatesChangesetId;

    Aws::String m_updatedByChangesetId;
  };

} // namespace Model
} // namespace FinSpaceData
} // namespace Aws
