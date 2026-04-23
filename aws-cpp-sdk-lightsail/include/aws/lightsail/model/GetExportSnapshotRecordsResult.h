/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/model/ExportSnapshotRecord.h>
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
namespace Lightsail
{
namespace Model
{
  class AWS_LIGHTSAIL_API GetExportSnapshotRecordsResult
  {
  public:
    GetExportSnapshotRecordsResult();
    GetExportSnapshotRecordsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetExportSnapshotRecordsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of objects describing the export snapshot records.</p>
     */
    inline const Aws::Vector<ExportSnapshotRecord>& GetExportSnapshotRecords() const{ return m_exportSnapshotRecords; }

    /**
     * <p>A list of objects describing the export snapshot records.</p>
     */
    inline void SetExportSnapshotRecords(const Aws::Vector<ExportSnapshotRecord>& value) { m_exportSnapshotRecords = value; }

    /**
     * <p>A list of objects describing the export snapshot records.</p>
     */
    inline void SetExportSnapshotRecords(Aws::Vector<ExportSnapshotRecord>&& value) { m_exportSnapshotRecords = std::move(value); }

    /**
     * <p>A list of objects describing the export snapshot records.</p>
     */
    inline GetExportSnapshotRecordsResult& WithExportSnapshotRecords(const Aws::Vector<ExportSnapshotRecord>& value) { SetExportSnapshotRecords(value); return *this;}

    /**
     * <p>A list of objects describing the export snapshot records.</p>
     */
    inline GetExportSnapshotRecordsResult& WithExportSnapshotRecords(Aws::Vector<ExportSnapshotRecord>&& value) { SetExportSnapshotRecords(std::move(value)); return *this;}

    /**
     * <p>A list of objects describing the export snapshot records.</p>
     */
    inline GetExportSnapshotRecordsResult& AddExportSnapshotRecords(const ExportSnapshotRecord& value) { m_exportSnapshotRecords.push_back(value); return *this; }

    /**
     * <p>A list of objects describing the export snapshot records.</p>
     */
    inline GetExportSnapshotRecordsResult& AddExportSnapshotRecords(ExportSnapshotRecord&& value) { m_exportSnapshotRecords.push_back(std::move(value)); return *this; }


    /**
     * <p>A token used for advancing to the next page of results of your get relational
     * database bundles request.</p>
     */
    inline const Aws::String& GetNextPageToken() const{ return m_nextPageToken; }

    /**
     * <p>A token used for advancing to the next page of results of your get relational
     * database bundles request.</p>
     */
    inline void SetNextPageToken(const Aws::String& value) { m_nextPageToken = value; }

    /**
     * <p>A token used for advancing to the next page of results of your get relational
     * database bundles request.</p>
     */
    inline void SetNextPageToken(Aws::String&& value) { m_nextPageToken = std::move(value); }

    /**
     * <p>A token used for advancing to the next page of results of your get relational
     * database bundles request.</p>
     */
    inline void SetNextPageToken(const char* value) { m_nextPageToken.assign(value); }

    /**
     * <p>A token used for advancing to the next page of results of your get relational
     * database bundles request.</p>
     */
    inline GetExportSnapshotRecordsResult& WithNextPageToken(const Aws::String& value) { SetNextPageToken(value); return *this;}

    /**
     * <p>A token used for advancing to the next page of results of your get relational
     * database bundles request.</p>
     */
    inline GetExportSnapshotRecordsResult& WithNextPageToken(Aws::String&& value) { SetNextPageToken(std::move(value)); return *this;}

    /**
     * <p>A token used for advancing to the next page of results of your get relational
     * database bundles request.</p>
     */
    inline GetExportSnapshotRecordsResult& WithNextPageToken(const char* value) { SetNextPageToken(value); return *this;}

  private:

    Aws::Vector<ExportSnapshotRecord> m_exportSnapshotRecords;

    Aws::String m_nextPageToken;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
